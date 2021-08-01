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

/*
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
*/

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
}
*/

/*
const int MAXN = 2e5 + 10;

vector<int> g[MAXN];
int vis[MAXN];
int dep[MAXN];

int ans;

int dfs(int u)
{
    if (vis[u]) return 0;
    vis[u] = 1;

    int sum = 0;
    int t;

    int mx = 0;

    for (vector<int>::iterator i = g[u].begin();i != g[u].end();i ++) {
        t = dfs(*i);
        if (t == 0) continue;
        if (sum == 0) sum = t;
        else sum = min(sum,t);
        if (dep[*i] > mx) {
            mx = dep[*i];
        } else {
            ans = max(ans,dep[*i] + 2);
        }
    }
    ans = max(ans, mx + 1 + (u != 1));

    dep[u] = sum;

    return sum + 1;
}

int main()
{
    int n;
    int u,v;
    __T {
        scanf("%d",&n);
        rep(i,1,n) g[i].clear();
        rep(i,1,n-1) {
            scanf("%d%d",&u,&v);
            g[u].pb(v);
            g[v].pb(u);
        }
        rep(i,0,n) vis[i] = 0;
        ans = 0;
        dfs(1);
        printf("%d\n",ans);
    }
}
*/

/*
ll len[1000000];
ll st[1000000];
ll b[1000000];
int cnt = 0;

int main()
{
    ll n;
    int q;
    scanf("%lld%d",&n,&q);
    ll a;
    ll nn = n;

    int k = 1;
    st[0] = st[1] = 1;
    b[0] = 1;
    while (n) {
        len[++ cnt] = (n + k) >> 1;

//        _C(k)

        if (k) st[cnt + 1] = st[cnt] + b[cnt-1];
        else st[cnt + 1] = st[cnt];

        k ^= n & 1;
        n -= len[cnt];
        b[cnt] = b[cnt - 1] << 1;
    }
    b[cnt + 1] = b[cnt] << 1;

    len[0] = 0;

//    rep(i,1,cnt) printf("%lld %lld %lld\n",st[i],len[i],b[i-1]);

    int i;
    ll t;
    ll ans;
    while (q --) {
        scanf("%lld",&a);
        n = nn;
        k = 1;
        ans = 0;
        for (i = 1;n;i ++) {

            t = (a - st[i]) / b[i - 1];
//            _C(k << " " << t)
            if (k ^ (t & 1)) {
//                _C(len[i - 1] << " " << a << " " << st[i] << " " << b[i] << " " << i)
                printf("%lld\n",ans + (a - st[i]) / b[i] + 1);
                break;
            }

            k ^= n & 1;
            n -= len[i];
            ans += len[i];
        }
    }
}

*/

/*
const int maxn = 1e5 + 10;

int pos[maxn];

struct Node {
    int l,r;
    int len;
    bool operator<(const Node &o) const {
        return len < o.len;
    }
} seg[maxn],p[maxn];

int find_set[maxn];

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

int vis[maxn];

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    init(n+5);
    rep(i,1,n) scanf("%d",pos + i);
    sort(pos + 1,pos + 1 + n);
    rep(i,1,n - 1) {
        seg[i] = {i,i + 1,pos[i + 1] - pos[i] + 1};
    }
    sort(seg + 1,seg + n);
    for (int x = n,i = 1;x > k;x --,i ++) {
        bind(seg[i].l,seg[i].r);
    }
    int t;
    rep(i,1,n) {
        t = find(i);
        if (p[t].l) p[t].r = pos[i];
        else p[t].l = pos[i];
    }
    ll ans = 0;
    rep(i,1,n) {
        t = find(i);
        if (vis[t]) continue;
        vis[t] = 1;
        if (!p[t].r) p[t].r = p[t].l;
        ans += p[t].r - p[t].l + 1;
    }
    printf("%lld\n",ans);
}
*/

/*
const int maxn = 2e3+10;

int n;
int a[maxn];

ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    ll ans = 0;
    int cnt = 0;
    __T
    {
        ans = 0;
        scanf("%d",&n);
        cnt = 0;
        rep(i,1,n) {
            scanf("%d",a + i);
            if (a[i] % 2 == 0) cnt ++;
        }
        for (int i = n-1,j = 1;j <= cnt;j ++,i --) ans += i;
        rep(i,1,n) {
            rep(j,i + 1,n) {
                if ((a[i] & 1) && (a[j] & 1)) {
                    if (gcd(a[i],a[j]) > 1) ans ++;
                }
            }
        }
        _C(ans)
    }
}
*/

/*
const int maxn = 2e5 + 10;

int l[maxn];
int r[maxn];

int main()
{
    string str;
    ll st,l,r,lp;
    ll ans;
    int n;
    __T {
        cin >> str;
        n = str.size();
        st = 0;
        ans = 0;
        l = -1;
        lp = 0;
        for (int i = 0;str[i];i ++) {
            if (str[i] == '?') {
                if (i != 0 && str[i - 1] != '?') {
                    l = str[i - 1] ^ 48;
                    lp = i;
                }
            } else {
                if (l != -1) {
                    r = str[i] ^ 48;
                    if ((l != r && ((i - lp) & 1)) || (l == r && !((i - lp) & 1))) {
//                        _C(st << " " << i)
                        ans += (i - st) * (i - st + 1) / 2;
//                        _C(">>" << lp << " " << i)
                        ans -= (i - lp) * (i - lp + 1) / 2;
                        l = -1;
                        st = lp;
                    }
                }
                if (i != 0 && str[i - 1] != '?' && str[i] != '?') {
                    if (str[i - 1] == str[i]) {
//                        _C(st << " " << i)
                        ans += (i - st) * (i - st + 1) / 2;
                        st = i;
                    }
                }
            }
        }
//        _C(st << " " << n)
        ans += (n - st) * (n - st + 1) / 2;
        printf("%lld\n",ans);
    }
}
*/

/*
int main()
{
    string str;
    int n;
    map<char,int> mp;
    map<string,int> ms;
    int i,j,k;
    string tmp;
    __T {
        scanf("%d",&n);
        mp.clear();
        ms.clear();
        cin >> str;
        // a
        for (i = 0;str[i];i ++) {
            mp[str[i]] ++;
        }
        for (i = 'a';i <= 'z';i ++) {
            if (!mp[i]) {
                printf("%c\n",i);
                goto end;
            }
        }
        // aa
        for (i = 0;str[i];i ++) {
            if (i + 1 < n) {
                tmp = "";
                tmp += str[i];
                tmp += str[i + 1];
                ms[tmp] ++;
            }
        }
        for (i = 'a';i <= 'z';i ++) {
            for (j = 'a';j <= 'z';j ++) {
                tmp = "";
                tmp += i;
                tmp += j;
                if (!ms[tmp]) {
                    _C(tmp)
                    goto end;
                }
            }
        }
        
        // aaa
        for (i = 0;str[i];i ++) {
            if (i + 2 < n) {
                tmp = "";
                tmp += str[i];
                tmp += str[i + 1];
                tmp += str[i + 2];
                ms[tmp] ++;
            }
        }
        for (i = 'a';i <= 'z';i ++) {
            for (j = 'a';j <= 'z';j ++) {
                for (k = 'a';k <= 'z';k ++) {
                    tmp = "";
                    tmp += i;
                    tmp += j;
                    tmp += k;
                    if (!ms[tmp]) {
                        _C(tmp)
                        goto end;
                    }
                }
            }
        }
    end:;
    }
}
*/

/*
const int maxn = 1e5 + 10;
const int mod = 1e9 + 7;

ll a[maxn];
ll dp[maxn][2];
ll cnt[maxn][2];

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scanf("%lld",a + i);
    }
    if (n == 1) {
        printf("%lld\n",a[1]);
        return 0;
    }
    dp[1][0] = dp[1][1] = a[1];
    cnt[1][0] = cnt[1][1] = 1;
    // 0 -
    // 1 +
    rep(i,2,n) {
        dp[i][0] = dp[i - 1][1] - a[i] * cnt[i - 1][1] % mod + mod;
        dp[i][0] %= mod;
        cnt[i][0] += cnt[i - 1][1];
        cnt[i][0] %= mod;

        dp[i][1] += dp[i - 1][1] + a[i] * cnt[i - 1][1] % mod;
        dp[i][1] %= mod;
        cnt[i][1] += cnt[i - 1][1];
        cnt[i][1] %= mod;

        if (i != 2) {
            dp[i][1] += dp[i - 1][0] + a[i] * cnt[i - 1][0] % mod;
            dp[i][1] %= mod;
            cnt[i][1] += cnt[i - 1][0];
            cnt[i][1] %= mod;
        }
//        _C(dp[i][0] << " " << dp[i][1])
    }

    ll ans = (dp[n][0] + dp[n][1]) % mod;
    printf("%lld\n",ans);
}*/


/*
map<int,int> mp,cnt;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int t;
    rep(i,1,n) {
        scanf("%d",&t);
        mp[t] ++;
        cnt[t] = 1;
    }
    for (auto i : mp) {
        if (mp.find(i.first + k) != mp.end()) {
            cnt[i.first + k] += cnt[i.first];
        }
    }
    int ans = 0;
    for (auto i : cnt) {
        ans = max(ans,i.second);
    }
    printf("%d\n",ans);
}
*/

/*
/// 网络流-最大流模板 Dinic算法 前向星
/// https://www.luogu.com.cn/problem/P3376
const int MAXN = 500010;

struct Edge {
    int to;
    ll w;
    int nxt;
} e[MAXN << 1];
int g[MAXN]; // Please call init() to memset it to -1!
int cnt = 0;

void init(int n)
{
    cnt = 0;
    memset(g, -1, sizeof(int) * n);
}

void add_edge(int u,int v,ll w)
{
    e[cnt] = {v,w,g[u]};
    g[u] = cnt ++;
}

int s,t,n,m;
int dis[MAXN];
int cur[MAXN]; // 替代g数组，记住上次dfs最后跑到的地方，优化，减少dfs的跑的次数

int bfs()
{
    memset(dis, -1, sizeof(int) * (n + 5));

    queue<int> q;
    q.push(s);
    dis[s] = 0;

    int to,current,k;

    while (!q.empty()) {
        current = q.front();
        q.pop();

        for (int i = g[current];~i;i = e[i].nxt) {
            to = e[i].to;
            k = dis[current] + 1;
            if (dis[to] == -1 && e[i].w > 0) { // 只有没有访问过的，且该通路可以走(w > 0)
                dis[to] = k;
                if (to == t) return 1;
                q.push(to);
            }
        }
    }

    return 0;
}

ll dfs(int node,ll flow)
{
    if (node == t) return flow;
    int to;
    ll d;
    for (int &i = cur[node];~i;i = e[i].nxt) { // 改变i的同时，cur[node]的值也会被改变
        to = e[i].to;
        if (dis[node] + 1 == dis[to] && e[i].w > 0) {
            d = dfs(to,min(e[i].w,flow));
            if (d > 0) {
                e[i].w -= d;
                e[i ^ 1].w += d;
                return d;
            }
        }
    }
    return 0;
}

ll dinic()
{
    ll ans = 0;
    ll d;
    while (bfs()) {
        rep(i,1,n) cur[i] = g[i];
        while ((d = dfs(s,INT_INF)))
            ans += d;
    }
    return ans;
}

ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int a[10],b[10];

int main()
{
    // **注意：MAXN尽量开大点，不然很容易RE**

    int nn;
    scanf("%d",&nn);
    init(nn * 2 + 10);
    int u,v;
    // nn + mm + 1 源点
    // nn + mm + 2 汇点


    rep(i,1,nn) {
        scanf("%d",a + i);
    }
    rep(i,1,nn) {
        scanf("%d",b + i);
    }

    rep(i,1,nn) {
        rep(j,1,nn) {
            if (gcd(a[i],b[j]) > 1) {
                add_edge(i,j + nn,1);
                add_edge(j + nn, i,0);
            }
        }
    }

    rep(i,1,nn) {
        add_edge(nn * 2 + 1,i,1);
        add_edge(i,nn * 2 + 1,0);
    }

    rep(i,1,nn) {
        add_edge(i + nn,nn * 2 + 2,1);
        add_edge(nn * 2 + 2,i + nn,0);
    }

    n = nn * 2 + 2; // 设置总点量
    s = nn * 2 + 1; // 设置起点
    t = nn * 2 + 2; // 设置终点
    printf("%lld\n",dinic());
    return 0;
}
*/

/*
int c,a,t,ca,at,cat;

int main()
{
    int n;
    scanf("%d",&n);
    string str;
    int len;
    rep(i,1,n) {
        cin >> str;
        len = str.size();
        for (int i = 0;i < len;i ++) {
            if (i + 2 < len && str[i] == 'c' && str[i + 1] == 'a' && str[i + 2] == 't') {
                cat ++;
                i += 2;
            } else if (i + 1 < len && str[i] == 'c' && str[i + 1] == 'a') {
                ca ++;
                i += 1;
            } else if (i + 1 < len && str[i] == 'a' && str[i + 1] == 't') {
                at ++;
                i += 1;
            } else if (str[i] == 'a') a ++;
            else if (str[i] == 'c') c ++;
            else if (str[i] == 't') t ++;
        }
    }

//    _C(c << " " << a << " " << t)
//    _C(ca << " " << at)

    int ans = cat;
    int tmp = min(c,at);
    ans += tmp;
    c -= tmp;
    at -= tmp;

    tmp = min(c,min(a,t));
    ans += tmp;
    c -= tmp;
    a -= tmp;
    t -= tmp;

    tmp = min(ca,t);
    ans += tmp;
    ca -= tmp;
    t -= tmp;

    printf("%d\n",ans);
}*/


/*
const int MAXN = 35;
struct Node{
    int x,y,z;
    Node(int z,int x,int y):z(z),x(x),y(y){}
};

int n,m,h;

vector<Node> ve[MAXN];

int exist[MAXN],vis[MAXN];
char s[MAXN][MAXN][MAXN];
char ans[MAXN];
int index1,cnt,sum;

inline bool check(int x) {
    for (auto i : ve[x]) {
        if (i.z == h) break;
        if (!vis[s[i.z + 1][i.x][i.y] - 'A'] && (s[i.z + 1][i.x][i.y] - 'A') != x) return 0;
    }
    return 1;
}

inline void init() {
    memset(vis,0,sizeof(vis));
    memset(exist,0,sizeof(exist));
    rep(i,0,26) ve[i].clear();
}

void inv() {
    sciii(n,m,h);
    index1 = cnt = 0;
    sum = n * m * h;
    rep(i,1,h) {
        rep(j,1,n) {
            scanf("%s",s[i][j] + 1);
            rep(k,1,m) {
                exist[s[i][j][k] - 'A'] ++;
                ve[s[i][j][k] - 'A'].pb(Node(i,j,k));
            }
        }
    }
    int  ok = 1;
    while (cnt < sum) {
        ok = false;
        pre(i,25,0) {
            if (!vis[i] && exist[i] && check(i)) {
                vis[i] = true;
                ans[index1++] = i + 'A';
                cnt += ve[i].size();
                ok = true;
                break;
            }
        }
        if (!ok) break;
    }
    if (ok) {
        REP(i,0,index1) {
            printf("%c",ans[i]);
        }
    } else printf("-1");
}

int main() {
    __T {
        init();
        inv();
        puts("");
    }
}*/


/*
const int MAXN = 2005;
const int mod = 1e9 + 7;


ll mp[MAXN][MAXN];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    rep(i,1,n) mp[0][i] = 1;
    rep(j,0,m) mp[j][1] = j + 1;

    rep(j,1,m) {
        rep(i,2,n) {
            mp[j][i] = (mp[j - 1][i] + mp[j][i - 1]) % mod;
        }
    }

    ll ans = 1;
    ll l,r;
    rep(i,1,n) {
        rep(j,1,m) {
            if (i == 1) {
                l = 1;
            } else l = mp[j - 1][i - 1];
            if (i == n) r = 1;
            else r = mp[j][n - i];

            ans += l * r % mod;
            ans %= mod;
        }
    }
    _C(ans)
}*/

