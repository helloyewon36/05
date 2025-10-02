#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  int op;
  int result;
  
  printf("Enter the calculation :");
  scanf("%i%c%i", &a, &op, &b);
  if (op == '+')
     result = a+b;
  else if (op == '-')
     result = a-b;
  else if (op == '*')
     result = a*b;
  else if (op == '/')
     result = a/b;
  
  
  switch(op)
  { 
            case '+':
                 result = a+b;
                 break;
            case '-':
                 result = a-b;
                 break;
            case '*':
                 result = a*b;
                 break;
            case '/':
                 result = a/b;
                 break;
            defalt:
                 break;
                 }
  
  printf("= %i", result);
  

 
    
    
  system("PAUSE");	
  return 0;
}
