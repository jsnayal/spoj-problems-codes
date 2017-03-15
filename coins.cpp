#include<bits/stdc++.h>

// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9

// Useful hardware instructions
#define bitcount                    __builtin_popcount
#define gcd                         __gcd

// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair

// Some common useful functions
#define max(a,b)                     ( (a) > (b) ? (a) : (b))
#define min(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())

using namespace std;

void cal(long long int);
long long int sum;
int main()
{
    long long int n;
    while((cin>>n))
    {
        sum=0;
        cal(n);
        printf("%lld\n",sum);
    }

    return 0;
}

void cal(long long int n)
{
    long long int a=n/2;
    long long int b=n/3;
    long long int c=n/4;

    if((a+b+c)>n)
    {
        cal(a);
        cal(b);
        cal(c);
    }
    else
    {
        sum+=n;
    }
}
