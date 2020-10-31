#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> s(n);
	for(int i=0;i<n;++i){
		cin >> s[i];
	}
	int d, m;
	cin >> d >> m;
	int sol = 0;
	for(int i=0;i<n;++i){
		if(i+m <= n){
			int sum = 0;
			for(int j=i;j<i+m;++j){
				sum+=s[j];
			}
			if(sum == d)
				sol++;
		}
	}
	cout << sol << endl;
	
	return 0;
}
