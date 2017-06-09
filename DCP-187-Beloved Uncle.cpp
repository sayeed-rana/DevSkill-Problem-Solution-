#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choclete=0,day=0,i;
    while(cin>>choclete)
    {
        int a[100];
        a[0]=1;
        a[1]=2;
        if(choclete==1)
        {
            cout<<"Showmic brings 1 chocolate on 1st day.\n";
        }
        else if(choclete==2)
        {
            cout<<"Showmic brings 2 chocolate on 2nd day.\n";
        }
        else if(choclete>=3)
        {
        i=2;
        do
        {
            a[i]=(a[i-1]+a[i-2]);
            day++;
            i++;
        }while(a[i]!=choclete);
        }
        if(choclete>=3)
        {
            cout<<"Showmic brings "<<a[day+2]<<" chocolate on "<<day+2<< "day.\n";
        }
    }
    return 0;
}
