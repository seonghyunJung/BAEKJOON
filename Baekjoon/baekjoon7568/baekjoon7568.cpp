#include <iostream>

using namespace std;

int main() {
	int* rank;
	int** db;
	int num;
	int weight, height;

	cin >> num;

	rank = new int[num];
	db = new int*[num];

	for (int i = 0; i < num; i++) {
		db[i] = new int[2];
		cin >> db[i][0] >> db[i][1];
	}

	for (int i = 0; i < num; i++) {
		rank[i] = 1;
		for (int j = 0; j < num; j++) {
			if ((db[i][0] < db[j][0]) && (db[i][1] < db[j][1])) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		cout << rank[i] << ' ';
	}

	return 0;
}