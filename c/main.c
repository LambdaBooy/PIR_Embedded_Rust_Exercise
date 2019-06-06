#include "shape.h"
#include <stdio.h>

int main() {

  Circle c;
  c.radius = 10.0;

  Triangle t;
  t.a = 5.0;
  t.b = 5.0;
  t.c = 5.0;
  t.ha = 4.33;

  printf("circle circumference: %f\n", calc_circle_circumference(&c));
  printf("circle area: %f\n", calc_circle_area(&c));

  printf("triangle circumference: %f\n", calc_triangle_circumference(&t));
  printf("triangle area: %f\n", calc_triangle_area(&t));

  return 0;
}
