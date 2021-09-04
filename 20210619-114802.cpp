#include<iostream>
using namespace std;
int main()
{
 int t;
 int l,r,s,k;
 cin>>t;
 while(t--)
 {
  cin>>l>>r>>s;
  int m[r];
  k=0;
  for(int i=1;s*i<=r;i++)
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
  cout<<min/s<<" "<<max/s<<endl;
 }
 return 0;
}