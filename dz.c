#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100

int main()

{
    setlocale(LC_ALL, "RUS");

    int n, A;

    int array[N];

    printf("������� ���������� ������������� � ������������� �����:\n"); // ����������� ���-�� + � - �����
    scanf("%d", &n);
    // ���� ��������� �������
    printf("������� %d ����� ����� (������������� � �������������):\n", n);
    for (int i = 0; i < n; i++) {
        printf("������� %d �����: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("������� ����� A: "); //����������� ����� � ����� ����� ����������
    scanf("%d", &A);

    int count = 0; //������� ���-�� ��������� �������, �������� ������� ������ A
    for (int i = 0; i < n; i++) {
        if (array[i] > A) {
            count++;
        }
    }

    printf("���������� ��������� ������� ������� ��� %d: %d\n", A, count);

    return 0;
}