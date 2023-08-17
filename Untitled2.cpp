#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr;

    // Gán ð?a ch? c?a ph?n t? ð?u tiên trong m?ng cho con tr?
    ptr = &numbers[0];

    // S? d?ng con tr? ð? truy c?p và in ra các ph?n t? trong m?ng
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i, *ptr);
        ptr++;  // Di chuy?n con tr? ð?n ph?n t? ti?p theo trong m?ng
    }

    return 0;
}

