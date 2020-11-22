#include <stdio.h>
#include <stdlib.h>
main(){
 int *p1, *p2, valor1=15, valor2=10;
p1=&valor1;
p2=&valor2;
(*p1)++;
(*p1)+=6;
(*p2)+=4;
printf("\n %d",valor1);
 printf("\n %d",*p2);
printf("\n %d",valor2);
printf("\n %d",*p1);
valor2=3;
(*p2)+=10;
(*p1)-=5;
(*p2)-=2;
*p2=*p1+6;
 printf("\n %d",*p2);
valor1--;
p1=p2;
(*p1)+=15;
p2=&valor1;
printf("\n %d",*p1);
printf("\n %d",*p2);
}
