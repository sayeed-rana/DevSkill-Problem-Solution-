#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int tc,i;
    cin>>tc;
    while(tc--)
    {

    char name[50],r='r';
    int j=0;
        cin>>name;
        int length = strlen(name);
        for(i=0;i<length;i++)
        {
            if(name[i]==r)
            {
              j++;
            }
        }
        if(j>=1)
        {
           cout<<"Not vely easy\n";
        }
        else
            cout<<"Vely easy\n";

    }
    return 0;
}
