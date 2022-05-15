#include <iostream>
using namespace std;
int main()
{
	int P;
	cin >> P;
	for (int i = 0; i < P; i++) {
		int road[6];
		for (int& temp : road) cin >> temp;
		int h = road[2] - road[0];
		int m = road[3] - road[1];
		if (m > 0) h++;
		cout << h * road[4] * road[5] << endl;;
	}
}