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
	if(
(
(!((x[1]==1 && x[5]==1 && x[0]==0) ||(x[1]==1 && x[7]==1 && x[2]==0) ||(x[1]==1 && x[8]==1 && x[3]==0) ||(x[1]==1 && x[9]==1 && x[4]==0) ||(x[2]==1 && x[10]==1 && x[0]==0) ||(x[2]==1 && x[11]==1 && x[1]==0) ||(x[2]==1 && x[13]==1 && x[3]==0) ||(x[2]==1 && x[14]==1 && x[4]==0) ||(x[3]==1 && x[15]==1 && x[0]==0) ||(x[3]==1 && x[16]==1 && x[1]==0) ||(x[3]==1 && x[17]==1 && x[2]==0) ||(x[3]==1 && x[19]==1 && x[4]==0) ||(x[4]==1 && x[20]==1 && x[0]==0) ||(x[4]==1 && x[21]==1 && x[1]==0) ||(x[4]==1 && x[22]==1 && x[2]==0) ||(x[4]==1 && x[23]==1 && x[3]==0) ||(x[5]==1 && x[1]==1 && x[6]==0) ||(x[5]==1 && x[2]==1 && x[7]==0) ||(x[5]==1 && x[3]==1 && x[8]==0) ||(x[5]==1 && x[4]==1 && x[9]==0) ||(x[7]==1 && x[10]==1 && x[5]==0) ||(x[7]==1 && x[11]==1 && x[6]==0) ||(x[7]==1 && x[13]==1 && x[8]==0) ||(x[7]==1 && x[14]==1 && x[9]==0) ||(x[8]==1 && x[15]==1 && x[5]==0) ||(x[8]==1 && x[16]==1 && x[6]==0) ||(x[8]==1 && x[17]==1 && x[7]==0) ||(x[8]==1 && x[19]==1 && x[9]==0) ||(x[9]==1 && x[20]==1 && x[5]==0) ||(x[9]==1 && x[21]==1 && x[6]==0) ||(x[9]==1 && x[22]==1 && x[7]==0) ||(x[9]==1 && x[23]==1 && x[8]==0) ||(x[10]==1 && x[1]==1 && x[11]==0) ||(x[10]==1 && x[2]==1 && x[12]==0) ||(x[10]==1 && x[3]==1 && x[13]==0) ||(x[10]==1 && x[4]==1 && x[14]==0) ||(x[11]==1 && x[5]==1 && x[10]==0) ||(x[11]==1 && x[7]==1 && x[12]==0) ||(x[11]==1 && x[8]==1 && x[13]==0) ||(x[11]==1 && x[9]==1 && x[14]==0) ||(x[13]==1 && x[15]==1 && x[10]==0) ||(x[13]==1 && x[16]==1 && x[11]==0) ||(x[13]==1 && x[17]==1 && x[12]==0) ||(x[13]==1 && x[19]==1 && x[14]==0) ||(x[14]==1 && x[20]==1 && x[10]==0) ||(x[14]==1 && x[21]==1 && x[11]==0) ||(x[14]==1 && x[22]==1 && x[12]==0) ||(x[14]==1 && x[23]==1 && x[13]==0) ||(x[15]==1 && x[1]==1 && x[16]==0) ||(x[15]==1 && x[2]==1 && x[17]==0) ||(x[15]==1 && x[3]==1 && x[18]==0) ||(x[15]==1 && x[4]==1 && x[19]==0) ||(x[16]==1 && x[5]==1 && x[15]==0) ||(x[16]==1 && x[7]==1 && x[17]==0) ||(x[16]==1 && x[8]==1 && x[18]==0) ||(x[16]==1 && x[9]==1 && x[19]==0) ||(x[17]==1 && x[10]==1 && x[15]==0) ||(x[17]==1 && x[11]==1 && x[16]==0) ||(x[17]==1 && x[13]==1 && x[18]==0) ||(x[17]==1 && x[14]==1 && x[19]==0) ||(x[19]==1 && x[20]==1 && x[15]==0) ||(x[19]==1 && x[21]==1 && x[16]==0) ||(x[19]==1 && x[22]==1 && x[17]==0) ||(x[19]==1 && x[23]==1 && x[18]==0) ||(x[20]==1 && x[1]==1 && x[21]==0) ||(x[20]==1 && x[2]==1 && x[22]==0) ||(x[20]==1 && x[3]==1 && x[23]==0) ||(x[20]==1 && x[4]==1 && x[24]==0) ||(x[21]==1 && x[5]==1 && x[20]==0) ||(x[21]==1 && x[7]==1 && x[22]==0) ||(x[21]==1 && x[8]==1 && x[23]==0) ||(x[21]==1 && x[9]==1 && x[24]==0) ||(x[22]==1 && x[10]==1 && x[20]==0) ||(x[22]==1 && x[11]==1 && x[21]==0) ||(x[22]==1 && x[13]==1 && x[23]==0) ||(x[22]==1 && x[14]==1 && x[24]==0) ||(x[23]==1 && x[15]==1 && x[20]==0) ||(x[23]==1 && x[16]==1 && x[21]==0) ||(x[23]==1 && x[17]==1 && x[22]==0) ||(x[23]==1 && x[19]==1 && x[24]==0)))
&&
(!((x[1]==1  && x[5]==1)  ||   (x[2]==1  && x[10]==1)  ||   (x[3]==1  && x[15]==1)  ||   (x[4]==1  && x[20]==1) ||   (x[7]==1  && x[11]==1) || (x[8]==1 && x[16]==1) ||  (x[9]==1  && x[21]==1)  ||   (x[13]==1  && x[17]==1) ||  (x[14]==1  && x[22]==1) ||   (x[19]==1 && x[23]==1)))
)
){
if ( x[23] <= 0.5 ) {
if ( x[22] <= 0.5 ) {
if ( x[21] <= 0.5 ) {
if ( x[20] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
if ( x[4] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
if ( x[4] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
if ( x[4] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
if ( x[15] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[15] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
if ( x[24] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
if ( x[0] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (1);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[5] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
} else {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[16] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
}
} else {
if ( x[16] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (1);
}
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[7] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
} else {
if ( x[15] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[1] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[15] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (1);
} else {
if ( x[4] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (1);
} else {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
}
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
assert (1);
} else {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
} else {
if ( x[1] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[11] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
if ( x[8] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
if ( x[16] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
}
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[16] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
if ( x[4] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
assert (0);
}
}
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (0);
} else {
if ( x[11] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
}
} else {
if ( x[15] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
}
} else {
if ( x[15] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[16] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[5] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
assert (0);
} else {
if ( x[7] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
if ( x[16] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
if ( x[3] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
assert (0);
} else {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
if ( x[13] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[16] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (0);
} else {
if ( x[11] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[24] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
if ( x[18] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
} else {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
} else {
assert (1);
}
} else {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[7] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
if ( x[20] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (1);
}
} else {
assert (1);
}
} else {
assert (0);
}
} else {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
if ( x[16] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[17] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (0);
}
}
}
}
}
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
if ( x[24] <= 0.5 ) {
if ( x[0] <= 0.5 ) {
assert (1);
} else {
if ( x[15] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[18] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
if ( x[10] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (1);
}
} else {
assert (1);
}
} else {
if ( x[16] <= 0.5 ) {
assert (0);
} else {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
} else {
assert (1);
}
} else {
assert (0);
}
}
}
} else {
if ( x[15] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[20] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[10] <= 0.5 ) {
if ( x[20] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
if ( x[16] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[20] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
if ( x[11] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[14] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
if ( x[20] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
if ( x[21] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[21] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
}
} else {
if ( x[20] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[21] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (1);
} else {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[21] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
if ( x[16] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (1);
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[17] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
}
}
} else {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
if ( x[17] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
assert (0);
} else {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
if ( x[5] <= 0.5 ) {
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
} else {
assert (0);
}
}
} else {
if ( x[4] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[20] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
if ( x[9] <= 0.5 ) {
if ( x[19] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[5] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[21] <= 0.5 ) {
assert (0);
} else {
if ( x[9] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (1);
} else {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[10] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[19] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
if ( x[11] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
if ( x[5] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[10] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[11] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
if ( x[7] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (0);
}
}
} else {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[20] <= 0.5 ) {
assert (0);
} else {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[13] <= 0.5 ) {
if ( x[22] <= 0.5 ) {
assert (0);
} else {
if ( x[11] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
assert (0);
}
}
} else {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[21] <= 0.5 ) {
assert (0);
} else {
if ( x[7] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[11] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
if ( x[10] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
if ( x[22] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
assert (1);
} else {
if ( x[20] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[15] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[20] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
assert (1);
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[11] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (1);
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[17] <= 0.5 ) {
if ( x[22] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (1);
} else {
if ( x[5] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (1);
} else {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
assert (0);
}
}
} else {
if ( x[21] <= 0.5 ) {
assert (0);
} else {
if ( x[5] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
assert (1);
} else {
if ( x[21] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
}
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[21] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
if ( x[11] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[15] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (1);
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[14] <= 0.5 ) {
if ( x[22] <= 0.5 ) {
assert (0);
} else {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
if ( x[2] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[17] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[22] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
}
}
} else {
assert (0);
}
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
if ( x[15] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[20] <= 0.5 ) {
if ( x[16] <= 0.5 ) {
if ( x[17] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
if ( x[21] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
} else {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[11] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[21] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (1);
}
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
}
} else {
if ( x[22] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[22] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[7] <= 0.5 ) {
assert (1);
} else {
if ( x[11] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
assert (0);
}
}
} else {
if ( x[14] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[21] <= 0.5 ) {
assert (0);
} else {
if ( x[5] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
assert (1);
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[22] <= 0.5 ) {
assert (1);
} else {
assert (0);
}
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
assert (0);
}
}
}
}