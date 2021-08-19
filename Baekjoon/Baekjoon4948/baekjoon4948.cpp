#include <iostream>
#include <cmath>

using namespace std;

int countPN(int n) {
	int count = 0;
	bool* prime;
	prime = new bool[2*n + 1];
	fill_n(prime, 2*n + 1, 1);
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= sqrt(2*n); i++) {
		if (prime[i] == true) {
			for (int j = i * 2; j <= 2*n; j += i) {
				prime[j] = false;
			}
		}
	}

	for (int i = n+1; i <= 2*n; i++) {
		if (prime[i] == true) {
			count++;
		}
	}

	return count;

}

int main() {
	int n;
	
	while(1) {
		cin >> n;
		if (n == 0) break;
		cout << countPN(n) << '\n';
	}

	return 0;
}