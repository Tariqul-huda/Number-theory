//Prime factorization of factorial

#include<bits/stdc++.h>
#define int long long
using namespace std;


vector<pair<int,int>>primes;
//false is new true XD;
int n = 100000001;
bool sievePrime[100000001];
//sieve is done by me. For optimized version please search it on google
void sieve()
{
    sievePrime[0]=sievePrime[1]=true;
    for(int i=2;i<n;i++)
    {
        if(!sievePrime[i])
        {
            for(int j = i*2;j*j<n;j+=i)
                sievePrime[j] = true;
        }
    }
}
//for finding the highest exponentiation of a prime <=n;
// j = floor(k1/p)+floor(k2/p)....floor(kh-1/p)
int j(int n,int p)
{
    int h = log10(n)/log10(p);
    int k = n/p;
    int sum = k;
    for(int i=1;i<h;i++)
    {
        k/=p;
        sum+=k;
    }
    return sum;
}
signed main()
{
    sieve();
    int tst = 17;
    for(int i = 2;i<=tst;i++)
    {
        if(!sievePrime[i])
            cout<<i<<"^"<<j(tst,i)<<endl;
    }

    return 0;
}
