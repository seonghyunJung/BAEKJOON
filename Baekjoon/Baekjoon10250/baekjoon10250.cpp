#include <iostream>

using namespace std;

class TCase {
	int roomNum;
public:
	void setRNum(int W, int H, int N);
	int getRNum();
};

void TCase::setRNum(int W, int H, int N) {
	int roomFNum;	// 방의 앞 번호(YY)
	int roomBNum;	// 방의 뒷 번호(XX)

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
	int T;	// 테스트 케이스 갯수
	TCase *TC;	// 테스트 케이스
	int W;	// 각 층 방의 갯수
	int H;	// 건물의 총 층수
	int N;	// 몇번째 손님인지 정보
	

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