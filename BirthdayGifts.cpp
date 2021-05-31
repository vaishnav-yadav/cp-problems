#include <bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		long long int a[n];
		long long int MaxSum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			MaxSum+=a[i];
		}
		sort(a,a+n, greater<long long int>());
		int Maxturns=(n-1)/2;
		long long int firstTurnSum=0; int l=0;
		while(Maxturns>=1)
		{
			firstTurnSum+=a[l];
			l=l+2;
			Maxturns--;
		}
		long long int secondTurnSum=MaxSum-firstTurnSum;
		if(firstTurnSum>secondTurnSum)
			cout<<firstTurnSum<<endl;
		else
			cout<<secondTurnSum<<endl;



	}
	return 0;
}