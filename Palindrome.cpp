#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,res=0,temp;
	cin>>n;
	temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=(res*10)+r;
	}
	if(res==temp)
	{
		cout<<"it is a palindrome number";
	}
	else{
		cout<<"not a palindrome number";
	}
	return 0;
}
