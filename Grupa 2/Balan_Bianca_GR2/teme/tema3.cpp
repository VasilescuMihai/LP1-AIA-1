#include <iostream>

using namespace std;
int palindrom(int n){
 int nri=0,cop=0;
 cop=n;
 while(cop!=0){nri=nri*10+cop%10;
               cop=cop/10;}
 if(n==nri) return 1;
            else return 0;}

int main()
{
  int a[4][4],i,j,n,pozi=0,pozj=0,A[10],B[10],C[10],D[10],k=0;
    cout<<"introduceti numarul de linii si coloane ale matricei"<<" ";
    cout<<endl;
    cout<<"introduceti matricea";
    cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
               cin>>a[i][j];
               cout<<"elementele negative din matrice sunt:";
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(a[i][j]<0){cout<<a[i][j]<<" ";
                     pozi=i;
                     pozj=j;
                     cout<<"linia:"<<pozi<<" "<<"coloana:"<<pozj;
                     cout<<endl;}
                     cout<<"elementele de deasupra diagonale secundare sunt:";
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    if(i+j<n+1) cout<<a[i][j]<<" ";
                cout<<endl;
                cout<<"elementele palindroame sunt:" ;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
    if(palindrom(a[i][j])==1&&(i%2!=0))cout<<a[i][j]<<" ";}
                                       cout<<endl;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
                     if((i<j)&&(i+j<n+1)) A[++k]=a[i][j];
                     if ((i<j)&&(i+j>n+1)) B[++k]=a[i][j];
                     if ((i>j)&&(i+j<n+1)) C[++k]=a[i][j];
                     if((i>j)&&(i+j>n+1)) D[++k]=a[i][j];
    }


            cout<<"primul vector este:"<<A[k]<<" ";
            cout<<"Al doilea vector este:"<<B[k]<<" ";
            cout<<"Al treilea vector este:"<<C[k]<<" ";
            cout<<"Al patrulea vector este:"<<D[k]<<" ";
    return 0;
    }
