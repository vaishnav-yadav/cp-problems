//Chef and his twin needs to take from n gifts available
//their turns of choosing can be from 1 to n-1/2
//for the person which is taking gift in second turn will have the right to take the gift two at a time on his last attempt
//calculate the max possible gifts one can take
// 1≤T≤100
// 3≤N≤103
// 1≤K≤N−12
// 1≤Ai≤109

//Input
// 3
// 3 1
// 1 3 2
// 3 1
// 3 1 3
// 5 2
// 5 1 3 2 4

// Sample Output
// 3
// 4
// 8

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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n, greater<long long int>()); //sorting array according to decreasing cost of gifts
		int Maxturns=k;
		long long int firstTurnSum=0; int l=0; //calculating the max gifts first chance holder can get
		while(Maxturns>=1) //total turns gifts he can get
		{
			firstTurnSum+=a[l];
			l=l+2;
			Maxturns--;
		}
		int r=1;
		long long int secondTurnSum=0; //calculating the total gifts of second guy
	    Maxturns=k;
		while(Maxturns>1)
		{
		    secondTurnSum+=a[r];
		    
		    r=r+2;
		    Maxturns--;
		}
		secondTurnSum+=a[r]+a[r+1];//in last attempt he can take two consecutive gifts
		
	  
		if(firstTurnSum>secondTurnSum) //answer will be the max gifts holder 
			cout<<firstTurnSum<<endl;
		else
			cout<<secondTurnSum<<endl;



	}
	return 0;
}

// It’s Chef's birthday. He and his twin have received N gifts in total. The i-th gift has a price of Ai. Each twin wants to keep the most expensive gifts for himself.

// The twins take K turns alternately (each has K turns, for 2⋅K turns in total). It is given that 2⋅K+1≤N. In a turn, a person may choose one gift. The only exception is the last turn of the twin who moves second, where he gets to choose two gifts instead of one. Assuming they both choose gifts optimally and you can choose who takes the first turn, find the maximum total cost of the gifts that Chef keeps.