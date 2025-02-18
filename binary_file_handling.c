
//binary file handling 
#include<stdio.h>
#include<stdlib.h>
struct record{
    int id;
    char name[20];
    
};
void writebinary()
{
    FILE *file;
    file=fopen("example.bin","wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    struct record r[2]={
        {1,"jyoti"},
        {2,"xyz"}
    };
    fwrite(r,sizeof(struct record),2,file);
    fclose(file);
    printf("data successfully written");
}



void readfile()
{   FILE *file;
    file=fopen("example.bin","wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    struct record r;
    printf("\nreading data from file\n");
    while(fread(&r,sizeof(struct record),1,file)){
        printf("ID:%d  ,Name:%s",r.id,r.name);
    }
    fclose(file);
}

int main()
{
    writebinary();
    readfile();
}
