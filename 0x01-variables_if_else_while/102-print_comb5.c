#include <stdio.h>

int main(void) {
  int i, j;
  for(i = 0; i <= 9; i++){
    putchar('0' + i);
    for(j = 0; j <= 9; j++){
      putchar('0' + j);
      if(i != 9 || j != 9){
        putchar(',');
        putchar(' ');
      }
    }
  }
  return 0;
}
