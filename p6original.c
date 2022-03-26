#include<stdio.h>
void input_string(char *a)
{ 
  printf("Enter the string: ");
  scanf("%s",a);
}
int str_reverse(char *a)
{ 
  int m=0;
  for(int i=0; a[i]!='\0' ;i++)
    {
      m++;
    }
  return m;
  }
  void output(char *a,char rev)
  {
    printf("reverse of the string is:\t");
    for(int i= rev-1;i>=0;i--)
      {
        printf("%c",a[i]);
      }
    printf("\n");
  }

  int main()
  {
    char a[20];
    char rev;
    int m;
    input_string(a);
    rev = str_reverse(a);
    output(a,rev);
  return 0;
   }
