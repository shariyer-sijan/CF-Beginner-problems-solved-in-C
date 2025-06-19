#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,max,min;
  scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c){    
  printf("max is a");
  if(c>b){
    printf("min is b");
    printf("\n diff is %d",a-b);
  }
  else {
    printf("min is c");
    printf("\n diff is %d",a-c);
  }
}
else if(b>c){ 
  printf("max is b");
  if(c>a){
    printf("min is a");
    printf("\n diff is %d",b-a);
  }
  else {
    printf("min is c");
    printf("\n diff is %d",b-c);
  }
}
else if(c>b) {
  printf("max is c");
   if(a>b){
  printf("min is b");
  printf("\n diff is %d",c-b);
   }
   else {
    printf("min is a");
    printf("\n diff is %d",c-a);
   }
}
else {
  printf("numbers are equal");
  printf("diff is 0");
}
 return 0;
}