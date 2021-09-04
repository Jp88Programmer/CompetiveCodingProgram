#include<iostream>
using namespace std;
string del_str_ch(char ch, string s);
int main()
{
 int N,count=0,c=0;
 string str,hack="hackerearth";
 cin>>N;
 if(N>1000000)
 return 0;
 char A[N];
 cin>>A;
 str=A;
for(int n=0;n<11;n++){
 for(int i=0;i<str.size();i++)
 {
  if(str[i]==hack[n])
  {
   count++;
  for(int j=i;j<str.size();j++)
  str[j]=str[j+1];
  //str=del_str_ch(hack[n],str);
  }
 // n++;
 //if(count%11==0)
 //c++;
 }
 
}
 cout<<((count-(count%11))/11);
    return 0;
}
string del_str_ch(char ch, string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(ch==s[i])
        {
            for(int j=i; j<s.size(); j++)
                s[j]=s[j+1];
            return(s);
        }
    }
    return(s);
}