#include<bits/stdc++.h>
#include<ctime>
using namespace std;
long long int d=0;
double Stat,Finis;
void MOVE(int n,char nguon,char tg,char dich)
{
    if (n==1) {d++;//cout<<nguon<<"->"<<dich<<endl;}
}
    else
    {
        MOVE(n-1,nguon,dich,tg);MOVE (1,nguon,tg,dich);
        MOVE(n-1,tg,nguon,dich);
    }
}
int main()
{
    char nguon='A',dich='C',tg='B';
    int n;
    cin>>n;
    auto Stat=clock();
    MOVE(n,nguon,tg,dich);
    auto Finis=clock();
    cout<<d<<endl;
    cout<<"RunTime:"<<Finis-Stat;
}
