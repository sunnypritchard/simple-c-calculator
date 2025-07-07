#include <stdio.h>

int main(void)
{
  double num1 = 0.0;
  double num2 = 0.0;
  char operation = 0;

  printf("\nEnter the calculation\n");
  scanf("%lf%c%lf", &num1, &operation, &num2);

  switch (operation)
  {
    case '+':
      printf("=%lf\n", num1 + num2);
      break;

    case '-':
      printf("=%lf\n", num1 - num2);
      break;

    case '*':
      printf("=%lf\n", num1 * num2);
      break;

    case '/':
      if (num2 == 0)
        printf("\n\n\aDivision by zero error!\n");
      else
        printf("=%lf\n", num1 / num2);
      break;

    case '%':
      if ((long)num2 == 0)
        printf("\n\n\n\aDivision by zero error!\n");
      else
        printf("=%ld\n", (long)num1 % (long)num2);
      break;

    default:
      printf("=ld\n\n\aInvalid operation");
      break;
  }

  return (0);
}
