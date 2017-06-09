/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{

	    int tc;
	    cin>>tc;
	    for(int n=0;n<tc;n++)
        {
        //string str;
        int Dnum,Bnum,i=0,m=0,size=10000;
		vector<int> total(size);
		//cin >>Dnum>>str>>Bnum;
		scanf("%d,%d",&Dnum,&Bnum);
		if(Dnum<Bnum)
        {
            cout<<"0\n";
        }
        else
        {
         while(Dnum>0)
		{
			total[i]= Dnum%Bnum;
			Dnum /= Bnum;
			//cout<<total;
			i++;
			//m=i;
		}

		for(int j=i-1;j>=0;j--)
        {
            if(total[j]<10)
            {
             cout<<total[j];
            }
            else
            {
                int a=total[j];
                cout<<char(a+55);
            }

        }
         cout<<"\n";
        }
        }
    return 0;
 }


