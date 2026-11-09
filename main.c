#include <stdio.h>

// دالة رياضية بسيطة لحساب حاصل الضرب القياسي لمتجهين ثنائيين
int dot_product(int x1, int y1, int x2, int y2) {
    return (x1 * x2) + (y1 * y2);
}

int main() {
    int vector_a[2] = {3, 4};
    int vector_b[2] = {2, 5};

    int result = dot_product(vector_a[0], vector_a[1], vector_b[0], vector_b[1]);

    printf("==========================================\n");
    printf("   Mathematical Systems Engineering - C   \n");
    printf("==========================================\n");
    printf("Vector A: (%d, %d)\n", vector_a[0], vector_a[1]);
    printf("Vector B: (%d, %d)\n", vector_b[0], vector_b[1]);
    printf("Dot Product (A . B) = %d\n\n", result);


    printf("Memory Address of Vector A in RAM: %p\n", (void*)&vector_a);
    printf("Memory Address of Vector B in RAM: %p\n", (void*)&vector_b);
    printf("==========================================\n");

    return 0;
}