#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	long long sum = 0;
	while(n-->0){
		long long val = 0;
		cin >> val;
		sum += val;
	}
	cout << sum << endl;
	
	return 0;
}
