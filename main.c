#include <stdio.h>

void salutation()
{
 printf("hello\n");
}

int greater(int x, int y)
{
  if(x > y)
  {
    return 1;  
  }
     else
  {
	return 0;
    }  
}
int main()
{
 salutation();

int num1 =4;
int num2 =5;

int age, limiteAge;

age =16;
limiteAge =18;
 // %d or %i is used for display integer variable ( int )

printf("%d\n", num1);
printf("%d\n", num2);

int resultat =0;
printf("%d\n", resultat);
resultat = greater(num1, num2);
printf("resultat = %i / greater =%d ",resultat, greater(4,5));


return 0;
}
