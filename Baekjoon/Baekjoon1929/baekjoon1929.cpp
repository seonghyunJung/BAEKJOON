#include <iostream>
#include <cmath>

using namespace std;

void printPN(int M, int N) {
	bool* prime;
	prime = new bool[N + 1];
	fill_n(prime, N + 1, 1);
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i] == true) {
			for (int j = i * 2; j <= N; j += i) {
				prime[j] = false;
			}
		}
	}

	for (int i = M; i <= N; i++) {
		if (prime[i] == true) {
			cout << i << '\n';
		}
	}

}

int main() {
	int M, N;

	cin >> M >> N;
	
	printPN(M, N);

	return 0;
}