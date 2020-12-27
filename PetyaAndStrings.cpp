#include<iostream>
#include<cstring>

using namespace std ;

int main()
{
	char s1[100],s2[100];
	gets (s1);
	gets (s2);
	
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	
	for(int i=0; i<l1; i++)
	{
		s1[i] = 'a'+s1[i]-'A';
	}
	for(int i=0; i<l2; i++)
	{
		s2[i] = 'a'+s2[i]-'A';
	}
	
	int test = strcasecmp(s1,s2);
	if(test>0) cout<<"1\n";
	else if(test>0) cout<<"-1\n";
	else cout<<"0";
	
	return 0;
}
