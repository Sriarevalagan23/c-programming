#include<math.h>
int i,n=3;
double res,sum=0.0,ser;
clrscr();
for(i=1;i<=n;i++)
{
ser=1/pow(i,i);
sum+=ser;
}
printf("%.1f",sum);
return 0;
}
