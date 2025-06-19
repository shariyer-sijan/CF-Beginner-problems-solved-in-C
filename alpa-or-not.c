#include<stdio.h>
int main()
{
 char x;
 scanf("%c",&x);

 if((x>='A'&& x<='Z') || ( x>='a'&& x<='z'))
 {
    printf("alphabet");
 }
 else {
    printf("not alphabet");
 }


    return 0;
}