#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input[4];
		int A = 0;
		for (int j = 0; j < 4; j++) cin >> input[j];
		for (int j = 0; j < 3; j++) {
			for (int k = j + 1; k < 4; k++) {
				if (input[j] > input[k]) A++;
			}
		}
		cout << (A % 2 ? 'A' : 'B') << endl;
	}
}