#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &a:v)
		cin>>a;
	int sum;
	cin>>sum;
	int A[sum+1];
	fill(A,A+sum+1,0);
	A[0]=1;
	
	for(int i=1;i<=sum;i++)
		for(auto a:v)
			if(i>=a)
				A[i] += A[i-a];
	cout<<A[sum]<<endl;

	return 0;
}
