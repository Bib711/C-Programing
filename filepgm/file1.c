#include <stdio.h>
int main() {
    FILE *fp;
    char ch[50],data;
    /*fp = fopen("test.txt", "w");
    printf("enter data to write in file: ");
    gets(ch);
    fputs(ch,fp);
    fclose(fp);
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("File content:\n");
    while ((data=getc(fp))!= EOF)
        printf("%c", data);
    fclose(fp);*/
    fp=fopen("test.txt","w");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    int n;
    printf("Enter the limit:");scanf("%d",&n);
    printf("Enter the chars:");

    for(int i =0;i<n;i++){
        ch[i] = getchar();
        putc(ch[i],fp);
    }
    
    fprintf(fp,"\nWrote %d no of chars from user.",n);
    int a=10;
    putw(a,fp);//NULLNULL
    fprintf(fp,"\nentered a int.");
    fclose(fp);

    fp = fopen("test.txt", "a");
    fprintf(fp,"\nthis is ram \n");
    fprintf(fp,"hope u all doin well");
    fclose(fp);
    fp = fopen("test.txt", "r");
    printf("\nFile content after appending:\n");
    while ((data=getc(fp))!= EOF)
        printf("%c", data);
    fclose(fp);
    return 0;
}