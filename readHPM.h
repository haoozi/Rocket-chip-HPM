#ifndef _READHPM_H_
#define _READHPM_H_


#include "encoding.h"
#include <stdint.h>



enum State {
    INIT,
    FINAL
};


#define NUM_COUNTERS (10)



uint32_t readCNTEN();

void setupCSR();

void readCSR(enum State hpm_current_state);

void printCSR();

#endif
