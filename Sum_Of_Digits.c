#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number, sum = 0, rem, temp;
  printf("Enter anumber:");
  scanf("%d", &number);
  temp = number;
  while (number != 0)
  {
    rem = number % 10;
    sum += rem;
    number = number / 10;
  }
  printf("Sum of digits of the number %d is %d ", temp, sum);
  return 0;
}
