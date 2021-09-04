#include<iostream>
using namespace std;
int main()
{
 int t,s=0;
 cin>>t;
 while(t--)
 {
  long int N,K;
  cin>>N>>K;
  long int A[N];
  for(int i=0;i<N;i++)
  cin>>A[i];
  long int min;
  min=A[0];
  for(int i=1;i<N;i++)
  {
   if(min>A[i])
   min=A[i];
  }
  if((K-min)>0)
  cout<<K-min<<endl;
  else
  cout<<s<<endl;
 }
 return 0;
}
