

#include "abc.h"



SRDITS SRdbits ;


// extern struct SRBITS SRbits ;

// extern SRAITS SRabits ;

//#define ULNG unsigned long
int  sumbcd(int a,int b)
{
    return a + b ;

}
//void UART2Init(ULNG Baudrate)
void UART3Init(int Baudrate)
{

    printf("UART3Init :%d\n",Baudrate );
    
    //_C  = 1;
    SRdbits.C = 1; 
   
   
}
