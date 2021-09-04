#include<iostream>
using namespace std;
int main()
{
 long int t;
 cin>>t;
 while(t--)
 {
  long int l,r,s,k;
  cin>>l>>r>>s;
  long int m[r];
  k=0;
  for(long int i=1;s*i<=r;i++)
  {
   if(s*i>=l&&s*i<=r)
   {
    m[k]=s*i;
    k++;
   }
  }
  int min,max;
  min=m[0];
  max=m[0];
  for(int i=0;i<k;i++)
  {
   if(min>m[i])
   min=m[i];
   if(max<m[i])
   max=m[i];
  }
  if(s>r)
  {
   min=-1;
   max=-1;
   cout<<min<<" "<<max<<endl;
  }
  else
  cout<<min/s<<" "<<max/s<<endl;
 }
 return 0;
}