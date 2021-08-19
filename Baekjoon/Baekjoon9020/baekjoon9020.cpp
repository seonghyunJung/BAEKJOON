#include <iostream>
#include <cmath>

using namespace std;

void printPMs(int n) {
	bool* prime;
	prime = new bool[n + 1];
	fill_n(prime, n + 1, 1);
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= sqrt(n); i++) {
		if (prime[i] == true) {
			for (int j = i * 2; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}

	for (int i = n/2; ; i--) {
		if (prime[i] == true && prime[n - i] == true) {
			cout << i << ' ' << n - i << '\n';
			break;
		}
	}
}

int main() {
	int n;
	int numOfCase;

	cin >> numOfCase;
	
	for (int i = 0; i < numOfCase; i++) {
		cin >> n;

		printPMs(n);
	}


	return 0;
}