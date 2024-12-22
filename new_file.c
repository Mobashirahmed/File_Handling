#include<stdio.h>
#include<conio.h>

void main(){
    char ch;
    FILE *fp = NULL;
    fp = fopen("new_file.txt", "r");

    if(fp == NULL)
        printf("File not created successfully\n");
    else
        printf("Enter a character to write in the file: ");
        ch = getche();
        fputc(ch, fp);
        fclose(fp);
        printf("\nFile created and written successfully\n");
}