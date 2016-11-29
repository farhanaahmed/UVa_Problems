/**
Program name : uva 10055~hashmat the brave warrior (I found this problem on UVa online judge site...problem no. 10055)
Solved On :29/11/2016,08:00 am
Solved By : Farhana Ahmed Fima
**/

#include<stdio.h>
int main()
{
    long long int a,b,c;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        c=a-b;
        else
        c=b-a;
        printf("%lld\n",c);
    }
    return 0;
}
