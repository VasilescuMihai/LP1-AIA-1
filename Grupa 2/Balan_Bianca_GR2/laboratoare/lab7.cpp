#include <iostream>

int functie1()
{
    static int x = 0;
    x += 10;
    return x;
}

int functie2(){
int x = 0;
x += 10;
return x;
}

int main()
{
    int n = 10;

    printf("Functie cu variabila static: ");
    for(int i=0 ; i < n ; i++)
    {
        printf("%d", functie1());
    }

    printf("\nFunctie cu variabila non-static: ");
    for (int i=0 ; i<n ; i++)
    {
        printf("%d", functie2());
    }
}
