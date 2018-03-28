#include <stdio.h>
int main() {
  int i;
  int sum=0;
for ( i = 1; i < 100; i++) {
  sum+=i;
  if (sum>1000) break;
}
  printf("%d\n",i);
  return 0;
}
