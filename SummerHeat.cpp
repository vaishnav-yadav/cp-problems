#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
	cin>>t;
	while(t--)
	{
		int x_a,x_b,X_a,X_b;
		cin>>x_a>>x_b>>X_a>>X_b;
		cout<<(X_a/x_a)+(X_b/x_b)<<endl;
	}

	return 0;
}