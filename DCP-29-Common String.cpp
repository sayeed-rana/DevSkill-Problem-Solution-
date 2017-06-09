/* Dynamic Programming solution to find length of the
longest common substring */
#include<iostream>
#include<string.h>
using namespace std;

// A utility function to find maximum of two integers
int max(int a, int b)
{ return (a > b)? a : b; }


int LCSubStr(string X, string Y, int m, int n)
{
	int LCSuff[m+1][n+1];
	int result = 0;


	for (int i=0; i<=m; i++)
	{
		for (int j=0; j<=n; j++)
		{
			if (i == 0 || j == 0)
				LCSuff[i][j] = 0;

			else if (X[i-1] == Y[j-1])
			{
				LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
				result = max(result, LCSuff[i][j]);
			}
			else LCSuff[i][j] = 0;
		}
	}
	return result;
}

/* Driver program to test above function */
int main()
{
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
	string X,Y;
    cin>>X>>Y;
	int m = X.length();
	int n = Y.length();
    cout<<"Case "<<i+1<<": ";
	cout<<LCSubStr(X, Y, m, n);
	cout<<"\n";
    }
	return 0;
}

