#include <stdio.h>
int main()
{
  int area, length, breadth;
  printf("Enter length and breadth of the rectangle:");
  scanf("%d %d", &length, &breadth);
  //Logic for finding the area of rectangle
  area = length * breadth;
  printf("the area of the rectangle %d", area);
  return 0;
}