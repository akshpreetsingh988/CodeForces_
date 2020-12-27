#include<iostream>
using namespace std;

int main()
{
	int test,ans=0;
	cin >> test;
	while(test--)
	{
		int a,b,c;
		cin >> a>> b >>c ;
		if((a==1&&b==1) || (b==1&&c==1) || (a==1)&&(c==1))
		{
			ans++;
		}
		else continue;		
	}
	cout<<ans;
}
