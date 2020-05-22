//
//  main.cpp
//  c++_acm
//
//  Created by 李弘辰 on 2019/7/18.
//  Copyright © 2019 李弘辰. All rights reserved.
//

#include "header_useful.h"

/*
char a[1010][1010];
int vis[1010][1010] = {0};
int vis2[1010][1010] = {0};

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int n,m;
int sum = 0;

void dfs(int x,int y,int d)
{
//    printf(">>%d %d\n",x,y);
    if (vis2[y][x]) return;
    vis2[y][x] = 1;
    sum ++;
    int xx,yy;
    for (int i = 0;i < 4;i ++) {
        xx = x + dx[i];
        yy = y + dy[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < n) {
            if ((a[y][x] ^ 48) ^ (a[yy][xx] ^ 48)){
                dfs(xx,yy,d + 1);
            }
        }
    }
}

void dfs2(int x,int y)
{
    if (vis[y][x]) return;
    vis[y][x] = sum;
    int xx,yy;
    for (int i = 0;i < 4;i ++) {
        xx = x + dx[i];
        yy = y + dy[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < n) {
            if ((a[y][x] ^ 48) ^ (a[yy][xx] ^ 48)){
                dfs2(xx,yy);
            }
        }
    }
}

int main()
{

    scanf("%d%d",&n,&m);
    for (int i = 0;i < n;i ++) {
        scanf("%s",a[i]);
    }
    for (int i = 0;i < n;i ++) {
        for (int j = 0;j < n;j ++) {
            if (!vis[i][j]) {
                sum = 0;
                dfs(j,i,0);
                dfs2(j,i);
            }

        }
    }

    int u,v;
    for (int i = 0;i < m;i ++) {
        scanf("%d%d",&u,&v);
        printf("%d\n",vis[u - 1][v - 1]);
    }

//    for (int i = 0;i < n;i ++) {
//        for (int j = 0;j < n;j ++) {
//            printf("%c",a[i][j]);
//        }
//        printf("\n");
//    }

    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    ll n,k;
    while (T --)
    {
        scanf("%lld%lld",&n,&k);
        if (n % 2) {
            // odd
            ll x = 0;
            for (ll i = 2;i <= n;i ++) {
                if (n % i == 0) {
                    x = i;
                    break;
                }
            }
            n += x;
            printf("%lld\n",n + (k - 1) * 2);
        } else {
            printf("%lld\n",n + k * 2);
        }
    }
    return 0;
}
*/

/*
int n;
int s[100010];
int vis[100010] = {0};
int b[100010];
int m = 1;

void dfs(int x,int d,int k)
{
    
    if (vis[x] && k == 1) return;
    vis[x] = 1;
    int o = -1,oo = -1;
    if (d != 0) {
        o = d;
        if (s[x] > b[d - 1]) b[d ++] = s[x];
        else {
            int *t = upper_bound(b, b + d, s[x]);
            if ((t - b) + 1 != d + 1) {
                d = (int) (t - b) + 1;
                oo = *t;
                *t = s[x];
            }
        }
        
    } else {
        b[d ++] = s[x];
    }
    m = max(m,d);
    printf(">>%d %d=\n",x,d);
    for (int i = 0;i < d;i ++) printf("%d ",b[i]);
    printf("\n");
    for (int j = 2,i = x * j;i <= n;j ++,i = x * j)
    {
        printf("..x=%d,j=%d,i=%d\n",x,j,i);
        dfs(i,d,k + 1);
    }
    if (o != -1) {
        d = o;
    }
    if (oo != -1) {
        b[d - 1] = oo;
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    
//    int d[100010];
    while (T --) {
        m = 1;
        mem(vis,0);
        scanf("%d",&n);
        for (int i = 1;i <= n;i ++) {
            scanf("%d",s + i);
        }
        printf("-----------\n");
        dfs(1,0,0);
        printf("%d\n",m);
//        for(int i = 1;i <= n;i ++)
//        {
//            d[i] = 1;
//            for(int j = 1;j < i;j ++)
//            {
//                if(s[j] <= s[i] && i % j == 0 && (d[j] + 1) >= d[i])
//                    d[i] = d[j] + 1;
//            }
//            m = max(m,d[i]);
//        }
//
//        printf("%d\n",m);
        
        
    }
    return 0;
}
*/

