//https://www.acmicpc.net/problem/1063
#include <iostream>
#include <string>
using namespace std;
int dx[] = { 0, 0, 1, -1, -1, -1, 1, 1 };
int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1 };

int main() {
	int kx, ky, sx, sy, n;
	string king, stone, temp;
	cin >> king >> stone;
	cin >> n;
	ky = king[0] - 'A';
	sy = stone[0] - 'A';
	kx = '8' - king[1];
	sx = '8' - stone[1];

	for (int i = 0; i < n; i++) {
		int d;
		cin >> temp;
		if (temp == "R")
			d = 0;
		else if (temp == "L")
			d = 1;
		else if (temp == "B")
			d = 2;
		else if (temp == "T")
			d = 3;
		else if (temp == "RB")
			d = 6;
		else if (temp == "RT")
			d = 4;
		else if (temp == "LB")
			d = 7;
		else if (temp == "LT")
			d = 5;

		int knx = kx + dx[d];
		int kny = ky + dy[d];

		if (knx < 0 || knx > 7 || kny < 0 || kny >7) continue;
		if (knx == sx && kny == sy) {
			int snx = sx + dx[d];
			int sny = sy + dy[d];
			if (snx < 0 || snx > 7 || sny < 0 || sny > 7) continue;
			else {
				sx = snx;
				sy = sny;
			}
		}
		kx = knx; ky = kny;
	}
	cout << (char)(ky + 'A') << 8 - kx << endl;
	cout << (char)(sy + 'A') << 8 - sx << endl;
}
