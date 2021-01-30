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

if ( !(x[0] == 0 && x[6] == 0 && x[12] == 0 && x[18] == 0 && x[24] == 0)){

if ( x[12] <= 0.5 ) {
if ( x[0] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[18] <= 0.5 ) {
if ( x[24] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (10);
}
}
}
