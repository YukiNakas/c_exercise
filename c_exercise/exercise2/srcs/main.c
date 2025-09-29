#include "../include/ex2.h"

int main()
{
    int length;
    int *v1;
    int *v2;

    printf("Enter length of vector\n");
    scanf("%d", &length);
    printf("---------------------------------------\n");
    if (length <= 0)
    {
        printf("Error: length should be greater than 0\n");
        return (1);
    }

    v1 = make_arr(length);
    if (!v1)
        return (1);

    v2 = make_arr(length);
    if (!v2)
    {
        free(v1);
        return (1);
    }

    return (calc_dot(v1, v2, length));
}