/*
const int MAXN = 2e7 + 10;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

int vis[MAXN];
ll ans[MAXN];
ll res[MAXN];

int main()
{
    int n,m,L;
    scanf("%d%d%d",&n,&m,&L);
    int N = L + n;
    rep(i,1,N) {
        res[i] = i;
        ans[i] = i;
    }

    int cnt;
    for (int i = 2;i <= N;i ++) {
        if (vis[i]) continue;
        for (int j = i;j <= N;j += i) {
            if (!vis[j]) {
                cnt = 0;
                while (res[j] % i == 0) {
                    res[j] /= i;
                    cnt ++;
                }
                vis[j] = 1;
                ans[j] /= quickpow(i,cnt);
                ans[j] *= quickpow(i,cnt / m);
            }
        }
    }

    ll a = 0;
    rep(i,L+1,L+n) {
//        printf("ans[%d]=%lld\n",i,ans[i]);
        a += i - ans[i];
    }
    _C(a)
}*/


/*
int n;
ll k;

struct Node {
    ll len,x,a,b;
    bool operator < (const Node &o) const {
        return o.a - o.b > a - b;
    }
};

ll ok(ll x,ll len) {
    if (x >= len) return 0;
    if (x >= len / 2) return len - x;
    ll ans = 0;
    ll avg = (len - x) / (x + 1);
    ll res = avg * (avg + 1) / 2;
    ll m = (len - x) % (x + 1);

    ans += res * (x - m + 1);
    if (m) {
        avg += 1;
        res = avg * (avg + 1) / 2;
    }
    ans += res * m;
    return ans;
}

ll sum = 0;
ll cnt = 0;
priority_queue<Node> q;

void read()
{
    string str;
    scanf("%d%lld",&n,&k);
    cin >> str;
    str += '0';

    for (int i = 0;str[i]; i++) {
        if (str[i] ^ 48) {
            cnt++;
        } else if(cnt) {
            sum += cnt * (cnt + 1) / 2;
            q.push({cnt , 0 , cnt * (cnt + 1) / 2 , ok(1,cnt)});
            cnt = 0;
        }
    }
}

void solve()
{
    int ans = 0;
    Node node;
    while (sum > k) {
        node = q.top();
        q.pop();
        q.push({node.len,node.x + 1,node.b,ok(node.x + 2,node.len)});

        sum += node.b - node.a;
        ans ++;
    }
    _C(ans)
}

int main() {
    read();
    solve();
    return 0;
}
*/

/*
struct Node {
    int to;
    int w;
    bool operator<(const Node &o) const {
        return w > o.w;
    }
};

const int maxn = 110;

vector<Node> g[maxn];
int dis[maxn];
int vis[maxn];
int pre[maxn];

set<int> ans;

void dij(int s,int t) {
//    _C(s << " " << t << ":")
    priority_queue<Node> q;
    memset(dis,-1,sizeof dis);
    memset(vis,0,sizeof vis);
    q.push({s,dis[s] = 0});
    pre[s] = -1;

    Node top;
    int cur;

    int cost;

    while (!q.empty()) {
        top = q.top();
        q.pop();
        cur = top.to;

        if (vis[cur]) continue;
        vis[cur] = 1;

        for (auto i : g[cur]) {
            cost = dis[cur] + i.w;
            if (dis[i.to] == -1 || dis[i.to] >= cost) {
                q.push({i.to,dis[i.to] = cost});
                pre[i.to] = cur;
            }
        }
    }

//    _C(dis[t])
    cur = t;
    while (cur != -1) {
//        printf("%d ",cur);
        ans.insert(cur);
        cur = pre[cur];
    }
//    _C("")
}

int a[maxn];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int t;
    rep(i,0,n-1) {
        rep(j,0,n-1) {
            scanf("%d",&t);
            if (t) {
                g[i].pb({j,1});
            }
        }
    }
//    int u,v;
//    while (m --) {
//        scanf("%d%d",&u,&v);
//        g[u].pb({v,1});
//        g[v].pb({u,1});
//    }
//    int s;
//    cin >> s >> t;

    rep(i,1,m) scanf("%d",a + i);
    rep(i,1,m) {
        rep(j,i + 1,m) {
            dij(a[i],a[j]);
        }
    }

//    _C("---")
//    for (auto i : ans) {
//        printf("%d ",i);
//    }
    _C(ans.size())
}
*/

/*
inline bool hasVis(string str) {
    int ok = 0;
    for (int i = 0;str[i];i ++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r') ok = 1;
    }
    return ok;
}

int main()
{
    
    fre("/Users/jackli/Downloads/课程题库 单 4-8章 200. 9.16.csv");
    string str;
    getline(cin,str);
    int idx = 0;
    string k;
    int x = 1;
    int st = 0;
    string d = "";
    char c = 'A';
    st = 0;
    int tab = 0;
    while (getline(cin, str))
    {
        if (!st) {
            idx = 0;
            c = 'A';
        } else {
            k += "\n";
            if (tab) k += "\t   ";
        }
        for (int i = 0;str[i];i ++) {
            if (str[i] == '\"') {
                if (st) tab = 0;
                st = !st;
            }
            else if (str[i] == ',' && !st) {
                idx ++;
                if (idx == 6 || idx == 7) {
                    k = "";
                    continue;
                } else if (idx == 4) {
                    d = "\n【答案】" + k;
                    k = "";
                    continue;
                } else if (idx == 5) {
                    if (k != "") d += " 解析：" + k;
                } else if (idx >= 8) {
                    if (k != "") {
                        printf("\n\t%c. ",c ++);
                        cout << k;
                        tab = 1;
                    }
                    k = "";
                    continue;
                }
                if (idx == 2) printf("\n%d.【",x ++);
                if (k != "") cout << k;
                if (idx == 2) printf("】");

                k = "";
            } else {
                k += str[i];
            }
        }
        if (!st)  {
            if (hasVis(k)) {
                printf("\n\t%c.",c ++);
                cout << k;
            }

            cout << endl << d << endl;
        }

//        printf(" >>%d\n",idx);
    }
    return 0;
}
*/

/*
string str;
int a[100010][110];

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
    cin >> str;
    for (int i = 0;str[i];i ++) {
        a[i + 1][str[i]] ++;
        rep(j,'a','z') {
            if (i != 0) a[i + 1][j] += a[i][j];
        }
    }
    int l,r,ans;
    while (q --) {
        scanf("%d%d",&l,&r);
        ans = 0;
        rep(i,'a','z') {
            ans += (i - 'a' + 1) * (a[r][i] - a[l - 1][i]);
        }
        printf("%d\n",ans);
    }
}*/


//int main() {
//    ll n,x,t;
//    ll ans;
//    ll k;
//    __T {
//        sclll(n,x,t);
//        k = t / x;
//        ans = k * (max(n - k,0ll));
//        k = min(n,k);
//        ans += (k - 1) * k / 2;
//        printf("%lld\n",ans);
//    }
//}

/*
const int maxn = 2e5 + 10;

ll a[maxn];
ll sub[maxn];

int main()
{
    ll n,k,x;
    ll cnt;

    sclll(n,k,x);
    rep(i,1,n) scl(a[i]);
    sort(a + 1,a + 1 + n);
    cnt = 0;
    rep(i,2,n) {
        if (a[i] - a[i - 1] > x) {
            sub[++ cnt] = (a[i] - a[i - 1] - 1) / x;
        }
    }
    sort(sub + 1,sub + cnt + 1);
    int i;
    for (i = 1;i <= cnt;i ++) {
//        printf("%lld\n",sub[i]);
        if (sub[i] > k) {
            break;
        }
        k -= sub[i];
    }
    _C(cnt - i + 2)
}*/

/*
struct Node {
    ll a,b;
    bool operator<(const Node &o) const {
        return b > o.b;
    }
};
const int maxn = 1e5 + 10;

Node p[maxn];

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scll(p[i].a,p[i].b);
    }
    sort(p + 1,p + 1 + n);
    ll ans = 0;
    ll cnt = 0;
    ll pro;
    for (int i = 1,j = n;i <= j + 1;i ++) {
        while (cnt >= p[j].b) {
            cnt += p[j].a;
            ans += p[j].a;
            j --;
            if (j < i) break;
        }
        pro = min(p[i].a,max(0ll,p[j].b - cnt));
        ans += pro * 2;
        cnt += pro;
        p[i].a -= pro;
        if (p[i].a) i --;
    }
    _C(ans)
}*/

/*
int main()
{
    int a,b;
    int ans;
    while (~scanf("%d%d",&a,&b)) {
        ans = b - a;
        if (b == 12 || b == 24) ans --;
        if (b > 12 && a < 12) ans --;
        _C(ans)
    }
}*/

/*
int main()
{
    int n,k;
    int cntk,cntn,cntx;
    int nn;
    int kk;
    __T {
        scanf("%d%d",&n,&k);
        kk = k;
        cntk=cntn=cntx = 0;
        while (k) {
            k /= 2;
            cntk += k;
        }
        nn = n;
        while (n) {
            n /= 2;
            cntn += n;
        }
        n = nn - kk;
        while (n) {
            n /= 2;
            cntx += n;
        }
        printf("%d\n",cntn - cntx <= cntk);
    }
}*/

/*
const int maxn = 1010;

int a[maxn][maxn];
int b[maxn][maxn];

int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};

int ok[maxn*maxn];

int n,m;
int tp;

void dfs(int i,int j) {
    b[i][j] = tp;
    int x,y;
    int t;
    rep(k,0,3) {
        x = i + dx[k];
        y = j + dy[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m) {
            if (a[x][y] == a[i][j]) {
                if (b[x][y] == 0)
                    dfs(x,y);
            } else {
                if (a[x][y] > a[i][j]) {
                    t = 1;
                } else t = -1;
                if (ok[tp] == 0) ok[tp] = t;
                else {
                    if (ok[tp] != t) {
                        ok[tp] = 2;
                    }
                }
            }
        }
    }
}

int main()
{
    int cnt1,cnt2;
    while (~scanf("%d%d",&n,&m)) {
        rep(i,1,n) {
            rep(j,1,m) {
                scanf("%d",&a[i][j]);
                b[i][j] = 0;
            }
        }
        tp = 0;

        rep(i,1,n) {
            rep(j,1,m) {
                if (b[i][j] == 0) {
                    b[i][j] = ++ tp;
                    dfs(i,j);
                }
            }
        }

//        rep(i,1,n) {
//            rep(j,1,m) {
//                printf("%d ",b[i][j]);
//            }
//            puts("");
//        }
        cnt2 = cnt1 = 0;
        rep(i,1,tp) {
            if (ok[i] == 1) cnt1 ++;
            else if (ok[i] == -1) cnt2 ++;
            ok[i] = 0;
        }
        printf("%d %d\n", cnt1, cnt2);
    }
}*/

/*
int main() {
    int n,m;
    int ans;
    while (~scanf("%d%d",&n,&m)) {
        ans = n * m;
        if (ans % 2) {
            printf("%.2f\n",ans - 1 + sqrt(2));
        } else printf("%d.00\n",ans);
    }
}
*/

/*
int main()
{
    ll ans;
    ll k;
    ll v;
    __T {
        scanf("%lld",&k);
        k = abs(k);
        v = sqrt(2*k+0.25)-0.5;
        ans = (1 + v) * v / 2;
        for (int i = v+1;;i ++) {
            if (ans >= k) {
                if (ans % 2 == k % 2) {
                    printf("%d\n",i - 1);
                    break;
                }
            }
            ans += i;
        }
    }
}*/

/*
const int maxn = 2510;

int a[51],b[51];
int dp[maxn][maxn];

int main() {
    int n,l,m;
    scanf("%d%d%d",&n,&l,&m);
    rep(k,1,n) {
        scanf("%d%d",&a[k],&b[k]);
        pre(i,l,0) {
            pre(j,m,0) {
                if (i+a[k]<=l && j+b[k]<=m) {
                    dp[i+a[k]][j+b[k]] += dp[i][j];
                }
            }
        }
        dp[a[k]][b[k]] ++;
    }
    printf("%d\n",dp[l][m]);
}*/

/*
const int maxn = 1e3+10;

ll a[maxn];
ll sum[maxn];

ll dp[maxn][maxn];

int main() {
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    rep(i,1,n) scl(a[i]);
    rep(i,1,n) {
        sum[i] = sum[i-1] + a[i];
    }
    rep(i,1,n) {
        rep(j,1,m) {
            dp[i][j] = max(dp[i - 1][j],dp[max(i - k,0)][j - 1] + (sum[i] - sum[max(0,i - k)]));
        }
    }
    _C(dp[n][m])
}*/


/*
int a[20][20];

int dx[] = {0,0,-1};
int dy[] = {1,-1,0};

int main()
{
    int n;
    scanf("%d",&n);
    int cnt = 0;
    int line[20][20];
    int t[20];
    rep(i,1,n) {
        rep(j,1,n) {
            scanf("%d",&a[i][j]);
            if (i == 1 && a[i][j] == 0) {
                cnt ++;
            }
        }
    }

    int kk = 1 << cnt;
    int x;
    int res;
    int c;
    int around;
    int xx,yy;
    int ans = -1;
    for (int ii = 0;ii < kk;ii ++) {
        x = ii;
        res = 0;
        for (int j = 0;j < cnt;j ++) {
            t[j] = x & 1;
            res += t[j];
            x >>= 1;
        }

        c = 0;
        rep(i,1,n) {
            rep(j,1,n) {
                line[i][j] = a[i][j];
                if (i == 1 && a[i][j] == 0) {
                    line[i][j] = t[c ++];
                }
            }
        }

        rep(i,1,n-1) {
            rep(j,1,n) {
                around = 0;
                rep(k,0,2) {
                    xx = i + dx[k];
                    yy = j + dy[k];
                    if (xx >= 1 && xx <= n && yy >= 1 && yy <= n) {
                        if (line[xx][yy]) around ++;
                    }
                }
                if (around % 2) {
                    if (!line[i + 1][j]) {
                        res ++;
                    }
                    line[i + 1][j] = 1;
                } else {
                    if (line[i + 1][j]) goto next;
                }
            }
        }


        rep(i,1,n) {
            around = 0;
            rep(k,0,2) {
                xx = n + dx[k];
                yy = i + dy[k];
                if (xx >= 1 && xx <= n && yy >= 1 && yy <= n) {
                    if (line[xx][yy]) around ++;
                }
            }
            if (around % 2) goto next;
        }


        if (ans == -1) ans = res;
        else ans = min(ans,res);

        next:;
    }
    printf("%d\n",ans);
}*/

/*
int main()
{
    double x[10],y[10];
    rep(i,1,3) {
        scanf("%lf%lf",x + i,y + i);
    }
    rep(i,4,6) {
        scanf("%lf%lf",x + i,y + i);
    }
    double a[5],b[5],c[5];
    a[1] = sqrt((x[1] - x[2]) * (x[1] - x[2]) + (y[1] - y[2]) * (y[1] - y[2]));
    a[2] = sqrt((x[4] - x[5]) * (x[4] - x[5]) + (y[4] - y[5]) * (y[4] - y[5]));

    b[1] = sqrt((x[1] - x[3]) * (x[1] - x[3]) + (y[1] - y[3]) * (y[1] - y[3]));
    b[2] = sqrt((x[4] - x[6]) * (x[4] - x[6]) + (y[4] - y[6]) * (y[4] - y[6]));

    c[1] = sqrt((x[2] - x[3]) * (x[2] - x[3]) + (y[2] - y[3]) * (y[2] - y[3]));
    c[2] = sqrt((x[5] - x[6]) * (x[5] - x[6]) + (y[5] - y[6]) * (y[5] - y[6]));

    double p = (a[1] + b[1] + c[1]) / 2;
    double ans = sqrt(p * (p - a[1]) * (p - b[1]) * (p - c[1]));

    p = (a[2] + b[2] + c[2]) / 2;
    ans += sqrt(p * (p - a[2]) * (p - b[2]) * (p - c[2]));

    printf("%.2f\n",ans);
}*/

