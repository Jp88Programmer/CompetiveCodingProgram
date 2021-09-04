#include<iostream>
using namespace std;
int main()
{
 int t;
 long long int c;
 long int n,sum;
 cin>>t;
 while(t--)
 {
  cin>>c>>n;
  long int A[n];
  A[0]=c/n;
  while(A[0]>0){
  sum=0;
  for(int i=1;i<n;i++)
  A[i]=A[0]+i;
  for(int i=0;i<n;i++)
  sum+=A[i];
  if(sum<c){
  cout<<c-sum<<endl;
  break;
  }
  else
  {
   A[0]=A[0]-1;
   if(A[0]<1)
   {
    cout<<c<<endl;
   }
  }
 }
 }
 return 0;
}