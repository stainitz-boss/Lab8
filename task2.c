#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int n, m;
    int sum = 0;
    int count = 0;
    int in = 0;
    int out = 0;

    printf("Введите n:");
    scanf(" %d", &n);
    printf("Введите m:");
    scanf(" %d", &m);

    for (int i = m; i >= n; i--)
    {
        sum += i;
        printf("Выполнено %d раз \n", count++);
        if (i >= 10 && i <= 99)
            in += 1;
        else
            out += 1;
    }
    printf("Сумма: %d\n", sum);
    printf("Количество: %d\n", count);
    printf("Количество в диапазоне (10-99): %d\n", in);
    printf("Количество не в диапазоне (10-99): %d\n", out);


    return 0;
}
