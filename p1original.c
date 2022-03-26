#include<stdio.h>

void input(float* base,float* height)
{
  printf("Enter the length of base and height\n");
  scanf("%f%f",base,height);
}

void find_area(float base,float height,float* area)
{
  *area = 0.5*base*height;
}

void output(float base,float height,float area)
{
  printf("The area of triangle with dimensions %f and %f is %f\n",base,height,area);
}
int main()
{
  float b,h,a;
  input(&b,&h);
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
}
