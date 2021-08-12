#include <iostream>

using namespace std;

// num�� �Ҽ����� �ƴ��� �Ǻ��ϴ� �Լ�
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	
	// 2 �� �� ������ �Ҽ����� ��� Ȧ���̹Ƿ�
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
	int N;	// ���� ����
	int num;
	int count = 0;	// �Ҽ��� ����

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (isPrime(num))
			count++;
	}

	cout << count << endl;
	

	return 0;
}