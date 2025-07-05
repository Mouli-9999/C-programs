// convert binary to decimal
#include <stdio.h>
#include <math.h>
int convert(int);

int main() {

  int n;

  printf("Enter a binary number: ");
  scanf("%d", &n);
  convert(n);
}
int convert(int n)
{
  int dec = 0, i = 0, rem;
  while (n != 0) {
    rem = n%10;
    n=n/10;
    dec=dec+rem*pow(2, i);
    i++;
}
printf("Decimal is %d",dec);
}