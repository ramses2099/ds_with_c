#ifndef POINT_H
#define POINT_H

typedef struct Point {
  double x;
  double y;
} Point;

/**
 * Initial and return a Point struct value*
 */
Point Point_value(double x, double y);

/**
 * Print a representation of a Point to stdout
 */
void Point_print(const Point *self);

/**
 *  Offset a Point by another Point.
 */
void Point_offset(Point *self, const Point *offset_by);

#endif // POINT_H
