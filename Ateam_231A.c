#include<stdio.h>
int main()
{
  int n ,j,i;
  scanf("%d",&n) ;
int arr[n][3] ;
  for(i=0 ; i<n ; i++){
   for(j=0 ; j<3 ; j++){
    scanf("%d", &arr[i][j]) ;
   }
  }
  int count=0 ;
for(i=0 ; i<n ; i++){
  if((arr[i][0]+arr[i][1] +arr[i][2])>=2){
     count++ ;
  }
}
printf("%d",count) ;

    return 0;
}