

#include "abc.h"

unsigned int  RPINR19 ;

RPINR19BITS RPINR19bits ;


SRAITS SRabits ;

SRBITS SRbits;
/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2
#define _DC SRbits.DC
#define _IPL SRbits.IPL

struct student_im {
	char name[10];
	unsigned long idnumber;
	unsigned int age;
}studentA = { "li bai", 202005031, 18 };



// extern struct SRBITS SRbits ;

// extern SRAITS SRabits ;

//#define ULNG unsigned long
int  sumab(int a,int b)
{
    return a + b ;

}
//void UART2Init(ULNG Baudrate)
void UART2Init(int Baudrate)
{

    printf("UART2Init :%d\n",Baudrate );
    RPINR19bits.U2RXR =26; //RP26=PIN5
    _C  = 1;
    SRabits.C = 1;
    //RPOR10bits.RP21R = 5;  //RP21=PIN4

   
    /******************************************************************
    U2MODEbits.RTSMD=1;           //UxRTS���Ŵ��ڵ���ģʽ
    U2MODEbits.UEN=0;             //ʹ�ܲ�ʹ��UxTX ��UxRX ���ţ� UxCTS ��UxRTS/BCLKx �����ɶ˿�����������
    U2MODEbits.BRGH=0;            //BRG ��ÿ��λ�����ڲ���16 ��ʱ���źţ�16 ��Ƶ������ʱ�ӣ���׼ģʽ��
    U2MODEbits.PDSEL=0;           //8 λ���ݣ�����żУ��
    U2MODEbits.STSEL=0;        //   //1 ��ֹͣλ
    U2MODEbits.WAKE=1;

    U2BRG=((((11059200/2)/Baudrate)/16)-1);   //������9600
    COM2_EN=1;                  //ʹ��UARTx ��
    //    _NSTDIS=1;                     //��ֹ�ж�Ƕ��
    _IPL3=0;                    //CPU �ж����ȼ�С�ڵ���7

    U2STAbits.URXISEL=0;        //�����յ�һ���ַ���RSR�����ݱ���������ջ�����ʱ���жϱ�־λ��1
    RX2_IE=0;//1;                      //UART1 �������ж�����λ
    _U2RXIP=1;                    //UART1 �������ж����ȼ�λ
    TX2_EN=1;                    //ʹ�ܷ��ͣ� UARTx ����UxTX ���š�
    **********************************************************************/
}
