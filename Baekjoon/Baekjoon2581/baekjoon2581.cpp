#include <iostream>

using namespace std;

// num이 소수인지 아닌지 판별하는 함수
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	if (num == 2) {
		return true;
	}

	// 2 를 뺀 나머지 소수들은 모두 홀수이므로
	if (num % 2 != 0) {
		for (int i = 3; i < num; i += 2) {
			if (num % i == 0)
				return false;
		}
		return true;
	}

	return false;
}

int sumPrime(int num1, int num2) {
	int sum = 0;

	for (int i = num1; i <= num2; i++) {
		if (isPrime(i)) sum += i;
	}

	return sum;
}

int minPrime(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		if (isPrime(i)) {
			return i;
		}
	}

	return -1;
}

int main() {
	int num1, num2;
	int min;	// 소수 중 최솟값
	int sum;	// 소수의 합

	cin >> num1 >> num2;

	min = minPrime(num1, num2);

	if (min == -1) {
		cout << min << endl;
		return 0;
	}

	sum = sumPrime(num1, num2);

	cout << sum << endl << min << endl;


	return 0;
}