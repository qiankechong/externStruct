#ifndef __ABC_H__     //防止重复包含
#define __ABC_H__
#include <stdio.h>

extern int b;
#define ULNG unsigned long
typedef struct tagSRBITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
      unsigned DC:1;
    };
    struct {
      unsigned :5;
      unsigned IPL:3;
    };
  };
} SRBITS;



typedef struct tagSRAITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
      unsigned DC:1;
    };
    struct {
      unsigned :5;
      unsigned IPL:3;
    };
  };
} SRAITS ;

typedef struct tagSRCITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
      unsigned DC:1;
    };
    struct {
      unsigned :5;
      unsigned IPL:3;
    };
  };
} SRCITS ;


typedef struct tagSRDITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
      unsigned DC:1;
    };
    struct {
      unsigned :5;
      unsigned IPL:3;
    };
  };
} SRDITS ;

//extern SRAITS SRabits ;

typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR0:1;
      unsigned U2RXR1:1;
      unsigned U2RXR2:1;
      unsigned U2RXR3:1;
      unsigned U2RXR4:1;
      unsigned U2RXR5:1;
      unsigned :2;
      unsigned U2CTSR0:1;
      unsigned U2CTSR1:1;
      unsigned U2CTSR2:1;
      unsigned U2CTSR3:1;
      unsigned U2CTSR4:1;
      unsigned U2CTSR5:1;
    };
    struct {
      unsigned U2RXR:6;
      unsigned :2;
      unsigned U2CTSR:6;
    };
  };
} RPINR19BITS;

// typedef struct tagSRCITS {
//   union {
//     struct {
//       unsigned C:1;
//       unsigned Z:1;
//       unsigned OV:1;
//       unsigned N:1;
//       unsigned RA:1;
//       unsigned IPL0:1;
//       unsigned IPL1:1;
//       unsigned IPL2:1;
//       unsigned DC:1;
//     };
//     struct {
//       unsigned :5;
//       unsigned IPL:3;
//     };
//   };
// } SRCITS;
// extern struct SRCITS SRcits ;
// struct student_im {
// 	char name[10];
// 	unsigned long idnumber;
// 	unsigned int age;
// }studentA = { "li bai", 202005031, 18 };


int  sumab(int a,int b);
void UART2Init(int Baudrate);

int  sumbcd(int a,int b);
void UART3Init(int Baudrate);

#endif