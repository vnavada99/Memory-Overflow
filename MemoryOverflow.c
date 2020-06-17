#include<stdio.h>
#include<stdlib.h>
int main(){
    long i = 0;
    long *ip = (long *)malloc(sizeof(int)*4294967296);
    for(i = 0; i < 4294967296;i++)
        ip[i] = i;
    for(i = 0; i < 4294967296;i++)
        printf("%ld",ip[i]);
}

