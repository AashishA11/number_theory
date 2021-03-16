/*
In number theory, the totient φ of a positive integer n is defined to be the number of positive integers less than or equal to n that are coprime to n.

Given an integer n (1 <= n <= 10^6). Compute the value of the totient φ.
input
5 //t
1
2
3
4
5
output
1
1
2
2
4
Φ(1) = 1  
gcd(1, 1) is 1

Φ(2) = 1
gcd(1, 2) is 1, but gcd(2, 2) is 2.

Φ(3) = 2
gcd(1, 3) is 1 and gcd(2, 3) is 1

Φ(4) = 2
gcd(1, 4) is 1 and gcd(3, 4) is 1

Φ(5) = 4
gcd(1, 5) is 1, gcd(2, 5) is 1, 
gcd(3, 5) is 1 and gcd(4, 5) is 1

Φ(6) = 2
gcd(1, 6) is 1 and gcd(5, 6) is 1, 
*/
 #include<bits/stdc++.h>
using namespace std;
#define int long long
int etf(int n)
{
    int res=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res/=i;
            res*=(i-1);
            while(n%i==0)
            n/=i;
        }
    }
    if(n>1)
    {res/=n;
    res*=(n-1);
    }
    return res;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<etf(n)<<endl;
    }
 
} 