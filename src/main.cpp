#include <LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <math.h>
#endif
int main() 
{
double wynik = 0;
double pi = 3.14;
#ifdef USE_TRIGONOMETRY_DEGREE
wynik = sin_degree(15); 
#else
wynik = sin(pi/4);
#endif
}
