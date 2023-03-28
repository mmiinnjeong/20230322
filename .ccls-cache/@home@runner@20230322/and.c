#include <stdio.h>
main()
{
  int a=15;    //01111
  int b=20;    //10100
  int c = a&b; //00100 -> 컴퓨터는 10진수를 2진수로 인식

  printf("AND 연산 결과 : %d", c);
}