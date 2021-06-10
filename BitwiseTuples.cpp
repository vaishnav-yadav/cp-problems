// Chef has two numbers N and M. Help Chef to find number of integer N-tuples (A1,A2,…,AN) such that 0≤A1,A2,…,AN≤2M−1 and A1&A2&…&AN=0, where & denotes the bitwise AND operator.

// Since the number of tuples can be large, output it modulo 109+7.

// Input
// The first line contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two integers N and M.
// Output
// For each test case, output in a single line the answer to the problem modulo 109+7.

// Constraints
// 1≤T≤105
// 1≤N,M≤106
// Subtasks
// Subtask #1 (100 points): original constraints

// Sample Input
// 4
// 1 2
// 2 2
// 4 2
// 8 4
// Sample Output
// 1
// 9
// 225
// 228250597
// Explanation
// Test Case 1: The only possible tuple is (0).

// Test Case 2: The tuples are (0,0), (0,1), (0,2), (0,3), (1,0), (2,0), (3,0), (1,2), (2,1).

//Based on the observations and permutations answer = (2^N-1)^M
#include<bits/stdc++.h>
using namespace std;

const int m=1e9 + 7; 

int moduloExp(long long x , long long y , long long p)
{
	int result=1;
	x=x%p;

	if(x==0) return 0;

	while(y>0) {
	    /* code */
	    if(y&1) // to check if y is odd
	    result= (result*x)%p;

	    y=y>>1;//y=y/2
	    x=(x*x)%p;

	}
	return result;
}

int main()
{
   int t;
   cin>>t;
   
   while(t--)
   { int N,M;
   	cin>>N>>M;
   //answer : (2^N - 1)^M
    long long result= moduloExp(2, N, m); //x^y %p or result=2^N % m 
    result= moduloExp(result-1,M,m);  // result= (result-1)^M
    cout<<result<<"\n";
   }
	return 0;
}