#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int unf[1001];

int Find(int x) {
	//������ �ֻ��� ��Ʈ�� ã�ư��� ����
	if (x == unf[x]) return x;
	else return unf[x] = Find(unf[x]);
}

void Union(int x, int y) {
	int a, b;
	a = Find(x);
	b = Find(y);
	if (a != b) {
		//�� ���� ���� ������ �ƴϸ� ���� �������� �������
		unf[a] = b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, a, b;
	cin >> n >> m;
	//���� ���� ������ ���� ä�� ����
	for (int i = 1; i <= n; i++) {
		unf[i] = i;
	}
	//�Էµ� �� ���� ���� �۾�
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		Union(a, b);
	}
	cin >> a >> b;
	//������ ������ ���� �������� Ȯ��
	a = Find(a);
	b = Find(b);
	if (a != b) cout << "NO";
	else cout << "YES";
}