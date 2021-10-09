// m^n = m*m*m*m....n times
// power(m,n) = m*m*m*m....(n-1) * m
// power(m,n) = pow(m,n-1) * m

#include <stdio.h>
int power(int m, int n)
{
 if(n==0)
 {
   return 1;
 }
 return power(m,n-1)*m;
}

int main(void) {
 printf("%d",power(2,4));
 return 0;
}
