#include<stdio.h>
int main()
{
	int t1=0, t2=1,next_term=0,n=10;
	printf("Fibonacci series: %d %d ",t1,t2);
	next_term=t1+t2;
	while (next_term<=n)
	{
		printf(" %d", next_term);
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	}
	return 0;
}
