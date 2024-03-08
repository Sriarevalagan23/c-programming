#include <stdio.h> 
int main() 
{ 
int flag = 0, N=7, i; 
if(N==0||N==1)
flag=1;
for ( i = 2; i <= N / 2; i++) 
{ 
	if (N % i == 0)
    { 
	flag = 1; 
	break; 
    } 
} 
if (flag==0) 
{ 
	printf("The number %d is a Prime Number\n", N); 
} 
else
{ 
	printf("The number %d is not a Prime Number\n", N); 
} 
return 0; 
} 


