//
//  main.cpp
//  c++_acm
//
//  Created by 李弘辰 on 2019/7/18.
//  Copyright © 2019 李弘辰. All rights reserved.
//

#include "header_useful.h"

/*
ll len[1000000];
int cnt = 0;

int main()
{
    ll n;
    int q;
    scanf("%lld%d",&n,&q);
    ll a;

    int k = 1;

    while (n) {
        k = k ^ (n & 1);
        len[++ cnt] = (n + k) >> 1;
        n >>= 1;
    }

    rep(i,1,cnt) printf("%lld ",len[i]);

    len[0] = 1;

    rep(i,1,cnt) {
        len[i] += len[i - 1];
    }

//    rep(i,1,cnt) printf("%lld ",len[i]);
//    puts("");

    int i;
    while (q --) {
        scanf("%lld",&a);
        for (i = 1;(a & 1) == 0;i ++,a >>= 1);
        printf("%lld\n",len[i-1] + a / 2);
    }
}

*/

/*
int a[1000010];

int main()
{
    int n;
    ll x = 1;
    ll sum = 0;
    for (int i = 1;i <= 1000000;) {
        sum += x;
        for (;i <= sum - 2;i ++) a[i] = x;
        x ++;
    }

    for (sum = 0,x = 1;sum <= 1000000;x ++) {
        sum += x;
        a[sum] = x;
    }


    __T {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
}*/


const int MAXN = 1e5 + 10;

int find_set[MAXN];

int find(int a)
{
    if (find_set[a] == a) return a;
    return find_set[a] = find(find_set[a]);
}

inline void bind(int a,int b)
{
    find_set[find(a)] = find(b);
}

void init(int n)
{
    rep(i,0,n) {
        find_set[i] = i;  // 每个种类初始状态只有自己一个点
    }
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    init(m + 5);
    int ans = 0;
    int x,y;
    rep(i,1,n) {
        scanf("%d%d",&x,&y);
        if (x == y) continue;

        if (find(x) == find(y)) ans += 2;
        else ans ++;

        bind(x,y);
    }
    printf("%d\n",ans);
}

/*
const int maxn = 1000010;
const int MAXN = 1000000;

ll a[maxn];
ll sum[maxn];

int n;
ll k;

int check(ll num) {
    int st,ed;
    int cnt;
    ll ans = 0;
    for (ll i = num;i <= MAXN;i += num) {
        st = lower_bound(a + 1,a + 1 + n,i) - a;
        ed = (lower_bound(a + 1,a + 1 + n,i + num) - a) - 1;

        if (i == num && st == n + 1) return 0;
        if (st == n + 1) continue;

        cnt = ed - st + 1;
        ans += sum[ed] - sum[st - 1] - i * cnt;

        if (i == num && st != 1) {
            cnt = st - 1;
            ed = st - 1;
            st = 1;
            ans += i * cnt + (sum[ed] - sum[st - 1]);
        }
        if (ans > k) return 0;
    }
    return 1;
}

int main()
{

    scanf("%d%lld",&n,&k);
    rep(i,1,n) {
        scanf("%lld",&a[i]);
    }

    sort(a + 1,a + 1 + n);
    rep(i,1,n) {
        sum[i] = sum[i - 1] + a[i];
    }

    pre(i,MAXN,1) {
        if (check(i)) {
            printf("%d\n",i);
            break;
        }
    }

}*/