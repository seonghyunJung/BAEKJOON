#include <iostream>

using namespace std;

int main() {
	int climb;	// A(m)
	int lose;	// B(m)
	int goal;	// V(m)
	int dayCount = 1;

	cin >> climb >> lose >> goal;

	if (goal <= climb) {
		cout << dayCount << endl;
		return 0;
	}

	goal = goal - climb;

	dayCount += goal / (climb - lose);

	// goal�� �������� �ִٴ� ���� ���� ���� �Ÿ��� �ִٴ� ���̱� ������ ���� ó��
	if ((goal % (climb - lose)) != 0) {
		dayCount++;
	}

	cout << dayCount << endl;


	return 0;
}