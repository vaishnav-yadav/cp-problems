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