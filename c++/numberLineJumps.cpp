#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	
	if(v1- v2 == 0)
		cout << "NO" << endl;
	else{
		int v = (x2-x1)/(v1-v2);
		if((x1+(v*v1)) == (x2+(v*v2)) && v > 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
