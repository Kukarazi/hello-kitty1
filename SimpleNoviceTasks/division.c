#include<stdio.h>

int main(void)
{
  int divident,divider,quotient,n; // n is a remainder

  printf("Enter divident first: \n");
  scanf("%d", &divident);

  printf("Enter divider: \n");
  scanf("%d", &divider);

  quotient = divident/divider;
  n = divident % divider;

  printf("Quotient will be %d and remainder will be %d\n", quotient , n);
}
