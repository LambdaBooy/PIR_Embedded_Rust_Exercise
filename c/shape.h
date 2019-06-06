#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14159265358979323846

typedef struct Circle {
  double radius;
} Circle;

typedef struct Triangle {
  double a;
  double b;
  double c;
  double ha;
} Triangle;

double calc_circle_circumference(Circle *c);
double calc_circle_area(Circle *c);

double calc_triangle_circumference(Triangle *t);
double calc_triangle_area(Triangle *t);

#endif
