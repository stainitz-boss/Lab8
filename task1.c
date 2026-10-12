#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    char c1, c2;

    printf("Введите количество символов:");
    scanf(" %d", &n);
    printf("Введите первый символ:");
    scanf(" %c", &c1);
    printf("Введите второй символ:");
    scanf(" %c", &c2);

    for (int start = 1; start <= 10; start++)
        putchar('*'); //подзадание 1 
    putchar('\n');


    putchar('+');
    for (int start = 1; start <= 10; start++)
        putchar('*');
    putchar('+'); //подзадание 2
    putchar('\n');


    for (int start = 0; start < n / 2; start++)
        putchar(c1);
    for (int start = n / 2; start < n; start++)
        putchar(c2); //подзадание 3
    putchar('\n');


    for (int start = 0; start < n / 2; start++, putchar('!'))
        putchar(c1);
    for (int start = n / 2; start < n; start++, putchar('!'))
        putchar(c2);//подзадание 4
    putchar('\n');

    return 0;
}