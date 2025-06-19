#include<stdio.h>
int main()
{
  float angle1,angle2,angle3;
  scanf("%f %f %f",&angle1 ,&angle2 ,&angle3);

  if(angle1>0 && angle2>0 && angle3>0 && (angle1+angle2+angle3==180))
  {
    printf("triangle");
  }
else {
    printf("not");
}


    return 0;
}