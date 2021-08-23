#include <iostream>
#include <cmath>

using namespace std;

double PI = 3.14159265359;

void getEuclid(int r) {
	double result = PI * r*r;
	printf("%.6f\n", result);
}

void getTaxi(int r) {
	double result = 2 * r*r;
	printf("%.6f\n", result);
}

int main() {
	int r;

	cin >> r;

	getEuclid(r);
	getTaxi(r);


	return 0;
}