#include <stdio.h>

int main()
{
    int a, b, c, x;
    float l, l1, l2;
    printf("Введите 3 параметра: \n");
    scanf("%d%d%d", &a, &b , &c);
    printf("Введите x: \n");
    scanf("%d", &x);
    if ((a < b) && (a < c))
    {
        if ((a % 7 == 0) && (a <= x))
        printf("min=%d \n", a);
        else
        {
            l = (float)a / (b + c);
            printf("l = %f \n", l);
        }
    }
    else
        if ((b < c) && (b < c))
        {
            if ((b % 7 == 0) && (b <= x))
                printf("min=%d \n", b);
            else
            {
                l1 = (float)b / (a + c);
                printf("l = %f \n", l1);
            }
        }
        else
            if ((c < b) && (c < a))
            {
                if ((c % 7 == 0) && (c <= x))
                    printf("min=%d\n", c);
                else
                {
                    l2 = (float)c / (a + b);
                    printf("l = %f\n", l2);
                }
          }
    return 0;          
}
