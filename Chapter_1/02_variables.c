#include <stdio.h>

int main() {

    int a = 6;
    float b = 10.5;
    char c = 'A';
    double d = 20.55;

    printf("a: value=%d, size=%zu bytes, address=%p\n",
           a, sizeof(a), (void*)&a);

    printf("b: value=%.2f, size=%zu bytes, address=%p\n",
           b, sizeof(b), (void*)&b);

    printf("c: value=%c, size=%zu bytes, address=%p\n",
           c, sizeof(c), (void*)&c);

    printf("d: value=%.2f, size=%zu bytes, address=%p\n",
           d, sizeof(d), (void*)&d);

    return 0;
}