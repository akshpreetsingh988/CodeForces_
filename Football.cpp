#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >>s;
	int flag=1;
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==s[i+1]) flag++;
		if(s[i]!=s[i+1]) flag=1;
		if(flag>=7) break;
	}
	if(flag>=7) cout<<"YES";
	else cout<<"NO";
}