/*
const int MAXN = 2e5 + 10;

int find_set[MAXN];
int depth[MAXN];

int find(int a)
{
    if (find_set[a] == a) return a;
    return find_set[a] = find(find_set[a]);
}

inline void bind(int a,int b)
{
    int x = find(a), y = find(b);
    if (depth[x] >= depth[y]) { // 如果a的 根的子树深度 比b的 根的子树深度 大，那a的根继续做根
        find_set[y] = x; // 改变b节点的根的根为a的根
        if (depth[x] == depth[y]) { // 俩根深度一样
            if (x != y) depth[x] ++; // 作为a的根，自然子树的深度++
        }
    } else find_set[x] = y;
}

void init(int n)
{
    rep(i,0,n) {
        find_set[i] = i;  // 每个种类初始状态只有自己一个点
        depth[i] = 1;  // 初始化秩
    }
}

struct Node {
    int u,v;
    ll w;
    bool operator<(const Node &o) const {
        return w < o.w;
    }
} a[MAXN];

const int maxn = 1e7+5;

int num[maxn], primes[maxn]; // primes数组存的是所有的质数, num[数字]判断 数字 是否为质数
int p_cnt = 0;
void Euler_Sieve(int n) {
    memset(num, -1, sizeof(num));
    for (int i = 2;i <= n;i ++){
        if (num[i]) primes[p_cnt ++] = i;
        for (int j = 0;j < p_cnt && 1LL * i * primes[j] <= n;j ++){
            num[i * primes[j]] = 0;
            if (i % primes[j] == 0) break;
        }
    }
}

int main()
{
    Euler_Sieve(1e7+5);

    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);

    rep(i,1,m) {
        scii(a[i].u,a[i].v);
        scl(a[i].w);
        if (num[a[i].w]) a[i].w = 0;
    }
    sort(a + 1,a + 1 + m);
    init(n + 5);
    ll ans = 0;
    rep(i,1,m) {
        if (find(a[i].u) == find(a[i].v)) continue;
        bind(a[i].v,a[i].u);
        ans += a[i].w;
    }

    int ok = 1;

    rep(i,2,n) {
        if (find(i) != find(i - 1)) {
            ok = 0;
            break;
        }
    }

    if (ans < k && ok) _C("wmmxycwdjdwdlnljbzwtskirakira")
    else _C("wmmxycwdjdwdlnljbzwtsfljt")
}
*/

/*
/// 矩阵模版 快速幂
const int mod = 1e9 + 7;

class Matrix
{
    const static int MAXN = 10;

    ll a[MAXN][MAXN];

public:
    int w;
    int h;

    Matrix(int h,int w):w(w),h(h)
    {
        mem(a,0);
    }

    Matrix(const char format[], ...) {

        va_list args;
        w = 0;
        h = 0;

        char buf[1000];

        va_start(args, format);
        vsprintf(buf, format, args);
        va_end(args);

        stringstream ss(buf);
        stringstream num;
        ll n;
        string line;
        while (getline(ss, line)) {
            num.clear();
            num << line;
            w = 0;
            while (num >> n) {
                a[h + 1][++ w] = n;
            }
            h ++;
        }
    }

    void E()
    {
        if (w == h) {
            mem(a,0);
            rep(i,1,w) a[i][i] = 1;
        }
    }

    void print()
    {
        int f = 1;
        rep(i,1,h) {
            f = 1;
            rep(j,1,w) {
                if (f) f = 0;
                else printf(" ");
                printf("%lld",a[i][j]);
            }
            puts("");
        }
    }

    void read_in()
    {
        rep(i,1,h) {
            rep(j,1,w) {
                scanf("%lld",&a[i][j]);
            }
        }
    }

    Matrix operator* (const Matrix &B) const
    {
        if (w != B.h) return Matrix(0,0); // invalid

        Matrix ans(h,B.w);
        rep(i,1,h) {
            rep(j,1,B.w) {
                rep(k,1,w) {
//                    ans[i][j] = (ans[i][j] + a[i][k] * B[k][j]); // Not Moduled
                    ans[i][j] = (ans[i][j] + a[i][k] * B[k][j] % mod + mod) % mod; // Moduled
                }
            }
        }
        return ans;
    }

    const ll* operator[] (int i) const {
        return a[i];
    }

    ll* operator[] (int i) {
        return a[i];
    }
};

Matrix quickpow(Matrix a, ll b)
{
    if (a.h != a.w) return Matrix(0,0); // invalid

    Matrix ans(a.h,a.w);
    rep(i,1,ans.h) ans[i][i] = 1; // Set ans matrix to E
    while (b)
    {
        if (b & 1) ans = a * ans;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

const int MAXN = 5e4 + 10;

lll ugly[MAXN];

lll minist(lll a, lll b, lll c) {
    lll temp;
    temp = (a < b) ? a : b;
    temp = (temp < c) ? temp : c;
    return temp;
}

void uglyNumber(int n) {
    // 分别指向乘以2、3、5之后最小丑数的位置
    int p2 = 0, p3 = 0, p5 = 0;
    // 定义一个数组存放丑数
    ugly[0] = 1;
    for (int i = 1; i < n; i++) {
        // 这个地方是关键，三个索引是保证每个数都会乘以2、3、5一遍的关键
        ugly[i] = minist(ugly[p2] * 2, ugly[p3] * 3, ugly[p5] * 5);
        if (ugly[i] == ugly[p2] * 2) p2 ++;
        if (ugly[i] == ugly[p3] * 3) p3 ++;
        if (ugly[i] == ugly[p5] * 5) p5 ++;
    }
}

int main()
{
    uglyNumber(50000);
    Matrix p("2 3\n1 0"); // Construct a matrix

    int a,b;
    scii(a,b);

    ll aa = ugly[a - 1] % mod,bb = ugly[b - 1] % mod;

    Matrix base("%lld\n%lld",bb,aa);

    int n;
    scanf("%d",&n);

    if (n == 1) printf("%lld\n",aa);
    else if (n == 2) printf("%lld\n",bb);
    else printf("%lld\n",(quickpow(p, n - 2) * base)[1][1]);

    return 0;
}
*/

/*
inline bool judge(int n) {
    if (n == 1) return 0;
    for (ll i = 2;i * i <= n;i ++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    __T {
        scanf("%d",&n);
        puts(judge(n) ? "Yes" : "No");
    }
    
}
*/

/*
int main()
{
    int h;
    scanf("%d",&h);
    printf("%.1f\n",(h - 100) * 0.9 * 2);
}
*/

/*
const int maxn = 55;

struct Node {
    string name;
    int sex;
} a[maxn];

int vis[maxn];

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        cin >> a[i].sex >> a[i].name;
    }
    rep(i,1,n) {
        if (vis[i]) continue;
        pre(j,n,1) {
            if (vis[j]) continue;
            if (a[i].sex != a[j].sex) {
                _C(a[i].name << " " << a[j].name)
                vis[i] = vis[j] = 1;
                break;
            }
        }
    }
}
*/

/*
int main()
{
    int h,w;
    double b;
    __T {
        scanf("%d%d",&h,&w);
        b = (h - 100) * 0.9 * 2;
        if (fabs(b - w) < b * 0.1) puts("You are wan mei!");
        else if (b > w) puts("You are tai shou le!");
        else puts("You are tai pang le!");
    }
}
*/

/*
int main()
{
    int n;
    char ch;
    scanf("%d %c ",&n,&ch);
    string str;
    getline(cin,str);
    int l = n - (int) str.size();
    if (l >= 0) {
        rep(i,1,l) {
            printf("%c",ch);
        }
        _C(str)
    } else {
        _C(str.substr(-l));
    }
}
*/


/*
int main()
{
    int n;
    int a,b;
    int t;
    __T {
        scanf("%d",&n);
        a = 0;
        b = 0;

        rep(i,1,2 * n) {
            scanf("%d",&t);
            if (t & 1) a ++;
            else b ++;
        }
        puts(a == b ? "Yes" : "No");
    }
}
*/

/*
ll exgcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll r = exgcd(b, a % b, x, y);
    ll t = y;
    y = x - (a / b) * y;
    x = t;
    return r;
}

int main()
{
    ll a,b,n;
    ll x,y;
    ll g;
    ll k;
    __T {
        scanf("%lld%lld%lld",&n,&a,&b);
        g = exgcd(a,b,x,y);
        if (n % g != 0) puts("No");
        else {
            k = n / g;

        }
    }
}*/

/*
int main() {

    ll n,a,b;
    ll x;
    __T {
        scanf("%lld%lld%lld",&n,&a,&b);
        x = 1;
        while (1) {
            if (x > n) break;
            if (!((n - x) % b)) {
                puts("Yes");
                goto end;
            }
            x *= a;
            if (a == 1) {
                break;
            }
        }
        puts("No");
        end:;
    }
    return 0;
}*/

/*
ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

struct Node {
    ll n;
    ll x;
} p[50];

const int mod = 1e9 + 7;

int main()
{
    ll cur = 1;
    int cnt = 0;
    ll k;
    for (int i = 1;;i ++) {
        if ((k = gcd(cur,i)) == i) continue;
        if (cur > 1e16) break;
        p[++ cnt] = {i,cur};
        cur *= i / k;
    }
    ll ans;
    ll n;
    ll last;
    ll x;
    __T {
        scanf("%lld",&n);
        last = 0;
        ans = 0;
        rep(i,1,cnt) {
            x = n / p[i].x;
            ans = (ans + mod - x * last % mod) % mod;
            ans += x * p[i].n % mod;
            ans %= mod;
            last = p[i].n;
        }
        _C(ans)
    }
}*/

/*
int main() {
    ll a,b;
    ll x;
    __T {
        scll(a,b);
        if (a == b) {
            puts("0 0");
            continue;
        }
        x = abs(a - b);
        printf("%lld %lld\n",x,min(min(a,b) % x,x - min(a,b) % x));
    }
    return 0;
}*/

/*
const int maxn = 2e5 + 10;

ll a[maxn];

int main() {
    int n;
    ll sum;
    ll lt,mod;
    __T {
        scanf("%d",&n);
        sum = 0;
        rep(i,1,n) {
            scanf("%lld",a + i);
            sum += a[i];
        }
        mod = sum % n;
        lt = n - mod;
        sum = lt * mod;
        printf("%lld\n",sum);
    }
}*/

/*
struct Node {
    double c,m,p;
    double sum;
    int cnt;
};

int main()
{
    double c,m,p,v;
    queue<Node> q;

    Node top,cl;
    int mx;
    double sum[50];
    double ans;
    __T {
        scddd(c,m,p);
        scd(v);
        for (int i = 0;i < 50;i ++) sum[i] = 0;
        while (!q.empty()) q.pop();
        q.push({c,m,p,1,0});

        mx = 0;

        while (!q.empty()) {
            cl = q.front();
            cl.cnt ++;
            q.pop();

            top = cl;
            // c
            if (top.c != -1) {
                top.sum *= top.c;
                if (top.c <= v) {
                    if (top.m == -1) {
                        top.p += min(v,top.c);
                    } else {
                        top.m += min(v,top.c) / 2;
                        top.p += min(v,top.c) / 2;
                    }
                    top.c = -1;
                } else {
                    if (top.m == -1) {
                        top.p += v;
                    } else {
                        top.m += v / 2;
                        top.p += v / 2;
                    }
                    top.c -= v;
                    if (top.c < 0.00001) top.c = -1;
                }
//                if (!(top.c != -1 && top.m != -1 && (top.c < dps || top.m < dps)))
                q.push(top);
            }


            // m
            top = cl;
            if (top.m != -1) {
                top.sum *= top.m;
                if (top.m <= v) {
                    if (top.c == -1) {
                        top.p += min(v,top.m);
                    } else {
                        top.c += min(v,top.m) / 2;
                        top.p += min(v,top.m) / 2;
                    }
                    top.m = -1;
                } else {
                    if (top.c == -1) {
                        top.p += v;
                    } else {
                        top.c += v / 2;
                        top.p += v / 2;
                    }
                    top.m -= v;
                    if (top.m < 0.00001) top.m = -1;
                }
//                if (!(top.c != -1 && top.m != -1 && (top.c < dps || top.m < dps)))
                q.push(top);
            }


            // p
//            _C(cl.cnt << " " << cl.sum << " >" << cl.c << " " << cl.m << " " << cl.p)
            if (cl.cnt < 50) sum[cl.cnt] += cl.p * cl.sum;

            mx ++;
            if (mx >= 1e7) break;
        }
        ans = 0;
        for (int i = 0;i < 50;i ++) {
            ans += sum[i] * i;
        }
        printf("%.12f\n",ans);
    }
}*/

/*
int main()
{
    int n,k;
    int t;
    __T {
        scii(n,k);
        printf("%d\n",0);
        fflush(stdout);
        scanf("%d",&t);
        if (t) continue;
        rep(i,1,n-1) {
            printf("%d\n",i ^ (i - 1));
            fflush(stdout);
            scanf("%d",&t);
            if (t) break;
        }
    }
}
*/

/*
int main()
{
    int k;
    ll sum;
    int lamba = 5;
    double ans;
    while (~scanf("%d",&k)) {
        ans = 0;
        for (int kk = 0;kk <= k;kk ++) {
            sum = 1;
            for (int i = 1;i <= kk;i ++) {
                sum *= i;
            }
            ans += exp(-lamba) * pow(lamba,kk) / sum;
        }
        _C(ans)
    }
}
*/

/*
const int maxn = 1e2 + 10;

int a[maxn];
int b[maxn];

int main() {
    int n;
    int x,f;
    int l,r;
    int sub;
    __T {
        x = f = 0;
        sci(n);
        rep(i,1,n) scanf("%d",a + i);
        rep(i,1,n) scanf("%d",b + i);
        rep(i,1,n) {
            sub = a[i] - b[i];
            if (sub > 0) x += sub;
            else f -= sub;
        }
        if (x != f) {
            printf("-1\n");
            continue;
        }
        l = r = 1;
        printf("%d\n",x);
        for (;x;x --,a[l] --,a[r] ++) {
            for (;a[l] <= b[l];l ++);
            for (;a[r] >= b[r];r ++);
            _C(l << " " << r)
        }
    }
    return 0;
}*/

/*
const int maxn = 1e5 + 10;

multiset<char> c[maxn];

string str[maxn];
string str2[maxn];

int main()
{
    int n,m;
    int ok;
    __T {
        scanf("%d%d",&n,&m);
        rep(i,0,m) c[i].clear();
        rep(i,1,n) {
            cin >> str[i];
            for (int j = 0;str[i][j];j ++) {
                c[j].insert(str[i][j]);
            }
        }
        rep(i,1,n-1) {
            cin >> str2[i];
            for (int j = 0;str2[i][j];j ++)
                c[j].erase(c[j].find(str2[i][j]));
        }

        REP(i,0,m) {
            printf("%c",*c[i].begin());
        }
        puts("");
    }
}*/

