#include <iostream>

using namespace std;

int main() {
	int x[3];
	int y[3];
	int fourthX;
	int fourthY;

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	fourthX = x[0] == x[1] ? x[2] : (x[0] == x[2] ? x[1] : x[0]);
	fourthY = y[0] == y[1] ? y[2] : (y[0] == y[2] ? y[1] : y[0]);
	
	cout << fourthX << " " << fourthY << endl;

	return 0;
}