/*
int n;
int s[100010];
int vis[100010] = {0};
int a[100010];
int b[100010];
int m = 1;

void dfs(int x,int d)
{
    m = max(m,d);
    for (int j = 2,i = x * j;i <= n;i = x * j,j ++)
    {
//        printf(">>%d\n",i);
        if (s[i] > s[x])
            dfs(i,d + 1);
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    
//    int d[100010];
    while (T --) {
        m = 1;
        scanf("%d",&n);
        for (int i = 1;i <= n;i ++) {
            scanf("%d",s + i);
        }
        for (int i = 1;i <= n / 2;i ++) dfs(i,1);
        printf("%d\n",m);
//        for(int i = 1;i <= n;i ++)
//        {
//            d[i] = 1;
//            for(int j = 1;j < i;j ++)
//            {
//                if(s[j] <= s[i] && i % j == 0 && (d[j] + 1) >= d[i])
//                    d[i] = d[j] + 1;
//            }
//            m = max(m,d[i]);
//        }
//
//        printf("%d\n",m);
        
        
    }
    return 0;
}
*/

/*
vector<int> g[100010];
int vis[100010] = {0};
int f = 1;

void dfs(int n)
{
    if (vis[n]) return;
    vis[n] = 1;
    if (f) f = 0;
    else printf(" ");
    printf("%d",n);
    for (auto i : g[n]) {
        dfs(i);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int u,v;
    for (int i = 0;i < m;i ++) {
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
    }
    for (int i = 1;i <= n;i ++) {
        sort(g[i].begin(),g[i].end());
    }
    dfs(1);
    printf("\n");
    mem(vis,0);
    queue<int> q;
    q.push(1);
    f = 1;
    int t;
    while (!q.empty())
    {
        t = q.front();
        q.pop();
        if (vis[t]) continue;
        vis[t] = 1;
        if (f) f = 0;
        else printf(" ");
        printf("%d",t);
        for (auto i : g[t]) {
            q.push(i);
        }
    }
    printf("\n");
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n,m;
    while (T --) {
        scanf("%d%d",&n,&m);
        if (n == 1) printf("0\n");
        else if (n == 2) printf("%d\n",m);
        else {
            printf("%d\n",m * 2);
        }
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n,k;
    int a[50],b[50];
    while (T --) 
    {
        scanf("%d%d",&n,&k);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        for (int i = 0;i < n;i ++) scanf("%d",b + i);
        sort(a,a + n);
        sort(b,b + n,greater<int>());
        for (int i = 0,j = 0;i < k && j < n;j ++) {
            if (b[i] > a[i]) {
                swap(a[i],b[i]);
                i ++;
            }
        }
        int sum = 0;
        for (int i = 0;i < n;i ++) sum += a[i];
        printf("%d\n",sum);

    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    ll sum = 0;
    while (T --) {
        scanf("%d",&n);
        sum = 0;
        for (ll i = 1,j = 2;i <= n / 2;i ++,j += 2) {
            sum += i * j * 4;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    int a[200010];
    struct A
    {
        int length;
        int index;

        bool operator< (const A &other) const {
            if (other.length == length) return index > other.index;
            return length < other.length;
        }
    };
    A f;
    int i = 1;
    int x;
    while (T --) {
        scanf("%d",&n);
        priority_queue<A> q;
        q.push({n,1});
        i = 1;
        while (!q.empty()) {
            f = q.top();
            q.pop();
            x = (f.index * 2 + f.length - 1) / 2;
            a[x] = i ++;
            if (x > f.index) {
                q.push({x - f.index,f.index});
            }
            if (x < f.index + f.length - 1) {
                q.push({f.index + f.length - 1 - x,x + 1});
            }
        }
        x = 1;
        for (int i = 1;i <= n;i ++) {
            if (x) x = 0;
            else printf(" ");
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
*/


