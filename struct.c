#include<stdio.h>
struct Detail {
	int roll_no;
	char name[50];
	float marks;
};
int main()
{
	struct Detail D1 = {1,"Jyoti",95};
	printf("printing the information %d %s %f", D1.roll_no, D1.name, D1.marks);
	return 0;
}
