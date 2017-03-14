#include <stdio.h>
int main(){
const int a = 10;
int *p = &a;
*p =30;
printf("a == %d",a);


return 0;
}
