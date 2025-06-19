
#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i, count0 = 0, count1 = 0;
    gets(s);
    for(i = 0; i < strlen(s); i++) {
        if(s[i] == '0') {
            count0 = count0 + 1;
            count1 = 0;
        } else {
            count0 = 0;
            count1 = count1 + 1;
        }
        if(count1 >= 7 || count0 >= 7) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
