#include <iostream>

using namespace std;

int main()
{
   int v[10],n=10, suma=0;
   for (int i=0; i<n; i++)
   {
       cout<<"introduceti v: ";
       cin>>v[i];
       if(v[i]%2!=0)
        suma+=v[i];

   }
    cout<<"suma nr impare= "<<suma<<endl;
    for (int i=0; i<n; i++)
    {

     if (v[i]%2==0)
        cout<<"nr pare= "<<v[i]<<endl;

    }
    for (int i=n-1; i>=0; i--)
    {
        cout<< v[i];
    }

    return 0;
}

