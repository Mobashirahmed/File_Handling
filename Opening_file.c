// Opening a file in C programming

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf( fp, "%s", "This is a txt file created using C programming." );
    fp = fopen("file.txt", "r");
    return 0;
}