#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int mini = 0;
	int maxi = 0;
	int w = 0;
	int b = 0;
	for(int i=0;i<n;++i){
		int val;
		cin >> val;
		if(i == 0){
			mini = val;
			maxi = val;
		}
		
		if( val < mini){
			w++;
			mini = val;
		}
		if( val > maxi ){
			b++;
			maxi = val;
		}
	}
	cout << b << " " << w << endl;
	return 0;
}
