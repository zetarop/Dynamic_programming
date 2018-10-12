#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define inf 1000000007

double A[1000001]={0};

ll fib(int n)
{
	if(A[n])
		return A[n];
	else
		return A[n] = fib(n-1) + fib(n-2);
}

int main()
{
	A[0]=1;
	A[1]=1;
	int n;
	cin>>n;
	cout<<fib(n-1)<<endl;
}
