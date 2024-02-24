#include<stdio.h>
int main()
{
printf("Sri superstores\n");
int Mango=200, Grapes=400, Pomo=350, a,b,c,kg,Total;
kg=2;
a=Mango*kg;
printf("1.Mango:%d*%d=%d\n",Mango,kg,a);
kg=3;
b=Grapes*kg;
printf("2.Grapes:%d*%d=%d\n",Grapes,kg,b);
kg=1;
c=Pomo*kg;
printf("3.Pomo:%d*%d=%d\n",Pomo,kg,c);
Total=a+b+c;
printf("Total=%d\n", Total);
int Rs=2000, Balance;
Balance=Rs-Total;
printf("Balance=%d",Balance);
return 0;
}

