#include <stdio.h>

int main()
{
    int v1[3];
    int v2[3];
    int i;
    int dot_product;

    printf("Enter 3 components of the first vector\n");
    scanf("%d %d %d", &v1[0], &v1[1], &v1[2]);

    i = 0;
    dot_product = 0;
    while (i < 3)
    {
        dot_product += v1[i] * v2[i];
        i++;
    }
    return (0);
}