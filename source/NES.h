/**
 * NES.h - Main NES structure and functions.
 * 
 * This header includes the structure responsible for containing
 * registers, memory, stack, graphics, etc.
 * 
 * This header also includes the main functions that are used for
 * driving the emulator.
 */

#ifndef _NES_H
#define _NES_H

#include "Constants.h"
#include "Memory.h"

typedef struct NES
{
    Memory memory;
} NES;

#endif /* _NES_H */