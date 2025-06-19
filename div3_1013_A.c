#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int i, n, x;
    scanf("%d", &n);
    int c0 = 0, c1 = 0, c3 = 0, c2 = 0, c5 = 0;
    int found = 0; 

    for (i = 1; i <= n; i++)
    {
      scanf("%d", &x);
      if (x == 0)
        c0++;
      else if (x == 1)
        c1++;
      else if (x == 3)
        c3++;
      else if (x == 2)
        c2++;
      else if (x == 5)
        c5++;

      if ((c0 >= 3 && c1 >= 1 && c3 >= 1 && c2 >= 2 && c5 >= 1) && found==0)
      {
        printf("%d\n", i );
        found = 1;
      }
    }

    if (!found)
    {
      printf("0\n");
    }
  }

  return 0;
}
