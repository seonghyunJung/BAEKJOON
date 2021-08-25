#include <iostream>

using namespace std;

void hanoi(int from, int by, int to, int n) {
	if (n == 0) {
		return;
	}
	
	hanoi(from, to, by, n - 1);
	cout << from << " " << to << '\n';
	hanoi(by, from, to, n - 1);
}

int main() {
	int n;

	cin >> n;

	cout << (1 << n) - 1 << endl;

	hanoi(1, 2, 3, n);

	return 0;
}