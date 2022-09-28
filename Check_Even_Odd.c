#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number:");
  //Variable is a memory location which is used to store the value
  scanf("%d",&number);
  /*
  /(division) --> used to store quotient
  %(modulus) used to store remainder
   5 / 2 = 2.5(quotient)
   5 % 2 = 1(remainder)
    = -->used to assign the value
    i.e a = 2;
    == --> used to compare two value
    a == b -->(if the value of a is equal to value of b then it return true other wise false) 
  */
 //Logic to check the number is even or odd
  if(number % 2 == 0){
    printf("%d is an evecn number.",number);
  }else{
    printf("%d is an odd number.",number);
  }
  return 0;
}