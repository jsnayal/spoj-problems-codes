#include<bits/stdc++.h>

#define ll long long int

// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%ld",&n)
#define sll(n)                      scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

//Output Macros
#define p(n)                        printf("%d",n)
#define pl(n)                       printf("%ld",n)
#define pll(n)                      printf("%lld",n)
#define nl                          printf("\n")
#define sp                          printf(" ")

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
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())

#ifdef DEBUG
     #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif

#define MAX 100000
/*
struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr<<v<<" ";
        return *this;
    }
} dbg;
*/

using namespace std;

long long int read_int(){
	char r;
	bool start=false,neg=false;
	long long int ret=0;
	while(true){
		r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
			continue;
		}
		if((r-'0'<0 || r-'0'>9) && r!='-' && start){
			break;
		}
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';
	}
	if(!neg)
		return ret;
	else
		return -ret;
}

struct element
{
	ll item;
	int pos;
}ele;

struct st
{
	bool operator()(struct element const &p,struct element const &q)
	{
        	return p.item < q.item;
	}
}s;

int main()
{
    int T;
    scanf("%d",&T);



    while(T--)
    {
        vector<element>v;

        ll n,m,o;
        ll ans=0;
        int inc=0;
        scanf("%lld%lld%lld",&n,&m,&o);

        for(int i=1;i<=n;i++)
        {
            ll type;
            scanf("%lld",&type);
            ele.item=type;
            ele.pos=i;
            v.push_back(ele);
        }




        sort(v.begin(),v.end(),s);



            for(int i=n-1;i>=0;i--)
            {

                if(v[i].item >=o)
                {
                    ans++;
                    if(v[i].pos==1)
                    inc=1;
                }
                else
                {
                    break;
                }
            }
            if(inc==1)
            printf("%lld\n",miN(m,ans));
            else
            printf("-1\n");
    }
    return 0;
}

