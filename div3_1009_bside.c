#include<stdio.h>
int main()
{
     int t,x,a,sum;
     scanf("%d",&t) ;
     
     while(t--){
        scanf("%d",&x) ;
        sum= -x+1 ;
        while(x--){
            scanf("%d",&a);
        sum=sum+a ;
        }
        printf("%d\n",sum) ;
     }
    return 0;
}