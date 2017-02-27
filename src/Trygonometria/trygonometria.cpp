#include "trygonometria.h"
#include <math.h>
double sin_degree(double degree) {
//zamiana stopni na radiany: 
double pi = 3.14;
double radian=degree*pi/180.0;
return sin(radian); 
}
double cos_degree(double degree) { 
double pi = 3.14;
double radian=degree*pi/180.0;
return cos(radian); 
}