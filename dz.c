#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100

int main()

{
    setlocale(LC_ALL, "RUS");

    int n, A;

    int array[N];

    printf("Введите количество положительных и отрицательных чисел:\n"); // запрашиваем кол-во + и - чисел
    scanf("%d", &n);
    // Ввод элементов массива
    printf("Введите %d целых чисел (положительных и отрицательных):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Введите %d число: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Введите число A: "); //запрашиваем число с каким будем сравнивать
    scanf("%d", &A);

    int count = 0; //считаем кол-во элементов массива, значения которых больше A
    for (int i = 0; i < n; i++) {
        if (array[i] > A) {
            count++;
        }
    }

    printf("Количество элементов массива больших чем %d: %d\n", A, count);

    return 0;
}