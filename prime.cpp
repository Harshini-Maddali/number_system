#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int i,n,fact;
  for(i=2;i<n-1;i++)
  {
    if(n%i==0)
    {
      cout<<"not prime";
      fact++;
      break;
     }
   }
   if(fact==0)
   {
     cout<<"prime ";
    }
    return 0;
 }
   
