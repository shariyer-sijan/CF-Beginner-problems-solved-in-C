#include<stdio.h>
int main()
{
    int t ,x,y,s,count ;
    scanf("%d",&t) ;
    while(t--){
        count=0 ;
        scanf("%d %d %d",&x , &y , &s) ;
       s=s+1 ;
       s=s%(x+y) ; 
       if(s==0){
        printf("YES\n") ;
        continue ;
       }
            s=s-x ;
            if(s<=0){
                printf("NO\n") ;
            }
           else {
                printf("YES\n") ;
            }
    }
    return 0;
}