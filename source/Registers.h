#ifndef _REGISTERS_H
#define _REGISTERS_H

#include "Constants.h"

typedef struct Registers
{
    /* Special Purpose Registers */
    Uint16 pc;  /* Program Counter */
    Uint8  sp;  /* Stack Pointer */

    /* Bit 7 - Negative Flag        N
       Bit 6 - Overflow Flag        V
       Bit 5 - Unused
       Bit 4 - Break Command        B
       Bit 3 - Decimal Mode         D
       Bit 2 - Interrupt Disable    I
       Bit 1 - Zero Flag            Z
       Bit 0 - Carry Flag           C
    */
    Uint8  p;   /* Processor Status */
    
    /* General Purpose Registers */
    Uint8  a;   /* Accumulator */
    Uint8  x;
    Uint8  y;

} Registers;

#endif /* _REGISTERS_H */