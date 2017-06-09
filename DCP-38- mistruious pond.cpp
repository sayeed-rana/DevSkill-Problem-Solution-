#include<iostream>
using namespace std;
int main()
{
    int tc,inc,i,j;
    cin>>tc;
    while(tc--)
    {
        cin>>inc;
        int minute[inc];
        string name[inc],fres,lres;
        for(i=0;i<inc;i++)
        {
            cin>>name[i];
            cin>>minute[i];
        }
        int temp=minute[0];
        int small=minute[0];
        for(int i=0;i<inc;i++)
        {
            if(minute[i]>=temp)
            {
                temp=minute[i];
                fres=name[i];
            }
            if(minute[i]<=small)
            {
                small=minute[i];
                lres=name[i];
            }
        }
        cout<<fres<<" "<<lres<<"\n";
    }
    return 0;
}
