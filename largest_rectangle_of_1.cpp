/*
  Given 2D matrix of 1 and 0.
  Find area of largest rectangle possible if Column swapping is allowed.
*/
#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define mod 1000000007


void largest_rectangle(int n, int m)
{
	int A[n][m], dp[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
			if(i == 0)
				dp[i][j] = A[i][j];
			else
				dp[i][j] = A[i][j] == 0 ? 0 : dp[i-1][j] + 1;
		}
	int ans=0;

	for(int i=0;i<n;i++)
	{
		int arr[m];
		fill(arr,arr+m,0);
		for(int j=0;j<m;j++)
			arr[j]=dp[i][j];
		sort(arr,arr+m);
		for(int j=0;j<m;j++)
			ans = max(ans, arr[j]*(m-j));
	}
	cout<<ans<<endl;
}

int main()
{
	int n,m;
	cin>>n>>m;
	largest_rectangle(n,m);

}