//const int MAXN = 100010;
//const int mod = 998244353;
//
//ll fac[MAXN],invfac[MAXN],invn[MAXN];
//
//ll C(ll n,ll m){
//    if (n < 0 || m < 0 || n < m) return 0;
//    return fac[n] * invfac[m] % mod * invfac[n - m] % mod;
//}
//
//void init() {
//    fac[0] = fac[1] = invn[0] = invn[1] = invfac[0] = invfac[1] = 1;
//    for (int i = 2;i < MAXN;i ++){
//        fac[i] = fac[i - 1] * i % mod;
//        invn[i] = (mod - mod / i) * invn[mod % i] % mod;
//        invfac[i] = invfac[i - 1] * invn[i] % mod;
//    }
//}
//
//int main()
//{
//    init();
//    _C(C(9,5) * C(8,5))
//}

/*
const int maxn = 1e5 + 10;

int a[maxn];
pair<int,int> b[maxn];

int pos[maxn];

int main()
{
    int n;

    int ok;
    __T {
        sci(n);
        rep(i,1,n) {
            sci(a[i]);
            b[i] = make_pair(a[i],i);
            pos[i] = 0;
        }
        sort(b + 1,b + 1 + n);
        pre(i,n,1) {
            pos[i] = abs(i - b[i].second);
        }

        rep(i,1,n) printf("%d ",pos[i]);
        _C("")

        rep(i,1,n - 1) {
            if (b[i].first == b[i + 1].first) {
                if (!(pos[i] & 1))
                {
                    pos[i] ++;
                    pos[i + 1] ++;
                    swap(pos[i],pos[i + 1]);
                }
            }
        }

//        pre(i,n,2) {
//            if (b[i].first == b[i - 1].first) {
//                if ((pos[i - 1] & 1)) {
//                    pos[i] ++;
//                    pos[i - 1] ++;
//                    swap(pos[i],pos[i - 1]);
//                }
//            }
//        }
        
        ok = 1;

//        rep(i,1,n) printf("%d ",pos[i]);
//        _C("")

        rep(i,1,n) {
            if (pos[i] & 1) {
                ok = 0;
                break;
            }
        }

        puts(ok ? "YES" : "NO");
    }
}
*/

/*
const int MAXN = 310;

char c[MAXN][MAXN];
int sum[MAXN][MAXN];

int vis[MAXN][MAXN];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

int n,m;

void dfs(int i,int j,int kk)
{
    if (vis[i][j] || !sum[i][j]) return;
    vis[i][j] = kk;
    int x,y;
    for (int k = 0;k < 4;k ++) {
        x = i + dx[k];
        y = j + dy[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m) {
            dfs(x,y,kk);
        }
    }
}

int main()
{

    scanf("%d%d",&n,&m);
    rep(i,1,n) {
        scanf("%s",c[i] + 1);
    }
    rep(i,1,n) {
        rep(j,1,m) {
            sum[i][j] = c[i][j] ^ 48;
        }
    }

    int x1,x2,y1,y2,k;
    __T {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        rep(i,x1,x2) {
            rep(j,y1,y2) {
                sum[i][j] = 1;
            }
        }
        rep(i,1,n) {
            rep(j,1,m) {
                vis[i][j] = 0;
            }
        }

        k = 0;
        rep(i,1,n) {
            rep(j,1,m) {
                if (!vis[i][j] && sum[i][j]) {
                    dfs(i, j, ++ k);
                }
            }
        }

        _C(k)
    }
    return 0;
}
*/

/*
const int maxn = 1e6 + 10;

int a[maxn];
int dp[maxn][2];

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scanf("%d",a + i);
    }
//    dp[1][1] = 0;
    rep(i,1,n) {
        _C(i << ":")
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        rep(j,1,100) {
            if (i - j >= 1) {
                dp[i][1] = dp[i - j][0];
                _C(dp[i-j][1] << " " << i-j << " " << a[i - j] << " <= " << j)
                if (a[i - j] <= j) dp[i][1] += dp[i - j][1] + 1;
            } else break;
        }
    }
    rep(i,1,n) printf("%d ",dp[i][0]);
    puts("");
    rep(i,1,n) printf("%d ",dp[i][1]);
    puts("");
}*/

/*
int main()
{
    ll n;
    ll x;
    ll ans;
    __T {
        scanf("%lld",&n);
        x = sqrt(n) * 2 - 1;
        ans = (x - 1) / 2 + 1;
        ans += n > ((1 + x) * ans / 2);
        _C(ans)
    }
}*/

/*
int main() {
    ll n,a,b;
    ll ans;
    char str[110];
    __T {
        scanf("%lld%lld%lld %s",&n,&a,&b,str);
        if (b <= 0) {
            ans = 1;
            for (int i = 1;str[i];i ++) {
                if (str[i - 1] != str[i]) {
                    ans ++;
                }
            }
            ans /= 2;
            ans ++;
            ans *= b;
            ans += n * a;
            _C(ans)
            continue;
        }
        printf("%lld\n", n * (a + b));
    }
    return 0;
}
*/

/*
const int maxn = 2e5 + 10;

struct Node {
    int x,y;
} a[maxn];

inline int dis(Node a,Node b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

inline int ok(Node a,Node b,Node c) {
    if (dis(a,b) == dis(a,c) + dis(b,c)) return 0;
    if (dis(a,c) == dis(a,b) + dis(b,c)) return 0;
    if (dis(b,c) == dis(a,c) + dis(a,b)) return 0;
    return 1;
}

inline int judge(vector<Node> &vec) {
    int s = vec.size();
    if (s <= 2) return 1;
    REP(ii,0,s) {
        REP(jj,ii + 1,s) {
            REP(kk,jj + 1,s) {
                if (!ok(vec[ii],vec[jj],vec[kk])) return 0;
            }
        }
    }
}

int main()
{
    int n;
    vector<Node> vec;
    ll ans;
    __T {
        scanf("%d",&n);
        rep(i,1,n) {
            scanf("%d",&a[i].x);
            a[i].y = i;
        }
        ans = 0;
        rep(i,1,n) {
            vec.clear();
            rep(j,i,n) {
                vec.pb(a[j]);
                if (judge(vec)) ans ++;
                else {
                    break;
                }
            }
        }
        printf("%lld\n",ans);
    }
}
*/

/*
int a[100];

int n;

int l,r;

int f() {
    int cnt = 0;
    rep(i,1,n) {
        rep(j,i+1,n) {
            if (i + j == a[i] + a[j]) cnt ++;
        }
    }
    return cnt;
}

int m = 0;
int ans = 0;

void dfs(int u) {
    if (u == r + 1) {
        int x = f();
        if (x > m) {
            ans = 1;
            m = x;
        } else if (x == m) ans ++;
        return;
    }
    rep(i,l,r) {
        if (i == u) continue;
        a[u] = i;
        dfs(u + 1);
    }
}

int main()
{
    scanf("%d %d %d",&n,&l,&r);
//    l = 1;
//    r = n;
    dfs(1);
    _C(ans)
}
*/

/*
int main()
{
    double r,a,b,h;
    scanf("%lf%lf%lf%lf",&r,&a,&b,&h);
    if (2 * r <= b) {
        puts("Drop");
        return 0;
    }
    printf("Stuck\n");
    double k = (a - b) / 2;
    double m = sqrt(k * k + h * h);
    double x = r * h / m;
    double q = (2 * x - b) / 2;
    double n = q * h / k;
    printf("%.10f\n",r * k / m + n);
}
*/

/*
const int maxn = 5e5 + 10;

int a[maxn];

int vis[maxn];

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scanf("%d",a + i);
    }
    int ans = n;
    
    
    printf("%d\n",ans);
}
*/

/*
const int MAXN = 1e5 + 10;

int find_set[MAXN];
int depth[MAXN];

int find(int a)
{
    if (find_set[a] == a) return a;
    return find_set[a] = find(find_set[a]);
}

inline void bind(int a,int b)
{
    int x = find(a), y = find(b);
    if (depth[x] >= depth[y]) { // 如果a的 根的子树深度 比b的 根的子树深度 大，那a的根继续做根
        find_set[y] = x; // 改变b节点的根的根为a的根
        if (depth[x] == depth[y]) { // 俩根深度一样
            if (x != y) depth[x] ++; // 作为a的根，自然子树的深度++
        }
    } else find_set[x] = y;
}

void init(int n)
{
    rep(i,0,n) {
        find_set[i] = i;  // 每个种类初始状态只有自己一个点
        depth[i] = 1;  // 初始化秩
    }
}

struct Edge {
    int u,v;
    int w;
    bool operator<(const Edge &o) const {
        return w > o.w;
    }
} e;

priority_queue<Edge> q;

int main()
{
    int n,m,k;
    int nn;
    __T {
        scanf("%d%d%d",&n,&m,&k);

        while (!q.empty()) q.pop();
        while (m --) {
            scanf("%d%d%d",&e.u,&e.v,&e.w);
            q.push(e);
        }
        if (n == k) {
            puts("0");
            continue;
        }
        init(n + 5);
        nn = n;
        while (!q.empty()) {
            e = q.top();
            q.pop();
            if (find(e.u) != find(e.v)) {
                bind(e.u, e.v);
                nn --;
            }
            if (nn == k) {
                if (e.w != q.top().w) {
                    printf("%d\n",e.w);
                    break;
                }
            }
        }
        if (nn != k) {
            puts("-1");
        }
    }
}
*/

/*
#pragma GCC optimize(3)

const int maxn = 1e5 + 10;

int a;
int p[maxn];

#define bit 29

int num,k;

struct Tire {

    int tree[maxn * 32][2];
    int val[maxn * 32];
    int cnt;

    void init() {
        tree[0][0] = tree[0][1] = 0;
        cnt = 0; // 只有root节点
    }


    inline void insert(int x,int w) {
        int node = 0; // root节点
        int t;
        pre(i,bit,0) {
            t = x >> i & 1;
            if (!tree[node][t]) {
                tree[node][t] = ++ cnt;
                tree[cnt][0] = tree[cnt][1] = 0;
            }
            node = tree[node][t];
            val[node] = w;
        }
    }

    int search(int node,int i) {
        int t = num >> i & 1;
        int tk = k >> i & 1;
        int ans = -1;
        int s;

        if (i == -1) return val[node];

        if (tree[node][0]) {
            if (tk == (t ^ 0)) ans = search(tree[node][0],i - 1);
            else if (tk < (t ^ 0)) ans = val[tree[node][0]];
        }

        if (tree[node][1]) {
            if (tk == (t ^ 1)) s = search(tree[node][1],i - 1);
            else if (tk < (t ^ 1)) s = val[tree[node][1]];
            else s = -1;

            if (ans == -1) ans = s;
            else if (s != -1) ans = min(ans,s);
        }
        return ans;
    }
};

Tire t;

int main()
{
    int n;
    int l,r;
    int ans;
    int tr;


    __T {
        scanf("%d%d",&n,&k);
        p[0] = 0;
        rep(i,1,n) {
            scanf("%d",&a);
            p[i] = p[i - 1] ^ a;
        }

        t.init();

        ans = -1;
        pre(i,n,1) {
            t.insert(p[i],i);
            num = p[i - 1];
            tr = t.search(0,bit);
            if (tr != -1) {
                if (ans == -1 || ans >= tr - i) {
                    l = i;
                    r = tr;
                    ans = tr - i;
                }
            }
        }
        if (ans == -1) printf("-1\n");
        else printf("%d %d\n",l,r);
    }
}*/

/*
int main()
{
    ll n;
    int d;
    __T {
        scanf("%lld",&n);
        d = n == 1 ? 0 : log2(n-1);
        printf("%lld\n",(1ll << d) - 1);
    }
}*/

/*
const int maxn = 1e7 + 10;

char vis[maxn];
char f[maxn];
ll sum[maxn];

void init() {
    ll t;
    REP(i,2,maxn) {
        if (vis[i]) continue;
        f[i] = 1;
        for (int j = i;j < maxn;j += i) {
            if (vis[j]) continue;
            vis[j] = 1;
        }
    }

    REP(i,2,maxn) {
        if (i != 2) {
            if (f[i]) sum[i] += 2 * i;
            else sum[i] += i;
        }
        sum[i] += sum[i - 1];
    }
}

int main()
{
    init();
    ll n;
    __T {
        scanf("%lld",&n);
        _C(sum[n])
    }
}*/

/*
// 求满足01交替的最大矩阵面积
// https://www.luogu.com.cn/problem/P1169
const int maxn = 2e3 + 10;
int a[maxn][maxn];

int l[maxn][maxn]; // 代表从当前点(i,j)能到达的最左位置(列号)
int r[maxn][maxn]; // 代表从当前点(i,j)能到达的最右位置(列号)
int up[maxn][maxn]; // 代表从当前点(i,j)向上扩展最长长度

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    rep(i,1,n) {
        rep(j,1,m) {
            scanf("%d",&a[i][j]);
        }
    }

    // 初始化
    rep(i,1,n) {
        rep(j,1,m) {
            l[i][j] = r[i][j] = j;
            up[i][j] = 1;
        }
    }

    // 预处理行
    rep(i,1,n) {
        rep(j,2,m) {
            if (a[i][j - 1] != a[i][j]) // 满足的条件01不同
                l[i][j] = l[i][j - 1]; // 从左到右，l[i][j] = 满足条件的最左端的列号
        }
        pre(j,m - 1,1) {
            if (a[i][j + 1] != a[i][j]) // 满足的条件01不同
                r[i][j] = r[i][j + 1]; // 从右到左，r[i][j] = 满足条件的最右端的列号
        }
    }

    int sf = 0,sj = 0;
    int len;

    // 预处理列 & 递推
    rep(i,2,n) { // 因为条件是两个元素进行比对，故从第二行开始
        rep(j,1,m) {
            if (a[i][j] != a[i - 1][j]) { // 满足的条件01不同
                // 递推公式
                up[i][j] = up[i - 1][j] + 1; // 代表从当前点(i,j)向上扩展最长长度
                l[i][j] = max(l[i - 1][j],l[i][j]); // 代表从当前点(i,j)能到达的最左位置(列号)
                r[i][j] = min(r[i - 1][j],r[i][j]); // 代表从当前点(i,j)能到达的最右位置(列号)
            }
            len = r[i][j] - l[i][j] + 1; // 符合条件的最长的横向长度

            sf = max(sf,min(up[i][j],len)); // 求正方形的边长，为横向边长和纵向边长的min
            sj = max(sj,up[i][j] * len); // 求矩阵面积，长 * 宽
        }
    }

    _C(sf * sf)
    _C(sj)
}*/

/*
const int maxn = 2e3 + 10;
char a[maxn][maxn];

int x[maxn][maxn];

short l[maxn][maxn]; // 代表从当前点(i,j)能到达的最左位置(列号)
short r[maxn][maxn]; // 代表从当前点(i,j)能到达的最右位置(列号)
short up[maxn][maxn]; // 代表从当前点(i,j)向上扩展最长长度

int main()
{
    int n,m;
    int sf,sj;
    int len;
    __T {
        scanf("%d%d",&n,&m);
        rep(i,1,n) {
            rep(j,1,m) {
                scanf("%d",&x[i][j]);
            }
        }

        rep(j,1,m) {
            a[1][j] = 0;
            rep(i,2,n) {
                if (x[i - 1][j] <= x[i][j]) a[i][j] = 1;
                else a[i][j] = 0;
            }
        }

//        rep(i,1,n) {
//            rep(j,1,m) {
//                printf("%d ",a[i][j]);
//            }
//            puts("");
//        }


        // 初始化
        rep(i,1,n) {
            rep(j,1,m) {
                l[i][j] = r[i][j] = j;
                up[i][j] = 1;
            }
        }

        // 预处理行
        rep(i,1,n) {
            rep(j,2,m) {
                if (a[i][j - 1] == a[i][j] && a[i][j]) // 满足的条件01不同
                    l[i][j] = l[i][j - 1]; // 从左到右，l[i][j] = 满足条件的最左端的列号
                if (!a[i][j]) l[i][j] = 1;
            }
            pre(j,m - 1,1) {
                if (a[i][j + 1] == a[i][j] && a[i][j]) // 满足的条件01不同
                    r[i][j] = r[i][j + 1]; // 从右到左，r[i][j] = 满足条件的最右端的列号
                if (!a[i][j]) r[i][j] = m;
            }
        }

        sj = 0;

        // 预处理列 & 递推
        rep(i,2,n) { // 因为条件是两个元素进行比对，故从第二行开始
            rep(j,1,m) {
                if (a[i][j]) {
                    up[i][j] = up[i - 1][j] + 1; // 代表从当前点(i,j)向上扩展最长长度
                    l[i][j] = max(l[i - 1][j],l[i][j]); // 代表从当前点(i,j)能到达的最左位置(列号)
                    r[i][j] = min(r[i - 1][j],r[i][j]); // 代表从当前点(i,j)能到达的最右位置(列号)
                }
                else up[i][j] = 1;
                len = r[i][j] - l[i][j] + 1; // 符合条件的最长的横向长度

                

                sj = max(sj,up[i][j] * len); // 求矩阵面积，长 * 宽
            }
        }

        printf("%d\n",sj);
    }
}*/

