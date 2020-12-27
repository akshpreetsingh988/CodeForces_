#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
	int test;
	cin >> test;
	
	while(test--)
	{
		string s;
		cin >> s ;
		int len = s.length();
		if(len<=10)
		{
			cout<<s<<"\n";
		}
		else 
		{
			cout<<s.at(0);
			cout<<len-2;
			cout<<s.at(len-1);
			cout<<"\n";			
		}
	}
	return 0;
}
