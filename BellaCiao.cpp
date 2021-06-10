#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
	cin>>t;
	while(t--)
	{
		int D,d,P,Q;
		cin>>D>>d>>P>>Q;

        long int totalMoney=0;
        int daysleft=d;
        for(int i=0;;i++)
        {   
        	if(D<=0)
            {
              break;
            }
        	totalMoney+=(P+Q*i)*daysleft;
        	D-=d;
        	if(D>d)
        	{
        		daysleft=d;
        	}
        	else
        		daysleft=D;     

        }
        cout<<totalMoney<<"\n";


	}
	return 0;
}


// 5,2,1,2

// P*d+(P+Q)*d+(P+2*Q)*d+(P+3*Q)*d+.....

//1*2+(3)*2+(5)*1
//13 days

//3 2 1 1
//1*2 +(1+1)*1 = 4 days


//4 2 1 2
//