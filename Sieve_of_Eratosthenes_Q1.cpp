/*
count of numbers in the array which are divisble by K
INPUT 

First line contains N (size of the array)
Second line contain N integers
Third line contains Q , number of queries you have to answer
Q queries follow, each Query contains an integer K.
6
14 7 8 4 2 12 
3
8
7
4
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
#define double long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define endl '\n'
#define pii pair<int,int>
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define all(x) x.begin(),x.end()
#define fill(a,b) memset(a,b,sizeof(a))
#define sz(x) (int)x.size()
#define sp(x) setprecision(x)
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
 
#define mex 1000005
int freq[mex],ans[mex];
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
     
 
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int i=1;i<mex;i++)
    {
        for(int j=i;j<mex;j+=i) ans[i]+=freq[j];
    }
    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        cout<<ans[x]<<endl;
    }
 
}
 
// 14 7 8 4 2 12
// 2 4 7 8 12 14 14 14 17
// freq[14] = 3
 
// i -> freq[i] + freq[2*i] + freq[3*i] + ... -> max/i
// 1 - 1e6
 
// i=k; i<max; i+=k
// k, 2k, 3k,
 
// (max/1) + (max/2) + (max/3) + ... + (max/n)
 
// 1/1 + 1/2 + 1/3 + 1/4 + .... + 1/n -> log(n)
 
// k=7