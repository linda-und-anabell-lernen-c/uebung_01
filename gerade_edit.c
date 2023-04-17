#include <stdio.h>

int main(void)
{
  printf("Bitte geben Sie eine Zahl ein:\n");
  int n;
  scanf("%i", &n);
  printf("Die Zahl ist %s", n % 2 == 0 ? "gerade" : "ungerade");
}