/*
const int mod = 1000000007;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans % mod; // 可加可不加，加了应对mod=1的情况
}

int main() {
    ll n;
    string str;
    char st;
    int cnt;
    __T {
        scanf("%lld",&n);
        cin >> str;
        st = str[0];
        cnt= 0;
        for (int i = 0;str[i];i ++) {
            if (str[i] == st) cnt ++;
            else break;
        }
        printf("%lld\n", quickpow(2,cnt-1));
    }
}*/

/*
const int mod = 1e9 + 7;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans % mod; // 可加可不加，加了应对mod=1的情况
}

int main()
{
    ll n;
    ll nnn;
    __T {
        scanf("%lld",&n);
        n --;
        nnn = (n % mod) * ((n + 1) % mod) % mod;
        nnn *= quickpow(2,mod - 2);
        nnn %= mod;
        nnn = quickpow(nnn,2);
        nnn *= 8;
        nnn %= mod;
        printf("%lld\n",nnn);
    }
}*/

/*
const int mod = 998244353;

const int maxn = (1 << 18) + 10;

int n;

ll a[maxn];
ll b[maxn];

int tmp[25];
int cnt;

int len;
int t,x,k,as;

ll find(ll *A,ll *B,int idx) {
    cnt = 0;
    t = idx;
    x = 1;
    REP(i,0,len) {
        if (t & 1) tmp[cnt ++] = i;
        else x <<= 1;
        t >>= 1;
    }
//    _C(cnt)
//    _C(len - cnt)

    ll ansA = A[idx];
    ll ansB = B[idx];
//    _C("xx "<<ans)

    for (register int i = 0;i < x;i ++) {
        t = len - cnt - 1;
//        _C("t:" << t)
        k = 0;
        as = 0;
        for (register int j = len - 1;j >= 0;j --) {
//            _C("1: " << as)
            as <<= 1;
            if (j == tmp[cnt - k - 1] & k < cnt) {
                as ++;
                k ++;
//                _C(j << " " << as)
            } else {
                as += i >> t & 1;
                t --;
            }
//            _C("2: " << as)
        }
        if (as >= n) break;
        if (B[idx] > 0) ansA = max(ansA,A[as]);
        else ansA = min(ansA,A[as]);

        if (A[idx] > 0) ansB = max(ansB,B[as]);
        else ansB = min(ansB,B[as]);
    }

    return max(B[idx] * ansA,A[idx] * ansB);
}

int main()
{
    ll ans;
    ll mx;
    __T {
        scanf("%d", &n);
        len = log2(n) + 1;
//        _C("len:" << len)
        REP(i, 0, n) scanf("%lld", a + i);
        REP(i, 0, n) scanf("%lld", b + i);
        mx = find(a,b,n - 1);
        ans = mx % mod;
        for (register int i = n - 2;i >= 0;i --) {
//            _C("i:" << i)
//            _C(find(a,i,b[i] > 0))
//            _C(find(b,i,a[i] > 0))
            mx = max(mx,find(a,b,i));
            ans += mx % mod;
            ans %= mod;
        }
        printf("%lld\n",ans);
    }

}
*/

/*
const int mod = 998244353;

const int maxn = (1 << 18) + 10;

int n;

ll a[maxn];
ll b[maxn];

int main()
{
    __T {
        scanf("%d",&n);
        rep(i,1,n) {
            scanf("%d",a + i);
        }
        rep(i,1,n) {
            scanf("%d",b + i);
        }
    }
}*/

/*
const int maxn = 10010;

char str[maxn];
char tar[maxn];

int len_str;
int len_tar;

int ok;

void dfs(int i,int j,int opt) {
    if (i == len_tar) {
        ok = 1;
        return;
    }
    if (j < 0 || j >= len_str) return;

    if (str[j] == tar[i]) {
        if (opt) {
            if (j + 1 >= len_str) dfs(i + 1,j - 1,0);
            else dfs(i + 1,j + 1,1);
        }
        dfs(i + 1,j - 1,0);
    }
}

int main() {
    __T {
        scanf("%s %s",str,tar);
        len_str = strlen(str);
        len_tar = strlen(tar);
        for (int i = 0;str[i];i ++) {
            ok = 0;
            if (str[i] == tar[0]) dfs(0,i,1);
            if (ok) break;
        }
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
}
*/

/*
const int maxn = 15;

char str[maxn];
char tmp[maxn];

int main()
{
    int a,b;
    int ans;
    __T {
        scanf("%s",str);
        strcpy(tmp,str);
        for (int i = 0;tmp[i];i ++) {
            if (tmp[i] == '?') {
                if (i & 1) tmp[i] = '1';
                else tmp[i] = '0';
            }
        }
        ans = 10;
        a = b = 0;
        for (int i = 0;tmp[i];i ++) {
            if (tmp[i] == '1' && (i & 1)) a ++;
            if (tmp[i] == '1' && !(i & 1)) b ++;
            if (a > b + 5 - ((i-1) / 2 + 1)) {
                ans = min(ans,i + 1);
            }
            if (b > a + 5 - ((i-1) / 2 + 1)) {
                ans = min(ans,i + 1);
            }
            if ((i & 1) && a + 5 - (i / 2 + 1) < b) {
                ans = min(ans,i + 1);
            }
            if (!(i & 1) && b + 5 - (i / 2 + 1) < a) {
                ans = min(ans,i + 1);
            }
        }

        strcpy(tmp,str);
        for (int i = 0;tmp[i];i ++) {
            if (tmp[i] == '?') {
                if (!(i & 1)) tmp[i] = '1';
                else tmp[i] = '0';
            }
        }

        a = b = 0;
        for (int i = 0;tmp[i];i ++) {
            if (tmp[i] == '1' && (i & 1)) a ++;
            if (tmp[i] == '1' && !(i & 1)) b ++;
            if (a > b + 5 - ((i-1) / 2 + 1)) {
                ans = min(ans,i + 1);
            }
            if (b > a + 5 - ((i-1) / 2 + 1)) {
                ans = min(ans,i + 1);
            }
            if ((i & 1) && a + 5 - (i / 2 + 1) < b) {
                ans = min(ans,i + 1);
            }
            if (!(i & 1) && b + 5 - (i / 2 + 1) < a) {
                ans = min(ans,i + 1);
            }
        }
        _C(ans)
    }
}
*/

/*
int main()
{
    string str;
    string tar;
    char st;
    int odd,even;
    int last;
    int i,j;
    __T {
        cin >> str;
        cin >> tar;
        odd = even = -1;
        st = tar[0];
        for (i = 0;str[i];i ++) {
            if (str[i] == st) {
                if ((i & 1) && odd == -1) odd = i;
                if (!(i & 1) && even == -1) even = i;
            }
        }
        if (odd != -1) {
            last = odd - 1;
            for (i = odd,j = 0;str[i];i ++) {
                if (str[i] == tar[j] && ((i - last) & 1)) {
                    last = i;
                    j ++;
                }
            }
            if (j == tar.size() && ((str.size() - last) & 1)) {
                puts("YES");
                continue;
            }
        }
        if (even != -1) {
            last = even - 1;
            for (i = even,j = 0;str[i];i ++) {
                if (str[i] == tar[j] && ((i - last) & 1)) {
                    last = i;
                    j ++;
                }
            }
            if (j == tar.size() && ((str.size() - last) & 1)) {
                puts("YES");
                continue;
            }
        }
        puts("NO");
    };
}
*/
/*
const int maxn = 1e5 + 10;

int block;

int a[maxn];
struct Node {
    int l,r;
    bool operator<(const Node &o) const {
        return l / block == o.l / block ? r < o.r : l < o.l;
    }
} p[maxn];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    block = sqrt(n);

    rep(i,1,n) {
        scanf("%d",a + i);
    }
    rep(i,1,m) {
        scanf("%d%d",&p[i].l,&p[i].r);
    }
    sort(p + 1,p + 1 + m);
    rep(i,1,m) {
        printf("%d %d\n",p[i].l,p[i].r);
    }
}*/

/*
namespace GenHelper
{
    unsigned z1,z2,z3,z4,b,u;
    unsigned get()
    {
        b=((z1<<6)^z1)>>13;
        z1=((z1&4294967294U)<<18)^b;
        b=((z2<<2)^z2)>>27;
        z2=((z2&4294967288U)<<2)^b;
        b=((z3<<13)^z3)>>21;
        z3=((z3&4294967280U)<<7)^b;
        b=((z4<<3)^z4)>>12;
        z4=((z4&4294967168U)<<13)^b;
        return (z1^z2^z3^z4);
    }
    bool read() {
        while (!u) u = get();
        bool res = u & 1;
        u >>= 1; return res;
    }
    void srand(int x)
    {
        z1=x;
        z2=(~x)^0x233333333U;
        z3=x^0x1234598766U;
        z4=(~x)+51;
        u = 0;
    }
}
using namespace GenHelper;

const int maxn = 8005;

bool edge[8005][8005];

ll x[maxn];

int main() {
    ll n;
    int seed;
    scanf("%lld%d",&n,&seed);

    srand(seed);
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            edge[j][i] = edge[i][j] = read();

    rep(i,1,n) {
        rep(j,1,n)
            if (edge[i][j]) x[i] ++;
    }

    ll ans = n*(n-1)*(n-2)/6;
    ll a = 0;


    rep(i,1,n) {
//        _C(x[i])
        a += x[i] * (n - 1 - x[i]);
    }
    _C(ans-a/2)
    return 0;
}*/

/*
set<lll> st;
ll all[1100000];
int cnt;

int main() {
    lll b;
    lll r;
    lll a,last;
    lll t;
    st.insert(1);
    for (lll k = 2;k <= 1000000;k ++) {
        b = k;
        r = k * k;
        last = 0;
        while (1) {
            a = r * b - last;

            if (a > 1e18) break;
            if (st.find(a) != st.end()) break;
            st.insert(a);
            last = b;
            b = a;
        }
    end:;
    }
    for (auto i : st) {
        all[++ cnt] = i;
    }
    ll n;
    __T {
        scanf("%lld",&n);
        printf("%lld\n", lower_bound(all + 1,all + 1 + cnt,n+1) - (all + 1));
    };

}*/

/*
int n,m;

struct Node {
    int a[4];
    bool operator<(const Node &o) const {
        rep(i,0,n-1) {
            if (a[i] == o.a[i]) continue;
            return a[i] < o.a[i];
        }
        return 0;
    }

    void print() {
        rep(i,0,n-1) {
            if (i!=0) printf(" ");
            printf("%d",a[i]);
        }
        puts("");
    }
};

int a[4];



int res;

void dfs(int u,double ans,int ok) {
    if (u == n) {
        if (fabs(ans - m) < 1e-6) {
            _C(ans)
            if (ok) {
                if (!res) res = 1;
            } else res = -1;
        }
        return;
    }

    dfs(u + 1,ans + a[u],ok);
    dfs(u + 1,ans - a[u],ok);
    dfs(u + 1,ans * a[u],ok);
    dfs(u + 1,ans / a[u],ok || ((ans / a[u]) != (((int) ans) / a[u])));
}

int b[4];

int main()
{

    scanf("%d%d",&n,&m);



    set<Node> ans;

    Node t;

    rep(i,1,13) {
        a[0] = i;
        rep(j,1,13) {
            a[1] = j;
            rep(ii,1,13) {
                a[2] = ii;
                rep(jj,1,13) {
                    a[3] = jj;
                    res = 0;
                    dfs(1,a[0],0);
                    if (res == 1 || res == -1) {

                        rep(k,0,n-1) b[k] = a[k];

                        //
                        t = Node();
                        rep(k,0,n-1) t.a[k] = b[k];
                        t.print();
                        //

                        sort(b,b + n);
//
                        t = Node();
                        rep(k,0,n-1) t.a[k] = b[k];



                        if (res == 1) {
                            ans.insert(t);
//                            t.print();
                        }
                        else if (ans.find(t) != ans.end()) ans.erase(ans.find(t));
                    }

                }
            }
        }
    }

    for (auto i : ans) {
        i.print();
    }


}*/

/*
int main()
{
    int a,b;
    cin >> a >> b;
    printf("%.7f\n",(a - b) / 3.0 + b);
}*/

/*
map<string,int> mp;

int main()
{
    string str;
    rep(i,1,4)  {
        cin >> str;
        mp[str] ++;
    }
    if (mp["H"] && mp["2B"] && mp["3B"] && mp["HR"]) puts("Yes");
    else puts("No");
}*/

/*
ll a['z' + 1];
ll last['z' + 1];


const int mod = 1e9 + 7;
int main()
{
    char ch[] = "chokudai";

    string str;
    cin >> str;

    for (int i = 0;ch[i];i ++) {
        last[ch[i]] = i - 1;
    }



    for (int i = 0;str[i];i ++) {
        if (last[str[i]] == -1) {
            a[str[i]] ++;
            a[str[i]] %= mod;
        }
        else {
            a[str[i]] += a[ch[last[str[i]]]];
            a[str[i]] %= mod;
        }
//        _C(str[i] << ": " << a[str[i]])
    }
    _C(a['i'])
}*/

/*
const int MAXN = 2e5 + 10;
const int mod = 1e9 + 7;

struct Edge {
    int to;
    ll w;
    int nxt;
} e[MAXN * 2];
int g[MAXN]; // Please call init() to memset it to -1!
int cnt = 0;

void init(int n)
{
    cnt = 0;
    memn(g,-1,int,n);
}

void add_edge(int u,int v,ll w)
{
    e[cnt] = {v,w,g[u]};
    g[u] = cnt ++;
}


ll dis[MAXN];
int vis[MAXN];

struct Node {
    int n;
    ll w;

    bool operator< (const Node &other) const {
        return w > other.w;
    }
};

int type[MAXN];

void dij(int s) {
    mem(dis,-1);
    mem(vis,0);

    priority_queue<Node> q;
    q.push({s,dis[s] = 0});

    type[1] = 1;

    Node current;
    ll k;
    int to;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.n]) continue;
        vis[current.n] = 1;

        for (int i = g[current.n];~i;i = e[i].nxt) {
            to = e[i].to;
            k = dis[current.n] + e[i].w;

            if (dis[to] == -1 || dis[to] >= k) {
                if (dis[to] == k) type[to] += type[current.n];
                else type[to] = type[current.n];
                type[to] %= mod;
                q.push({to,dis[to] = k});
            }
        }
    }
}

int main()
{
    int n,m;
    int u,v;
    int t;

    scanf("%d%d",&n,&m);
    init(n + 5);
    while (m --) {
        scanf("%d%d",&u,&v);
        add_edge(u,v,1);
        add_edge(v,u,1);
    }

    dij(1);
    _C(type[n])

    return 0;
}*/

