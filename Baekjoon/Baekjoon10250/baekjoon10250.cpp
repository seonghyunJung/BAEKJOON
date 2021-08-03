#include <iostream>

using namespace std;

class TCase {
	int roomNum;
public:
	void setRNum(int W, int H, int N);
	int getRNum();
};

void TCase::setRNum(int W, int H, int N) {
	int roomFNum;	// ���� �� ��ȣ(YY)
	int roomBNum;	// ���� �� ��ȣ(XX)

	roomFNum = N % H;
	if (roomFNum == 0) roomFNum = H;

	roomFNum = roomFNum * 100;

	roomBNum = 1;
	roomBNum += N / H;
	if (N%H == 0) roomBNum--;

	this->roomNum = roomFNum + roomBNum;
}

int TCase::getRNum() {
	return this->roomNum;
}

int main() {
	int T;	// �׽�Ʈ ���̽� ����
	TCase *TC;	// �׽�Ʈ ���̽�
	int W;	// �� �� ���� ����
	int H;	// �ǹ��� �� ����
	int N;	// ���° �մ����� ����
	

	cin >> T;
	TC = new TCase[T];

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		TC[i].setRNum(W, H, N);
	}

	for (int i = 0; i < T; i++) {
		cout << TC[i].getRNum() << endl;
	}

	return 0;
}