/**
 * Memory.h - NES memory map structure.
 * 
 * This header contains the structure for our NES that lays out the
 * different sections of memory. It uses a union-struct combo so that
 * if you want to read or write to a specific address is memory, you 
 * can without having to know the specific region (e.g., memory[0x321A]).
 * This also allows you to write to specific memory regions if you need
 * to (like when we have to mirror our writes to the different RAM regions). 
 */

#ifndef _MEMORY_H
#define _MEMORY_H

#include "Constants.h"

typedef struct Memory
{
    union
    {
        struct
        {
            Uint8 zero_page[0x100];
            Uint8 stack[0x100];
            Uint8 ram[0x600];
            /* These are 3 mirrors in RAM from 0x800-0x2000. */
            Uint8 ram_mirror[3][0x800];
            /* We have 1028 mirrors of the 8 bytes of memory. */
            Uint8 io_registers[1028][0x8];
            Uint8 prg_rom_lower[0x4000];
            Uint8 prg_rom_upper[0x4000];
        };
        Uint8 memory[0x10000];
    };
} Memory;

#endif /* _MEMORY_H */