#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{   Triangle B;
  printf("enter the value of base and altitude: \n");
  scanf("%f %f",&B.base,&B.altitude );
  return B;
  }

void find_area(Triangle*B)
  {
    B->area=0.5 * B->base * B->altitude;
  }

void output(Triangle B)
{ 
  printf("the area of the traingle with base %f and altitude %f is %f",B.base,B.altitude,B.area);
}
int main()
{
  Triangle x;
  x=input_triangle();
  find_area(&x);
  output(x);
  return 0;
}
