#include<stdio.h>
int main()
{
    int x;
printf("give a number");
scanf("%d",&x);

if((x%7==0 || x%11==0 ?x%7==0 && x%11==0 ?0:1:0 )  ){
    printf("yes");
}
else {
    printf("no");
}

    return 0;
}