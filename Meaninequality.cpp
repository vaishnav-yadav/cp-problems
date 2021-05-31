// 3
// 3
// 1 2 3 4 5 6
// 2
// 123 456 789 10
// 1
// 6 9

   // 0 1 2 3 4 5
//a : 1 2 3 4 5 6 
//v : 1 2 5 6

    //1 2 4 3

#include<bits/stdc++.h>
using namespace std; 
int main()
{ int t;
	cin>>t;
	while(t--) {
	    /* code */
	    int n;
	    cin>>n;
	    int arr[2*n];
	 	 for (int i = 0; i < 2*n; ++i)
	    {
	    	/* code */
	           cin>>arr[i];

	    }
	    cout<<arr[0]<<" "<<arr[1]<<" ";
	    int a, b;
	    for(int i=1;i<2*n;i++)
	    {   b=arr[i]; a=arr[i-1];
	    	for(int j=i+1;j<2*n;j++)
	    	{
	    		if((2*b-a)!=arr[j])
	    		{
	    			cout<<arr[j]<<" ";
	    			int temp=arr[j];
	    			arr[j]=arr[i+1];
	    			arr[i+1]=temp;
	    		}
	    	}

	    }

	 
	    



	   
	    	cout<<endl;
	}
	return 0;
}