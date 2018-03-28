#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i=0;
  int sum=0;
  while (i<=100) {
    sum+=i;
    i++;
  }
  printf("%d\n",sum);
  return 0;
}
