#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string numbers_str;
    int tc;
    cin>>tc;
    cin.ignore();
    int m;
    for(m=1;m<=tc;m++)
    {
    getline(cin, numbers_str, '\n' );

    int number,k=0,numA[50],r=0;
    for (istringstream numbers_iss( numbers_str );
          numbers_iss >> number; ) {
        //cout << number << ' '<<"\n";
        numA[k]=number;
        k++;
        r=k;
    }
       int temp=numA[0];
        int small=numA[0];
        for(int i=0;i<r;i++)
        {
            if(numA[i]>=temp)
            {
                temp=numA[i];
                //fres=name[i];
            }
            if(numA[i]<=small)
            {
                small=numA[i];
                //lres=name[i];
            }
        }
        cout<<"Case "<<m<<": "<<"Among "<<r<<" numbers "<<temp<<" is maximum and "<<small<<" is minimum\n";

    }
    return 0;
}
