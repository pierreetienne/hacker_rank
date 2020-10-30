#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &ma){
	for(int i=0;i<ma.size();++i){
		if(i >0 ){
			cout << " ";
		}
		cout << ma[i];
	}
	cout << endl;
}

int main(){
	long long n , m;
	cin >> n >>m ;
	vector<int> ma(n);
	for(int i=0;i<n;++i){
		cin >> ma[i];
	}
	for(int i=0;i<m-1;++i){
		vector<int> ne(n);
		bool equal = true;
		for(int j=0;j<n;++j){
			ne[j] = ma[j]^ma[(j+1)%n];
			if(ne[j]!= ma[j])
				equal = false;
		}
		ma = ne;
		cout << "i:  " << i << " -> ";
		print(ma);
		if(equal)
			break;
	}
	print(ma);
	
	return 0;	
}
