#include<stdio.h>
int input_number()
{ int n;
  printf("Enter the number: \n");
  scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
  int c =0;
  for(int i =2; i<n/2;i++)
    {
      if(n%i ==0)
      c = 1;
      break;
    }
  return c;
}
void output(int n, int composite)
{
  if(composite == 0)
    printf("%d is not composite",n);
  else
    printf("%d is compoite",n);
  
}
int main()
{
  int n,c;
  n = input_number();
  c= is_composite(n);
  output(n,c);
  return 0;
  }
