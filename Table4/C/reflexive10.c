#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
void check()
{

    __CPROVER_bool x[16];
	if(x[0] == 1 && x[5] == 1 && x[10] == 1 && x[15] == 1)
{
	if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (0);
} else {
if ( x[5] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
}
}