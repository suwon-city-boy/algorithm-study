#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	vector<int> c(n);
	for(int i=0; i<n; i++){
		cin >> c[i];
	}
	cin >> m;
	vector<int> d(m+1, 2147000000);
	d[0] = 0;
	for(int i=0; i<n; i++){
		for(int j=c[i]; j<=m; j++){
			d[j] = min(d[j], d[j-c[i]] + 1);
		}
	}
	cout << d[m];
}
