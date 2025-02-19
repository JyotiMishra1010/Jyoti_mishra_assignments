//bitwise operator in c lang.
#include<stdio.h>
void bitwise_operator(int a,int b)
{  printf("AND: %d\nOR: %d\nXOR: %d\nNOT: %d\nLShift: %d\nRShift: %d\n", a & b, a | b, a ^ b, ~a, a << 1, a >> 1);
}
int main(){
int a,b;
printf("enter the values for a and b:");
scanf("%d %d",&a,&b);
 bitwise_operator(a,b);
return 0;
}
