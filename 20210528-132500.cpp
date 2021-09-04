#include<iostream>
using namespace std;
int main()
{
    string s[100];
    int N,n,i,j;
    cin>>N;
    s[1]="One";
    s[2]="Two";
    s[3]="Three";
    s[4]="Four";
    s[5]="Five";
    s[6]="Six";
    s[7]="Seven";
    s[8]="Eight";
    s[9]="Nine";
    s[10]="Ten";
    s[11]="Eleven";
    s[12]="Twelve";
    s[13]="Threaten";
    s[14]="Fourteen";
    s[15]="Fifteen";
    s[16]="Sixteen";
    s[17]="Seventeen";
    s[18]="Eighteen";
    s[19]="Nineteen";
    s[20]="Twenty";
    s[30]="Thirty";
    s[40]="Fourty";
    s[50]="Fifty";
    s[60]="Sixty";
    s[70]="Seventy";
    s[80]="Eighty";
    s[90]="Ninety";
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