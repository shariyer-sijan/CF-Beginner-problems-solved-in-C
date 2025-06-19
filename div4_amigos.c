#include<stdio.h>
#include<string.h>
int main()
{
  int i, n ;
  char str[20] ;
  scanf("%d",&n) ;
for(i=1 ; i<=n ; i++){
    scanf("%s",str) ;
    str[strlen(str)-2]='i' ;
    str[strlen(str)-1]='\0' ;
  printf("%s\n",str);
}

    return 0;
}