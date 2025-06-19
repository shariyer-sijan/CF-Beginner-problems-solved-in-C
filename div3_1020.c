#include<stdio.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d",&t) ;
   while(t--){
   
    int n,count=0 ;; 
    scanf("%d",&n );
    char s[n+1] ;
    scanf("%s",s) ;
    for(int i=0 ; i<strlen(s) ; i++){
    if(s[i]=='1'){
        count=count+ (n-1) ;
    }
    else {
        count++ ;
    }
    }
    printf("%d\n",count) ;
   }
    
    return 0;
}