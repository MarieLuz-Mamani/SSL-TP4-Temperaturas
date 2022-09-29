#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "./dependecia/Conversion.h"

#include <math.h>

/* --- funcion compare double ---*/
int compare_double(double x, double y) {
   double epsilon = 0.1f;
   if(fabs(x - y) < epsilon)
      return 0; //true
      return 1; //false
  }
// usamos a epsilon como el rango de error que 
// puede tenerla diferencia entre  ambos double

int main () {
  printf("\n-- Inició de pruebas --\n");
  assert(farenheit(0) == 32);
 if(compare_double(celsius(200), 93.33)==0) {
    printf("200°F es igual a 93.33°C ");
  };
  assert(compare_double(celsius(200),93.33) ==0); // 200°F es igual a 93.33°C
  assert(compare_double(celsius(270),132.22) ==0); // 270°F es igual a 132.22°C
  assert(compare_double(celsius(271),132.77) ==0); // 271°F es igual a 132.77°C
  
  assert(compare_double(celsius(43), 6.11)  ==0);    // 43°F es igual a 6.11°C
  assert(compare_double(celsius(44), 6.66)  ==0);    // 44°F es igual a 6.66°C
  assert(compare_double(celsius(392), 200) ==0 ); // 392°F es igual a 200°C

  assert(compare_double(farenheit(93), 199.4) ==0 );  // 93°C es igual a 199.4°F
  assert(compare_double(farenheit(6), 42.8) ==0 );  // 6°C es igual a 42.8°F
  assert(compare_double(farenheit(6,11), 43) ==0 );    // 6°C es igual a 43°F
  assert(compare_double(farenheit(6.66), 44) ==0 );    // 6°C es igual a 44°F
  assert(compare_double(farenheit(200), 392) ==0 ); // 200°C es igual a 392°F

  printf("-- Paso las pruebas --");
 
 return 0;
} 
