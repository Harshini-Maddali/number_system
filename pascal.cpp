#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<=i;j++)
		{
			if(i==j||j==0)
			  arr[i][j]=1;
			else
			  arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
			cout<<arr[i][j]<<" ";
			
		}
	}
	return 0;
}