//
//int main()
//{
//    ull n;
//    scanf("%llu",&n);
//    string str_in;
//    cin >> str_in;
//
////    ull u = 0;
////    int a['z' + 1] = {0};
////    for (int i = 0;str_in[i];i ++) a[str_in[i]] ++;
////    for (int i = 'a';i <= 'z';i ++) if (a[i]) u ++;
//
//
//    string str1,str2 = "";
//    str2 += str_in[0];
//    for (int i = 1;i < n;i ++) {
//        if (i % 2) {
//            str1 = "";
//            for (int j = 0;str2[j];j ++) {
//
//                str1 += str_in[i];
//                str1 += str2[j];
//            }
//            str1 += str_in[i];
//        } else {
//            str2 = "";
//            for (int j = 0;str1[j];j ++) {
//
//                str2 += str_in[i];
//                str2 += str1[j];
//            }
//            str2 += str_in[i];
//        }
//    }
//    string str;
//    if (n % 2) {
//        str = str2;
//    } else {
//        str = str1;
//    }
//    map<ull,int> dp;
//    map<int,int> last;
//    map<int,int> h;
//    int mod = 998244353;
//    n = str.size();
//    for (int i = 1;i <= n;++ i) {
//        last[i]=h[str[i]];
//        h[str[i]]=i;
//    }
//    for(int i=1;i<=n;++i){
//        if (!last[i]) dp[i] = dp[i - 1] * 2 + 1;
//        else dp[i] = dp[i-1]+dp[i-1]-dp[last[i]-1];
//        if (dp[i] < 0) dp[i] += mod;
//        dp[i] %= mod;
//    }
//    printf("%d\n",dp[n]);
//
//    return 0;
//}
//

/*
int quickpow(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

int x = 1;
int dp[1010][1010];

int main()
{
    
    
    int n,m;
    map<int,int> c;
    scanf("%d%d",&n,&m);
    int a = 2;
    while (m > 1) {
        while (m % a == 0) {
            m /= a;
            c[a] ++;
        }
        a ++;
    }
    
    for (auto i : c) {
//        printf("%d: %d\n",i.first,i.second);
        x *= quickpow(i.first, i.second / 2);
    }
    
    int mod = 998244353;
    dp[0][0] = 1;
    for (int i = 1;i <= n;i ++)
        for (int j = 0;j <= x;j ++)
            if (j >= i) dp[i][j] = (dp[i][j - i] + dp[i - 1][j]) % mod;
            else dp[i][j] = dp[j][j];
    printf("%d\n",dp[n][x]);
    return 0;
}
*/

/*
pair<int,int> find(ll n)
{
    ll m = 10,M = -1;
    while (n != 0) {
        m = min(m,n % 10);
        M = max(M,n % 10);
        n /= 10;
    }
    return make_pair((int)m, (int)M);
}

int main()
{
    ll n,k;
    int t;
    pair<int, int> x;
    int v;
    scanf("%d",&t);
    while (t --) {
        scanf("%lld%lld",&n,&k);
        for (int i = 0;i < k - 1;i ++) {
            x = find(n);
            v = x.first * x.second;
            if (v == 0) break;
            n += v;
        }
        printf("%lld\n",n);
        
    }
//    scanf("%d",&n);
//    for (int i = 0;i < 100;i ++) {
//        pair<int,int> j = find(n);
//        printf("%d %d = ",n,j.first*j.second);
//        printf("%d\n",n += j.first*j.second);
//    }
    return 0;
}
*/

