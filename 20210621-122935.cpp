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
  step_1:
  sum=0;
  for(int i=1;i<n;i++)
  A[i]=A[0]+i;
  for(int i=0;i<n;i++)
  sum+=A[i];
  if(sum<c)
  cout<<c-sum<<endl;
  else
  {
   A[0]=A[0]-1;
   if(A[0]<1)
   {
    cout<<c<<endl;
    goto step_2;
   }
   goto step_1;
  }
  step_2:;
 }
 return 0;
}