#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m;
	int time, score;
	cin >> n >> m;
	vector<int> d(m+1, 0);
	for(int i=0; i<n; i++){
		cin >> score >> time;
		//�������� �ѹ��ۿ� �� Ǯ�� ������ �ڿ��� ����
		//2���� �迭�� �� �������� �������� ���� �ð� ���� �� �� ������
		//���� & �ð� ���⵵ ����� �ڿ������� �ϴ� �ɷ� Ǯ���ϴ� ���� ����
		for(int j=m; j>=time; j--){
			d[j] = max(d[j], d[j-time] + score);	
		}
	}
	cout << d[m];
}
