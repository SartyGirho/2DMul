#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,mul,k;

    cout<<"ENTER THE FIRST ARRAY OF NUMBERS "<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }cout<<endl;
    }
    cout<<"ENTER THE SECOND ARRAY OF NUMBERS "<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>b[i][j];
        }cout<<endl;
    }
for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            mul=0;
            for(k=0;k<=2;k++)
                mul=mul+a[i][k]*b[k][j];
            c[i][j]=mul;
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<c[i][j]<<("\t");
        }cout<<endl;
    }
        return 0;
    }
