#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,xsum=0,ysum=0,zsum=0;
	cin >> n;
	
	while(n--)
	{
		int x,y,z;
		cin >> x>>y>>z;
		xsum+=x;
		ysum+=y;
		zsum+=z;
	}
//	cout<<xsum <<" "<<ysum<<" "<<zsum;
	if(xsum==0 && ysum==0&& zsum==0)
	{
		cout<<"YES"<<"\n";
	}
	else cout<<"NO"<<"\n";
	return 0;
	
}
