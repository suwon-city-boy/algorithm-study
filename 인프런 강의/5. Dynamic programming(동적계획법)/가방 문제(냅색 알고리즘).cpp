#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m;
	vector<int> d(m+1, 0);
	for(int i=0; i<n; i++){
		cin >> a >> b;
		for(int j=a; j<=m; j++){
			d[j] = max(d[j], d[j-a] + b);
		}
	}
	cout << d[m];
}
