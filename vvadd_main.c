// See LICENSE for license details.

//**************************************************************************
// Vector-vector add benchmark
//--------------------------------------------------------------------------
//
// This benchmark uses adds to vectors and writes the results to a
// third vector. The input data (and reference data) should be
// generated using the vvadd_gendata.pl perl script and dumped
// to a file named dataset1.h.

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1-large.h"
#include "readHPM.h"

//--------------------------------------------------------------------------
// vvadd function

void vvadd( int n, int a[], int b[], int c[] )
{
  int i;
  for ( i = 0; i < n; i++ )
    c[i] = a[i] + b[i];
}

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  int results_data[DATA_SIZE];

// #if PREALLOCATE
//   // If needed we preallocate everything in the caches
//   vvadd( DATA_SIZE, input1_data, input2_data, results_data );
// #endif


    setupCSR();
    readCSR(INIT);

  // Do the vvadd
  // setStats(1);
  vvadd( DATA_SIZE, input1_data, input2_data, results_data );
  // setStats(0);

    readCSR(FINAL);
    printCSR();

  // Check the results
  return 0;
}
