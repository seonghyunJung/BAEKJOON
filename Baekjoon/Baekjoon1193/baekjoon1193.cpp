#include <iostream>

using namespace std;

int main() {
	int num;	// 입력
	int sum = 0;
	int up;	// 분자
	int down;	// 분모

	cin >> num;

	int i;
	for (i = 1; sum < num; i++) {
		sum += i;
	}

	int direction = i - 1;

	if (direction % 2 == 0) {
		up = direction - (sum - num);
		down = (sum - num) + 1;
	}
	else {
		up = (sum - num) + 1;
		down = direction - (sum - num);
	}

	cout << up << '/' << down << endl;

	return 0;
}