/*
char mp[10][10];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int ans;
int n,k;

set<set<pair<int,int>>> st[10];

int main()
{
    set<pair<int,int>> pt;
    pt.insert(mpair(0,0));
    st[1].insert(pt);

    int x,y;
    int offx,offy;
    for (int i = 2;i <= 8;i ++) {
        for (auto j : st[i-1]) {
            for (auto point : j) {
                for (int s = 0; s < 4; s++) {
                    set<pair<int,int>> ne;
                    x = point.first + dx[s];
                    y = point.second + dy[s];
                    if (j.find(make_pair(x,y)) == j.end()) {
                        offx = max(0,-x);
                        offy = max(0,-y);

                        ne.insert(make_pair(x + offx,y + offy));
                        for (auto p : j) {
                            ne.insert(make_pair(p.first + offx,p.second + offy));
                        }
                        st[i].insert(ne);
                    }
                }
            }
        }
    }
//    for (auto s : st[3]) {
//        for (auto pos : s) {
//            _C(pos.first << " " << pos.second)
//        }
//        _C("--")
//    }
//    rep(i,1,8) {
//        printf("%d\n",st[i].size());
//    }

    scanf("%d%d",&n,&k);
    rep(i,1,n) {
        scanf("%s",mp[i] + 1);
    }
    int xx,yy;
    int ok;
    rep(i,1,n) {
        rep(j,1,n) {
            for (auto type : st[k]) {
                ok = 1;
                for (auto pos : type) {
                    xx = pos.first + i;
                    yy = pos.second + j;
                    if (!(xx >= 1 && xx <= n && yy >= 1 && yy <= n)) {
                        ok = 0;
                        break;
                    }
                    if (mp[xx][yy] != '.') {
                        ok = 0;
                        break;
                    }
                }
                if (ok) ans ++;
            }
        }
    }
    _C(ans)
}*/

/*
struct Node {
    int to;
    int w;
    bool operator<(const Node &o) const {
        return w > o.w;
    }
};

const int maxn = 1e4 + 10;
#define MAXN maxn

vector<Node> g[maxn];

int dis[MAXN];
int vis[MAXN];

ll dij(int s) {
    mem(dis,-1);
    mem(vis,0);

    ll ans = 0;

    priority_queue<Node> q;
    q.push({s,dis[s] = 0});

    Node current;
    int k;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.to]) continue;
        vis[current.to] = 1;

        ans += current.w;

        for (auto to : g[current.to]) {
            k = to.w;
            if (dis[to.to] == -1 || dis[to.to] > k) {
                q.push({to.to,dis[to.to] = k});
            }
        }
    }

    return ans;
}


int main()
{
    int n,m;
    int a,b,c,d;
    int p;
    scanf("%d%d%d%d%d%d%d",&n,&m,&a,&b,&c,&d,&p);

    ll val = a;
    rep(i,1,n) {
        rep(j,1,m) {
            val = (val * val * b + val * c + d) % p;
            g[i].pb({j+n,(int)val});
            g[j+n].pb({i,(int)val});
        }
    }

    _C(dij(1));
}*/

/*
const int maxn = 1e6 + 10;

struct Node {
    int u,v;
    int w;
    bool operator<(const Node &o) const {
        return w < o.w;
    }
} a[maxn];

bool cmp(const Node &a,const Node &b) {
    return a.w > b.w;
}

#define MAXN maxn

int find_set[MAXN];
int depth[MAXN];

int find(int a)
{
    if (find_set[a] == a) return a;
    return find_set[a] = find(find_set[a]);
}

inline void bind(int a,int b)
{
    int x = find(a), y = find(b);
    if (depth[x] >= depth[y]) { // 如果a的 根的子树深度 比b的 根的子树深度 大，那a的根继续做根
        find_set[y] = x; // 改变b节点的根的根为a的根
        if (depth[x] == depth[y]) { // 俩根深度一样
            if (x != y) depth[x] ++; // 作为a的根，自然子树的深度++
        }
    } else find_set[x] = y;
}

void init(int n)
{
    rep(i,0,n) {
        find_set[i] = i;  // 每个种类初始状态只有自己一个点
        depth[i] = 1;  // 初始化秩
    }
}


int main()
{
    ll fib[50];
    fib[1] = 1;
    fib[2] = 1;
    rep(i,3,35) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int n,m;
    scanf("%d%d",&n,&m);

    init(n + 5);

    int u,v,w;
    ll x = 0;
    rep(i,1,m) {
        scanf("%d%d%d",&u,&v,&w);
        a[i] = {u,v,w};
        x += w;
    }
    sort(a + 1,a + 1 + m);

    int cnt = n - 1;
    ll ans = 0;
    rep(i,1,m) {
        if (find(a[i].u) != find(a[i].v)) {
            bind(a[i].u, a[i].v);
            ans += a[i].w;
            cnt--;
            if (cnt == 0) {
                break;
            }
        }
    }
    if (cnt != 0) {
        puts("No");
        return 0;
    }
    ll y1 = ans;

//    _C(ans << " " << y1)

    sort(a + 1,a + 1 + m,cmp);

    cnt = n - 1;
    ans = 0;
    init(n + 5);
    rep(i,1,m) {
        if (find(a[i].u) != find(a[i].v)) {
            bind(a[i].u, a[i].v);
            ans += a[i].w;
            cnt --;
            if (cnt == 0) {
                break;
            }
        }
    }

    ll y2 = ans;

//    _C(y1 << " " << y2)


    int ok = 0;
    rep(i,1,35) {
        if (fib[i] >= y1 && fib[i] <= y2) {
            ok = 1;
            break;
        }
    }
    puts(ok ? "Yes" : "No");
}*/

/*
const int mod = 1000000009;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans % mod; // 可加可不加，加了应对mod=1的情况
}

int main()
{
    ll n,p,k;
    scanf("%lld%lld%lld",&n,&p,&k);
    n = (n - 1) * (n - 1);
    printf("%lld\n", quickpow(p,n));
}
*/

/*
///// 莫比乌斯反演求\sum gcd(i,j)=k
#define N 6000000+5
int T,mu[N],prime[N],tot=0;
bool notprime[N];

void Mobius(){
    memset(notprime,0,sizeof(notprime));
    mu[1]=1;notprime[1]=1;
    for(int i=2;i<N;++i){
        if(!notprime[i]){
            prime[++tot]=i;mu[i]=-1;
        }
        for(int j=1;prime[j]*i<N;++j){
            notprime[prime[j]*i]=1;
            if(i%prime[j]==0){
                mu[prime[j]*i]=0;break;
            }
            mu[prime[j]*i]=-mu[i];
        }
    }
    for(int i=2;i<N;++i) mu[i]+=mu[i-1];
}
ll ANS(int n,int m,int p){
    ll re=0;int last=0;
    n/=p;m/=p;if(n>m) swap(n,m);
    for(int i=1;i<=n;i=last+1){
        last=min(n/(n/i),m/(m/i));
        re+=(ll)(mu[last]-mu[i-1])*(n/i)*(m/i);
    }
    return re;
}

int main(){
    Mobius();
    int n,m;
    ll k;
    int l,r,mid;
    int ans;
    ll tmp;
    __T {
        scanf("%d%d%lld",&n,&m,&k);
        l = 1;
        r = tot;
        ans = -1;
        while (l <= r) {
            mid = (l + r) >> 1;
            tmp = ANS(n,m,prime[mid]);
            if (tmp >= k) {
                ans = max(ans,prime[mid]);
                l = mid + 1;
            } else r = mid - 1;
        }
        printf("%d\n",ans);
    }
    return 0;
}*/

/*
const int maxn = 1e5 + 10;

double a[maxn];
double b[maxn];
double sum[maxn];

double solve(int n,int m)
{
    mem(sum,0);
    double l=-1e6, r=1e6;
    while(r-l>1e-7)//二分的结束条件
    {
        double mid=(l+r)/2;
        rep(i,1,n)
        {
            b[i] = a[i]-mid;
        }
        rep(i,1,n)
        {
            sum[i]=sum[i-1]+b[i];//求前缀和
        }
        double MIN=(1<<31)-1, MAX=-1e10;
        rep(i,m,n)
        {
            MIN=min(MIN, sum[i-m]); //不断维护左端的最小值
            MAX=max(MAX, sum[i]-MIN);//相见得到区间和
        }
        if (MAX >= 0) l=mid;
        else r=mid;

    }
    return r;
}


int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x,y;
    scanf("%d%d",&x,&y);
    rep(i,1,n) {
        scanf("%lf",&a[i]);
    }
    double aa = solve(n,x);

    rep(i,1,m) {
        scanf("%lf",&a[i]);
    }
    double bb = solve(m,y);

    printf("%.10f\n",aa + bb);
}*/

//struct Node {
//    int n,p;
//    bool operator<(const Node &o) const {
//        return n < o.n;
//    }
//} a[3];
//
//int main()
//{
//    int n;
//    rep(i,0,2) {
//        scanf("%d",&a[i].n);
//        a[i].p = i;
//    }
//    scanf("%d",&n);
//    sort(a,a + 3);
//    int nn = a[0].n + (a[1].n - a[0].n) + (a[2].n - a[0].n);
//    if (n < nn) {
//        puts("NO");
//        return 0;
//    }
//    string s[3];
//    rep(i,1,a[0].n) {
//        s[a[0].p] += 'a';
//        s[a[1].p] += 'a';
//        s[a[2].p] += 'a';
//    }
//
//    rep(i,1,a[1].n - a[0].n) {
//        s[a[0].p] += 'c';
//        s[a[1].p] += 'b';
//        s[a[2].p] += 'b';
//    }
//
//    rep(i,1,a[2].n - a[0].n) {
//        s[a[0].p] += 'c';
//        s[a[1].p] += 'd';
//        s[a[2].p] += 'c';
//    }
//
//    rep(i,n,nn-1) {
//        s[a[0].p] += 'e';
//        s[a[1].p] += 'd';
//        s[a[2].p] += 'f';
//    }
//
//
//
//
//}

//const int maxn = 1e5 + 10;
//
//struct Node {
//    int to;
//    int w;
//};
//
//int n;
//
//int l[maxn];
//int r[maxn];
//
//vector<Node> g[maxn];
//
//int main() {
//    scanf("%d",&n);
//    rep(i,1,n) {
//        scanf("%d%d",l + i,r + i);
//    }
//    int u,v,w;
//    rep(i,1,n - 1) {
//        scanf("%d%d%d",&u,&v,&w);
//        g[u].pb({v,w});
//        g[v].pb({u,w});
//    }
//
//}

/*
const int maxn = 1e6 + 10;
struct Node {
    int i;
    ll sum;
    bool operator<(const Node &o) const {
        return i < o.i;
    }
};

vector<Node> st[maxn];
vector<Node> g[maxn];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int t;
    int a,b;
    rep(i,1,m) {
        scanf("%d%d%d",&t,&a,&b);
        if (t == 1) {
            g[a].pb({b,i});
            g[b].pb({a,i});
        } else {
            st[a].pb({i,b});
        }
    }
    ll last;
    rep(i,1,n) {
        last = 0;
        for (auto it = st[i].rbegin();it != st[i].rend();it ++) {
            it -> sum += last;
            last = it -> sum;
        }
    }



    ll ans;
    vector<Node>::iterator it;
    rep(i,1,n) {
        ans = 0;
        for (auto u : g[i]) {
            it = lower_bound(st[u.i].begin(),st[u.i].end(),Node{(int)u.sum,0});

            if (it != st[u.i].end()) {
                ans += it -> sum;
            }
        }
        if (i!=1) printf(" ");
        printf("%lld",ans);
    }
    puts("");
}
*/

/*
struct Point {
    Point() {}
    Point(ll x,ll y):x(x),y(y){}
    Point(const Point &o):x(o.x),y(o.y){}
    ll x,y;
    bool operator<(const Point &o) const {
        return x == o.x ? y < o.y : x < o.x;
    }

    bool operator==(const Point &o) const {
        return x == o.x ? y == o.y : x == o.x;
    }
    void print() {
        printf("%lld %lld\n",x,y);
    }
};

const int maxn = 3e6 + 10;

struct Line {
    Point a,b;
    Line(){}
    Line(const Point &a,const Point &b):a(a),b(b){}

    void print() {
        printf("(%lld,%lld)->(%lld,%lld)\n",a.x,a.y,b.x,b.y);
    }

    bool operator<(const Line &o) const {
        return a < o.a;
    }

    bool operator==(const Line &o) const {
        return a == o.a;
    }
};

Line rl[2][maxn];
Line lr[2][maxn];

int rl_cnt[2];
int lr_cnt[2];

Line line[maxn];
int cnt;


int main() {
    ll n;
    int m;
    scanf("%lld%d",&n,&m);
    int x,y;

    Point a,b;
    rep(i,1,m) {
        scanf("%d%d",&x,&y);

        // lr
        a = {1 - y + x,1};
        b = {n - y + x,n};
//        Line{a,b}.print();
        lr[(a.x + a.y) & 1][lr_cnt[(a.x + a.y) % 2] ++] = {a,b};

        // all
        if (a.x <= 0) a = {1,1 + y - x};
        if (b.x > n) b = {n,n + y - x};

        line[cnt ++] = {a,b};

        // rl
        a = {y + x - 1,1};
        b = {y + x - n,n};
//        Line{a,b}.print();
        rl[(a.x + a.y) & 1][rl_cnt[(a.x + a.y) % 2] ++] = {a,b};

        if (a.x <= 0) a = {1,n + y - 1};
        if (b.x > n) b = {n,x + y - n};
        line[cnt ++] = {a,b};
    }

    ll ans = n * n;

    REP(i,0,cnt) line[i].print();
    puts("---");

    sort(line,line + cnt);
    cnt = unique(line,line + cnt) - line;

    REP(i,0,cnt) line[i].print();
    puts("---");


    _C(cnt)

    REP(i,0,cnt) {
        _C(abs(line[i].a.x - line[i].b.x))
        ans -= abs(line[i].a.x - line[i].b.x);
    }

    rep(i,0,1) {
        sort(lr[i],lr[i] + lr_cnt[i]);
        sort(rl[i],rl[i] + rl_cnt[i]);
//        _C(lr_cnt[0])
//        REP(i,0,lr_cnt[0]) {
//            lr[0][i].print();
//        }
//        puts("---");
        lr_cnt[i] = unique(lr[i],lr[i] + lr_cnt[i]) - lr[i];
        rl_cnt[i] = unique(rl[i],rl[i] + rl_cnt[i]) - rl[i];
    }

    ll sub = 0;

    Line *l,*r;

    rep(o,0,1) {
//        _C("i: " << o << " " << lr_cnt[o])
        REP(i,0,rl_cnt[o]) {
            l = lower_bound(lr[o],lr[o] + lr_cnt[o],Line{Point{rl[o][i].a.x - (n - 1) * 2,0},Point{0,0}});
            r = lower_bound(lr[o],lr[o] + lr_cnt[o],Line{Point{rl[o][i].a.x,0},Point{0,0}});
            if (r != lr[o] + lr_cnt[o]) r ++;
//            _C("> " << rl[o][i].a.x - (n - 1) * 2 << " " << rl[o][i].a.x)
//            _C("l: " << lr[o] + lr_cnt[o] - l)
//            _C("r: " << lr[o] + lr_cnt[o] - r)
            sub += r - l;
        }
    }

    _C(ans + sub)


}*/

