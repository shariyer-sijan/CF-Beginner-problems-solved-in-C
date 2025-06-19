#include<stdio.h>
int main()
{
 int n,j,i,count=0;
 scanf("%d",&n) ;
 
 char str[4] ;
 
 for(i=1 ; i<=n ; i++){
  scanf("%s",str ) ;
  if((str[0]=='+' && str[1]=='+' && str[2]=='X') || (str[0]=='X' && str[1]=='+' && str[2]=='+')){
    count++ ;
  }
  else if((str[0]=='-' && str[1]=='-' && str[2]=='X') || (str[0]=='X' && str[1]=='-' && str[2]=='-')){
    count-- ;
  }

}
printf("%d",count) ;
    return 0;
}