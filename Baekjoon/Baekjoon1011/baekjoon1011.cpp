#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned int x, y;
	int max;	// 최대 이동거리
	float left;	// 전체 거리 - 최대 이동거리
	int count;
	int T;
	int* result;

	cin >> T;
	result = new int[T];
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		max = sqrt(y - x);
		left = (y - x) - (max*max);
		count = (2 * max - 1) + ceil(left / max);
		result[i] = count;
	}
	for (int i = 0; i < T; i++) {
		cout << result[i] << endl;
	}
	
	return 0;
}