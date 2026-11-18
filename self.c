/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа № 16
 * Назначение: Самостоятельная работа. Подсчёт всех вхождений key (count_key) и поиск первого индекса (first_key)
 */

#include <stdio.h>

int count_key(const int a[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            count++;
        }
    }
    return count;
}

int first_key(const int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int a[] = {2, 7, 2, -1, 2};
    int n = (int)(sizeof a / sizeof a[0]);

    printf("key=2 -> Количество %d; индекс %d\n", count_key(a, n, 2), first_key(a, n, 2));
    printf("key=7 -> Количество %d; индекс %d\n", count_key(a, n, 7), first_key(a, n, 7));
    printf("key=9 -> Количество %d; индекс %d\n", count_key(a, n, 9), first_key(a, n, 9));
    printf("n=0, key=2 -> Количество %d; индекс %d\n", count_key(a, 0, 2), first_key(a, 0, 2));

    return 0;
}
