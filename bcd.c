
#include "abc.h"



SRDITS SRdbits ;


int  sumbcd(int a,int b)
{
    return a + b ;

}

void UART3Init(int Baudrate)
{

    printf("UART3Init :%d\n",Baudrate );
    
    //_C  = 1;
    SRdbits.C = 1; 
   
   
}
