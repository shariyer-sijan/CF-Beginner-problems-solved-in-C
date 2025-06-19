#include<stdio.h>
int main()
{
 char x;
 scanf("%c",&x);

if((x>='A'&& x<='Z') || ( x>='a'&& x<='z'))
{
    printf("alphabetic");
}
else if('0'<=x && x<='9'){
    printf("digit");
}
else{
    printf("special character");
}
return 0;
}