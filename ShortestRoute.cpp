#include<bits/stdc++.h>
using namespace std;

int Transportation(int a[],int size,int destination)
{  
    int minimum_Right;
    int minimum_left;
    int countstation=0;

    if(a[destination]!=0)
    {
        return 0;
    }
        for(int i=destination+1;i<size;i++)//check for the right station train going the left side or having value =2
        {
            if(a[i]==2)
            {
                 minimum_Right=abs(destination-i);
                 countstation=1;
            }
        
           
        }

        for(int i=destination-1;i>1;i--)//check for the left station having train going on the right side
        {
            if(a[i]==1)
            {

              minimum_left=abs(destination-i);
              countstation=1;
            }
        }


    
     if(countstation==1)
     {
        if(minimum_Right>minimum_left) 
           return minimum_left;
        else if(minimum_Right<minimum_left)
           return minimum_Right;
     }
      
       


  return -1; //No train possible to reach destination even after transportaion
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
    int n,m;cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<m+1;i++)
    {
        cin>>b[i];
    }
    int minimum;
    if(a[1]==0) //only transportation can work here
    {
        for(int i=1;i<m+1;i++)
        {
            if(b[i]==1)
            {
                cout<<0<<" ";
            }
            else
            {
                minimum=Transportation(a,n+1,b[i]);
                cout<<minimum<<" ";
            }
        }
    }
    else if(a[1]==2)
    {
       for(int i=1;i<m+1;i++)
        {
            if(b[i]==1)
            {
                cout<<0<<" ";
            }
            else
            {
                minimum=Transportation(a,n+1,b[i]);
                cout<<minimum<<" ";
            }
        }
    }
    else if(a[1]==1)
    {

       for(int i=1;i<m+1;i++)
        {
            if(b[i]==1)
            {
                cout<<0<<" ";
            }
            else
            {
                minimum=Transportation(a,n+1,b[i]);
                if(minimum==-1)
                {
                    cout<<abs(b[i]-1)<<" ";
                }
                else if(minimum>abs(b[i]-1))
                    cout<<abs(b[i]-1)<<" ";
                else 
                    cout<<minimum<<" ";

            }
          
         
          
        }
    }
    
    cout<<"\n";

   }
    return 0;
}