#include<stdio.h>
int main()
{
 char x;
 scanf("%c",&x);

if((x>='A'&& x<='Z') || ( x>='a'&& x<='z'))
{
 if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
 {
    printf("vowel");
 }
 else {
    printf("consonent");
 }
}
else {
    printf("not alphabet");
}

    return 0;
}