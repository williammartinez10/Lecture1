
#include <math.h>
#include "Triangle.h"

double Triangle::getArea()
{
  // This is using Heron's Formula for the area of a circle
  double s = (this->side1 + this->side2 + this->side3) / 2.0;
  double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
  return area;

}

bool Triangle::largerThan(Triangle t2) 
{
  return this->getArea() > t2.getArea();
}