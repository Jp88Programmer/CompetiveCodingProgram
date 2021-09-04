#include<iostream>
using namespace std;
int main()
{
 string str;
 int count_1=0,count_2=0;
 cin>>str;
 for(int i=0;i<str.size();i++)
 {
  if(str[i]=='(')
  count_1++;
  if(str[i]==')')
  count_2++;
 }
 if(count_1>=count_2)
 cout<<count_2;
 else
 cout<<count_1;
 return 0;
}