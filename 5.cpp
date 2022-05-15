#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int G = 1;
	for (int i = 0; i < n - 1; i++) G *= 10;
	for (int i = 1; i < G; i++) {
		int temp = i;
		int a = 0, b = 1;
		while ((temp / 10) || (temp % 10)) {
			a += temp % 10;
			b *= temp % 10;
			temp /= 10;
		}
		if (a == b && b) cout << i << endl;
	}
}