/*
int main()
{
    int T,n;
    int a[200010];
    int k;
    int t;
    int m;
    for (scanf("%d",&T);T --;)
    {
        scanf("%d",&n);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        sort(a,a + n);
        k = 0;
        t = 0;
        m = 0;
        for (int i = 0;i < n;i ++) {
            m = max(m,a[i]);
            t ++;
            if (m == t) {
                m = 0;
                t = 0;
                k ++;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
*/

/*
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    n --;
    k -= n;
    n ++;
    if (n < k) {
        printf("YES\n");
        int f = 1;
        for (int i = 0;i < n - 1;i ++){
            if (f) f = 0;
            else printf(" ");
            printf("1");
        }
        if (f) f = 0;
        else printf(" ");
        printf("%d\n",k);
        printf("%d\n",n);
    } else printf("NO\n");
    return 0;
}
*/

//ll a,b,c,d;
//void solve()
//{
//    ll x = 0;
//    ll l,r;
//    for (ll i = c + 1;i <= c + d;i ++)
//    {
//        l = max(a , i - c);
//        r = min(b , i - b);
//        if (r < l) continue;
//        x += (r - l + 1) * (min(d + 1 , i) - c);
//    }
//    printf("%lld\n",x);
//}
//
//int main()
//{
//    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
//    solve();
//    return 0;
//}


//int main()
//{
//    int T;
//    scanf("%d",&T);
//    string str;
//    int s;
//    while (T --) {
//        cin >> str;
//        s = (int) str.size();
//        rp(i,0,s) {
//
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int T;
//    scanf("%d",&T);
//    string str;
//    int x,l,X;
//    int lt,rt;
//    vector<int> k;
//    int s;
//    while (T --) {
//        cin >> str;
//        k.clear();
////        x = 0;
//        l = 0;
//        s = (int) str.size();
//        rp(i,0,s) {
//            if (str[i] == 'x') {
////                x ++;
//            } else {
//                l ++;
//                k.pb(i);
//            }
//        }
//        X = 0;
//
//        int ans = 0;
//        REP (i,0,s) {
//            if (str[i] == 'x') {
//                X ++;
////                x --;
////                if (X >= 3) {
////                    lt = X - 2;
////                    rt = l - 1;
////                    if (rt >= 1) {
////                        if (lt < rt) {
////                            str[i] = 'l';
////                            X --;
////                        } else {
////                            str[*(k.end() - 1)] = 'x';
////                            k.erase(k.end() - 1);
////                            l --;
////                        }
////                        ans ++;
////                    }
////
////                }
//            } else {
//                if (X >= 3) {
//
//                }
//                l --;
//            }
//            cout << str << endl;
//        }
//        printf("%d\n",ans);
//    }
//    return 0;
//}


//int a[1000][1000];
/*
int main()
{
    fre("/Users/jackli/Downloads/problem_520/small.csv");
//    freopen("/Users/jackli/Downloads/problem_520/k.csv", "w+", stdout);
//    int m = 1830;
    string str;
    string s;
    int w = 0;
    int h = 0;
    FILE *f = fopen("a.raw","w");
    while (getline(cin,str))
    {
        s = "";
        for (int i = 0;str[i];i ++) {
            if (str[i] == ',') s += ' ';
            else s += str[i];
        }
        stringstream ss(s);
        double x;
//        int f = 1;
        w = 0;
        uchar a;
        while (ss >> x) {
//            m = min(x,m);
//            if (f) f = 0;
//            else printf(",");
//            if (x - m < 5600) printf("");
//            else printf("0000");
//            printf("%d",x - m);
//            fwrite(&x, sizeof(int), 1, f);
//            a[w][h] = x;
            
            a = x;
            if (a) a = 255;
            fwrite(&a, sizeof(uchar), 1, f);
            
            w ++;
        }
        h ++;
//        printf("\n");
    }
//    for (int i = 0;i < w;i ++) {
//        for (int j = 0;j < h;j ++) {
//            fwrite(&a[i][j] - 2000, sizeof(int), 1, f);
//        }
//    }
//
    printf("%d %d\n",w,h);
    return 0;
}
*/

