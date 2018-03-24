/*
pat_basic_1046
不能写多余的转义换行符，会导致无法正常输出结果
*/
#include "stdio.h"
int main() {
  int N,i;
  int As,Am,Bs,Bm;  //s喊；m划
  int A,B=0;
  scanf("%d",&N);

  for ( i = 0; i < N; i++) {
    scanf("%d%d%d%d",&As,&Am,&Bs,&Bm);
      if (Am==As+Bs && Bm!=As+Bs) {
          B++;
        }else if (Bm==As+Bs&&Am!=As+Bs) {
          A++;
      }
    }
  printf("%d %d\n",A,B);
  return 0;
}
