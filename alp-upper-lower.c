#include<stdio.h>
int main()
{
 char x;
 scanf("%c",&x);

 if(x>='A'&& x<='Z')
 {
    printf("upper");
 }
 if(x>='a'&& x<='z')
{
    printf("lower");
 }


    return 0;
}