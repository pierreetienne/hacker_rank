#include <bits/stdc++.h>
using namespace std;
int days[12] = {};
int main(){
	int y;
	cin >> y;
	if(y <= 1917){
		bool leap = (y % 4 == 0);
		
	}else{
		bool leap = (y%4==0 && y%100!=0);
		
	}
	return 0;
}
