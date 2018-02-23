#include <bits/stdc++.h>
using namespace std;
#define output              freopen("output.txt","w",stdout)
#define input               freopen("input.txt","r",stdin)
///C IO
#define pf                  printf
#define sc                  scanf
#define pch                 putchar
#define ssc                 sscanf
#define spf                 sprintf

///functions
#define pb                  push_back
#define Mid(l,r)            ((l+r)>>1)
#define present(c,x)        ((c).find(x) != (c).end())
#define cpresent(c,x)       (find(all(c),x) != (c).end())
#define mp                  make_pair
#define xx                  first
#define yy                  second
///For loop
#define fr0(i,n)            for(i=0;i<n;i++)
#define fr1(i,n)            for(i=1;i<=n;i++)
#define FOR(a,n)            for(auto a : n)
///memory reset
#define Mem(Array,Val,Size) memset(Array,Val,(Size)*(sizeof(Array[0])))
#define set0(x)             memset(x,0,sizeof(x))
#define setn1(x)            memset(x,-1,sizeof(x))
#define setinf(x)           memset(x,127,sizeof(x))
///misc
#define SZ(v)               ((int) (v).size())
#define all(v)              (v).begin(), (v).end()
///bit operation single variable :: be careful with LL and ULL
#define On(x,i)             (x|=(1<<(i)))
#define Off(x,i)            (x&= ~(1<<(i)))
#define isOn(x,i)           (x&(1<<(i)))
#define Toggle(x,i)         (x^=(1<<(i)))
#define tmod(x,i)           (x&(~(-1<<i)))


///inputs
template <class T> inline bool In(T &a)                 {return (bool)(cin>>a);}
template <class T1,class T2> inline bool In(T1 &a,T2 &b){return (bool) (cin>>a>>b);}
template <class T1,class T2,class T3> inline bool In(T1 &a,T2 &b,T3 &c){return (bool)(cin>>a>>b>>c);}
template <class T1,class T2,class T3,class T4> inline bool In(T1 &a,T2 &b,T3 &c,T4 &d){return (bool)(cin>>a>>b>>c>>d);}
inline bool Line(string &a)                             {return (bool)(getline(cin,a));}
template <class _T>inline void ina(_T a[],int n)        {int i; fr0(i,n)In(a[i]);}
///outputs
template <class T> inline bool Pr(T a)                  {return (bool)(cout<<a);}
template <class T1,class T2> inline bool Pr(T1 a,T2 b)  {return (bool)(cout<<a<<" "<<b);}
template <class T1,class T2,class T3> inline bool Pr(T1 a,T2 b,T3 c){return (bool)(cout<<a<<" "<<b<<" "<<c);}
template <class T1,class T2,class T3,class T4> inline bool Pr(T1 a,T2 b,T3 c,T4 d){return (bool)(cout<<a<<" "<<b<<" "<<c<<" "<<d);}

///debug
template <class T> inline void Cr(T a)                  {cerr<<a<<endl;}
template <class T1,class T2> inline void Cr(T1 a,T2 b){cerr<<a<<" "<<b<<endl;}

#define nln                 cout<<"\n"
#define sps cout<<" "
int TEST_CASE=0;
#define tcsp                cout<<"Case "<<(++TEST_CASE)<<": "
#define tcnl                cout<<"Case "<<(++TEST_CASE)<<":\n"
#define FAST                ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precice(n)          cout<<setprecision(n)
#define FIX(n)              cout<<setprecision(n)<<fixed
//data type
typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         LD;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef pair<double,double> pdd;
typedef vector<int>         vi;



//BIG MOD / mod inverse
template<class _T>inline _T pow(_T a,_T b,_T m){a%=m;_T ans=1%m;while(b){if(b&1)ans*=a,ans%=m;a*=a;a%=m;b>>=1;}return ans;}
template<class _T>inline _T pow(_T a,_T b)      {_T ans=1;while(b){if(b&1)ans*=a;a*=a;b>>=1;}return ans;}
template<class _T>inline _T add(_T a,_T b,_T m){return a>=m-b?a-(m-b):a+b;}//a,b<m
template<class _T>inline _T multiply(_T a,_T b,_T m){_T ans=0;if(b>a)swap(a,b);while(b){if(b&1)ans=add(ans,a,m);b>>=1;a=add(a,a,m);}return ans;}//a,b<m
template<class _T>inline _T bigpow(_T a,_T b,_T m){a%=m;_T ans=1%m;while(b){if(b&1)ans=multiply(ans,a,m);a=multiply(a,a,m);b>>=1;}return ans;}
template<class _T>inline _T modinvers(_T a,_T m){return m>2000000000LL?bigpow(a,m-2,m):pow(a,m-2,m);}//m is prime
//egcd / mod inverse
template<class _T> _T _egcd(_T a, _T b, _T &x,_T &y){if(!b){x=1,y=0;return a;}_T _g=_egcd(b,a%b,x,y);_T xt=x;x=y,y=xt-(a/b)*y;return _g;}
template<class _T>inline _T fmodinvers(_T a,_T m){_T x,y;_egcd(a,m,x,y);x%=m;if(x<0)x+=m;return x;} //a,m co-prime
template<class _T>inline _T _lcm(_T a, _T b){return (a*b)/__gcd(a,b);}

template <class T> inline  T SQ(T a)            {return a*a;}
ll SQRT(ll n){ll e=sqrt(n*1.0);ll l=max(0LL,e-2),r=min(n,e+2);ll ans=0;while(l<=r){ll m=Mid(l,r);if(m*m<=n)ans=m,l=m+1;else r=m-1;}return ans;}
ll CBRT(ll n){ll e=cbrt(n*1.0);ll l=max(0LL,e-2),r=min(n,e+2);ll ans=0;while(l<=r){ll m=Mid(l,r);if(m*m*m<=n)ans=m,l=m+1;else r=m-1;}return ans;}
//direction array
/*
knight: int dx[]={1,-1,1,-1,2,2,-2,-2}; int dy[]={2,2,-2,-2,1,-1,1,-1};
Grid Side: int dx[]={0,0,1,-1};int dy[]={1,-1,0,0};
*/
///constant
const LD EPS =              1e-9;
const LD PI=                acos(-1.0);
const int SIZE=             1e6;
ll mod=                     1e9+7;

int main()
{
    return 0;
}

/**
Md. Tariqul Islam
IIT,JU
fb/tariqiitju
tarik.amtoly@gmail.com
*/
