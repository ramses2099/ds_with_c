#include "Point.h"
#include <stdio.h>

Point Point_value(double x, double y) {
  Point initialized = {x, y};
  return initialized;
}

void Point_print(const Point *self) { printf("%f, %f\n", self->x, self->y); }

void Point_offset(Point *self, const Point *point_offset) {
  self->x += point_offset->x;
  self->y += point_offset->y;
}
