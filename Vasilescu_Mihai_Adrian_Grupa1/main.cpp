#include <iostream>

using namespace std;

int main()
{
    int v[10],i,sumpar=0,sumimp=0;
    cout<<"Scrieti numerele vectorului"<<endl;
    for (i=0;i<10;i++){
    cin>>v[i];
    if (v[i]%2==0){
        sumpar=sumpar+v[i];
    }
    else
        sumimp=sumimp+v[i];
    }
    cout<<"suma nr :"<<sumimp<<endl;
    cout<<"suma nr pare:"<<sumpar<<endl;
    for (i=9;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}
