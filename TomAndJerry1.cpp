// There is a grid of size 105×105, covered completely in railway tracks. Tom is riding in a train, currently in cell (a,b), and Jerry is tied up in a different cell (c,d), unable to move. The train has no breaks. It shall move exactly K steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly K steps?
// input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, five integers a,b,c,d,K.
// Output
// For each testcase, output in a single line "YES" if Tom can reach Jerry's cell in exactly K moves and "NO" if not.

// You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Constraints
// 1≤T≤105
// 0≤a,b,c,d≤105
// (a,b)≠(c,d)
// 1≤K≤2⋅105
// Subtasks
// Subtask #1 (100 points): original constraints

// Sample Input
// 3
// 1 1 2 2 2
// 1 1 2 3 4
// 1 1 1 0 3
// Sample Output
// YES
// NO
// YES

#include <bits/stdc++.h>
using namespace std;

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
	

