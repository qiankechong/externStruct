#include <stdio.h>
#include <windows.h>
#include "abc.h"
#include "system.h"
//"${fileDirname}\\hello.c",
//"${fileDirname}\\**",
//"c": "cd $dir && gcc *.c -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
       
       


int b;

extern SRAITS SRabits ;
extern SRDITS SRdbits ;

SRAITS SRcbits ;

int main(){
    printf("hello world! I\' m VSCode\n");
    int a, b, sum;
    printf("input two int nums\n");
    //scanf("%d,%d",&a,&b);
    a = 0 ;
    b = 1;    
    SRabits.C = 1;
    SRcbits.C = 1;
    sum = a + b;
    printf("%d+%d=%d\n", a, b, sum);

    a = 2 ;
    b = 3; 
    sum = sumab(2,3);
    printf("%d+%d=%da aaaa\n", a, b, sum);
    //printHello();
    //UART2Init(9600);
    UART3Init(9600);
 
    return 0;
 
}