//int main()
//{
////    fre("/Users/jackli/Downloads/problem_520/small.csv");

//fclose(f);
//    return 0;
//}


/*
int main()
{
    int n;
    scanf("%d",&n);
    while (n >= 10) {
        n %= 10;
    }
//    printf("%d\n",n);
    if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) printf("hon\n");
    else if (n == 0 || n == 1 || n == 6 || n == 8) printf("pon\n");
    else if (n == 3) printf("bon\n");
    return 0;
}
*/

/*
int main()
{
    int k;
    string s;
    cin >> k >> s;
    if (s.size() <= k) cout << s << endl;
    else {
        REP (i,0,k) {
            printf("%c",s[i]);
        }
        printf("...\n");
    }
    return 0;
}
*/

/*
int main()
{
    double a,b,h,m;
    scanf("%lf%lf%lf%lf",&a,&b,&h,&m);
    double ha = m + h * 60;
    ha *= 0.5;
    double ma = 6 * m;
    double c = abs(ha - ma);
    c = min(360 - c,c);
    double ans = a * a + b * b - 2 * a * b * cos(c * pi / 180);
    printf("%.20f\n",sqrt(ans));
    return 0;
}
*/

/*
vector<int> g[100010];

int dis[100010];
int vis[100010] = {0};
int f[100010];
struct Node {
    int n,w,f;
    int operator<(const Node &o) const {
        return w > o.w;
    }
};

void dij(int s) {
    mem(dis,-1);
    mem(f,-1);
    
    priority_queue<Node> q;
    q.push({s,dis[s] = 0,-1});
    
    Node current;
    int k;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        f[current.n] = current.f;
        if (vis[current.n]) continue;
        vis[current.n] = 1;
        
        for (auto to : g[current.n]) {
            k = dis[current.n] + 1;
            if (dis[to] == -1 || dis[to] > k) {
                q.push({to,dis[to] = k,current.n});
            }
        }
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int u,v;
    REP (i,0,m) {
        scanf("%d%d",&u,&v);
        g[u].pb(v);
        g[v].pb(u);
    }
    dij(1);
    int ok = 1;
    rep (i,1,n) {
        if (dis[i] == -1) {
            ok = 0;
            break;
        }
    }
    if (ok) {
        printf("Yes\n");
        rep (i,2,n) {
            printf("%d\n",f[i]);
        }
    } else printf("No\n");
    return 0;
}
*/
 
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    ll a,b;
//    double x[200010];
//    double k[200010];
//    REP (i,0,n) {
//        scanf("%lld%lld",&a,&b);
//        x[i] = a / (double) b;
//        k[i] = (-b) / (double) a;
//    }
//    sort(k, k + n);
//    REP (i,0,n) {
//
//    }
//    return 0;
//}

//class A {
//    int a,b;
////    friend class B;
//public:
//
//    A(int a,int b):a(a),b(b){}
//    void aa()
//    {
//        cout << "aaa" << endl;
//    }
//};
//
//class B : private A {
//public:
//    B(int a,int b):A(a,b)
//    {
//
//    }
//
//    void out()
//    {
////        cout << a << b << endl;
//        aa();
//    }
//};
//
//int main()
//{
//    B b(1,2);
//    b.out();
//
//    return 0;
//}

