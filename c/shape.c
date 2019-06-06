#include "shape.h"
#include <stdio.h>

double calc_circle_circumference(Circle *c) {
  return 2 * PI * c->radius;
}

double calc_circle_area(Circle *c) {
  return c->radius * c->radius * PI;
}

double calc_triangle_circumference(Triangle *t) {
  return t->a + t->b + t->c;
}
double calc_triangle_area(Triangle *t) {
  return 0.5 * t->a * t->ha;
}
