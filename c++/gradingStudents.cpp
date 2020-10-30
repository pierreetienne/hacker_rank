#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n-->0){
		int v;
		cin >> v;
		if(v < 38){
			cout << v << endl;
		}else{
			int aux = v;
			for(;aux%5!=0;++aux);
			if(aux-v < 3){
				v = aux;
			}
			cout << v << endl;
		}
	}
	return 0;
}
