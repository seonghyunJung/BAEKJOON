#include <iostream>
#include <string>

using namespace std;

int main() {
	string A;
	string B;
	int* reverseResult;
	int size;	// 결과값 배열의 크기

	cin >> A >> B;

	size = (A.length() >= B.length() ? A.length() + 1 : B.length() + 1);
	
	reverseResult = new int[size];
	for (int i = 0; i < size; i++) {
		reverseResult[i] = 0;
	}

	int len;
	int sum = 0;
	if (A.length() > B.length()) {
		len = B.length();
		for (int i = 0; i < len; i++) {
			sum = reverseResult[i] + ((A[A.length() - 1 - i])-'0') + ((B[B.length() - 1 - i])-'0');
			if (sum >= 10) {
				reverseResult[i + 1]++;
				sum = sum - 10;
			}
			reverseResult[i] = sum;
		}
		for (int i = len; i < size - 1; i++) {
			sum = reverseResult[i] + ((A[A.length() - 1 - i]) - '0');
			if (sum >= 10) {
				reverseResult[i + 1]++;
				sum = sum - 10;
			}
			reverseResult[i] = sum;
		}
	}
	else if (A.length() < B.length()) {
		len = A.length();
		for (int i = 0; i < len; i++) {
			sum = reverseResult[i] + ((A[A.length() - 1 - i]) - '0') + ((B[B.length() - 1 - i]) - '0');
			if (sum >= 10) {
				reverseResult[i + 1]++;
				sum = sum - 10;
			}
			reverseResult[i] = sum;
		}
		for (int i = len; i < size - 1; i++) {
			sum = reverseResult[i] + ((B[B.length() - 1 - i]) - '0');
			if (sum >= 10) {
				reverseResult[i + 1]++;
				sum = sum - 10;
			}
			reverseResult[i] = sum;
		}
	}
	else {
		for (int i = 0; i < size-1; i++) {
			sum = reverseResult[i] + ((A[A.length() - 1 - i]) - '0') + ((B[B.length() - 1 - i]) - '0');
			if (sum >= 10) {
				reverseResult[i + 1]++;
				sum = sum - 10;
			}
			reverseResult[i] = sum;
		}
	}
	
	int count = size - 1;
	
	if (reverseResult[count] == 0) {
		count -= 1;
	}

	for (int i = count; i >= 0; i--) {
		cout << reverseResult[i];
	}
	
	
	return 0;
}