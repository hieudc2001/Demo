#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr;

    // G�n �?a ch? c?a ph?n t? �?u ti�n trong m?ng cho con tr?
    ptr = &numbers[0];

    // S? d?ng con tr? �? truy c?p v� in ra c�c ph?n t? trong m?ng
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i, *ptr);
        ptr++;  // Di chuy?n con tr? �?n ph?n t? ti?p theo trong m?ng
    }

    return 0;
    hieu 
}

