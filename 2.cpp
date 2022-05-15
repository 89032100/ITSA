#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		int temp = 1;
		int count = 1;
		while (temp %= m) {
			temp = temp * 10 + 1;
			count++;
		}
		cout << count << endl;
	}
}