#include <bits/stdc++.h>
using namespace std;
int modfunc(int a, int b)
{
	if(a>=b){
		return a-b;
	}
	return b-a;
}
int main()
{   long long int t;
	cin>>t;
	while(t--)
	{
		int a, b, c,d,k;
		cin>>a>>b>>c>>d>>k;
        int stepsMin= abs(d-b)+abs(c-a);
        if(k<stepsMin)
        {
            cout<<"NO"<<endl;
            
        }
        if(stepsMin%2!=0)//if min steps are odd
        {
           if(k%2==0) 
           cout<<"NO"<<endl;
           else
           cout<<"YES"<<endl;  
        }
        else if(stepsMin%2==0)//if steps are even
        {
        	if(k%2!=0)
        		cout<<"NO"<<endl;
        	else 
        		cout<<"YES"<<endl;
        }

     }
		return 0;
	}
	