/*
int x[100];
int y[100];

int getDis(int x1,int y1,int x2,int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}

int n;

int main()
{
    int w,h;
    int xs,ys;
    int a[100];

    _T_(T) {
        scanf("%d%d",&w,&h);
        scanf("%d%d",&xs,&ys);
        scanf("%d",&n);
        REP(i,0,n) scanf("%d%d",x + i,y + i);
        int sum = 0;
        int m = INT_INF;
        REP(i,0,n) a[i] = i;
        do {
            sum = 0;
            REP(i,1,n) {
                sum += getDis(x[a[i - 1]], y[a[i - 1]], x[a[i]], y[a[i]]);
            }
            sum += getDis(xs, ys, x[a[0]], y[a[0]]);
            sum += getDis(xs, ys, x[a[n - 1]], y[a[n - 1]]);
            m = min(m,sum);
        } while (next_permutation(a, a + n));
        printf("The shortest path has length %d\n",m);
    }
    return 0;
}
*/

/*
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    double v = y * log(x) - x * log(y);
    if (fabs(v) < 1e-10) printf("=\n");
    else if (v < 0) printf("<\n");
    else printf(">\n");
    return 0;
}
*/

/*
vector<int> g[100010];

int cnt = 0;
int dfn[100010] = {0};
int low[100010] = {0};

int sum = 0;

void Tarjan(int n,int from)
{
    dfn[n] = low[n] = ++ cnt;
    for (auto i : g[n]) {
        if (!dfn[i]) {
            Tarjan(i,n);
            low[n] = min(low[n],low[i]);
            if (low[i] > dfn[n]) sum ++;
        } else if (i != from) low[n] = min(low[n],low[i]);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int u,v;
    REP(i,0,m) {
        scanf("%d%d",&u,&v);
        g[u].pb(v);
        g[v].pb(u);
    }
    Tarjan(1,0);
    printf("%d\n",m - sum);
    return 0;
}
*/

/*
int main()
{
    double gg = 0,mm = 0,all = 0;
    int sg = 0,sm = 0,sa = 0;
    int m,s;
    _T_(T) {
        cin >> m >> s;
        if (m == 0) {
            sm ++;
            mm += s;
        } else {
            sg ++;
            gg += s;
        }
        sa ++;
        all += s;
    }
    printf("%.1f",all / sa);
    if (sg != 0) {
        printf(" %.1f",gg / sg);
    } else printf(" X");
    if (sm != 0) {
        printf(" %.1f",mm / sm);
    } else printf(" X");
    printf("\n");
    return 0;
}
*/

/*
int main()
{
    ll a,b;
    cin >> a >> b;
    ll c = a + b;
    int f = 0;
    if (c < 0) f = 1;
    c = abs(c);
    if (c == 0) {
        printf("0\n");
        return 0;
    }
    char x[100];
    int i = 0;
    while (c > 0) {
        x[i ++] = (c % 10) ^ 48;
        c /= 10;
    }
    if (f) printf("-\n");
    pre(j,i - 1,0) {
        printf("%c\n",x[j]);
    }
    return 0;
}
*/

/*
int main()
{
    string a,b;
    cin >> a;
    while (cin >> b) {
        if (b == "-1") break;
        if (b.size() != a.size()) {
            printf("No\n");
            continue;
        }
        int x = 0;
        int t = 0;
        for (int i = 0;b[i];i ++) {
            if (a[i] != b[i]) {
                t ++;
                x = abs(a[i] - b[i]);
            }
            if (t >= 2) {
                break;
            }
        }
        if (t >= 2 || x > 1) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
*/

/*
string all[3] = {"JianDao","Bu","ChuiZi"};

string ying(string x)
{
    if (x == all[0]) return all[2];
    else if (x == all[1]) return all[0];
    else return all[1];
}

string shu(string x)
{
    if (x == all[2]) return all[0];
    else if (x == all[0]) return all[1];
    else return all[2];
}

int main()
{
    int n;
    int k[20];
    cin >> n;
    READ(k,0,n);
    string str;
    int t = 0;
    int i = 0;
    while (cin >> str) {
        if (str == "End") break;
        t ++;
        if (t <= k[i]) {
            cout << ying(str) << endl;
        } else {
            cout << shu(str) << endl;
            t = 0;
            i ++;
            if (i >= n) i = 0;
        }
    }
    return 0;
}
*/

