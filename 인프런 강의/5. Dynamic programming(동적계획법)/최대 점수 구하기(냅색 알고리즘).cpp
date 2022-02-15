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
		//문제별로 한번밖에 못 풀기 때문에 뒤에서 부터
		//2차원 배열로 각 문제까지 적용했을 때와 시간 별로 할 수 있으나
		//공간 & 시간 복잡도 관계상 뒤에서부터 하는 걸로 풀이하는 것이 좋음
		for(int j=m; j>=time; j--){
			d[j] = max(d[j], d[j-time] + score);	
		}
	}
	cout << d[m];
}
