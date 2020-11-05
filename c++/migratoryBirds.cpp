#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> types(5,0);
	int max = 0;
	for(int i=0;i<n;++i){
		int v;
		cin >> v;
		v--;
		types[v]++;
		if(types[v] > max){
			max = types[v];
		}
	}
	int sol = 0;
	for(int i=0;i<types.size();++i){
		if(types[i]==max){
			sol=i+1;
			break;
		}
	}
	cout << sol << endl;
	return 0;
}
