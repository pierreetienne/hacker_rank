#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	double p = 0;
	double ne = 0;
	double z = 0;
	for(int i=0;i<n;++i){
		int val = 0;
		cin >> val;
		if(val > 0){
			p++;
		}else if(val < 0){
			ne++;
		}else{
			z++;
		}
	}
	printf("%.6f\n", (p/n));
	printf("%.6f\n", (ne/n));
	printf("%.6f\n", (z/n));
	
	return 0;
}
