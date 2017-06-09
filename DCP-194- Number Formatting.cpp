#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int tc,i;
    cin>>tc;
    while(tc--)
    {
       long long int num1=0,num2=0;
       cin>>num1;
       num2=num1;
    int length = 1,chek[13],j=0;
    while(num1 /= 10)
    {
        chek[j]=num1%10;
        length++;
        j++;
    }

    if(length==10)
    {
      num2=num2+8800000000000;
    if(chek[7]==1)
    {
        cout<<num2<<" "<<"Citycell\n";
    }
    else if(chek[7]==5)
    {
        cout<<num2<<" "<<"Teletalk\n";
    }
    else if(chek[7]==6)
    {
        cout<<num2<<" "<<"Airtel\n";
    }
    else if(chek[7]==7)
    {
        cout<<num2<<" "<<"Grameenphone\n";
    }
    else if(chek[7]==8)
    {
        cout<<num2<<" "<<"Robi\n";
    }
    else
    {
        cout<<num2<<" "<<"Banglalink\n";
    }
    }
    else
    {
       if(chek[7]==1)
    {
        cout<<num2<<" "<<"Citycell\n";
    }
    else if(chek[7]==5)
    {
        cout<<num2<<" "<<"Teletalk\n";
    }
    else if(chek[7]==6)
    {
        cout<<num2<<" "<<"Airtel\n";
    }
    else if(chek[7]==7)
    {
        cout<<num2<<" "<<"Grameenphone\n";
    }
    else if(chek[7]==8)
    {
        cout<<num2<<" "<<"Robi\n";
    }
    else
    {
        cout<<num2<<" "<<"Banglalink\n";
    }
    }

    }
   return 0;

}
