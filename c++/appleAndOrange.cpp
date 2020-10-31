#include <bits/stdc++.h>
using namespace std;
int main(){
	int s, t;
	cin >> s >> t;
	int a , b;
	cin >> a >> b;
	int m, n ;
	cin >> m >> n;
	int x = 0;
	for(int i=0;i<m;++i){
		int val;
		cin >> val;
		if(val >= 0){
			int v = a+val;
			if(s<=v && v<=t){
				x++;
			}
		}
	}
	int y = 0;
	for(int i=0;i<n;++i){
		int val;
		cin >> val;
		if(val <= 0){
			int v = b+val;
			if(s<=v && v<=t){
				y++;
			}
		}
	}
	cout << x << endl << y << endl;
	return 0;
}
