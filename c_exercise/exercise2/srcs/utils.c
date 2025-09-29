#include "../include/ex2.h"

int calc_dot(int *v1, int *v2, int length)
{
    int i;
    int ans;

    i = 0;
    ans = 0;
    while (i < length)
    {
        ans += v1[i] * v2[i];
        i++;
    }
    printf("Dot product is: %i\n", ans);
    free(v1);
    free(v2);
    return (0);
}

int *make_arr(int length)
{
    int *arr;
    int i;

    arr = (int *)malloc(length * sizeof(int));
    if (!arr)
    {
        printf("Erorr: memeory allocation failed for vector\n");
        return (NULL);
    }
    printf("Enter %d components of the vector\n", length);
    i = 0;
    while (i < length)
    {
        scanf("%d", (arr + i));
        i++;
    }
    printf("---------------------------------------\n");
    return (arr);
}