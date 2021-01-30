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
  //  layer 0: dense_3
     if((!((x[1]==1 && x[4]==1 && x[0]==0) ||(x[1]==1 && x[6]==1 && x[2]==0) ||(x[1]==1 && x[7]==1 && x[3]==0) ||(x[2]==1 && x[8]==1 && x[0]==0) ||(x[2]==1 && x[9]==1 && x[1]==0) ||(x[2]==1 && x[11]==1 && x[3]==0) ||(x[3]==1 && x[12]==1 && x[0]==0) ||(x[3]==1 && x[13]==1 && x[1]==0) ||(x[3]==1 && x[14]==1 && x[2]==0) ||(x[4]==1 && x[1]==1 && x[5]==0) ||(x[4]==1 && x[2]==1 && x[6]==0) ||(x[4]==1 && x[3]==1 && x[7]==0) ||(x[6]==1 && x[8]==1 && x[4]==0) ||(x[6]==1 && x[9]==1 && x[5]==0) ||(x[6]==1 && x[11]==1 && x[7]==0) ||(x[7]==1 && x[12]==1 && x[4]==0) ||(x[7]==1 && x[13]==1 && x[5]==0) ||(x[7]==1 && x[14]==1 && x[6]==0) ||(x[8]==1 && x[1]==1 && x[9]==0) ||(x[8]==1 && x[2]==1 && x[10]==0) ||(x[8]==1 && x[3]==1 && x[11]==0) ||(x[9]==1 && x[4]==1 && x[8]==0) ||(x[9]==1 && x[6]==1 && x[10]==0) ||(x[9]==1 && x[7]==1 && x[11]==0) ||(x[11]==1 && x[12]==1 && x[8]==0) ||(x[11]==1 && x[13]==1 && x[9]==0) ||(x[11]==1 && x[14]==1 && x[10]==0) ||(x[12]==1 && x[1]==1 && x[13]==0) ||(x[12]==1 && x[2]==1 && x[14]==0) ||(x[12]==1 && x[3]==1 && x[15]==0) ||(x[13]==1 && x[4]==1 && x[12]==0) ||(x[13]==1 && x[6]==1 && x[14]==0) ||(x[13]==1 && x[7]==1 && x[15]==0) ||(x[14]==1 && x[8]==1 && x[12]==0) ||(x[14]==1 && x[9]==1 && x[13]==0) ||(x[14]==1 && x[11]==1 && x[15]==0))
))


 {
  float layer0[3];
  layer0[0]=0.8628399968147278 + (0.159090057015419)*x[0] + (-0.7417525053024292)*x[1] + (-0.14949074387550354)*x[2] + (-0.28373414278030396)*x[3] + (-0.7629321217536926)*x[4] + (0.37160590291023254)*x[5] + (-0.47924938797950745)*x[6] + (0.11229459196329117)*x[7] + (0.1541346311569214)*x[8] + (-0.14292149245738983)*x[9] + (-0.288357138633728)*x[10] + (-0.46369218826293945)*x[11] + (0.08623757213354111)*x[12] + (-0.934273898601532)*x[13] + (-0.5435408353805542)*x[14] + (0.3292520046234131)*x[15];
  layer0[1]=0.797065019607544 + (0.2828207314014435)*x[0] + (-0.043393708765506744)*x[1] + (-0.5625800490379333)*x[2] + (-0.40080732107162476)*x[3] + (-0.04065727815032005)*x[4] + (-0.18463487923145294)*x[5] + (-0.34690362215042114)*x[6] + (-0.7388769388198853)*x[7] + (-0.7730309963226318)*x[8] + (-0.06607771664857864)*x[9] + (0.3982318043708801)*x[10] + (-0.07607077807188034)*x[11] + (-0.6589037775993347)*x[12] + (0.038561269640922546)*x[13] + (0.004143700934946537)*x[14] + (0.12048293650150299)*x[15];
  layer0[2]=0.783273458480835 + (-0.3362816572189331)*x[0] + (-0.07581698894500732)*x[1] + (-0.06950857490301132)*x[2] + (-0.19705171883106232)*x[3] + (0.02668052539229393)*x[4] + (-0.0031884850468486547)*x[5] + (0.08832890540361404)*x[6] + (-0.22173191606998444)*x[7] + (-0.19908392429351807)*x[8] + (-0.7112367749214172)*x[9] + (0.19950373470783234)*x[10] + (-0.46935006976127625)*x[11] + (-0.3109242022037506)*x[12] + (0.16208669543266296)*x[13] + (-0.3942395746707916)*x[14] + (-0.3668935000896454)*x[15];

  //  layer 1: dense_2
  float layer1[2];
  layer1[0]=-0.6681933999061584 + (-0.025589371100068092)*layer0[0] + (-1.0088720321655273)*layer0[1] + (0.10617012530565262)*layer0[2];
  layer1[1]=0.6681934595108032 + (1.103035569190979)*layer0[0] + (0.09936860203742981)*layer0[1] + (0.9967709183692932)*layer0[2];
 



  if(layer1[0]>layer1[1])  {
    assert(0);
  }
  else
  {
	assert(1);
  }
}
}