/*
int main() {
    ll n,k,mid;
    map<ll,ll> mp;
    set<ll> q;
    ll top;
    set<ll>::iterator it;
    ll ans;
    __T {
        scanf("%lld%lld",&n,&k);
        mp.clear();
        q.clear();
        q.insert(n);
        mp[n] = 1;
        while (!q.empty()) {
            it = -- q.end();
            top = *it;
            q.erase(it);

            if (top <= k) continue;
            mid = (1 + top) >> 1;

            if (mid > 0) {
                mp[mid] += mp[top];
                q.insert(mid);
            }

            mid = top - mid;
            if (mid > 0) {
                mp[mid] += mp[top];
                q.insert(mid);
            }
        }
        ans = 0;
        for (auto i : mp) {
            ans += i.second;
        }
        printf("%lld\n",ans);
    }
}*/

/*
ll gcd(ll a,ll b)
{
    return b ? gcd(b,a % b) : a;
}

struct Vec {
    ll x,y;
    bool operator<(const Vec &o) const {
        return x == o.x ? (y < o.y) : (x < o.x);
    }
};

map<Vec,int> mp;

const int maxn = 1e5 + 10;

int arr[maxn];
int mx[maxn];
int cnt;

int main()
{
    int n;
    int a,b,c,d;
    ll x,y;
    ll g;
    int zero,cur;
    int ans;
    __T {
        mp.clear();
        scanf("%d",&n);
        rep(i,1,n) {
            scanf("%d%d%d%d",&a,&b,&c,&d);
            x = c - a;
            y = d - b;
            if (x < 0) {
                x = -x;
                y = -y;
            } else if (x == 0) {
                if (y < 0) y = -y;
            }
            g = abs(gcd(x,y));

            mp[{x / g,y / g}] ++;
        }
        cnt = 0;

        for (auto i : mp) {
            arr[++ cnt] = i.second;
            mx[cnt] = 0;
        }

        sort(arr + 1,arr + 1 + cnt);

        zero = 0;
        cur = 1;
        ans = 0;


        rep(i,1,n) {

            arr[cur] --;
            mx[cur] ++;
            if (arr[cur] == 0) zero = cur;

            ans = max(ans,mx[cur]);
            printf("%d\n",i - ans);

            cur ++;
            if (cur > cnt) cur = zero + 1;
        }
    }
}*/


//ll p;
//
//ll quickpow(ll a, ll b)
//{
//    ll ans = 1;
//    while (b)
//    {
//        if (b & 1) ans = a * ans % p;
//        a = a * a % p;
//        b >>= 1;
//    }
//    return ans % p; // 可加可不加，加了应对mod=1的情况
//}
//
//ll C(ll n) {
//    ll ans = 1;
//    ll x = 1;
//    rep(i,1,2*n) {
//        if (i <= n) {
//            x *= i;
//            x %= p;
//        }
//        ans *= i;
//        ans %= p;
//    }
//    x = x * x % p;
//    return ans * quickpow(x,p-2) % p;
//}
//
//int main()
//{
//    ll m;
//    ll sum;
//    __T {
//        scanf("%lld",&p);
//        rep(m,1,p*4) {
//            sum = 0;
////            puts("---");
//            rep(i, 0, p - 1) {
//                sum += C(i) * quickpow(m, i) % p;
////                _C(C(i))
//                sum %= p;
//            }
//            _C(p << " " << m << ": " << sum)
//        }
//    }
//}

/*
const int maxn = 1e3 + 10;

int n,m;
ll p;

ll a[maxn][maxn];
ll x[maxn][maxn];

ll mcol[maxn],mrow[maxn];

ll col[maxn],row[maxn];

void print() {
    _C("---")
    printf("   ");
    rep(i,1,m) {
        printf("%3lld",col[i]);
    }
    puts("");
    rep(i,1,n) {
        printf("%3lld",row[i]);
        rep(j,1,m) {
            printf("%3lld",x[i][j]);
        }
        puts("");
    }
}

int main() {

    scanf("%d%d%lld",&n,&m,&p);
    rep(i,1,n) {
        rep(j,1,m) {
            scanf("%lld",&a[i][j]);
            a[i][j] --;
            if (mrow[i] == 0) mrow[i] = a[i][j];
            else mrow[i] = min(mrow[i],a[i][j]);

        }
    }

//    rep(i,1,n) {
//        rep(j,1,m) printf("%3lld",a[i][j]);
//        puts("");
//    }
//    puts("");


    ll sub;

    rep(i,1,n) {
        row[i] += mrow[i];
        rep(j,1,m) {
            x[i][j] = mrow[i];
        }
    }

//    print(0);

    rep(j,1,m) {

        rep(i,1,n) {
            sub = (a[i][j] + p - (col[j] + row[i]) % p) % p;
            if (sub == 0) continue;
            if (mcol[j] == 0) mcol[j] = sub;
            else mcol[j] = min(mcol[j], sub);
        }

        col[j] += mcol[j];

        rep(i,1,n) {
            x[i][j] = (row[i] + col[j]) % p;
            row[i] += a[i][j] - x[i][j];
            x[i][j] = (row[i] + col[j]) % p;
        }
    }

//    print(0);

    ll ans = 0;

    rep(i,1,n) {
        ans += row[i];
    }

    rep(i,1,m) {
        ans += col[i];
    }

    printf("%lld\n",ans);

    rep(i,1,n) {
        if (i != 1) printf(" ");
        printf("%lld",row[i]);
    }
    puts("");

    rep(i,1,m) {
        if (i != 1) printf(" ");
        printf("%lld",col[i]);
    }
    puts("");
}*/

/*
const int MAXN = 1e3 + 10;

int a[MAXN];
int mx[MAXN];
int mn[MAXN];

int LIS(int *a,int n) // start from zero
{
    memset(mx,0,sizeof(mx));
    mx[n-1] = 1;
    int ans = 1;
    pre(i,n-2,0) {
        pre(j,n-1,i+1) {
            if (a[i] < a[j]) {
                mx[i] = max(mx[i],mx[j]); // 此处可以使用树状数组进行优化
            }
        }
        ans = max(ans,++ mx[i]);
    }
    return ans;
}

int LIS2(int *a,int n) // start from zero
{
    memset(mn,0,sizeof(mn));
    mn[0] = 1;
    int ans = 1;
    REP(i,1,n) {
        REP(j,0,i) {
            if (a[i] < a[j]) {
                mn[i] = max(mn[i],mn[j]); // 此处可以使用树状数组进行优化
            }
        }
        ans = max(ans,++ mn[i]);
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) scanf("%d",a + i);
    LIS(a + 1,n);
    LIS2(a + 1,n);

//    pre(i,n,2) {
//        if (a[i] > a[i - 1]) mx[i-2] = mx[i-1];
//    }

//    REP(i,0,n) printf("%d ",mn[i]);
//    puts("");
//    REP(i,0,n) printf("%d ",mx[i]);
//    puts("");


    int ans = 0;
    REP(i,0,n) {
        ans = max(ans,mn[i] + mx[i] - 1);
    }
    _C(ans)
}*/

/*
const int maxn = 2e3 + 10;

vector<int> g[maxn];
int val[maxn];
int ans[maxn][maxn];
unordered_map<int,int> mp;

int s;

void dfs(int u,int fa) {
    ans[s][u] = mp.size();
    for (auto i : g[u]) {
        if (i != fa) {
            mp[val[i]] ++;
            dfs(i,u);
            mp[val[i]] --;
            if (mp[val[i]] == 0) mp.erase(mp.find(val[i]));
        }
    }
}

int n;

ll f(int i,ll x,const int mod) {
    ll sum = 0;
    ll xx = 1;
    rep(j,1,n) {
        sum += (ans[i][j] % mod) * xx % mod;
        sum %= mod;
        xx *= x;
        xx %= mod;
    }
    return sum;
}

int main()
{

    int v;
    __T {
        scanf("%d",&n);
        mp.clear();
        rep(i,1,n) g[i].clear();
        rep(i,2,n) {
            scanf("%d",&v);
            g[i].pb(v);
            g[v].pb(i);
        }
        rep(i,1,n) {
            scanf("%d",val + i);
        }
        rep(i,1,n) {
            s = i;
            mp[val[i]] ++;
            dfs(s,-1);
            mp[val[i]] --;
            if (mp[val[i]] == 0) mp.erase(mp.find(val[i]));
        }

//        rep(i,1,n) {
//            rep(j,1,n) printf("%d ",ans[i][j]);
//            puts("");
//        }
        rep(i,1,n)
            printf("%lld %lld\n",f(i,19560929,1000000007),f(i,19560929,1000000009));
    }
}*/


//const int maxn = 1e5 + 10;
//
//struct Point {
//    int x,y;
//    bool operator<(const Point &o) const {
//        return y == o.y ? x < o.x : y < o.y;
//    }
//} p[maxn];
//
//int main()
//{
//    int n,m,k;
//    __T {
//        scanf("%d%d%d",&n,&m,&k);
//        rep(i,1,k) {
//            scanf("%d%d",&p[i].x,&p[i].y);
//        }
//        sort(p + 1,p + 1 + k);
//
//    }
//}

/*
vector<int> dis;
int tm[500005];
int sum[500005];
int tree[500005];
int n,k;

void add(int x,int value)
{
    for (int i=x;i<=n;i=i+lowbit(i))
    {
        tree[i]+=value;
    }
}
int get(int x)
{
    int sum=0;
    for (int i=x;i;i-=lowbit(i))
    {
        sum+=tree[i];
    }
    return sum;
}

int bin(int mid)		//求多少个子序列的和严格大于mid
{
    int i,ret=0;
    memset(tree,0,sizeof(tree));
    for (i=1;i<=n;i++)
    {
        int x=sum[i]-mid;  //need: sum[i]-sum[j]>mid,==> sum[i]-mid>sum[j],对应s[j+1]...s[i]
        int it=lower_bound(dis.begin(),dis.end(),x)-dis.begin();	//找到离散化数组中对应下标

        ret+=get(it);		//求得J的个数
        if (x>0)			//前缀和=子段和的情况
            ret++;
        it=lower_bound(dis.begin(),dis.end(),sum[i])-dis.begin();
        add(it+1,1);				//插入Bi
    }
    return ret;
}
int main()
{
    int i,j;
    string str;
    int ch['z'+1];
    __T		//t组样例
    {
        scanf("%d%d",&n,&k);
//        k--;
        cin >> str;

        rep(i,'a','z') {
            scanf("%d",&ch[i]);
        }

        for (int i = 0;str[i];i ++) {
            tm[i + 1] = ch[str[i]];
        }

        rep(i,1,n) printf("%d ",tm[i]);
        puts("");


        dis.clear();
        for (i=1;i<=n;i++)
        {
            sum[i]=sum[i-1]+tm[i];
            dis.push_back(sum[i]);
        }

        sort(dis.begin(),dis.end());
        dis.erase(unique(dis.begin(),dis.end()),dis.end());		//去重


        int maxx=500000*105;
        int minn=-500000*105;
        int l=minn,r=maxx;

        int ans=0;
        while(l<=r)			//二分逼近答案
        {
            int mid=(l+r)>>1;
            if (bin(mid)>=k)
                l=mid+1;
            else
                r=mid-1,ans=mid;

        }
        printf("ans:%d\n",ans);
    }


    return 0;

}*/

/*
const int maxn = 1e5 + 10;

ll a[maxn];

int main()
{
    int n;
    ll ans;
    __T {
        scanf("%d",&n);
        rep(i,1,n) scanf("%lld",a + i);
        ans = 0;
        rep(i,2,n) {
            ans = max(a[i] * a[i - 1],ans);
        }
        printf("%lld\n",ans);
    }
}*/

/*
const int maxn = 1e5 + 10;

ll a[maxn];

int main()
{
    int n;
    ll k;
    ll ans;
    ll mul;
    __T {
        scanf("%d%lld",&n,&k);
        ans = -1e18;
        rep(i,1,n)
        {
            scanf("%lld",a + i);
        }
        pre(i,n,1) {
            pre(j,i - 1,1) {
                mul = i;
                mul *= j;
                if (mul <= ans) break;
                ans = max(ans,mul - k * (a[i] | a[j]));
            }1
        }
        printf("%lld\n",ans);
    }
}*/

/*
ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans;
        a = a * a;
        b >>= 1;
    }
    return ans; // 可加可不加，加了应对mod=1的情况
}


int main() {
    int n,m;
    int hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb;
    int juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf;
    __T {
        scii(n,m);
        hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb = 0;
        pre(i,31,0) {
            if ((n ^ hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb) <= m) {
                juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf = quickpow(2, i);
                if (!(n & juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf) && (m & juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf)) {
                    hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb |= juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf;
                }
            }
        }

        if ((m ^ n) == hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb) {
            rep(i,0,31) {
                juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf = quickpow(2,i);
                if (hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb & juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf) hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb = hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb ^ juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf;
                else {
                    if (!(n & juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf) && !(m & juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf)) {
                        hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb = hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb ^ juigefaswkijugfewujgewkjgfkjwaeqgfewgvfgwjuskjkgsewafvgjkesagjkwfsaegjkfvfaehjvsghjvfegjhvfeghjkwgfhjesghkjuf;
                        break;
                    }
                }
            }
        }

        printf("%d\n",hjuefgwaqjhkgdjakhvbjdefrsbhjvrdsebhjvgfrbhjvefhbjefwbjghvefwgbhjvdefswbgjhvdefrsbghjdesfrbjghvdefswrhjvfswdehjvdfrcgsghjvfdeswhjvefwhjvsefwcghjvfdewschvgjfsewcghjvfcesdhjvfceswhjvfsecgwcfhjvswedhjvcfgdescdjhsvhvbjmacdefsnmhvdaswchnvdeqwschvjdaqswxhvjhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgbhjuefgwaqjhkgdjakhgdgb);
    }
}
*/

/*
const int maxn = 1e5 + 10;

struct SuffixArray {
private:
    char *str;
    int n, m; // 字符串长度，字符集大小(有多少个字符，一般char128个)
    int t[maxn], t1[maxn], c[maxn];

    inline void rankSort() {
        for (int i = 1; i <= m; i++) c[i] = 0;
        for (int i = 1; i <= n; i++) c[t[i] = str[i]]++;
        for (int i = 1; i <= m; i++) c[i] += c[i - 1];
        for (int i = n; i >= 1; i--) sa[c[t[i]]--] = i;
    }

    inline void calc() { // 字符串下标从1开始
        int *x = t, *y = t1;
        rankSort();

        for (int k = 1; k <= n; k <<= 1) {
            int p = 0;
            for (int i = n - k + 1; i <= n; i++) y[++p] = i;
            for (int i = 1; i <= n; i++) if(sa[i] > k) y[++p] = sa[i] - k;
            for (int i = 1; i <= m; i++) c[i] = 0;
            for (int i = 1; i <= n; i++) c[x[y[i]]]++;
            for (int i = 1; i <= m; i++) c[i] += c[i - 1];
            for (int i = n; i >= 1; i--) sa[c[x[y[i]]]--] = y[i];
            swap(x, y);
            p = x[sa[1]] = 1;
            for (int i = 2; i <= n; i++) {
                x[sa[i]] = (y[sa[i - 1]] == y[sa[i]] && y[sa[i - 1] + k] == y[sa[i] + k])
                           ? p : ++p;
            }
            if (p >= n) break;
            m = p;
        }

        // 求height
        memcpy(rank, x, sizeof(rank));
        int k = 0;
        for(int i = 1; i <= n; i++) {
            int j = sa[rank[i] + 1];
            if (k) k--;
            if (!j) continue;
            while (str[i + k] == str[j + k]) k++;
            height[rank[i] + 1] = k;
        }
    }

public:
    int sa[maxn]; // sa[后缀从短到长的顺序index] = 后缀经过字典序排序之后的顺序rk
    int rank[maxn]; // rank[后缀经过字典序排序之后的顺序rk] = 后缀从短到长的顺序index
    int height[maxn]; // 后缀按字典序排序之后，每个字符串与之前的最长前缀长度

    inline void build(char *str,int n,int m = 128) { // 字符串，下标从1开始
        memset(this, 0, sizeof(SuffixArray));
        this -> str = str;
        this -> n = n;
        this -> m = m;
        calc();
    }
};

char str[maxn];

SuffixArray sa;

// 不同子串个数 https://www.luogu.com.cn/problem/P2408
// 输入长度n和str，求不同子串的个数
int main() {
    ll n;
    scanf("%lld%s",&n,str + 1);
    sa.build(str, n);

//    rep(i,1,n) printf("%d ",sa.sa[i]);
//    puts("");
//    rep(i,1,n) printf("%d ",sa.rank[i]);
//    puts("");
//    rep(i,1,n) printf("%d ",sa.height[i]);
//    puts("");

    ll ans = (n + 1) * n / 2;
    rep(i,1,n) {
        ans -= sa.height[i];
    }
    printf("%lld\n",ans);
}*/

