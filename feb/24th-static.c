//static keyword in c lang.
#include<stdio.h>
static int a = 100;//global variable
static void static_fuction()
{ printf("this is inside static_fuction\n");
}
void static_f_var(){
static int count=0;
count++;
printf("static count: %d\n",count);
}
int main()
{ printf("global variable value is : %d\n",a);
static_fuction();
static_f_var();
static_f_var();
static_f_var();
return 0;
}
