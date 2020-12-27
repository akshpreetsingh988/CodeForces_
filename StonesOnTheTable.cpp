#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char input[n];
	for(int i=0; i<n; i++)
	{
		cin >> input[i];
	}
	int ans=0;
	for(int i=1; i<n; i++)
	{
		if(input[i-1]==input[i])
		{
			ans++;
		}
	}
	cout<<ans;
}
