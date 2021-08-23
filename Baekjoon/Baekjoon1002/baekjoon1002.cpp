#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int TestCase;
	int x1, y1, r1, x2, y2, r2;
	double distance;
	int rdiff;

	cin >> TestCase;

	for (int i = 0; i < TestCase; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		rdiff = r1 > r2 ? (r1 - r2) : (r2 - r1);
		
		//������ ���Ѵ��� ��
		if ((distance == 0) && (r1 == r2)) {
			cout << -1;
		}
		//������ 0���� �� 
		else if ((distance > r1 + r2) || (distance < rdiff)) {
			cout << 0;
		}
		//������ 1���� �� (����, ����)
		else if ((distance == r1 + r2) || (distance == rdiff)) {
			cout << 1;
		}
		//������ 2���� ��
		else if ((distance > rdiff) && (distance < r1 + r2)) {
			cout << 2;
		}
		cout << '\n';
	}

	return 0;
}