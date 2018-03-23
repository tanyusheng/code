/*
pat_basic_1026
*/
#include "stdio.h"
int main() {
  const int CLK_TCK = 100;
  long long c1,c2;
  int t,h,m,s;
  scanf("%lld%lld",&c1,&c2);
  if (c1<c2)
  {
    if (c2-c1>=50) {
      t = (c2-c1)/CLK_TCK+1;
    }else{
      t = (c2-c1)/CLK_TCK;
    }
    h=t/60/60;
    m=(t-(3600*h))/60;
    s=t-(3600*h)-(60*m);
    printf("%02d:%02d:%02d\n",h,m,s);
  }

  return 0;
}
