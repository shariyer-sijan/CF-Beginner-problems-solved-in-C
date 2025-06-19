#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t ;
  scanf("%d",&t) ;
  while(t--){

  int n,k,p ;
  scanf("%d %d %d",&n , &k , &p);
 k=abs(k);
 p=abs(p) ;
  if(n*p <k ){
    printf("%d \n", -1) ;
  }
  else{
    if( abs(k)%p==0){
      printf("%d \n", k/p) ;
    }
    else{
      printf("%d \n",(k/p)+1) ;
    }
  }
  }
  return 0;
}