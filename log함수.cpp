#include <iostream>
using namespace std;
void main() {
	float b, a, A, dt, t, num, anal;
	//differentiation
	cout << "b?=" << endl;
	cin >> b;
	cout << "a A?=" << endl;
	cin >> a >> A;
	cout << "t dt?=" << endl;
	cin >> t >> dt;
	anal = A / (t * log(b));
	num = A * ((log(a * (t + dt)) / log(b)) - (log(a * t) / log(b))) / dt;
	cout << "num" << num << "anal" << anal << endl;
	cout << "error=" << (num - anal) / anal * 100 << "%" << endl;
	float c, d;
	//intergration
	int N;
	cout << "c d N = " << endl;
	cin >> c >> d >> N;
	anal = A * d*(log(a * d) / log(b)) - (A * d) / log(b) - A * c*(log(a * c) / log(b)) + (A * c) / log(b);
	dt = (d - c) / N;
	num = 0;
	for (int y = 0; y < N; y++) {
		num += A*(log(a*(c + dt * y)) / log(b)) * dt;
	}
	cout << "num" << num << "anal" << anal << endl;
	cout << "error=" << (num - anal) / anal * 100 << "%" << endl;
}
