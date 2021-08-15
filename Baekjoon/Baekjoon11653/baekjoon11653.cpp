#include <iostream>

using namespace std;

int main() {
	int N;
	int quotient;

	cin >> N;

	for (int i = 2; i < N / 2 || N > 1; i++) {
		while (N % i == 0) {
			cout << i << endl;
			N /= i;
		}
	}

	return 0;
}