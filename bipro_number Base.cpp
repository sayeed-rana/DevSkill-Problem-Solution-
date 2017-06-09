#include <bits/stdc++.h>
using namespace std;

char toChar(int num){
    return (num >= 0 && num <= 9) ? (char)(num + '0') : (char)(num - 10 + 'A');
}

string fromDecimal(int n, int b){
    if(n==0) return "0";
    string res="";
    while(n>0){
        char r= toChar(n%b);
        res= r+res;
        n/=b;
    }
    return res;
}
int main(){
    int t, n, b;
    cin>>t;
    while(t--){
        scanf("%d,%d",&n,&b);
        fromDecimal(n,b);
        string ans= fromDecimal(n,b);
        cout<<ans<<endl;
    }
}
