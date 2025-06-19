#include<stdio.h>
int main(){
  int t ;
  scanf("%d",&t) ;
  while(t--){
    int n,x ;
    scanf("%d %d",&n , &x );
    int arr[n] ,max ;
    scanf("%d",&arr[0]);
    max=arr[0] ;
    for(int i=1 ; i<n ; i++){
        scanf("%d",&arr[i]);
        if(max<(arr[i]-arr[i-1] )){
            max=arr[i]-arr[i-1] ;
        }
    }
    if(max<(x-arr[n-1])*2 ){
        max=(x-arr[n-1])*2 ;
    }
    printf("%d\n",max) ;
  }
    return 0;
}