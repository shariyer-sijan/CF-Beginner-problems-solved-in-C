#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n) ;
   int a[n] ;
   for(int i=0 ; i<n ;i++){
    scanf("%d", &a[i] ) ;
   }
  int temp ;
   for(int i=0 ; i< n/2 ; i++){
     temp = a[i] ;
     a[i]=a[n-1-i] ;
     a[n-1-i] = temp ;
   }
   for(int i=0 ; i<n ; i++){
    printf("%d ", a[i]) ;
   }
    return 0;
}