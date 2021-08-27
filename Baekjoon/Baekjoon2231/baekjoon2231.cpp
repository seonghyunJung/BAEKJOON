#include <iostream>
#include <string>

using namespace std;

int getConstructor(int n) {
	int sum;

	for (int i = 1; i <= n; i++) {
		sum = i;
		for (int j = i; j > 0; j = j / 10) {
			sum += j % 10;
		}
		if (sum == n) {
			return i;
		}
	}
	
	return 0;
}

int main() {
	int n;

	cin >> n;

	cout << getConstructor(n);

	return 0;
}