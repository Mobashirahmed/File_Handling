#include<stdio.h>
int main(){
    FILE *file_pointer;
    file_pointer = fopen("READ.txt", "r");
    fclose(file_pointer);
}