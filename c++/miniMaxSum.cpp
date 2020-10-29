#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long sum = 0;
	long long mini = 0;
	long long maxi = 0;
	for(int i=0;i<5;++i){
		long long n;
		cin>>n;
		sum += n;
		if(i==0){
			mini = n;
			maxi = n;
		}
		mini = min(mini, n);
		maxi = max(maxi, n);
	}
	cout << sum - maxi << " " << sum - mini << endl;
	
	
	return 0;
}
