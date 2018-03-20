/*
  pat_basic_1011
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int T;
  int t = 1;
  scanf("%d\n",&T);
  while (T--) {
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if (a+b>c) {
      printf("Case #%d: true\n",t++);
    }else{
      printf("Case #%d: false\n",t++);
    }

  }
  return 0;
}
