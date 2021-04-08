#include <stdio.h>
#include <math.h>
int main()
{
    const int a = 2;
    double x;
    printf("Enter x:");
    scanf("%lf", &x);
    if ((x >= -1.8) && (x <= 1.8))
    {
        double y = (pow(a, x) + pow(a, -x)) / 2;
        printf("y(x) = %lf\n", y);
        double z = sqrt(2 + y - y * y);
        printf("z(y) = %lf\n", z);

    }
    else
        printf("X value is incorrect!");
    return 0;
}
