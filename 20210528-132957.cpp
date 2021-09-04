#include<iostream>
using namespace std;
int main()
{
    string s[100];
    int N,n,i,j;
    cin>>N;
    s[0]="zero";
    s[1]="one";
    s[2]="two";
    s[3]="three";
    s[4]="four";
    s[5]="five";
    s[6]="six";
    s[7]="seven";
    s[8]="eight";
    s[9]="nine";
    s[10]="ten";
    s[11]="eleven";
    s[12]="twelve";
    s[13]="threaten";
    s[14]="fourteen";
    s[15]="fifteen";
    s[16]="sixteen";
    s[17]="seventeen";
    s[18]="eighteen";
    s[19]="nineteen";
    s[20]="twenty";
    s[30]="thirty";
    s[40]="fourty";
    s[50]="fifty";
    s[60]="sixty";
    s[70]="seventy";
    s[80]="eighty";
    s[90]="ninety";
    for(n=21; n<100; n++)
    {
        if(n==30||n==40||n==50||n==60||n==70||n==80||n==90)
            continue;
        else {
            i=n%10;
            j=n/10;
            s[n]=s[j*10]+"-"+s[i];
        }
    }
    cout<<s[N]<<endl;
    return 0;
}