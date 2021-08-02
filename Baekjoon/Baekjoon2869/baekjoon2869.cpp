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

	// goal의 나머지가 있다는 것은 아직 남은 거리가 있다는 것이기 때문에 예외 처리
	if ((goal % (climb - lose)) != 0) {
		dayCount++;
	}

	cout << dayCount << endl;


	return 0;
}