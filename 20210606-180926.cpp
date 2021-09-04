#include<iostream>
using namespace std;
int main()
{
 //char s,v;
 int lv,l1,d,t,count=0,k;
 cin>>d;
 cin>>lv;
 char v[lv];
 char s[1000];
 for(int i=0;i<lv;i++)
 cin>>v[i];
 int sum[d];
 for(int k=0;k<d;k++)
 {
  cin>>l1;
  for(int i=0;i<l1;i++)
  cin>>s[i];
  count=0;
  for(int i=0;i<lv;i++)
  {
   if(v[i]=='G'||v[i]=='C')
   {
    for(int j=0;j<l1;j++)
    {
     if((v[i]=='G'&&s[j]=='C')||(v[i]=='C'&&s[j]=='G'))
     count++;
    }
    sum[k]=count;
   // cout<<endl<<sum[k];
   }
  }
 }
  t=sum[0];
  k=0;
  for(int i=0;i<d;i++)
  {
   if(t<sum[i]){
   t=sum[i];
   k=i;
   }
  }
  cout<<" "<<k+1;
 return 0;
}