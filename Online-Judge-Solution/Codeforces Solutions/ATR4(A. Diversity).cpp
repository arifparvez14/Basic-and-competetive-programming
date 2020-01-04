#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	cin>>s>>n;
	int len =s.length();
	set<char>sa;
	for(int i=0;i<len;i++)
	{
		sa.insert(s[i]);
			}
	if(len<n){
		cout<<"impossible";
	}
	else{
		int size2=sa.size();
		if(size2>=n)cout<<"0";
		else{
			cout<<n-size2;
		}
	}
	return 0;
}
