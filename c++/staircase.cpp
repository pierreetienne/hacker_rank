#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int pos = n - 1;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(j>=pos){
				cout<<"#";
			}else{
				cout << " ";
			}
		}
		cout << endl;
		pos--;
	}
	return 0;
}