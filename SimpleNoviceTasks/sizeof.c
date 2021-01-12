#include<stdio.h>

int main(void)
{
  int a;
  char b;
  float c;
  double d;

  printf("Enter a single integer:\n");
  scanf("%d", &a);

  printf("Enter a character:\n");
  scanf("%c\n", &b);

  printf("Enter a floating point number:\n");
  scanf("%f\n", &c);

  printf("Enter a double (long float):\n");
  scanf("%lf\n", &d);

  printf("The size of integer is: %lu bytes.\n", sizeof(a));
  printf("The size of char is: %lu bytes. \n",sizeof(b));
  printf("The size of float is: %lu bytes. \n",sizeof(b));
  printf("The size of double is: %lu bytes. \n",sizeof(b));
}
