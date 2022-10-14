#include<stdio.h>
#define PI 3.14
int calculatearea(float *r, float *area);
int main()
{
  float radius, Area;
  float *Radiusptr, *Areaptr;
 
  Radiusptr= &radius;
  Areaptr=&Area;
 
  printf("Please enter the radius of Circle: ");
  scanf("%f",Radiusptr);
 
  calculatearea(Radiusptr, Areaptr);
 
  printf("The Area of Cicle with radius %.3f = %.3f\n", *Radiusptr, *Areaptr);
 
  return 0;
}
int calculatearea(float *r, float *area)
{
  *area = PI * *r * *r;
}
