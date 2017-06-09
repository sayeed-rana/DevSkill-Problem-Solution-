#include<iostream>
using namespace std;
int main()
{
    int tc,mem,hours;
    while(cin>>hours>>mem)
    {

        int m1[mem],total=0,all=0;
        for(int i=0;i<mem;i++)
        {
            cin>>m1[i];
            total+=m1[i];
        }
        if(total>=hours)
        {
            cout<<"Project will finish within 1 day.\n";
        }
        else
        {
            int rana=2;
            do
            {
                all=total*rana;
                rana++;
            }while(all<hours);
            cout<<"Project will finish within "<<rana-1<<" days.\n";
        }
    }
    return 0;
}
