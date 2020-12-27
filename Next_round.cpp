#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v ;
	for(int i=0 ;i<n; i++)
	{
		int x; 
		cin >> x ;
		v.push_back(x);
	}
	//now we have all the scores in the array 
	int ans =0 ;
	for(int i=0; i<n; i++)
	{
		if((v[i]>=v[k-1]) &&v[i]>0)
		ans ++;
	}
	cout<<ans ;
	return 0;
	
}
