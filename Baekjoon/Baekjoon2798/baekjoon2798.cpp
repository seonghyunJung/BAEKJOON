#include <iostream>

using namespace std;

int main() {
	int N;
	int M;
	int* array;
	int sum = 0;
	int result = 0;

	cin >> N >> M;

	array = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < N-2; i++) {
		for (int j = i + 1; j < N-1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = array[i] + array[j] + array[k];
				if (sum > result && sum <= M) {
					result = sum;
				}
			}
		}
	}

	cout << result << endl;

	return 0;
}