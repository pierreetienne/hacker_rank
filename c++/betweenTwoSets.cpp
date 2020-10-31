#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	int mini;
	int maxi = -1;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(i==0)
			mini = a[i];
		mini = min(mini, a[i]);
		maxi = max(maxi, a[i]);
	}
	for(int i=0;i<m;++i){
		cin >> b[i];
		maxi = max(maxi, b[i]);
	}
	vector<int> sol;
	for(int i=mini;i<=maxi;i+=mini){
		bool ok = true;
		for(int j=0;j<n;++j){
			if(i%a[j]!=0){
				ok = false;
				break;
			}
		}
		if(ok){
			for(int j=0;j<m;++j){
				if(b[j]%i!=0){
					ok = false;
					break;
				}
			}
		}
		if(ok){
			sol.push_back(i);
		}
	}
	
	cout << sol.size() << endl;
	return 0;
}
