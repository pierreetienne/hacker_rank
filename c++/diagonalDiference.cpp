#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n = 0;
	cin >> n;
	vector<vector<int> > m(n, vector<int>(n,0));
	for(int i=0;i<m.size();++i){
		for(int j=0;j<m[i].size();++j){
			cin >> m[i][j];
		}
	}
	int d = 0;
	int p = 0;
	for(int i=0;i<m.size();++i){
		d += m[i][i];
		p += m[i][m.size()-1-i];
	}
	cout << abs(d-p) << endl;
	return 0;
}
