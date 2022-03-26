#include<stdio.h>

int input_side()
{ int l;
  printf("Enter the length of sides of the triangle\n");
  scanf("%d",&l);
  return l;
  
}
int check_scalene(int a,int b,int c)
{
  int is;
  if(a!=b && b!= c && c!=a)
  {
    return is;
  }
  }
void output(int a,int b,int c,int isscalene)
{
   if(a!=b && b!= c && c!=a)
  printf("triangle is scalene");
  else
  printf("triangle is not scalene");
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