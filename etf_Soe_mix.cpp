/*
Given the value of N, you will have to find the value of G. The meaning of G is given in the following code

G = 0;
for (i = 1; i < N; i++)
  for (j = i+1; j <= N; j++) 
    G += gcd(i, j);
Here gcd() is a function that finds the greatest common divisor of the two input numbers.
Input
The input file contains at most 20000 lines of inputs. Each line contains an integer N (1 < N < 1000001). The meaning of N is given in the problem statement. Input is terminated by a line containing a single zero.

Output
For each line of input produce one line of output. This line contains the value of G for the corresponding N. The value of G will fit in a 64-bit signed integer.

Example
Input:
10
100
200000
0

Output:
67
13015
143295493160
*/
#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'
 
using namespace std;
lli phi[1000001];
lli sum[1000001];
lli   f[1000001];
void init(int N)
{
	REP(i , N) phi[i] = i;
 
	for(int i=2;i<=N;i++)
	if(phi[i] == i)
	{
		for(int j=i;j<=N;j+=i)
		phi[j] /= i , phi[j] *= (i - 1);
	}
 
	for(int i=1;i<=N;i++)
	{
		for(int j=i;j<=N;j+=i)
		{
			f[j] += (i * phi[j/i]);
		}
	}
 
	REP(i , N)
	sum[i] = sum[i-1] + f[i] - i;
 
}
 
int main()
{
	init(1000000);
	int N;
 
	while(1)
	{
		cin>>N;
		if(N == 0) break;
 
		cout<<sum[N]<<endl;
	}
}