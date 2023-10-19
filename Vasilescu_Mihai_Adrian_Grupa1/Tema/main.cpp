#include <iostream>
using namespace std;
int main()
{
    int v[4][4], i, j, a[2], b[2], c[2], d[2], p1, p2, p3, p4, sum = 0, k, m;
    cout << "Scrieti elementele matricii:" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> (v[i][j]);
        }
    }
    cout << "Elementele in ordine inversa de pe diagonala secundara sunt:";
    for (i = 3; i >= 0; i--)
        for (j = 3; j >= 0; j--)
            if (j + i == 3)
                cout << v[i][j] << " ";
    cout << endl
         << "Documentele de pe diagonala principala sunt:";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (j == i)
                cout << v[i][j] << " ";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j < 3)
                sum = sum + v[i][j];
    cout << endl
         << "Suma elementelor de deasupra diagonalei secundare este:" << sum;
    cout << endl
         << "Numerele palindrom de pe diagonala principala sunt:";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            k = 0;
            m = v[i][j];
            while (m != 0)
            {
                k = m % 10 + k * 10;
                m = m / 10;
            }
            if (i == j && v[i][j] == k)
                cout << v[i][j] << " ";
        }
    p1 = 0;
    cout << endl
         << "Elementele deasupra ambelor diagonale sunt:";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j < 3 && i < j)
            {
                p1++;
                a[p1] = v[i][j];
                cout << a[p1] << " ";
            }
    p2 = 0;
    cout << endl
         << "Elementele de sub ambele diagonale sunt:";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j > 3 && i > j)
            {
                p2++;
                b[p2] = v[i][j];
                cout << b[p2] << " ";
            }
    p3 = 0;
    cout << endl
         << "Elementele deasupra diagoneli principale si sub diagonala secundara sunt:";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j < 3 && i > j)
            {
                p3++;
                c[p3] = v[i][j];
                cout << c[p3] << " ";
            }
    p4 = 0;
    cout << endl
         << "Elementele deasupra diagonalei secundare si sub diagonala principala sunt:";
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j > 3 && i < j)
            {
                p4++;
                d[p4] = v[i][j];
                cout << d[p4] << " ";
            }

    return 0;
}
