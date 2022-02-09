#include<stdio.h>

int input_side()
{ int l;
  printf("Enter the length of sides of the triangle\n");
  scanf("%d",&l);
  return l;
  
}
int check_scalene(int a,int b,int c)
{
  if (a==b || a==c)
  return 0;
  else if (b==a || b==c)
  return 1;
  else if(c==a || c==b)
  return 2;
  else
  return 3;
}
void output(int a,int b,int c,int isscalene)
{
   if(isscalene == 0)
  printf("triangle is not scalene");
  else if(isscalene == 1)
  printf("triangle is not scalene");
  else if(isscalene == 2)
  printf("triangle is not scalene");
  else
  printf("triangle is scalene");
}
int main()
{
  int a,b,c,s;
a = input_side();
b = input_side();
c = input_side();
s = check_scalene(a,b,c);
output(a,b,c,s);
return 0;
}