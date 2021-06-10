#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
	cin>>t;
	while(t--)
	{
		int D,d,P,Q;
		cin>>D>>d>>P>>Q;

        long int totalMoney;
        long int n1=D/d;
        long int n2=D%d;

        totalMoney= d*n1*(2*P+(Q*(n1-1)))/2 + (P+n1*Q)*n2;
        cout<<totalMoney<<"\n";

        

	}
	return 0;
}


// 5,2,1,2

//2 1 1 1
// P*d+(P+Q)*d+(P+2*Q)*d+(P+3*Q)*d+.....

//Tn= P+(Q(n-1))*d 
//starting from n=1,2,...
//for n1=D/d days
//we have total sum = P*d [1+2 + 3+ 4 ....n1 terms]+Q*d[1+2+3+4+5...(n1-1)terms]
//total sum= d*n1(P+Q(n1-1)/2)

//for rest n2=D%d days 
//we have to add term P+((n1+1)-1)*n2

//final answer = d*n1*(P+Q*(n1-1)/2) + P+((n1+1)-1)*n2
//where n1=D/d and n2=D%d



//1*2+(3)*2+(5)*1
//13 days

//3 2 1 1
//1*2 +(1+1)*1 = 4 days


//4 2 1 2
//