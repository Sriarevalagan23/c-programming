#include<stdio.h>
int main()
{
int num=153, original_num, remainder, result=0;
original_num=num;
while(original_num!=0)
{
remainder=original_num%10;
result+=remainder*remainder*remainder;
original_num/=10;
}
if(result==num)
printf("%d is an armstrong number",num);
else
printf("%d is not an armstrong number",num);
return 0;
}
