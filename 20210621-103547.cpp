#include<iostream>
using namespace std;
int main()
{
 string str,s;
 int t;
 cin>>t;
 while(t--)
 {
  cin>>str;
  s=str;
  char t;
  for(int i=0;i<s.size()/2;i++)
  {
   t=s[i];
   s[i]=s[s.size()-i-1];
   s[s.size()-i-1]=t;
  }
  if(str==s)
  cout<<-1<<endl;
  else
  {
   for(int i=1;i<str.size();i++)
   {
    for(int j=0;j<str.size()-i;j++)
    {
     if(str[j]>str[j+1]){
     t=str[j];
     str[j]=str[j+1];
     str[j+1]=t;
     }
    }
   }
   cout<<str<<endl;
  }
 }
 return 0;
}