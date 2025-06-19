#include<stdio.h>
int main()
{
  int test,n , a, b, c ;
  scanf("%d",&test) ;
  while(test--){

    scanf("%d",&n) ;
    scanf("%d",&a) ;
    scanf("%d",&b) ;
    scanf("%d",&c) ;
    int copy=n ,i,day=0 ;

  while(copy){
     copy=copy-a ;
   day=day+1 ;
    if(0<copy){
      copy=copy-b ;
      day=day+1 ;
    }
    if(0<copy){
        copy=copy-c ;
        day=day+1 ;
    }
    if(copy<=0){
        break ;
    }
  }
printf("%d\n",day) ;
  }

    return 0;
}