#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin ("citire.txt");
    int x[5][5], i, j, n, o, y, v1[5], a=0, v2[5], b=0, v3[5], c=0, v4[5], d=0;
    fin>>n;

    //citire
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            fin>>x[i][j];

    //nr negative
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(x[i][j]<0)
                cout<<x[i][j]<<" pe linia "<<i<<" si coloana "<<j<<endl;
        }

    cout<<"nr deasupra diag sec: ";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(i+j<n+1)
                cout<<x[i][j]<<" ";
        }
    cout<<endl;

    cout<<"nr sub diag princ: ";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(i>j)
                cout<<x[i][j]<<" ";
        }
    cout<<endl;

    cout<<"nr palindrome de pe linii imp: ";
    for(i=1; i<=n; i=i+2)
        for(j=1; j<=n; j++)
        {
            o=0;
            y=x[i][j];
            while(y!=0)
            {
                o=o*10+y%10;
                y=y/10;
            }
            if(o==x[i][j])
                cout<<o<<" ";
        }
    cout<<endl;

    //
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(i<j && i+j<n+1)
            {
                v1[a]=x[i][j];
                a++;
            }
            if(i>j && i+j<n+1)
            {
                v2[b]=x[i][j];
                b++;
            }
            if(i>j && i+j>n+1)
            {
                v3[c]=x[i][j];
                c++;
            }
            if(i<j && i+j>n+1)
            {
                v4[d]=x[i][j];
                d++;
            }
        }
    for(i=0; i<a; i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    for(i=0; i<b; i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    for(i=0; i<c; i++)
        cout<<v3[i]<<" ";
    cout<<endl;
    for(i=0; i<d; i++)
        cout<<v4[i]<<" ";
    return 0;
}
