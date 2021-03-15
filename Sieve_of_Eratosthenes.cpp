/*Finding primes in Range [1:n]
Algorithm: We start from 2, and on each encounter of a prime number, we mark
its multiples as composite.
Time Complexity: O(n log log n)
*/
#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    int prime[n+1]={0};
    for (int i = 2; i <=n; i++)
    {
        if(prime[i]==0){
        for (int J = i*i; J <=n; J+=i)
        {
            prime[J]=1;
        }
    } 
    }
    for (int i = 2; i <=n; i++)
    {
        if(prime[i]==0)
        cout<<i<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
     int n;
     cin>>n;
     sieve(n);
    return 0;
}
