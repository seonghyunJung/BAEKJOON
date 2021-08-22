#include <iostream>

using namespace std;

int getResult(int x, int y, int w, int h) {
	if (x > (w / 2)) {
		if (y > (h / 2)) {
			if (w - x > h - y) return h - y;
			else return w - x;
		}
		else {
			if (w - x > y) return y;
			else return w - x;
		}
	}
	else {
		if (y > (h / 2)) {
			if (x > h - y) return h - y;
			else return x;
		}
		else {
			if (x > y) return y;
			else return x;
		}
	}

}

int main() {
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	cout << getResult(x, y, w, h) << endl;

	return 0;
}