#include<stdio.h>
int main() {
int a=10, b=3,temp;
temp=a;
a=b;
b=temp;
printf("%d%d",a,b);
return 0;
}
