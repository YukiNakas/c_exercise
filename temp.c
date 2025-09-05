#include <stdio.h>
#include <stdlib.h>

float convert(float celcius)
{
    float   farenheit;

    farenheit = celcius * 9 / 5 + 32;
    return (farenheit);
}

int main(int ac, char **av)
{
    int celcius;

    if (ac != 2)
    {
        printf("Usage: ./temp INT_for_farenheit\n");
        return (1);
    }
    celcius = atoi(av[1]);
    printf("%d C = %0.2f F\n", celcius, convert(celcius));
    return (0);
}