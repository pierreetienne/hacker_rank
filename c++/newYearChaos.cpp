#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		queue<int> d;
		for(int i=0;i<n;++i){
			int val;
			cin >> val;
			d.push(val);
		}
		int sol = 0;
		queue<int> pe;
		vector<int> intentos(n, 0);
		bool too = false;
		int index = 1;
		while(!d.empty()){
			int val = d.front();
			int start = pe.size();
			bool pushVal = false;
			while(start>0){
				int p = pe.front();
				pe.pop();
				if( val < p){
					if(!pushVal){
						pe.push(val);
						pushVal=true;
					}
					intentos[p-1]++;
					sol++;
				}
				if(intentos[p-1]>2){
					too = true;
					break;
				}
				if(p== index)
					index++;
				else
					pe.push(p);	
				start--;
			}
		
			if(too){
				break;
			}
			if(!pushVal)
				pe.push(val);
				
			d.pop();
		}
		
		if(!too){
			cout << sol<< endl;
		}else{
			cout << "Too chaotic" << endl;
		}
		
		
	}
	return 0;
}
