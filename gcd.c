#include<stdio.h>
int main()
{
	int n1=36, n2=60, i, gcd, lcm;
	for(i=1; i<=n1 && i<=n2; i++)
	{
		if(n1%i == 0 && n2%i==0)
		{
		gcd=i;
		}
	}
	lcm=n1*n2/gcd;
	printf("gcd of %d and %d is %d\n", n1, n2,gcd);
	printf("lcm is %d", lcm);
	return 0;
}
