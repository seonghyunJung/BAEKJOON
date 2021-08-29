#include <iostream>

using namespace std;

int main() {
	int start = 666;
	int count = 0;
	int n;
	int temp;

	cin >> n;

	while (true) {
		temp = start;
		
		do {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			temp /= 10;
		} while (temp > 0);

		if (count == n) {
			cout << start << endl;
			break;
		}

		start++;
	}

	return 0;
}