/*
ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans;
        a = a * a;
        b >>= 1;
    }
    return ans;
}


int main() {
    ll n;
    ll t;
    int ok;
    int is1;
    __T {
        scanf("%lld",&n);
//    rep(n,2,100) {
//        printf("%d: ",n);
        is1 = 1;
        pre(i,60,2) {
            t = pow(n,1.0 / i);
            ok = 0;
            rep(off,-1,1) {
                if (quickpow(t + off,i) == n) {
                    ok = 1;
                    t = off + t;
                    break;
                }
            }
            if (ok) {
                is1 = 0;
                printf("%d\n",i);
                break;
            }
        }
        if (is1) puts("1");
    }
}*/

/*
int main() {
    int n,m;
    scii(n,m);
    int t;
    rep(i,1,n) {
        t = i & 1;
        rep(j,1,m) {
            if (j % 4 == 1 || j % 4 == 0) printf("%d",t);
            else printf("%d",!t);
        }
        puts("");
    }
}*/

/*
ll gcd(ll a,ll b) {
    ll m = max(a,b);
    ll ans = 1;
    for (ll i = 2;i * i <= m;i ++) {
//        _C(a % i << " " <<  b % i)
        if (a % i == b % i) {
            ans = i;
            break;
        }
    }
    return ans;
}

int main() {
    ll a,b;
    ll mx,mn;
    __T {
        scanf("%lld%lld",&a,&b);
        if (a == b) {
            if (a == 1) puts("-1 -1");
            else printf("2 %lld\n",a);
            continue;
        }
        mx = max(a,b) - min(a,b);
        mn = gcd(a,b);
        if (mn == 1 && mx == 1) {
            puts("-1 -1");
            continue;
        }
        if (mn == 1) {
            mn = mx;
        }
        printf("%lld %lld\n",mn,mx);
    }
}*/

/*
const int maxn = 5e6 + 10;
int vis[maxn];

int main() {
    int n,x;
    scanf("%d",&n);

    int op;
    int mn = 0,mx = 1;
    rep(i,1,n) {
        scii(op,x);
        if (op == 1) {
            vis[x] = 1;
            if (x == mn + 1) {
                mn = mx;
                mx ++;
                while (mx <= n) {
                    if (vis[mx + 1]) mx ++;
                    else break;
                }
            } else if (x == mx + 1) {
                mx ++;
                while (mx <= n) {
                    if (vis[mx + 1]) mx ++;
                    else break;
                }

            }
        } else {
            if (x == mn + 1) printf("%d\n",mx + 1);
            else printf("%d\n",mn + 1);
        }
    }
    return 0;
}*/

/*
const int maxn = 60;

int rol[maxn];
int vis[maxn];

int kill[maxn][maxn];

int cnt;
int wolf;

int done = 0;
int n;

int dfs(int u) {
    if (done) return 1;
    if (vis[u]) return 0;
    vis[u] = 1;
//    _C(u)

    if (u == wolf) {
        done = 1;
        puts("lieren");
        return 1;
    }

    cnt --;

    if (cnt <= 2) {
        done = 1;
        puts("langren");
        return 1;
    }

    rep(i,1,n) {
        if (dfs(kill[u][i])) break;
    }
    return 1;
}

int main() {
    __T {
        scanf("%d",&n);
        done = 0;
        wolf = 1;
        rep(i,1,n) {
            scanf("%d",rol + i);
            if (rol[i]) wolf = i;
            vis[i] = 0;
        }
        cnt = n;
        rep(i,1,n) {
            rep(j,1,n) scanf("%d",kill[i] + j);
        }
        rep(i,1,n) {
//            _C(">>" << wolf << " " << kill[wolf][i])
            dfs(kill[wolf][i]);
        }
    }
}*/

/*
const int maxn = 1e5 + 10;
double a[maxn];

int main() {
    int n;
    double c;
    scanf("%d%lf",&n,&c);
    double sum = 0;
    rep(i,1,n) {
        scanf("%lf",a + i);
        sum += a[i];
    }
    sort(a + 1,a + n + 1);
    double ans = c / pow(2,n - 1);
    double pr = c;
    rep(i,1,n - 1) {
        pr += a[i];
//        _C(pr)
        ans += pr / pow(2,n - i);
    }
    printf("%.10f\n",min(ans,sum));
}*/

/*
int main() {
    int a,b;
    scii(a,b);
    if (a == 0) printf("Silver\n");
    else if (b == 0) puts("Gold");
    else puts("Alloy");
}*/

/*
inr main() {
    char str[10];
    scanf("%s",str);
    if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3]) {
        puts("Weak");
    } else if ((str[1] - '0') == ((str[0] - '0') + 1) % 10 &&
            (str[2] - '0') == ((str[1] - '0') + 1) % 10 &&
            (str[3] - '0') == ((str[2] - '0') + 1) % 10) puts("Weak");
    else puts("Strong");

}*/

/*
const int maxn = 2e5 + 10;

ll a[maxn];
ll b[maxn];

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    rep(i,1,n) scl(a[i]);
    rep(i,1,m) scl(b[i]);
    sort(a + 1,a + 1 + n);
    sort(b + 1,b + 1 + m);
    ll ans = 2000000000ll;
    int idx;
    rep(i,1,n) {
        idx = lower_bound(b + 1,b + 1 + m,a[i]) - b;
        if (idx > 1) ans = min(ans,abs(a[i] - b[idx - 1]));
        ans = min(ans,abs(a[i] - b[idx]));
        if (idx < n) ans = min(ans,abs(a[i] - b[idx + 1]));
    }
    printf("%lld\n",ans);
}*/

/*
int main() {
    multiset<ll> st;
    int t;
    ll x;
    ll pre = 0;
    __T {
       scanf("%d",&t);
       if (t == 1) {
           scanf("%lld",&x);
           st.insert(x + pre);
       } else if (t == 2) {
           scanf("%lld",&x);
           pre -= x;
       } else {
           printf("%lld\n",*st.begin() - pre);
           st.erase(st.begin());
       }
    }
}*/

//
//const int maxn = 3e5 + 10;
//
//struct Node {
//    int to;
//    int k;
//};
//
//int r[maxn];
//vector<Node> g[maxn];
//
//void bfs() {
//    set<int> keys;
//}
//
//int main() {
//    int n,m;
//    scanf("%d%d",&n,&m);
//    rep(i,1,n) scanf("%d",r + i);
//    int u,v,c;
//    rep(j,1,m) {
//        scanf("%d%d%d",&u,&v,&c);
//        g[u].pb({v,c});
//        g[v].pb({u,c});
//    }
//    bfs();
//
//}

/*
const int maxn = 1000000;

struct Stack {
    ll s[maxn];
    int size;

    Stack():size(0) {

    }

    void push(ll x) {
        s[++ size] = x;
    }

    ll pop() {
        if (size == 0) throw "Fatal Error: Stack is empty.";
        return s[size --];
    }

    ll top() {
        if (size == 0) throw "Fatal Error: Stack is empty.";
        return s[size];
    }

    ll *operator[](int idx) {
        if (idx == 0 || idx > size) throw "Fatal Error: index out of size.";
        return s + idx;
    }
} s;

void add() {
    s.push(s.pop() + s.pop());
//    _C(s.top())
}

void sub() {
    s.push(s.pop() - s.pop());
//    _C(s.top())
}

void com() {
    s.push(s.pop() == s.pop());
}

void load() {
    ll n;
    scanf("%lld",&n);
    s.push(n);
//    _C(s.top())
}

void copy() {
    ll x = s.pop();
    ll y = s.pop();
    *s[x] = *s[y];
}

void push(int x) {
    s.push(x);
}

char str[maxn];

void debug() {
    printf("n a b c i\n");
    rep(i,1,s.size) {
        printf("%d ",*s[i]);
    }
    puts("");
}

vector<int> prog;
void run() {
    int size = prog.size() - 1;
    int len;
    ll x,y;
    for (int i = 1;i <= size;i ++) {
        len = prog[i];
        switch(len) {
            case 0:
                break;
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                com();
                break;
            case 4:
                load();
                break;
            case 5:
                copy();
                break;
            case 6:
                x = s.pop();
                y = s.pop();
                if (y) {
                    if (x < 1) throw "Runtime Error: Line number out of index.";
                    if (x > size) return;
                    i = x - 1;
                }
                break;
            default:
                push(len - 7);
                break;
        }
    }

}

int main(int argc, const char * argv[]) {
    string line;
    int len;
    if (argc != 2) puts("error");
    try {
        FILE *f = fopen(argv[1],"r");
        prog.pb(0);
        while (fgets(str,sizeof(str),f) != NULL) {
            len = 0;
            for (int i = 0;str[i];i ++) {
                if (str[i] == 'c') len ++;
                else break;
            }
            prog.pb(len);
        }

        run();

        printf("%lld\n",s.pop());
    } catch (const char* str) {
        puts(str);
    }

}*/

//int main() {
//    int n;
//    scanf("%d",&n);
//    n --;
//
//    ll a=0,b=1,c=1;
//    int i = 0;
//
//    if (n == 0) goto ok;
//
//    st:
//    c = a + b;
//    a = b;
//    b = c;
//    i ++;
//    if (i != n) goto st;
//
//    ok:
//    _C(c)
//}

/*
int main() {
    string str = "cccc\n";
    str += "cccccccc\n";
    str += "cc\n";
    str +=              "ccccccc\n";
    str +=             "cc\n";
    str +=          "ccccccc\n";
    str +=         "cccccccc\n";
    str +=        "cccccccc\n";
    str +=        "ccccccc\n";
    str +=        "cccccccc\n";
    str +=        "cccccccc\n";
    str +=       "ccccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "ccccccc\n";
    str +=       "ccc\n";
    str +=       "cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n";
    str +=       "cccccc\n";
    str +=       "cccccccc\n";
    str +=       "ccccccccc\n";
    str +=       "ccccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "cccccccc\n";
    str +=       "cccccccccc\n";
    str +=       "cccccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "c\n";
    str +=       "cccccccccc\n";
    str +=       "ccccccccc\n";
    str +=       "ccccc\n";
    str +=       "ccccccccccccc\n";
    str +=       "ccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "ccccccccccc\n";
    str +=       "cccccccccc\n";
    str +=       "ccccc\n";
    str +=       "cccccccc\n";
    str +=       "ccccccccccccc\n";
    str +=       "cccccccccccccc\n";
    str +=       "ccccc\n";
    str +=      "cc\n";
    str +=       "cccccccc\n";
    str +=       "c\n";
    str +=       "cccccccc\n";
    str +=       "ccccc\n";
    str +=       "cccccccc\n";
    str +=       "cccccccccccc\n";
    str +=       "ccccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "cccccccc\n";
    str +=       "c\n";
    str +=       "ccccccccccccc\n";
    str +=       "cccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "cccccccc\n";
    str +=       "cccccccc\n";
    str +=       "cccccccccccccc\n";
    str +=       "ccccc\n";
    str +=       "ccc\n";
    str +=       "cccccccc\n";
    str +=       "cc\n";
    str +=       "ccccccccccccccccccccccccc\n";
    str +=       "cccccc\n";
    str +=       "cccccccc\n";
    str +=       "ccccccccccc\n";
    str +=       "ccccccccccccc\n";
    str +=       "ccccc";
    cout << str;
}*/


const int maxn = 1e5 + 10;

struct SuffixArray {
private:
    char *str;
    int n, m; // 字符串长度，字符集大小(有多少个字符，一般char128个)
    int t[maxn], t1[maxn], c[maxn];

    inline void rankSort() {
        for (int i = 1; i <= m; i++) c[i] = 0;
        for (int i = 1; i <= n; i++) c[t[i] = str[i]]++;
        for (int i = 1; i <= m; i++) c[i] += c[i - 1];
        for (int i = n; i >= 1; i--) sa[c[t[i]]--] = i;
    }

    inline void calc() { // 字符串下标从1开始
        int *x = t, *y = t1;
        rankSort();

        for (int k = 1; k <= n; k <<= 1) {
            int p = 0;
            for (int i = n - k + 1; i <= n; i++) y[++p] = i;
            for (int i = 1; i <= n; i++) if(sa[i] > k) y[++p] = sa[i] - k;
            for (int i = 1; i <= m; i++) c[i] = 0;
            for (int i = 1; i <= n; i++) c[x[y[i]]]++;
            for (int i = 1; i <= m; i++) c[i] += c[i - 1];
            for (int i = n; i >= 1; i--) sa[c[x[y[i]]]--] = y[i];
            swap(x, y);
            p = x[sa[1]] = 1;
            for (int i = 2; i <= n; i++) {
                x[sa[i]] = (y[sa[i - 1]] == y[sa[i]] && y[sa[i - 1] + k] == y[sa[i] + k])
                           ? p : ++p;
            }
            if (p >= n) break;
            m = p;
        }

        // 求height
        memcpy(rank, x, sizeof(rank));
        int k = 0;
        for(int i = 1; i <= n; i++) {
            int j = sa[rank[i] + 1];
            if (k) k--;
            if (!j) continue;
            while (str[i + k] == str[j + k]) k++;
            height[rank[i] + 1] = k;
        }
    }

public:
    int sa[maxn]; // sa[后缀从短到长的顺序index] = 后缀经过字典序排序之后的顺序rk
    int rank[maxn]; // rank[后缀经过字典序排序之后的顺序rk] = 后缀从短到长的顺序index
    int height[maxn]; // 后缀按字典序排序之后，每个字符串与之前的最长前缀长度

    inline void build(char *str,int n,int m = 128) { // 字符串，下标从1开始
        memset(this, 0, sizeof(SuffixArray));
        this -> str = str;
        this -> n = n;
        this -> m = m;
        calc();
    }
} sa;

char str[maxn];
ll sum[maxn];
ll val[maxn];

ll n;

ll all() {
    ll ans = n * (n + 1) / 2;
    rep(i,1,n) {
        ans -= sa.height[sa.sa[i]];
    }
    return ans;
}

ll getK(ll v) {
    ll ans = 0;
    int t;
    pre(i,n,1) {
        t = lower_bound(sum + 1,sum + 1 + n,v + sum[i - 1]) - sum; // 严格<
//        _C(t << " " << t - i)
        t -= i;
        ans += t;
        ans -= min(t,sa.height[sa.sa[i]]);
    }
    return ans;
}

int main() {

    ll k;
    ll l,r;
    __T {
        scanf("%lld%lld",&n,&k);
        scanf("%s",str + 1);
        rep(i,'a','z') scanf("%lld",val + i);
        rep(i,1,n) {
            sum[i] = sum[i - 1] + val[str[i]];
        }
        sa.build(str,n);

        if (k > all()) {
            puts("-1");
            continue;
        }

        rep(i,1,all()) {
            printf("%d: %d\n",i,getK(i));
        }

        l = 1;
        r = 10000010;

        while (l <= r) {

        }

    };

}