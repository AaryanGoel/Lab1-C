// author: Aaryan Goel apg5729@psu.edu
// collaborator: Harshal Mahajan hfm5238@psu.edu
// Siddhartha Kollati szk6147@psu.edu
// Juma Al-Maskari jpa5637@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *Celsius = readline("Enter temperature in celsius: ");
  double Dc = atof(Celsius);
  double fahrenheit = (Dc* 9/5 + 32 );

  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", Dc, fahrenheit);
  return 0;
}