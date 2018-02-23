#include <stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<sstream>
#include <set>

///File
#define output              freopen("output.txt","w",stdout)
#define input               freopen("input.txt","r",stdin)
#define inputfile(x)        freopen(x,"r",stdin)
#define outputfile(x)        freopen(x,"w",stdout)
#define Read(file)          fopen(file,"r")
#define Write(file)         fopen(file,"w")
#define fsc                 fscanf
#define fpf                 fprintf
///flushing for interactive problem
#define CLPF fflush(stdout)
#define CLCT cout << flush
#define CLCT1 cout.flush()

/// 179 10000019 10000079 10000103 1000000007 1000000009 1000000021 hash base
#define ran(a, b) ((((rand() << 15) ^ rand()) % ((b) - (a) + 1)) + (a))
///BIT
/**
//set _n and _lg first
int __bit[SIZE+100],_n,_lg;
inline void __inc(int i,int v){for(;i<=_n;i+=(i&-i))__bit[i]+=v;}
inline int __sum(int i){int s=0;for(;i;i-=(i&-i))s+=__bit[i];return s;}
inline int __select(int k){int p,i,h=0;for(i=_lg;i>-1;i--){p=1<<i;if(p+h>_n)continue;if(__bit[p+h]<k)h+=p,k-=__bit[h];}return h+1;}
*/
/**
//ncr without mod
int const __maxn=1000;//set maxn firts
ll ncr[__maxn+2][__maxn+2];
inline void cal_ncr(){int i,j;ncr[0][0]=1;fr1(i,__maxn){ncr[i][0]=1;fr1(j,i)ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];}}
*/
///seive
/**
const int __mx=1e6+5;
bool isp[__mx+5];
inline void seive(){isp[1]=1;int i,j;for(i=4;i<=__mx;i+=2)isp[i]=1;for(i=3;i*i<=__mx;i+=2)if(!isp[i])for(j=i*i;j<=__mx;j+=i+i)isp[j]=1;}
long long PL[__mx];
inline int make_prime_list(){int i=3,k=1;PL[0]=2;for(i=3;i<=__mx;i+=2)if(!isp[i])PL[k++]=i;return k;}
template<class _T>inline bool _isprime(_T n){if(n<=1)return 0;int i;for(_T p=PL[i=0];p*p<=n;p=PL[++i])if(!(n%p))return 0;return 1;}
*/
///Union Find ; int par[___SIZE___];template<class T>T findp(T _NN){return par[_NN]==_NN?_NN:par[_NN]=findp(par[_NN]);}



//summatiom
template<class _T>inline _T naturalSum(_T n){return (n*(n+1))/2;}
template<class _T>inline _T sqrSum(_T n){return (n * (n + 1) * (2*n + 1)) / 6;}
template<class _T>inline _T cubeSum(_T n){return  SQ((n*(n+1))/2);}
//with mod
//assuming (mod-1)^2 will fit in limit
template<class _T>inline _T naturalSum(_T n,_T m){return ((n*(n+1))/2)%m;}
long long MOD_INV_OF_6;//
template<class _T>inline _T sqrSum(_T n,_T m){n%=m;return ((( ((n * (n + 1))%m) * (( (2*n)%m + 1)%m)) %m )* MOD_INV_OF_6)%m;}
template<class _T>inline _T cubeSum(_T n,_T m){return  SQ(((n*(n+1))/2)%m)%m;}


/***
(*max_element(a,a+n))
(*min_element(a,a+n))
(accumulate(a,a+n,0)): Sum from a[0] to a[n-1]
__builtin_popcount(x) , __builtin_popcountl(x), __builtin_popcountll(x)
lower_bound : First >=
upper_bound : First >
string::npos : null equivalent in string
*/

typedef __int128 bint;
typedef unsigned __int128 ubint;
const bint BZERO=0;
const bint ONE=1;
const ubint UONE=1;
const ubint UMAX=(ubint)-1;
const bint BMAX = (UONE<<127) -1;
const bint BMIN = (UONE<<127);
template<typename T> ABS(T n){return n<0?-n:n;}
template<typename T> T toint(string s,T &ans)
{
	bool neg=s[0]=='-';
	int i=0;
	if(neg) i++;
	ans=0;
	while(s[i])ans*=10,ans+=(s[i++]-'0');
	return ans=neg?-ans:ans;
}
template<typename T> string tostring(T n)
{
	bool neg=n<0;
	n*=(n<0)?-1:1;
	string res;
	int base=10;
	while(n)res.push_back('0'+ABS(n%base)),n/=base;
	if(res=="") res="0";
	else if(neg) res.push_back('-');
	reverse(res.begin(),res.end());
	return res;

}
}
int main()
{
    bint n=1;
    toint("-47425642298653226788943269964",n);
    string s;
    s=tostring(n%64296408643);
    cout<<s<<endl;
}

