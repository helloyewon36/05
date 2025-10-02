#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer = 59;
  int num;
  int trial=0;
  
  do 
  { printf("input a numeric:");
    scanf("%d",&num);
    trial++;
    
    if(answer < num)
     printf("high!\n");
    else if (answer > num)
     printf("low!\n");
     
  }
    while (answer!=num);
    
  printf ("Congratulation! trials:%i\n", trial);

    
  system("PAUSE");	
  return 0;
}
