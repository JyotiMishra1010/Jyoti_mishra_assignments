//formate specifier in for integer,float,upto 2 digit after decimal float,char,pointer
#include<stdio.h>
int main()
{ 
int a=10;
float b=5;
char ch[3]={'a','b','c'};
int *p=&a;
printf("this is integer: %d\n",a);
printf("this is float:%f \n",b);
printf("this is also float:%.2f\n",b);
printf("this is char: %s\n",ch);
printf("this is pointer:%p\n",p);

return 0;

}
