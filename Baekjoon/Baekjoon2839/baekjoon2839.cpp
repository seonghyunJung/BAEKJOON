#include <iostream>

using namespace std;

int bringBags(int N) {
	int total;
	int numOfThree;
	int numOfFive;
	int quotient;
	int remainder;

	if (N % 5 == 0) {
		total = N / 5;
		return total;
	}
	else {
		quotient = N / 5;
		
		// 5kg ���� ������ ���̸鼭 Ȯ��
		for (quotient; quotient >= 0; quotient--) {
			remainder = N - (5 * quotient);
			if (remainder % 3 == 0) {
				numOfThree = remainder / 3;
				numOfFive = quotient;
				total = numOfThree + numOfFive;
				return total;
			}
		}
		return -1;
	}
}

int main() {
	int N;

	cin >> N;

	cout << bringBags(N) << endl;

	return 0;
}