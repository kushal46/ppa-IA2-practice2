#include<stdio.h>
int input()
{  
  int n;
  printf("Enter the number: \n");
  scanf("%d",&n);
  return n;
}
int gcd(int a, int b)
{ 
  int gcd = 1;
  for(int i=2; i<=a && i<=b;i++)
    {
      if(a%1==0 && b%i==0)
      {
        gcd = i;
      }
    }
  return gcd;
}

void output(int a, int b, int gcd)
{
  printf("The G.C.D of %d and %d is %d\n",a,b,gcd);
}
int main()
{ int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}