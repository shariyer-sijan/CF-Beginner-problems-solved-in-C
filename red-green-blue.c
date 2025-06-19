#include<stdio.h>
int main()
{
char x;
scanf("%c",&x);
switch(x){

case 'r':
case 'R': printf("RED");
break;
case 'g':
case 'G': printf("GREEN");
break;
case 'b':
case 'B': printf("BLUE");
break;
    default : printf("BLACK");
}


    return 0;
}