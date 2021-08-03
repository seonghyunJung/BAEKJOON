#include <iostream>

using namespace std;

int main() {
	int array[15][15] = { 0 };
	
	for (int i = 1; i <= 14; i++) {
		array[0][i] = i;
	}

	for (int i = 1; i <= 14; i++) {
		array[i][1] = 1;
		for (int j = 2; j <= 14; j++) {
			array[i][j] = array[i][j - 1] + array[i - 1][j];
		}
	}

	int* result;
	int tcNum;
	int k;
	int n;

	cin >> tcNum;
	result = new int[tcNum];

	for (int i = 0; i < tcNum; i++) {
		cin >> k;
		cin >> n;

		result[i] = array[k][n];
	}

	for (int i = 0; i < tcNum; i++) {
		cout << result[i] << endl;
	}

	return 0;
}