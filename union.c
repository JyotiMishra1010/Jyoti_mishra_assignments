//union
#include<stdio.h>

#include<string.h>
union employe {
	int roll_no;
	char blood_group[40];
	char name[50];
};
int main()
{  
    union employe D1;

    
    D1.roll_no = 2;
    printf("Roll No: %d\n", D1.roll_no);

    strcpy(D1.blood_group, "A++");
    printf("Blood Group: %s\n", D1.blood_group);

    strcpy(D1.name, "Jyoti");
    printf("Name: %s\n", D1.name);
	return 0;
}
