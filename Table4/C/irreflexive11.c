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
		if((x[0] == 0 && x[5] == 0 && x[10] == 0 && x[15] == 0)
){

	if ( x[15] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[0] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
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
}
	
	

}