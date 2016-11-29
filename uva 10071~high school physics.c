/**
Program name : uva 10071~high school physics (I found this problem on UVa online judge site...problem no. 10071)
Solved On :28/11/2016,09:30 pm
Solved By : Farhana Ahmed Fima
**/

#include<stdio.h>
int main ()

{
    int s,v,t;
    while(scanf("%d %d",&v,&t)!=EOF)
    {
      s=2*v*t;
      printf("%d\n",s);
    }
    return 0;
}
