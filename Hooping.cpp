// You and your friend are playing a game with hoops. There are N hoops (where N is odd) in a row. You jump into hoop 1, and your friend jumps into hoop N. Then you jump into hoop 2, and after that, your friend jumps into hoop N−1, and so on.

// The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.
// 1≤T≤105
// 1≤N<2⋅105
// N is odd
// input
// 2
// 1
// 3
// Sample Output
// 1
// 2
// Explanation
// Test Case 1: Since there is only 1 hoop, that's the only one to be jumped into.

// Test Case 2: The first player jumps into hoop 1. The second player jumps into hoop 3 and finally the first player jumps into hoop 2. Then the second player cannot make another jump, so the process stops.
//there is a pattern that for n=1 answer will be 1 for n=3 answer will be 2 , n=5 answer =3 ,n=7 answer=4, n=9 answ=5 so on...
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int hash[2*100000+1]={0};
   int count=1;
   for(int i=1;i<=2*100000;i++)
   {
   	   if(i%2!=0)
   	   	{hash[i]=count;
   	   		count++;
   	   	 }
   }
   while(t--)
   {
   	 int n;
   	 cin>>n;
   	 cout<<hash[n]<<"\n";
   }
   
  
	return 0;
}