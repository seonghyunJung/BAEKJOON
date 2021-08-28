#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
};
string BW[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
};

string board[50];

int WB_count(int x, int y) {
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != WB[i][j]) {
				count++;
			}
		}
	}
	return count;
}

int BW_count(int x, int y) {
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != BW[i][j]) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int min_val = 12345;
	int temp;
	pair <int, int> p;
	
	cin >> p.first >> p.second;
	
	for (int i = 0; i < p.first; i++) {
		cin >> board[i];
	}

	for (int i = 0; i + 8 <= p.first; i++) {
		for (int j = 0; j + 8 <= p.second; j++) {
			temp = min(WB_count(i, j), BW_count(i, j));
			if (temp < min_val) {
				min_val = temp;
			}
		}
	}

	cout << min_val << endl;

	return 0;
}