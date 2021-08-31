#include <iostream>

using namespace std;

void insertion_sort(int list[], int n) {
	int key;
	int i, j;

	for (i = 1; i < n; i++) {
		key = list[i];

		for (j = i - 1; j >= 0 && list[j] > key; j--) {
			list[j + 1] = list[j];
		}
		list[j+1] = key;
	}
}

int main() {
	int n;
	int* list;

	cin >> n;
	list = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	insertion_sort(list, n);

	for (int i = 0; i < n; i++) {
		cout << list[i] << '\n';
	}

	return 0;
}