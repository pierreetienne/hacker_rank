#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int hour = 10*(s[0]-'0')+(s[1]-'0');
	int minute = 10*(s[3]-'0')+(s[4]-'0');
	int second = 10*(s[6]-'0')+(s[7]-'0');
	if(s[8]=='P' && hour != 12){
		hour+=12;
	}
	if(s[8]=='A' && hour == 12){
		hour = 0;
	}
	if(hour > 23)
		hour = 0;
		
	if(hour < 10)
		cout << 0;

	cout << hour << ":" ;
	if( minute < 10)
		cout << 0;
	cout << minute << ":"; 
	if( second < 10 )
		cout << 0;
	cout << second << endl;
	return 0;
}
