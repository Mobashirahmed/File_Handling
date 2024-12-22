// Closing a file in C programming

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file1.txt", "w");
    fprintf( fp, "%s", "Welcome to My Personal Computer" );
    fclose(fp);
    return(0);
}