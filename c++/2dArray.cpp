#include <bits/stdc++.h>
using namespace std;
int main(){
	vector< vector<int> > m(6, vector<int>(6,0));
	for(int i=0;i<6;++i){
		for(int j=0;j<6;++j){
			cin >> m[i][j];
		}
	}
	int maxi = 0;
	for(int i=0;i<6;++i){
		for(int j=0;j<6;++j){
			if(j+2 < 6 && i+2 < 6){
				int sum = 0;
				for(int p=0;p<3;++p){
					sum+=m[i][j+p];
					sum+=m[i+2][j+p];
				}
				sum+=m[i+1][j+1];
				if(i==0&&j==0)
					maxi = sum;
				maxi = max(maxi, sum);	
			}
		}
	}
	cout << maxi << endl;
	
	return 0;
}
