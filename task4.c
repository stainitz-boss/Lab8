#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double a = 0.0;
    double b = 2.0;
    double x, y, h;
    double ymin, xmin, ymax, xmax;

    x = 0;
    ymin = ymax = pow(x, 2) - pow(cos(M_PI * x), 2);
    xmin = xmax = x;

    printf("Введите h: ");
    scanf(" %lf", &h);

    printf("      x           y\n");
    printf("______________________\n");

    for (x = a; x <= b; x += h)
    {
        y = pow(x, 2) - pow(cos(M_PI * x), 2);
        printf("%10.6lf  %10.6lf\n", x, y);

        if (y < ymin)
        {
            ymin = y; xmin = x;
        }
        if (y > ymax)
        {
            ymax = y; xmax = x;
        }
    }
    printf("Минимальное значение y: %lf при x = %lf\n", ymin, xmin);
    printf("Максимальное значение y: %lf при x = %lf\n", ymax, xmax);

    return 0;
}
