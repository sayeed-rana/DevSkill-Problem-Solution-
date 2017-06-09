/*
S.M. Sayeed
CSE'12 JUST

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
        long long int Dnum,i=0,j=0,size=100000000;
        int N;
		vector<long long int> total(size);
		//scanf("%lld,%lld",&Dnum,&Bnum);
		cin>>N;
		Dnum=(pow(2,N)-2);
		if(Dnum==0)
            cout<<N<<" "<<"000\n";
        else if(Dnum==1)
            cout<<N<<" "<<"001\n";
        else if(Dnum==2)
            cout<<N<<" "<<"010\n";
        else if(Dnum==3)
            cout<<N<<" "<<"011\n";

        else
        {
          while(Dnum>0)
		  {
			total[i]= Dnum%2;
			Dnum /= 2;
			i++;
          }
          cout<<N<<" ";
          j=i-1;int m=0;
          do
          {
             cout<<total[j];
             j--;
             m++;
          }while(m!=3);
          cout<<"\n";
        }

        }
     return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

string fromDecimal(int b){
    /*if(n==0) return "0";*/
    string res="";
    //int m=0;
    while(b>0)
    {
        char r= (b%2);
        res= r+res;
        printf("%d\n",res[0]);
        b/=2;
    };
    return res;
    //cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
            int n=0,b=0,c=0,z=0;
            //string ans=" ";
        scanf("%d",&n);
        cout<<n<<" ";
        b=(pow(2,n)-2);
		if(b==0)
            cout<<"000\n";
        else if(b==1)
            cout<<"001\n";
        else if(b==2)
            cout<<"010\n";
        else if(b==3)
            cout<<"011\n";
        else
        {
         //c=2;
         fromDecimal(b);
         string ans= fromDecimal(b);
         int length=ans.length();
         int k=length-1,l=0;
            do
            {
                printf("%d",ans[k]);
                l++;
            }while(l<3);
            cout<<"\n";

        }
        }


    return 0;
}

