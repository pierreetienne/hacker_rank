#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	map<int, int> d;
	int maxi = 0;
	int index = 0;
	for(int i=0;i<n;++i){
		int v;
		cin>> v;
		if(d.find(v) == d.end())
			d[v]=0;
		d[v]++;
		if(d[v] > maxi)
			maxi = d[v];
	}
	cout << maxi << endl;
	
	return 0;
}
