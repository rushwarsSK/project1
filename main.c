#include <stdio.h>

int getMax(int n1, int n2);

int main() {
    printf("Nieco\n");
    printf("max(67, 5) = %d\n", getMax(67, 5));

    return 0;
}

int getMax(int n1, int n2) {
    return (n1 > n2) ? n1 : n2;
}