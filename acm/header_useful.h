//
//  header_useful.h
//  c++_acm
//
//  Created by 李弘辰 on 2019/7/23.
//  Copyright  2019 李弘辰. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <vector>
#include <list>
#include <set>
#include <utility> // pair
#include <map>
#include <iostream>
#include <sstream>
#include <algorithm> // sort
#include <functional>
#include <string>
#include <stack>
#include <queue>
#include <fstream>
#include <bitset>

//#include <unordered_map>
//#include <unordered_set>

using namespace std;

#define ll long long
#define lll __int128
#define uchar unsigned char
#define ushort unsigned short
#define uint unsigned int
#define ulong unsigned long
#define ull unsigned long long

#define INT_INF 0x7fffffff

#define pi acos(-1)

#define mem(a,b) memset(a,b,sizeof(a))
#define memn(a,b,c,n) memset(a,b,sizeof(c)*(n))
#define fre(a) freopen(a,"r",stdin)

#define cio ios::sync_with_stdio(false); // Do not use it with "scanf" and other c input!
#define pb push_back
#define mpair make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,a,b) for(int i=a;i<b;i++)

#define repl(i,a,b) for(ll i=a;i<=b;i++)
#define prel(i,a,b) for(ll i=a;i>=b;i--)


#define reada(a,s,n) rep(i,s,n)scanf("%d",a + i);
#define READa(a,s,n) REP(i,s,n)scanf("%d",a + i);

#define readall(a,s,n) rep(i,s,n)scanf("%lld",a + i);
#define READall(a,s,n) REP(i,s,n)scanf("%lld",a + i);

//template <typename _Tp> inline void read(_Tp&x) {
//    char ch;bool flag=0;x=0;
//    ch=getchar();
//    while(!isdigit(ch)){if(ch=='-')flag=1;ch=getchar();}
//    while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
//    if(flag)x=-x;
//}
//inline void print_lll(lll x) {
//    if(x<0) {x=-x;putchar('-');}
//    if(x>9) print_lll(x/10);
//    putchar(x%10+'0');
//}


//#define _T_(T) int T;scanf("%d",&T);while(T--)
//#define __T _T_(TTESTCASES)
//#define _E_(T) while(~T)
#define __T int TT;scanf("%d",&TT);for (int T = 1;T <= TT;T ++)

#define _C(a) cout << a << endl;

#define dsci(a) int a;scanf("%d",&a)
#define dscii(a,b) int a,b;scanf("%d%d",&a,&b)
#define dsciii(a,b,c) int a,b,c;scanf("%d%d%d",&a,&b,&c)
#define dscl(a) ll a;scanf("%lld",&a)
#define dscll(a,b) ll a,b;scanf("%lld%lld",&a,&b)
#define dsclll(a,b,c) ll a,b,c;scanf("%lld%lld%lld",&a,&b,&c)
#define dscd(a) double a;scanf("%lf",&a)
#define dscdd(a,b) double a,b;scanf("%lf%lf",&a,&b)
#define dscddd(a,b,c) double a,b,c;scanf("%lf%lf%lf",&a,&b,&c)

#define sci(a) scanf("%d",&a)
#define scii(a,b) scanf("%d%d",&a,&b)
#define sciii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define scl(a) scanf("%lld",&a)
#define scll(a,b) scanf("%lld%lld",&a,&b)
#define sclll(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define scd(a) scanf("%lf",&a)
#define scdd(a,b) scanf("%lf%lf",&a,&b)
#define scddd(a,b,c) scanf("%lf%lf%lf",&a,&b,&c)

#define lowbit(x) ((x)&(-(x)))

#define Tprint(a,s,e) REP(i,s,e){if(i!=s)printf(" ");printf("%lld",a[i]);}

#define endl '\n'

#define itn int
#define iny int
#define nit int
#define inr int
#define mian main
#define iman main
#define mina main
#define mian main
#define ednl endl
#define fro for
#define fir for
#define reutrn return
#define retunr return
#define reutnr return
#define re0 return 0
#define re1 return 1


/* header_useful_h */
