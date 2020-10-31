#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	vector<int> ar(n);
	for(int i=0;i<n;++i){
		cin >> ar[i];
	}
	int sol = 0;
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if((ar[i]+ar[j])%k==0){
				sol++;
			}
		}
	}
	cout << sol << endl;
	return 0;
}
