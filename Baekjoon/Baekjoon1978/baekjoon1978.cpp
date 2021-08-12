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

int main() {
	int N;	// 수의 개수
	int num;
	int count = 0;	// 소수의 개수

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (isPrime(num))
			count++;
	}

	cout << count << endl;
	

	return 0;
}