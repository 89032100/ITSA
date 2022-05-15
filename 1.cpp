#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		int** input;
		input = new int* [m];
		for (int j = 0; j < m; j++) {
			input[j] = new int[3];
		}//動態宣告

		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 3; k++) {
				cin >> input[j][k];
			}
		}//輸入

		int maxR = 0;
		for (int j = 0; j < m; j++) {
			if (maxR < input[j][1]) maxR = input[j][1];
		}//找最右邊
		maxR++;

		int* output = new int[maxR];
		for (int j = 0; j < maxR; j++) {
			output[j] = 0;
		}//動態宣告 給0

		for (int j = 0; j < m; j++) {
			for (int k = input[j][0]; k <= input[j][1]; k++) {
				if (input[j][2] > output[k]) output[k] = input[j][2];
			}
		}//比大小 大的進去

		for (int j = 0; j < maxR; j++) {
			cout << output[j];
			if (j != maxR - 1) cout << " ";
		}
		cout << endl;
	}
}