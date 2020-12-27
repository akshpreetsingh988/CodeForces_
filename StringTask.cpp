#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i,j=0, len1,len2;
	char a[101]; char b[101]; //The length of the string is [1,100]
	cin >> a;
	len1 = strlen(a);
	
	 for (i = 0; i < len1; i++)//Step (1): Convert to lowercase
	{
		if (a[i] >= 'A'&&a[i] <= 'Z')
		{
			a[i] += 32;
		}
	}
	
	 for (i = 0; i < len1; i++) // step (2): store non-vowels in the string
	{
		 if (a[i] != 'a' && a[i] != 'o' && a[i] != 'y' &&a[i]!='e'&& a[i] != 'u' && a[i] != 'i')//"A", "O", "Y", "E", "U", "I" are vowels
			b[j++] = a[i];
	}
	b[j] = '\0';
	
	len2 = strlen(b);
	 for (i = 0; i < len2; i++)//step (3): output string
	{
			cout << "." << b[i];
	}
}