/*
int main()
{
    int n,p;
    int a[100010];
    scanf("%d%d",&n,&p);
    READ(a,0,n);
    sort(a,a + n);

//    REP(i,0,n) printf("%d ",a[i]);
//    printf("\n");

    int *l,*r;
    ll sum = 0;
    REP (i,0,n) {

        l = upper_bound(a + i + 1, a + n, abs(a[i] - p));
        if (l >= a + n) continue;
        r = lower_bound(a + i + 1, a + n, a[i] + p);
        if (r == a + i) continue;
        r --;
        if (r < l) continue;
//        printf("..%d\n",a[i]);
//        printf(">>%d %d\n",abs(a[i] - p),a[i] + p);
//        printf("%d %d %lu\n",*l,*r,r - l + 1);
        sum += r - l + 1;
    }
    printf("%lld\n",sum);
    return 0;
}
*/

//int main()
//{
//    int n,k;
//    scanf("%d%d",&n,&k);
//    ll x = 1;
//    ll mod = 1;
//    ll p = 0;
//    REP (i,0,k) {
//        mod *= 10;
//    }
//
//    ll m = 1000000000;
//
//    rep (i,1,n) {
//        x *= i;
//        while (x % 10 == 0) {
//            x /= 10;
//            p ++;
//        }
//        x %= m;
//    }
//    x %= mod;
//    string a = "%0";
//    a += (k ^ 48);
//    a += "lld %lld\n";
//    printf(a.c_str(),x,p);
//    return 0;
//}

/*
int main()
{
    ll n,m,k;
    ll x,ans;
    _T_(T) {
        scanf("%lld%lld%lld",&n,&m,&k);
        if (n < 2) {
            printf("0\n");
            continue;
        }
        x = n / 2;
        ans = x * (n - x) * m * k;
        printf("%lld\n",ans);
    }
    return 0;
}
*/

/*
vector<int> g[200010];

int vis[200010] = {0};
int dis[200010] = {0};

int ans = 0;
void dfs(int n,int d,int f) {
    if (d == 1) {
        ans += g[n].size() - 1;
        return;
    }
    for (auto i : g[n]) {
        if (i != f) dfs(i,d + 1,n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int u,v;
    REP(i,0,n - 1) {
        scanf("%d%d",&u,&v);
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1,0,-1);
    rep(i,1,n) {
        ans = 0;
        dfs(i,0,-1);
        printf("%d\n",ans);
    }
    return 0;
}
*/


int main()
{
    const int mod = 1e9 + 7;
//    map<pair<int,int>,int> all;
    int n;
    scanf("%d",&n);
    ll a[200010];
    read_ll(a,1,n);
    ll ans = 0;
    a[0] = 0;

    ll b[200010];
    b[0] = 0;
    for (int i = 1,j = n;i <= n;i ++,j --) b[i] = (a[i] * j) % mod;

    ll c[200010];
    c[1] = b[1];
    c[0] = 0;
    rep(i,2,n) c[i] = c[i - 1] + b[i];

    ll x;
    ll p;
    rep(i,1,n) {
        p = c[n] - c[i - 1];
        x = (p * i % mod) * a[i];
        ans = (ans + x % mod) % mod;
    }
    printf("%lld\n",ans);
    
//    rep(l,1,n) {
//        rep(r,l,n) {
//            rep(i,l,r) {
//                rep(j,i,r) {
////                    printf("%lld %lld\n",a[i],a[j]);
//                    all[make_pair(a[i], a[j])] ++;
//                    ans += a[i] * a[j] % mod;
//                }
//            }
//        }
//    }
//    for (auto i : all) {
//        printf("%d %d: %d\n",i.first.first,i.first.second,i.second);
//    }
//    printf("%lld\n",ans);
    return 0;
}

