#include <iostream>

using namespace std;

int main() {
	int climb;	// A(m)
	int lose;	// B(m)
	int goal;	// V(m)
	int total = 0;
	int dayCount = 0;

	cin >> climb >> lose >> goal;

	while (1) {
		total += climb;
		dayCount++;

		if (total >= goal) break;

		total -= lose;
	}

	cout << dayCount << endl;


	return 0;
}