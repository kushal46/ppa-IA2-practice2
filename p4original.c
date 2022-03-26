#include<stdio.h>
int input_array_size()
{ 
  int n;
  printf("Enter the size of the array: \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{ 
  printf("Enter the numbers: \n");
  for(int i=0;i<n;i++)
    {
  scanf("%d",&a[i]);
    }
}
int is_composite(int n)
{
  int c=0;
  for(int i=2; i<=n/2 ;i++)
    {
      if(n%i == 0)
      {  c=1;
      break;
      }
    }
  return c;
}
int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      if( is_composite(a[i]))
      {
        sum = sum + a[i];
      }
    }
  return sum;
}

void out_put(int sum)
{
  printf("the sum of the composite numbers is %d\n",sum);
}

int main()
{ int n,c,sum=0;
  int a[n];
  n= input_array_size();
  input_array(n,a);
  c = is_composite(n);
  sum = sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}