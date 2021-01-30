#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
void check()
{

    __CPROVER_bool x[25];
  //  layer 0: dense_46
if ( (x[0] == 1 && x[6] == 1 && x[12] == 1 && x[18] == 1 && x[24] == 1)){

if ( x[6] <= 0.5 ) {
assert (0);
} else {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (0);
} else {
if ( x[18] <= 0.5 ) {
assert (0);
} else {
if ( x[24] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
}
}
}
