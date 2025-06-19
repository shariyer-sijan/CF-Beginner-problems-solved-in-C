#include<stdio.h>
int main()
{
  int test,n , a, b, c ;
  scanf("%d",&test) ;
  while(test--){

    scanf("%d %d %d %d",&n , &a ,&b , &c) ;
    
    int i,day=0 ;

 
     day=(n/(a+b+c))*3 ;
     n=n%(a+b+c);

     if(n>0){
        n=n-a ;
        day=day+1 ;
      }
    if(n>0){
      n=n-b ;
      day=day+1 ;
    }
    if(n>0){
        n=n-c ;
        day=day+1 ;
    }
 
printf("%d\n",day) ;
  }

    return 0;
}