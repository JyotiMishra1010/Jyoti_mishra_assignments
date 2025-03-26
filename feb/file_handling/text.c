#include<stdio.h>
#include<stdlib.h>

//txt file operations 
int main(){
    FILE *ftpr;
    ftpr= fopen("sample.txt","w"); //if file doesn't exist so create it .
    char c;
    if(ftpr==NULL)
    {
        printf("error in file");
        exit(-1);
    }
    printf("enter any char.. ");
    scanf("%c",&c);
    fprintf(ftpr,"%c",c);
    fclose(ftpr);
    
    ftpr= fopen("sample.txt","r"); 
    char t;
    if(ftpr==NULL)
    {
        printf("error in file");
        exit(-1);
    }
    
    fscanf(ftpr,"%c",&t);// read from the file 
    printf("here is entered character : %c",t);// print the data from the file
    fclose(ftpr);
    
    

}
