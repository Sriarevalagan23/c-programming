#include<stdio.h>
int main()
{
	int num=90;
	int originalnum=num;
	while(num !=1 &&num !=4)
	{
		int sum=0;
		while(num>0)
		{
		int digit=num % 10;
		sum += digit*digit;
		num /=10;
	}
	num=sum;
}
if(num ==1)
{
	printf("%d is a happy num.\n",originalnum);
}
else
{
	printf("%d is not happy num.\n",originalnum);
}
return 0;
}
