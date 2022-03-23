#include<stdio.h>
#include<string.h>

void input_string(char*a)
{
  printf("Enter the string: ");
  scanf("%s",a);
}
char str_reverse(char*a,char*reverse)
{ 
   int n=strln(a);
  for(int i=0,j=n-1; j>=0;i++,j--)
    {
      reverse[i]=a[j];
    }

  void output(char*a,char*b)
  {
    printf("reverse of %s is %s",a,b)
  }

  int main()
  {
    char a[20],reverse[20];
    input_string(&a);
    str_reverse(&a,&reverse);
    output(&a,&reverse);
      return 0;
      }
}