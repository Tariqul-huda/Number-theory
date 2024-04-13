//Prime factorization with exponentiation. the factorization part was taken from geeksforgeeks

#include<bits/stdc++.h>
#define int long long
using namespace std;


vector<pair<int,int>>primes;
void primeFactors(int n)
{
    int c = 2;
    int cc = 1;
    primes.push_back({0,0});
    while (n >1) {
        if (n % c == 0) {
            if(primes.rbegin()->first==c)
            {
                primes.rbegin()->second++;
            }
            else
            primes.push_back({c,cc});
//           (primes.rbegin()->first==c)?primes.rbegin()->second++:
//               primes.push_back({c,cc});
            n /= c;
            cc++;
        }
        else
        {
            c++;
            cc=  1;
        }
    }
}

signed main()
{
    int ff =45612319831;
    primeFactors(ff);

    for(auto prime:primes)
    {
        cout<<prime.first<<"^"<<prime.second<<endl;
    }
    return 0;
}
