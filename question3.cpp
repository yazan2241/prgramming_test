#include <bits/stdc++.h>

using namespace std;

bool is_prime[100010];

void sieve(long long n){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

vector<int>getPrime(int left , int right){
    vector<int>prime;
    for(int i=left;i<=right;i++){
        if(is_prime[i])prime.push_back(i);
    }
    return prime;
}

int main()
{
    memset(is_prime , 1 , sizeof is_prime);

    int left , right;
    cin>>left>>right;

    sieve(right);

    vector<int>prime = getPrime(left, right);

    for(int i=0;i<prime.size();i++)
        cout<<prime[i]<<" ";

    return 0;
}
