#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n) ;
   int a[n] ;
   for(int i=0 ; i<n ;i++){
    scanf("%d", &a[i] ) ;
   }
   int rem ;
   scanf("%d",&rem ) ;
   
   for(int i=rem ; i<n-1 ; i++){
    a[i] = a[i+1] ;
   }
   for(int i=0 ; i<n ; i++){
    printf("%d ", a[i] ) ;
   }
    return 0;
}