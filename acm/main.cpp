//
//  main.cpp
//  c++_acm
//
//  Created by 李弘辰 on 2019/7/18.
//  Copyright © 2019 李弘辰. All rights reserved.
//

#include "header_useful.h"

/*
const int MAXN = 1.6 * 1e8;
const int mod = 1e9 + 7;

int num[MAXN+10], primes[MAXN+10]; // primes数组存的是所有的质数
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

ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    Euler_Sieve(n+5);
    int k;
    ll j;
    if (n < 6) {
        puts("empty");
        return 0;
    }

    ll ans = 1;
    REP(i,0,p_cnt) {
        k = 0;
        for (j = primes[i];j <= n;j *= primes[i],k ++);
        j /= primes[i];
        if (j * 2 > n) k --;
        if (primes[i] == 2) {
            if (j / 2 * 3 > n) k --;
        }
        ans *= quickpow(primes[i], k);
        ans %= mod;
    }
    printf("%lld\n",ans);
}
*/

/*
int main()
{
    double a,R;
    scdd(a,R);
    double k = sqrt(6) * a / 12;
    double k2 = a * a / 24;
    double p = sqrt(3) * a / 6;
    double p2 = a * a / 12;
    double ans = 0;
    
    if (R < k) {
        ans = 0;
    } else {
        double r = sqrt(R * R - k2);
        double r2 = R * R - k2;
        if (r2 <= p2) {
            ans = pi * r2;
        } else if (r > 2 * p) {
            ans = a * p * 3 / 2;
        } else {
            ans = pi * r2;
            double s = r2 * acos(p / r);
            s -= p * sqrt(r2 - p2);
            ans -= s * 3;
        }
    }
    printf("%.5f\n",ans * 4);
    return 0;
}
*/

/*
int a[100010];

int main()
{
    int n,q;
    int k;
    int *ans;
    int T = 1;
    while (~scanf("%d%d",&n,&q) && n != 0 && q != 0) {
        rep(i,1,n) {
            scanf("%d",a + i);
        }
        sort(a + 1,a + 1 + n);
        printf("CASE# %d:\n",T ++);
        while (q --) {
            sci(k);
            ans = lower_bound(a + 1, a + 1 + n, k);
            if (ans == a + 1 + n || *ans != k) {
                printf("%d not found\n",k);
            } else {
                printf("%d found at %d\n",k,(int) (ans - a));
            }
        }
    }
}
*/

/*
vector<int> v[30];

int n;

int find(int a) {
    REP(i,0,n) {
        for (auto j : v[i]) {
            if (a == j) {
                return i;
            }
        }
    }
    return -1;
}


int main()
{
    scanf("%d",&n);
    
    REP(i,0,n) v[i].pb(i);
    
    string cmd;
    int a,b;
    int ia,ib;
    vector<int>::iterator it;
    while (cin >> cmd) {
        if (cmd == "quit") break;
        if (cmd == "move") {
            cin >> a >> cmd >> b;
            ia = find(a);
            ib = find(b);
            if (ia == ib) continue;
            for (auto i = v[ia].rbegin();i != v[ia].rend();) {
                if (*i == a) {
                    v[ia].erase((++ i).base());
                    break;
                }
                v[*i].pb(*i);
                v[ia].erase((++ i).base());
            }
            if (cmd == "onto") {
                for (auto i = v[ib].rbegin();i != v[ib].rend();) {
                    if (*i == b) break;
                    v[*i].pb(*i);
                    v[ib].erase((++ i).base());
                }
            }
            v[ib].pb(a);
        } else {
            cin >> a >> cmd >> b;
            ia = find(a);
            ib = find(b);
            if (ia == ib) continue;
            if (cmd == "onto") {
                for (auto i = v[ib].rbegin();i != v[ib].rend();) {
                    if (*i == b) {
                        break;
                    }
                    v[*i].pb(*i);
                    v[ib].erase((++ i).base()); // 逆向迭代器删除过程
                }
            }
            for (auto i = v[ia].begin();i != v[ia].end();i ++) {
                if (*i == a) {
                    it = i;
                    break;
                }
            }
            for (auto i = it;i != v[ia].end();) {
                v[ib].pb(*i);
                i = v[ia].erase(i); // 正向迭代器删除过程
            }
        }
    }
    REP(i,0,n) {
        printf("%d:",i);
        for (auto j : v[i]) {
            printf(" %d",j);
        }
        puts("");
    }
}
*/

/*
int main()
{
    string str;
    string line;
    cio
    while (getline(cin,line)) {
        for (int i = 0;line[i];i ++) {
            if (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))) {
                line[i] = ' ';
            }
            if (line[i] >= 'A' && line[i] <= 'Z') {
                line[i] -= 'A';
                line[i] += 'a';
            }
        }
        str += line;
        str += '\n';
    }
    stringstream ss(str);
    string s;
    set<string> w;
    while (ss >> s) {
        w.insert(s);
    }
    for (auto i : w) {
        cout << i << endl;
    }
}
*/

/*
int main()
{
    cio
    string word;
    vector<string> all;
    map<string,int> cnt;
    while (cin >> word) {
        if (word[0] == '#') break;
        all.pb(word);
        for (int i = 0;word[i];i ++) word[i] = tolower(word[i]);
        sort(word.begin(),word.end());
        cnt[word] ++;
    }
    sort(all.begin(),all.end());
    
    string t;
    for (auto i : all) {
        t = i;
        for (int i = 0;t[i];i ++) t[i] = tolower(t[i]);
        sort(t.begin(),t.end());
        if (cnt[t] == 1) {
            cout << i << endl;
        }
    }
}
*/

/*
map<set<int>,int> id;
vector<set<int>> v;

int cid = 0;

int getID(set<int> st)
{
    if (id.find(st) != id.end()) return id[st];
    v.pb(st);
    return id[st] = ++ cid;
}

int main()
{
    int n;
    stack<int> s;
    string cmd;
    int a,b;
    set<int> c;
    __T {
        cid = 0;
        v.clear();
        id.clear();
        
        v.pb(set<int>());
        id[set<int>()] = 0;
        
        while (!s.empty()) s.pop();
        sci(n);
        while (n --) {
            cin >> cmd;
            if (cmd == "PUSH") {
                s.push(0);
            } else if (cmd == "DUP") {
                s.push(s.top());
            } else if (cmd == "ADD") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                c.clear();
                c.insert(a);
                for (auto i : v[b]) {
                    c.insert(i);
                }
                s.push(getID(c));
            } else if (cmd == "UNION") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                c.clear();
                for (auto i : v[a]) {
                    c.insert(i);
                }
                for (auto i : v[b]) {
                    c.insert(i);
                }
                s.push(getID(c));
            } else if (cmd == "INTERSECT") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                c.clear();
                for (auto i : v[a]) {
                    if (v[b].find(i) != v[b].end()) c.insert(i);
                }
                s.push(getID(c));
            }
            printf("%lu\n",v[s.top()].size());
        }
        puts("***");
    }
}
*/

/*
int main()
{
    int n;
    sci(n);
    rep(i,1,n) {
        rep(j,1,n) {
            printf("%d",(j + i) % 2);
        }
        puts("");
    }
    return 0;
}
*/
/*
const int mod = 1e9 + 7;

ll ten[10];

ll f(int n) {
    ll ans = 0;
    int nn = n;
    for (int i = 2;i * i <= nn;i ++) {
        while (n % i == 0) {
            ans *= ten[(int) log10(i) + 1];
            ans %= mod;
            ans += i;
            ans %= mod;
            n /= i;
        }
    }
    if (n != 1)  {
        ans *= ten[(int) log10(n) + 1];
        ans %= mod;
        ans += n;
        ans %= mod;
    }
    return ans;
}

ll k[] = {0,741799129,742265792,863064554,342936632,194033216,947375317,630113027,78067368,50376546,631719342,536048746,935663975,249718427,563305090,401918035,215702507,594894586,576347729,777128726,220078001,564875627,670818682,1761162,298372095,653656304,829794733,906607881,585538227,695406916,827425989,408593842,21416491,46949477,20854394,521036956,180621151,891070357,402970709,493967777,542917237};

int main()
{
    ten[1] = 10;
    rep(i,2,8) {
        ten[i] = ten[i - 1] * 10;
        ten[i] %= mod;
    }
    int n;
    scanf("%d",&n);
    ll ans = k[n / 100000];
    rep(i,(n / 100000) * 100000 + 1,n) {
        ans += f(i);
        ans %= mod;
    }
    printf("%lld\n",ans);
//    ll ans = 0;
//    rep(i,2,4000000) {
//        ans += f(i);
//        ans %= mod;
//        if (i % 100000 == 0) printf("%lld,",ans);
//    }
}
*/

/*
ll f[100010];

int main()
{
    f[1] = f[0] = 1;
    for(int i = 2;i <= 30; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    for(int i = 30;i <= 100010; i++) {
        f[i] = 1;
    }
    
    int n;
    sci(n);
    for (int i = 2;i <= n+1;i++) {
        if (i != 2) printf(" ");
        printf("%lld",f[i]);
    }
    return 0;
}
*/

/*
int a[100010];
deque<int> q;

int t = 1;

void push_back(int x)
{
    if (t) q.push_back(x);
    else q.push_front(x);
}

void push_front(int x)
{
    if (!t) q.push_back(x);
    else q.push_front(x);
}

void pop_back() {
    if (t) q.pop_back();
    else q.pop_front();
}

void pop_front()
{
    if (!t) q.pop_back();
    else q.pop_front();
}

int back()
{
    if (t) return q.back();
    else return q.front();
}

int front()
{
    if (!t) return q.back();
    else return q.front();
}

int main()
{
    int n;
    scanf("%d",&n);
    int k = 1;
    rep(i,1,n) {
        scanf("%d",a + i);
    }
    int j = 1,i;
    for (j = 1,i = 1;j <= n;j ++,i ++) {
        if (a[i] != i) break;
    }
    rep(i,j,n) {
        if (a[i] == j) {
            k = i - j + 1;
            break;
        }
    }
    
    rep(i,1,k) {
        push_back(a[i]);
    }
    
    j = 1;
    rep(i,k + 1,n) {
        if (front() != j) t ^= 1;
        if (front() == j) {
            pop_front();
            j ++;
            push_back(a[i]);
        } else break;
    }
    
    if (front() != j) t ^= 1;
    for (;j <= n;j ++) {
        if (front() == j) pop_front();
        else break;
    }
    
    if (j == n + 1) {
        puts("yes");
        printf("%d\n",k);
    } else puts("no");
}
*/

/*
int cal(int n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    int k = cal(n);
    int ans = -1;
    rep(i,n+1,100000) {
        if (cal(i) == k) {
            ans = i;
            break;
        }
    }
    printf("%d\n",ans);
}
*/

/*
const int MAXN = 1e6 + 10;

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

int mx[MAXN];
int num[MAXN];
int a[MAXN];

int main() {
    int n,m;
    scii(n,m);
    init(n+5);
    rep(i,1,n) sci(a[i]);
    int u,v;
    while (m --) {
        scii(u,v);
        bind(u,v);
    }
    int k;
    rep(i,1,n) {
        k = find(i);
        mx[k] = max(mx[k],a[i]);
        num[k] ++;
    }
    ll ans = 0;
    rep(i,1,n) {
        ans += (ll)num[i] * mx[i];
    }
    printf("%lld\n",ans);
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int t;
    int odd = 0,even = 0;
    rep(i,1,n) {
        sci(t);
        if (t % 2) odd ++;
        else even ++;
    }
    rep(i,1,n-1) {
        if (i & 1) {
            if (odd && even) {
                even --;
            } else if (odd >= 2) {
                odd --;
            } else {
                even --;
            }
        } else {
            if (odd >= 2) {
                odd -= 2;
                even ++;
            } else if (odd && even) {
                odd --;
            } else even --;
        }
    }
    if (even) puts("NiuMei");
    else puts("NiuNiu");
}
*/

/*
const int MAXN = 1e6 + 10;

int a[MAXN];
int nxt[MAXN];
int pre[MAXN];
int lst[MAXN];
int vis[MAXN];

int main()
{
    int n;
    sci(n);
    int dp[MAXN][2];
    rep(i,1,n) sci(a[i]);
    rep(i,1,n) {
        if (lst[a[i]] != 0) {
            nxt[lst[a[i]]] = i;
            pre[i] = lst[a[i]];
        }
        lst[a[i]] = i;
    }
    memset(lst,-1,sizeof lst);
    lst[a[1]] = 0;
    dp[1][0] = dp[1][1] = 0;
    rep(i,2,n) {
        dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
        if (lst[a[i]] == -1) dp[i][1] = 0;
        else dp[i][1] = lst[a[i]] + 1;
        lst[a[i]] = max(dp[i][0],dp[i][1]);
    }
    _C(lst[a[n]])
}
*/

/*
int conv(char a) {
    return a - 'a' + 1;
}

char reconv(int a) {
    return 'a' + a - 1;
}

int main()
{
    string str;
    cin >> str;
    int ok = -1;
    int tp = -1;
    for (int i = 0;str[i];i ++) {
        if (conv(str[i]) >= 11 && conv(str[i]) != 20) {
            ok = i;
            tp = 1;
            break;
        }
        if (i > 0) {
            if (conv(str[i - 1]) <= 9 && conv(str[i]) <= 9 && conv(str[i - 1]) * 10 + conv(str[i]) <= 26) {
                ok = i - 1;
                tp = 2;
                break;
            }
        }
    }
    if (ok == -1) puts("-1");
    else {
        for (int i = 0;str[i];) {
            if (i == ok) {
                if (tp == 1) {
                    printf("%c",reconv(conv(str[i]) / 10));
                    printf("%c",reconv(conv(str[i ++]) % 10));
                } else {
                    printf("%c",reconv(conv(str[i]) * 10 + conv(str[i + 1])));
                    i += 2;
                }
            } else {
                printf("%c",str[i ++]);
            }
        }
    }
}
*/

/*
string pre,suf;

int main()
{
    int n;
    scanf("%d",&n);
    string str;
    int s;
    int ok = -1;
    int len = 0;
    int len_s = 0;
    while (n --) {
        cin >> str;
        if (ok == -1) {
            s = (int) str.size();
            for (int i = 0;str[i] != '#';i ++) {
                if (i < len)
                {
                    if (str[i] != pre[i]) {
                        ok = 0;
                        break;
                    }
                } else {
                    pre += str[i];
                    len ++;
                }
            }
            if (ok == 0) continue;
            for (int i = s - 1,l = 0;str[i] != '#';i --,l ++) {
                if (l < len_s) {
                    if (str[i] != suf[l]) {
                        ok = 0;
                        break;
                    }
                } else {
                    suf += str[i];
                    len_s ++;
                }
            }
        }
    }
    printf("%d\n",ok);
    return 0;
}
*/

/*
struct Enemy {
    int x,y,r;
} e[15];

int vis[15];

struct Node {
    int x,y;
} a[250];

int cnt = 0;

inline int dis(int x1,int y1,int x2,int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main()
{
    int n,k,R;
    sciii(n,k,R);
    rep(i,1,n) sciii(e[i].x,e[i].y,e[i].r);
    rep(i,-7,7) {
        rep(j,-7,7) {
            a[++ cnt] = {i,j};
        }
    }
    int v,ans = 0;
    if (k == 1) {
        rep(i,1,cnt) {
            v = 0;
            rep(x,1,n) {
                if (dis(e[x].x,e[x].y,a[i].x,a[i].y) <= (e[x].r + R) * (e[x].r + R)) vis[x] = 1;
            }
            rep(x,1,n) {
                if (vis[x]) v ++;
                vis[x] = 0;
            }
            ans = v > ans ? v : ans;
            
        }
    } else if (k == 2) {
        rep(i,1,cnt) {
            rep(j,i + 1,cnt) {
                v = 0;
                rep(x,1,n) {
                    if (dis(e[x].x,e[x].y,a[i].x,a[i].y) <= (e[x].r + R) * (e[x].r + R)) vis[x] = 1;
                    if (dis(e[x].x,e[x].y,a[j].x,a[j].y) <= (e[x].r + R) * (e[x].r + R)) vis[x] = 1;
                }
                rep(x,1,n) {
                    if (vis[x]) v ++;
                    vis[x] = 0;
                }
                ans = v > ans ? v : ans;
            }
        }
    } else if (k == 3) {
        rep(i,1,cnt) {
            rep(j,i + 1,cnt) {
                rep(k,j + 1,cnt) {
                    v = 0;
                    rep(x,1,n) {
                        if (dis(e[x].x,e[x].y,a[i].x,a[i].y) <= (e[x].r + R) * (e[x].r + R)) vis[x] = 1;
                        if (dis(e[x].x,e[x].y,a[j].x,a[j].y) <= (e[x].r + R) * (e[x].r + R)) vis[x] = 1;
                        if (dis(e[x].x,e[x].y,a[k].x,a[k].y) <= (e[x].r + R) * (e[x].r + R)) vis[x] = 1;
                    }
                    rep(x,1,n) {
                        if (vis[x]) v ++;
                        vis[x] = 0;
                    }
                    ans = v > ans ? v : ans;
                }
            }
        }
    }
    
    printf("%d\n",ans);
}
*/

/*
/// https://ac.nowcoder.com/acm/contest/9983/E
/// 线段树 带修改 统计区间是否包含相同的值，线段树维护 （每个数字的下一个和他相同数字的下标）最小值，最终和区间r进行对比即可
const int MAXN = 1e6 + 10;

struct Node {
    int l,r;
    ll mn;
    int lazy;
    ll lzn;
} tree[MAXN << 2];
int nxt[MAXN];

void push_up(int i)
{
    tree[i].mn = min(tree[i << 1].mn,tree[i << 1 | 1].mn);
}

void push_down(int i) //下推标记
{
    if (tree[i].lazy == 2) {
        tree[i << 1].mn = tree[i].lzn;
        tree[i << 1 | 1].mn = tree[i].lzn;

        tree[i << 1].lzn = tree[i].lzn;
        tree[i << 1 | 1].lzn = tree[i].lzn;

        tree[i << 1].lazy = tree[i].lazy;
        tree[i << 1 | 1].lazy = tree[i].lazy;

        tree[i].lazy = 0;
        tree[i].lzn = 0;
    }
}

// i - 二叉树节点编号，调用时取1
// l，r 区间左右端下标，调用的时候取最大范围即可 build(1,n,1);
void build(int l,int r,int i)
{
    tree[i].l = l;
    tree[i].r = r;
    tree[i].lazy = 0;
    tree[i].lzn = 0;
    if (l == r) {
        tree[i].mn = nxt[l];
        return;
    }
    int m = (l + r) >> 1;
    build(l,m,i << 1);
    build(m + 1,r,i << 1 | 1);
    push_up(i);
}

void modify(int l,int r,ll x,int i) // 将区间[l,r]直接变成x，调用(l,r,x,1)
{
    if (l <= tree[i].l && r >= tree[i].r) {
        tree[i].mn = x;
        tree[i].lzn = x;

        tree[i].lazy = 2;
        return;
    }
    push_down(i);
    int m = (tree[i].l + tree[i].r) >> 1;
    if (l <= m) modify(l,r,x,i << 1);
    if (r > m) modify(l,r,x,i << 1 | 1);
    push_up(i);
}

ll query(int l,int r,int i) //查询
{
    if (l <= tree[i].l && r >= tree[i].r){
        return tree[i].mn;
    }
    push_down(i);
    int m = (tree[i].l + tree[i].r) >> 1;
    ll mn = INT_INF;
    if (l <= m) {
         mn = min(mn,query(l,r,i << 1));
    }
    if (r > m) {
        mn = min(mn,query(l,r,i << 1 | 1));
    }
    return mn;
}

int a[MAXN];
set<int> x[MAXN];
int tmp[MAXN];

int main()
{
    int n,q;
    scii(n,q);
    
    rep(i,1,n) nxt[i] = INT_INF;
    
    rep(i,1,n) {
        scanf("%d",a + i);
        x[a[i]].insert(i);
    }
    
    memset(tmp, 0, sizeof tmp);
    
    pre(i,n,1) {
        if (tmp[a[i]] != 0) {
            nxt[i] = tmp[a[i]];
        }
        tmp[a[i]] = i;
    }
    
    build(1, n, 1);
    
    int t,l,r;
    
    set<int>::iterator it;
    int pre;
    
    while (q --) {
        scii(t,l);
        if (t == 1) {
            it = x[a[l]].find(l);
            if (it != x[a[l]].begin()) {
                it --;
                pre = *it;
                it ++;
                if (it != -- x[a[l]].end()) {
                    it ++;
                    modify(pre, pre, *it, 1);
                    it --;
                } else {
                    modify(pre, pre, INT_INF, 1);
                }
            }
            x[a[l]].erase(it);
            modify(l, l, INT_INF, 1);
        } else {
            sci(r);
            printf("%d\n",query(l, r, 1) <= r);
        }
        
    }
    
}
*/

/*
int main()
{
    queue<int> ques;
    queue<int> q[1010];
    map<int,int> belongs;
    set<int> in;
    int t,n,id;
    string cmd;
    int T = 1;
    while (~scanf("%d",&t))
    {
        if (t == 0) break;
        rep(i,0,1000) {
            while (!q[i].empty()) q[i].pop();
        }
        while (!ques.empty()) ques.pop();
        belongs.clear();
        in.clear();
        
        rep(i,1,t) {
            scanf("%d",&n);
            while (n --) {
                scanf("%d",&id);
                belongs[id] = i;
            }
        }
        printf("Scenario #%d\n",T ++);
        while (cin >> cmd) {
            if (cmd == "STOP") break;
            if (cmd == "ENQUEUE") {
                scanf("%d",&id);
                if (in.find(belongs[id]) == in.end()) {
                    ques.push(belongs[id]);
                    in.insert(belongs[id]);
                }
                q[belongs[id]].push(id);
            } else {
                if (ques.empty()) continue;
                t = ques.front();
                printf("%d\n",q[t].front());
                q[t].pop();
                if (q[t].empty()) {
                    ques.pop();
                    in.erase(in.find(t));
                }
            }
        }
        printf("\n");
    }
    
}
*/

/*
int main()
{
    int n;
    stack<int> s;
    int a[1010];
    int ok;
    int j;
    while (~scanf("%d",&n) && n != 0) {
        while (~sci(a[1]) && a[1] != 0) {
            rep(i,2,n) sci(a[i]);
            ok = 0;
            j = 1;
            rep(i,1,n+1) {
                while (s.size() != 0 && s.top() == a[j]) {
                    j ++;
                    s.pop();
                    ok ++;
                }
                if (i <= n) s.push(i);
            }
            while (!s.empty()) s.pop();
            puts(ok == n ? "Yes" : "No");
        }
        puts("");
        
    }
    return 0;
}
*/

/*
ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    ll a,b,p;
    ll x,y;
    __T {
        scanf("%lld%lld%lld",&a,&b,&p);
        if (a == 0 && b == 0) {
            puts("0 0 0");
            continue;
        }
        // gcd(x,y) = gcd(a + pi,b + pj)，因为gcd(a,b) = gcd(b,a % b)，代入得gcd(b + pj,a % b + p * k)，计算 => gcd(x,y) = gcd(a + pi,b + pj) = gcd(a,b) + pk。要求gcd(x,y) % p = (gcd(a,b) + pk) % p = (gcd(a,b) % p + k) % p，因为k可以取任意值，所以最大值就是p - 1
        printf("%lld ",p - 1);
        // 已知x = a + p * i，而若需gcd(x,y) = p - 1，则x % (p - 1) = 0，y % (p - 1) = 0。而x * (p - 1) % (p - 1) = 0，故x = (a + p * i) * (p - 1) = a * (p - 1) + (p - 1) * p * i
        
        y = b * (p - 1) + (p - 1) * p;
        x = a * (p - 1) + (p - 1) * p;
        while (gcd(x,y) != p - 1) x += (p - 1) * p;
        printf("%lld %lld\n",x,y);
    }
    return 0;
}

*/

/*
struct Node {
    ll n,m;
};

Node mp['z' + 1];

int main()
{
    int n;
    sci(n);
    char c;
    int a,b;
    while (n --) {
        scanf(" %c",&c);
        scanf("%d%d",&a,&b);
        mp[c] = {a,b};
    }
    string str;
    stack<Node> st;
    deque<Node> k;
    Node aa,bb;
    ll ans;
    while (cin >> str) {
        ans = 0;
        while (!st.empty()) st.pop();
        while (!k.empty()) k.pop_front();
        for (int i = 0;str[i];i ++) {
            if (str[i] != ')' && str[i] != '(') st.push(mp[str[i]]);
            else {
                if (str[i] == '(') st.push({-1,-1});
                else {
                    while (!st.empty() && st.top().m != -1) {
                        k.push_back({st.top().n,st.top().m});
                        st.pop();
                    }
                    st.pop();
                    while (k.size() > 1) {
                        bb = k.front();
                        k.pop_front();
                        aa = k.front();
                        k.pop_front();
                        if (aa.m == bb.n) {
                            ans += aa.n * aa.m * bb.m;
                            k.push_front({aa.n,bb.m});
                        } else {
                            goto end;
                        }
                    }
                    
                    if (!k.empty()) {
                        st.push(k.front());
                        k.pop_front();
                    }
                }
            }
        }
        goto ok;
    end:
        puts("error");
        continue;
    ok:
        _C(ans)
    }
}
*/

/*
int main()
{
    list<char> a;
    string str;
    list<char>::iterator it;
    while (cin >> str) {
        a.clear();
        it = a.begin();
        for (int i = 0;str[i];i ++) {
            if (str[i] == '[') it = a.begin();
            else if (str[i] == ']') it = a.end();
            else a.insert(it,str[i]);
        }
        for (auto i : a) {
            printf("%c",i);
        }
        puts("");
    }
}
*/

/*
const int MAXN = 1e5 + 10;

int nxt[MAXN];
int pre[MAXN];

int re;

inline int *ppre(int n) {
    if (!re) return pre + n;
    return nxt + n;
}

inline int *nnxt(int n) {
    if (!re) return nxt + n;
    return pre + n;
}


int main()
{
    int n,m;
    
    int op;
    int x = 0,y = 0;
    
    int t,tt;
    
    ll ans = 0;
    int T = 1;
    
    while (~scanf("%d%d",&n,&m)) {
        rep(i,0,n) nxt[i] = i + 1;
        rep(i,1,n + 1) pre[i] = i - 1;
        pre[0] = -1;
        nxt[n + 1] = -1;
        
        re = 0;
        
        while (m --) {
            sci(op);
            if (op != 4) {
                scii(x,y);
                if (x == y) continue;
            }
            if (op == 1) {
                
                if (*ppre(x) != -1) *nnxt(*ppre(x)) = *nnxt(x);
                if (*nnxt(x) != -1) *ppre(*nnxt(x)) = *ppre(x);
                
                if (*ppre(y) != -1) *nnxt(*ppre(y)) = x;
                
                *ppre(x) = *ppre(y);
                
                *ppre(y) = x;
                *nnxt(x) = y;
                
            } else if (op == 2) {
                
                if (*ppre(x) != -1) *nnxt(*ppre(x)) = *nnxt(x);
                if (*nnxt(x) != -1) *ppre(*nnxt(x)) = *ppre(x);
                
                if (*nnxt(y) != -1) *ppre(*nnxt(y)) = x;
                
                *nnxt(x) = *nnxt(y);
                
                *nnxt(y) = x;
                *ppre(x) = y;
                
                
            } else if (op == 3) {
                // debug
                
                t = *nnxt(x);
                tt = *nnxt(y);
                
                if (*ppre(x) != -1) *nnxt(*ppre(x)) = y;
                if (*ppre(y) != -1) *nnxt(*ppre(y)) = x;
                
                if (t != -1) *ppre(t) = y;
                if (tt != -1) *ppre(tt) = x;
                
                t = *ppre(x);
                *ppre(x) = *ppre(y);
                *ppre(y) = t;
                
                t = *nnxt(x);
                *nnxt(x) = *nnxt(y);
                *nnxt(y) = t;
                
            } else if (op == 4) {
                re ^= 1;
            }
//            for (int i = *nnxt(re ? n + 1 : 0);~i;i = *nnxt(i)) {
//                if (i == n + 1 || i == 0) break;
//                printf("%d ",i);
//            }
//            puts("");
        }
        ans = 0;
        for (int i = *nnxt(re ? n + 1 : 0),j = 1;~i;i = *nnxt(i),j ++) {
            if (i == n + 1 || i == 0) break;
            ans += j % 2 ? i : 0;
        }
        printf("Case %d: %lld\n",T ++,ans);
    }
}
*/

/*
int main()
{
    int T;
    int d,n;
    int ans;
    while (~scanf("%d",&T) && ~T) {
        while (T --) {
            ans = 1;
            scii(d,n);
            n --;
            REP(i,1,d) {
                ans = ans << 1 | (n & 1);
                n >>= 1;
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
*/

/*
struct Node {
    int n;
    Node *l;
    Node *r;
    Node(int n,Node *l,Node *r):n(n),l(l),r(r) {}
};

Node *root;

int ok;

void add(int n,char *pos)
{
    Node *node = root;
    for (int i = 0;pos[i] != ')';i ++) {
        if (pos[i] == 'L') {
            if (node -> l == NULL) node -> l = new Node(-1,NULL,NULL);
            node = node -> l;
        } else {
            if (node -> r == NULL) node -> r = new Node(-1,NULL,NULL);
            node = node -> r;
        }
    }
    if (node -> n != -1) ok = 0;
    node -> n = n;
}

vector<int> ans;

int out()
{
    queue<Node*> q;
    q.push(root);
    Node *top;
    while (!q.empty()) {
        top = q.front();
        q.pop();
        if (top -> n == -1) return 0;
        ans.pb(top -> n);
        if (top -> l != NULL) q.push(top -> l);
        if (top -> r != NULL) q.push(top -> r);
    }
    return 1;
}

int main()
{
    int num;
    char str[1000];
    char pos[1000];
    root = new Node(-1,NULL,NULL);
    int f;
    ok = 1;
    while (~scanf("%s",str)) {
        if (!strcmp(str, "()")) {
            if (ok && out()) {
                f = 1;
                for (auto i : ans) {
                    if (f) f = 0;
                    else printf(" ");
                    printf("%d",i);
                }
                puts("");
            } else puts("not complete");
            root = new Node(-1,NULL,NULL);
            ans.clear();
            ok = 1;
            continue;
        }
        sscanf(str, "(%d,%s",&num,pos);
        add(num,pos);
    }
}
*/

/*
int main()
{
    int n,m,k;
    int p;
    while (~scanf("%d%d%d",&n,&m,&k)) {
        p = 0;
        for(int i = 2;i <= n - 1;i ++)
        {
            p = (p + k) % i;
        }
        p ++;
        printf("%d\n",(p + m) % n);
    }
}
*/

/*
int mp[110][110];
int dp[110][110];

int main()
{
    int n;
    int ans;
    __T {
        sci(n);
        rep(i,1,n) {
            rep(j,1,i) {
                sci(mp[i][j]);
                dp[i][j] = 0;
            }
        }
        dp[1][1] = mp[1][1];
        rep(i,2,n) {
            rep(j,1,i) {
                if (j - 1 >= 1) dp[i][j] = dp[i - 1][j - 1];
                if (j < i) dp[i][j] = max(dp[i][j],dp[i - 1][j]);
                dp[i][j] += mp[i][j];
            }
        }
        ans = 0;
        rep(i,1,n) ans = max(ans,dp[n][i]);
        printf("%d\n",ans);
    }
}
*/

/*
const int MAXN = 1e6 + 10;

ll c[MAXN];
ll arr[MAXN];

int n,m;

inline void add(int i,ll x)
{
    // 从叶子结点一路向上更新
    for (;i <= n;i += lowbit(i)) {
        c[i] += x;
    }
}

inline ll sum(int i)
{
    // 查询： 由于每个c结点相当于一小段前缀和，因此全+起来，最后求得的便是总共的前缀和
    ll ans = 0;
    for (;i > 0;i -= lowbit(i))
    {
        ans += c[i];
    }
    return ans;
}

inline ll query(int a,int b) {
    return sum(b) - sum(a - 1);
}

int main() {
    int t;
    int a,b;
    int cur;
    while (~scanf("%d%d",&n,&m)) {
        memset(c,0,sizeof(ll) * (n + 5));
        memset(arr,0,sizeof(ll) * (n + 5));
        while (m --) {
            scanf("%d%d%d",&t,&a,&b);
            if (a > b) swap(a, b);
            if (t == 1) {
                arr[a] ++;
                arr[b + 1] --;
                add(a,1);
                add(b + 1,-1);
            } else {
                cur = sum(a - 1) % 2;
                rep(i,a,b) {
                    if (arr[i] % 2) cur ^= 1;
                    printf("%d",cur);
                }
                puts("");
            }
        }
    }
}
*/

/*
struct Node {
    int n;
    int num;
} d[100];

int cmp(const Node &a,const Node &b) {
    return a.num > b.num;
}

int main()
{
    int n;
    int ok;
    int ans[15][15];
    __T {
        sci(n);
        rep(i,1,n) {
            sci(d[i].num);
            d[i].n = i;
        }
        memset(ans,0,sizeof ans);
        ok = 1;
        rep(i,1,n) {
            sort(d + i,d + 1 + n,cmp);
            if (i + d[i].num > n) {
                ok = 0;
                break;
            }
            rep(j,i + 1,i + d[i].num) {
                ans[d[i].n][d[j].n] = 1;
                ans[d[j].n][d[i].n] = 1;
                d[j].num --;
                if (d[j].num < 0) {
                    ok = 0;
                    goto end;
                }
            }
        }
        end:
        if (ok) {
            puts("YES");
            rep(i,1,n) {
                rep(j,1,n) {
                    if (j != 1) printf(" ");
                    printf("%d",ans[i][j]);
                }
                puts("");
            }
        } else puts("NO");
        puts("");
    }
}
*/

/*
int t[25];
int ac[25];
int ok[25];


int main()
{
    int m,n;
    scii(m,n);
    int num;
    string type;
    rep(i,1,n) ok[i] = 1;
    while (m --) {
        cin >> num >> type;
        t[num] ++;
        if (type == "AC") ac[num] ++;
        if (t[num] != 0 && ac[num] / (double) t[num] < 0.5) {
            ok[num] = 0;
        }
    }
    int f = 1;
    rep(i,1,n) {
        if (ok[i] && t[i]) {
            if (f) f = 0;
            else printf(" ");
            printf("%d",i);
        }
    }
    if (f) printf("-1");
    puts("");
}
*/

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
    return ans;
}

ll ele[10010];
int cnt[10010];

ll x[10010];
ll p[10010];

int main()
{
    int n;
    sci(n);
    rep(i,1,n) scl(x[i]);
    rep(i,1,n) scl(p[i]);
    ll xx,t;
    rep(i,1,n) {
        xx = x[i];
        for (int j = 2;j * j <= x[i];j ++) {
            t = 0;
            while (xx % j == 0) {
                t ++;
                xx /= j;
            }
            if (t != 0) {
                if (ele[j] == 0) ele[j] = t * p[i];
                else ele[j] = min(ele[j],t * p[i]);
                cnt[j] ++;
            }
        }
        if (xx != 1) {
            if (ele[xx] == 0) ele[xx] = p[i];
            else ele[xx] = min(ele[xx],p[i]);
            cnt[xx] ++;
        }

    }
    ll ans = 1;
    rep(i,1,10010) {
//        printf(":%lld ",ele[i]);
        if (cnt[i] == n) {
//            _C(i << " " << ele[i])
            ans *= quickpow(i,ele[i]);
            ans %= mod;
        }
    }
    printf("%lld\n",ans);
}
*/

/*
struct xyk {
    int x,y,k;
} q[3010];

int p[2010][2010];
int go[2010][2010];

inline int cal(xyk n,int i,int j)
{
    int x = i - n.x + 1;
    int y = j - n.y + 1;
    if (x & 1) {
        return (x - 1) * n.k + y;
    } else {
        return (x - 1) * n.k + n.k - y + 1;
    }
}

int main()
{
    int n,m;
    scii(n,m);
    int x,y,k;
    
    
    rep(i,1,m) {
        sciii(x,y,k);
        q[i] = {x,y,k};
    }
    
    int xx,yy;
    
    pre(ii,m,1) {
        xx = q[ii].x + q[ii].k - 1;
        yy = q[ii].y + q[ii].k - 1;
        rep(i,q[ii].x,xx) {
            rep(j,q[ii].y,yy) {
                if (!p[i][j]) {
                    p[i][j] = ii;
                    go[i][j] = yy;
                } else j = go[i][j];
            }
        }
    }
    
    rep(i,1,n) {
        rep(j,1,n) {
            if (j != 1) printf(" ");
            if (p[i][j] == 0) printf("0");
            else printf("%d",cal(q[p[i][j]], i, j));
        }
        puts("");
    }
   
}
*/

/*
struct Node {
    int to;
    char op;
};

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
    return ans;
}

const int MAXN = 1e5 + 10;

vector<Node> g[MAXN];
ll v[MAXN];

int f[MAXN];

ll a[MAXN];


void dfs(int u,ll pls,ll mul)
{
    ll ans = pls;
    if (mul) {
        mul *= v[u];
        mul %= mod;
        ans += mul;
    } else {
        ans += v[u];
    }

    ans %= mod;
    a[u] = ans;

//    _C(u << ": " << pls << " " << mul << " " << ans)

    for (auto i : g[u]) {
        if (i.op == '+' || i.op == '-') {
            dfs(i.to,ans,0);
        } else {
            if (mul) dfs(i.to,pls,mul);
            else dfs(i.to,pls,v[u]);
        }
    }
}

int main()
{
    int n;
    sci(n);
    rep(i,1,n) scl(v[i]);

    rep(i,2,n) {
        sci(f[i]);
    }
    scanf(" ");
    char t;
    rep(i,2,n) {
        scanf("%c",&t);
        g[f[i]].pb({i,t});
        if (t == '-') v[i] = (mod-v[i]) % mod;
        else if (t == '/') v[i] = quickpow(v[i], mod - 2);
    }
    dfs(1,0,0);
    rep(i,1,n) {
        if (i != 1) printf(" ");
        printf("%lld",a[i]);
    }
    puts("");
}
*/



/*
int main()
{
    int n;
    int u,v;
    int nn;
    __T {
        scanf("%d",&n);
        nn = n - 1;
        while (nn --) scii(u,v);
        if (n == 1) puts("1");
        else puts("2");
    }
}
*/

// 组合数公式：https://www.zybang.com/question/6c5da15707d5ddfaff3eff3dc012d24f.html
/*
const int MAXN = 2000010;
const int mod = 998244353;

ll fac[MAXN],invfac[MAXN],invn[MAXN];

ll C(ll n,ll m){
    if (n < 0 || m < 0 || n < m) return 0;
    return fac[n] * invfac[m] % mod * invfac[n - m] % mod;
}

void init() {
    fac[0] = fac[1] = invn[0] = invn[1] = invfac[0] = invfac[1] = 1;
    for (int i = 2;i < MAXN;i ++){
        fac[i] = fac[i - 1] * i % mod;
        invn[i] = (mod - mod / i) * invn[mod % i] % mod;
        invfac[i] = invfac[i - 1] * invn[i] % mod;
    }
}

int main()
{
    init();
    ll n,m;
    scll(n,m);
    if (m == 1) {
        puts("0");
        return 0;
    }
    m -= 2;

    ll mul;
    ll ans = 0;
    // C a+b-1 b：a个不同元素，可以取b次
    ll a,b,t;
    for (ll i = 1;i <= n - 1;i ++) {
        mul = i * (n - i) % mod;
//        _C(i << " " << n - i << " = " << mul)
        a = i + 1;
        b = m;
        t = C(a + b - 1,b);
//        _C(t << " " << mul)
        ans += t * mul % mod;
        ans %= mod;
    }
    printf("%lld\n",ans);
    return 0;
}
*/

/*
const int MAXN = 1e5 + 10;

ll a[MAXN];
ll c[MAXN];

int main()
{
    int n;
    ll k;
    ll ans;
    __T {
        sci(n);
        scl(k);
        rep(i,0,n-1) scl(a[i]);
        n --;
        rep(i,1,n) c[i] = a[i] - a[i - 1];
        
        ans = 0;
        rep(i,1,n - k + 1) {
            if (c[i] < 0) {
                ans += abs(c[i]);
                if (i + k <= n) c[i + k] -= abs(c[i]);
                c[i] = 0;
            }
        }
        pre(i,n,k) {
            if (c[i] > 0) {
                ans += c[i];
                if (i - k >= 1) c[i - k] += c[i];
                c[i] = 0;
            }
        }
        
        rep(i,1,n) {
            if (c[i] != 0) {
                ans = -1;
                break;
            }
        }
        printf("%lld\n",ans);
    }
}
*/


/*
/// HDU http://acm.hdu.edu.cn/showproblem.php?pid=2899
/// 三分
inline double gpow(double x,int times) {
    double ans = 1;
    rep(i,1,times) ans *= x;
    return ans;
}

inline double f(double x,double y) {
    return 6 * gpow(x,7) + 8 * gpow(x,6) + 7 * gpow(x,3) + 5 * gpow(x,2) - y * x;
}

int main()
{
    double y;
    double l,r,l3,r3;
    __T {
        scanf("%lf",&y);
        l = 0;
        r = 100;
        do {
            l3 = (l * 2 + r) / 3; // 三等分左半边
            r3 = (l + r * 2) / 3; // 三等分右半边
            if (f(l3,y) > f(r3,y)) l = l3; // 计算两个函数值，题目要求最小值，可根据图像得出（👀假设两个点在单调区间上，比较容易确定怎么赋值）
            else r = r3;
        } while (fabs(l3 - r3) > 1e-7);
        printf("%.4f\n",f(l3,y));
    }
}
*/

/*
// 扩展kmp https://segmentfault.com/a/1190000008663857
const int MAXN = 1e5 + 10;

int nxt[MAXN];
int extend[MAXN];

string T,S;

// 求解 T 中 next[]，注释参考 exkmp()
void make()
{
    int a = 0, p = 0;
    int m = (int) T.size();
    nxt[0] = m;

    for (int i = 1; i < m; i++)
    {
        if (i >= p || i + nxt[i - a] >= p)
        {
            if (i >= p)
                p = i;

            while (p < m && T[p] == T[p - i])
                p++;

            nxt[i] = p - i;
            a = i;
        }
        else
            nxt[i] = nxt[i - a];
    }
}

// 求解 extend[]
void exkmp()
{
    make();
    
    int a = 0, p = 0;
    int n = (int) S.size();
    int m = (int) T.size();
    
    for (int i = 0; i < n; i++)
    {
        if (i >= p || i + nxt[i - a] >= p) // i >= p 的作用：举个典型例子，S 和 T 无一字符相同
        {
            if (i >= p) p = i;
            while (p < n && p - i < m && S[p] == T[p - i]) p ++;
            extend[i] = p - i;
            a = i;
        } else extend[i] = nxt[i - a];
    }
}

/// 2021牛客寒假算法基础集训营4B
/// https://ac.nowcoder.com/acm/contest/9984/B
int main()
{
    cin >> T >> S;
    exkmp();
    int n = (int) S.size();
    int k = extend[0];
    ll ans = 0;
    int tg = min(k,n-1);
    rep(i,1,tg)
    {
        ans += extend[i];
    }
    printf("%lld\n",ans);
    return 0;
}
*/

/*
const int mod = 1000;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int n;
    
        while (~scanf("%d",&n))
        printf("%03lld\n",quickpow(5, n));
    
    return 0;
}
*/

/*
int main()
{
    int n;
    __T {
        sci(n);
        if (n == 0) puts("1");
        else puts("0");
    }
}
*/

/*
struct Node {
    int n;
    ll w;
    int operator<(const Node &o) const {
        return w > o.w;
    }
};

vector<Node> g[200010];
map<string,int> mp;

ll dis[200010];
int vis[200010] = {0};

ll prime(int s)
{
    mem(dis,-1);
    mem(vis,0);
    
    priority_queue<Node> q;
    q.push({s,dis[s] = 0});
    
    Node current;
    ll k;
    
    ll ans = 0;
    
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.n]) continue;
        vis[current.n] = 1;
        
        ans += current.w;
        
        for (auto to : g[current.n]) {
            k = to.w;
            if (dis[to.n] == -1 || dis[to.n] > k) {
                q.push({to.n,dis[to.n] = k});
            }
        }
    }
    return ans;
}

int cnt;

int get(string tmp)
{
    return mp[tmp] ? mp[tmp] : (mp[tmp] = ++ cnt);
}

int main()
{
    int n,q;
    int s;
    string tmp;
    int u,v;
    ll w;
    ll ans;
    int ok = 1;
    while (~scii(n,q)) {
        rep(i,1,n) {
            g[i].clear();
        }
        cnt = 0;
        mp.clear();
        cin >> tmp;
        s = get(tmp);
        
        while (q --) {
            cin >> tmp;
            u = get(tmp);
            cin >> tmp;
            v = get(tmp);
            cin >> w;
            g[u].pb({v,w});
            g[v].pb({u,w});
        }
        ans = prime(s);
        ok = 1;
        rep(i,1,n) {
            if (!vis[i]) {
                ok = 0;
                break;
            }
        }
        if (!ok) puts("No!");
        else printf("%lld\n",ans);
    }
    
}
*/

/*
// long long组合数带mod模版，Lucas定理
//const int mod = 998244353;
//
//ll quick_mod(ll a, ll b)
//{
//    if (b<0) return 1;
//    ll ans = 1;
//    a %= mod;
//    while(b)
//    {
//        if(b & 1)
//        {
//            ans = ans * a % mod;
//            b--;
//        }
//        b >>= 1;
//        a = a * a % mod;
//    }
//    return ans;
//}
//
//ll C(ll n, ll m)
//{
//    if(m > n) return 0;
//    ll ans = 1;
//    for(int i=1; i<=m; i++)
//    {
//        ll a = (n + i - m) % mod;
//        ll b = i % mod;
//        ans = ans * (a * quick_mod(b, mod-2) % mod) % mod;
//    }
//    return ans;
//}
//
//ll Lucas(ll n, ll m)
//{
//    if(m == 0) return 1;
//    return C(n % mod, m % mod) * Lucas(n / mod, m / mod) % mod;
//}
//ll gcd(ll a,ll b)
//{
//    if (a % b == 0) return b;
//    return gcd(b, a % b);
//}
//
//int main()
//{
//    ll sum;
//    rep(ii,0,64) {
//        if (ii % 4) continue;
//        _C(">>" << ii)
//        sum = 0;
//        rep(i,0,ii) {
//            if (i % 4 == 0) {
//                sum += Lucas(ii, i);
//                sum %= mod;
//            }
//        }
//        _C(sum)
////        ll p = quick_mod(2, ii-1);
////        p -= sum;
////        ll g = gcd(p,sum);
////        _C(sum / g << ":" << p / g << " " << p / g - 1)
//    }
//
//
//}


const int mod = 998244353;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll n;
    ll x,y,ans;
    while (~scl(n)) {
        if (n == 0) {
            puts("1");
            continue;
        }
        n /= 4;
        x = quickpow(2,n * 2 - 1);
        y = quickpow(2,n * 2);

        ans = quickpow(2, n * 4 - 1);
        ans *= quickpow(y, mod - 2);
        ans %= mod;
        if (n & 1) ans *= (x + mod - 1) % mod;
        else ans *= (x + 1) % mod;
        printf("%lld\n",ans % mod);
    }

}
*/

/*
struct Node {
    lll a;
    lll b;
} line[30];

int cmp(const Node &first,const Node &second) {
    return first.a * second.b + first.b < second.a * first.b + second.b;
}

int main()
{
    int n,x;
    lll ans;
    while (~scii(n,x)) {
        rep(i,1,n) {
            read(line[i].a);
            read(line[i].b);
        }
        
        sort(line + 1,line + 1 + n,cmp);
        
        ans = x;
        rep(i,1,n) {
            ans = line[i].a * ans + line[i].b;
        }
        print_lll(ans);
        puts("");
    }
}
*/

//int a[1010][1010];
//
//int w(int x) {
//    return x + __builtin_popcount(x);
//}
//
//int main()
//{
//    int n,m;
//    scii(n,m);
//    rep(i,1,n) {
//        rep(j,1,m) sci(a[i][j]);
//    }
//    rep(i,1,n) {
//        rep(j,2,m) {
//            printf("%d ",w(a[i][j] ^ a[i][j-1]));
//        }
//        puts("");
//    }
//}

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
    ll w;
    bool operator<(const Edge &o) const {
        return w < o.w;
    }
} e[MAXN];

Edge s[MAXN];

int n;

ll kuask(int l,int r)
{
    int cnt = 0;
    rep(i,l,r) {
        s[++ cnt] = e[i];
    }
    sort(s + 1,s + 1 + cnt);
    init(n + 5);
    int ok = 0;
    ll ans = 0;
    rep(i,1,cnt) {
        if (find(s[i].u) != find(s[i].v)) {
            ok ++;
            ans += s[i].w;
            bind(s[i].u,s[i].v);
        }
    }
    if (ok != n - 1) return -1;
    return ans;
}

int main()
{
    int m,q;
    sciii(n,m,q);
    int u,v;
    ll w;
    rep(i,1,m) {
        scii(u,v);
        scl(w);
        e[i] = {u,v,w};
    }
    int opt;
    int l,r;
    ll ans;
    int x,y,z,t;
    while (q --) {
        sci(opt);
        if (opt == 1) {
            scii(x,y);
            scii(z,t);
            e[x] = {y,z,t};
        } else {
            scii(l,r);
            ans = kuask(l, r);
            if (ans == -1) puts("Impossible");
            else printf("%lld\n",ans);
        }
    }
}
*/

/*
int main()
{
    ll n;
    int a[10];
    set<ll> s;
    __T {
        n = 0;
        rep(i,1,5) {
            sci(a[i]);
        }
        sort(a + 1,a + 6);
        rep(i,1,5) {
            n *= 10;
            n += a[i];
        }
        if (s.find(n) != s.end()) puts("pass");
        else {
            s.insert(n);
            puts("buy");
        }
    }
}
*/

/*
const int MAXN = 1e5 + 10;

ll dis[MAXN];
int vis[MAXN];

struct Node {
    int n;
    ll w;
    
    Node(int n,ll w):n(n),w(w){}
    Node(){}

    bool operator< (const Node &other) const {
        return w > other.w;
    }
};

vector<Node> g[MAXN];

void dij(int s) {
    mem(dis,-1);
    mem(vis,0);

    priority_queue<Node> q;
    q.push({s,dis[s] = 0});

    Node current;
    ll k;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.n]) continue;
        vis[current.n] = 1;

        for (vector<Node>::iterator to = g[current.n].begin();to != g[current.n].end();to ++) {
            k = current.w + to->w;
            if (dis[to->n] == -1 || dis[to->n] > k) {
                q.push({to->n,dis[to->n] = k});
            }
        }
    }
}

int main()
{
    int n,m;
    int u,v;
    int s,t;
    ll w;
    __T {
        scii(n,m);
        rep(i,1,n) {
            g[i].clear();
        }
        while (m --) {
            scii(u,v);
            scl(w);
            g[u].pb(Node(v,w));
            g[v].pb(Node(u,w));
        }
        scii(s,t);
        dij(s);
        printf("%lld\n",dis[t]);
    }
}
*/

/*
int dis[20][20];
int vis[20][20];

char mp[20][20];

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

struct Node {
    int x,y;
    int w;
    
    Node(int x,int y,int w):x(x),y(y),w(w){}
    Node(){}

    bool operator< (const Node &other) const {
        return w > other.w;
    }
};

int n,m;

void dij(int sx,int sy) {
    mem(dis,-1);
    mem(vis,0);

    priority_queue<Node> q;
    q.push(Node(sx,sy,dis[sx][sy] = 0));

    Node current;
    int k;
    int xx,yy;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.x][current.y]) continue;
        vis[current.x][current.y] = 1;
        
        rep(i,0,3) {
            xx = current.x + dx[i];
            yy = current.y + dy[i];
            if (xx >= 1 && yy >= 1 && xx <= n && yy <= m) {
                if (mp[xx][yy] != 'X') {
                    k = current.w + 1;
                    if (dis[xx][yy] == -1 || dis[xx][yy] > k) {
                        q.push({xx,yy,dis[xx][yy] = k});
                    }
                }
            }
        }
    }
}


int main()
{
    int st;
    sciii(n,m,st);
    vector<pair<int,int> > t,s;
    rep(i,1,n) {
        scanf(" ");
        rep(j,1,m) {
            scanf("%c",&mp[i][j]);
            if (mp[i][j] == 'S') {
                s.pb(mpair(i,j));
            } else if (mp[i][j] == 'D') {
                t.pb(mpair(i,j));
            }
        }
    }
    
    for (vector<pair<int, int> >::iterator sit = s.begin();sit != s.end();sit ++) {
        dij(sit -> first,sit -> second);
        for (vector<pair<int, int> >::iterator it = t.begin();it != t.end();it ++) {
            if (dis[it -> first][it -> second] != -1) {
                if (dis[it -> first][it -> second] <= st) {
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    
    printf("NO\n");
}
*/

/*
int mp[20][20];
ll dp[20][140000];

int main()
{
    int n;
    sci(n);
    REP(i,0,n) {
        REP(j,0,n) {
            sci(mp[i][j]);
        }
    }
    int nn = 1 << n;
    REP(i,0,n) { // 便利第i个小孩子
        REP(k,0,nn) { // 遍历2^n种状态
            REP(j,0,n) { // 遍历第i个小孩子第j个礼物
                if ((k | (1 << j)) == k) continue; // 如果发现上个状态这个礼物已经选过了，那就滚，其实就是要找到二进制中0的位置，也就是当前可以放礼物
                if (i == 0) dp[i][k | (1 << j)] = mp[i][j]; // 一开始没有人选过礼物，直接选就好，k | (1 << j) 就是让自己的那个位置变成1，因为原来是1的已经continue掉了，所以放的一定可以放礼物的，直接塞
                else dp[i][k | (1 << j)] = max(dp[i][k | (1 << j)],dp[i - 1][k] + mp[i][j]); // 和i-1的相同状态进行对比，找到最大即可
                printf("(%d,%d) ",i,k | (1 << j));
            }
            puts("");
        }
    }
    ll ans = 0;
    REP(i,0,n) {
        ans = max(ans,dp[i][nn - 1]);
    }
    _C(ans)
}
*/

/*
int dp[25010];
int cnt[25010];


int main()
{
    int n;
    int a[110];
    int mx;
    int ans;
    __T {
        sci(n);
        mx = -1;
        rep(i,1,n) {
            sci(a[i]);
            mx = max(mx,a[i]);
        }
        sort(a + 1,a + 1 + n);
        mem(dp,0);
        mem(cnt,0);
        rep(i,1,n) {
            dp[0] = 1;
            rep(j,a[i],mx) {
                dp[j] += dp[j-a[i]];
                if (dp[j]) cnt[j] ++;
                
            }
        }
        ans = 0;
        rep(i,1,n) {
            if (cnt[a[i]] > 1) ans ++;
        }
        _C(n-ans)
    }
}
*/

/*
const int mod = 998244353;

ll ans = 0;
set<ll> s;

void cal(ll y)
{
    ll a,b;
    
    set<ll>::iterator it = s.lower_bound(y);
    b = *it;
    if (it != s.begin()) {
        a = *(-- it);
        if (abs(b-y)<abs(a-y)) {
            s.erase(++ it);
            ans += abs(b - y);
        } else {
            s.erase(it);
            ans += abs(a - y);
        }
    } else {
        s.erase(it);
        ans += abs(b - y);
    }
    ans %= mod;
}

int main()
{
    int x;
    ll y;
    int type = -1;
    int T;
    scanf("%d",&T);
    while (T --) {
        scanf("%d%lld",&x,&y);
        if (x == 0) {
            if (s.size() == 0 || type == 0) {
                s.insert(y);
                type = 0;
            } else cal(y);
        } else {
            if (s.size() == 0 || type == 1) {
                s.insert(y);
                type = 1;
            } else cal(y);
        }
        
    }
    printf("%lld\n",ans);
}
*/

/*
//-----ST表 BEGIN-----
// https://www.jianshu.com/p/19a2cf1af279
const int MAXN = 100010;

int st[MAXN][20];
int a[MAXN];

int n;

void init() {
    // 定义 st[i][j] 是从i开始，到i + 2^j这一段，即[i,i + 2^j]这一段中的最大/小值
    rep(i,1,n) st[i][0] = a[i];

    for (int j = 1;(1 << j) <= n;j ++) { // 遍历所有的j，j是一个很小的数字，最大值=log2(n)
        rep(i,1,n - (1 << j) + 1) { // 在[1,n]区间范围内，确定j的情况下，把所有的i都遍历求值一遍
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]); // 套公式
        }
    }
}

int query(int l, int r)
{
    int x = log2(r - l + 1);
    return min(st[l][x],st[r - (1 << x) + 1][x]);
}
// -----ST表 END-----

int pre_max[MAXN],sub_max[MAXN];

// 基本定律:
// 1. 区间最小值会随着区间长度增大而保持不变或者减小
// 2. 区间最大值会随着区间长度增大而保持不变或者增大

int main()
{
    int l,r,m;
    int al,am,ar;
    int ansl,ansm;
    __T {
        sci(n);
        rep(i,1,n) {
            sci(a[i]);
        }
        // ST表初始化
        init();
        // 预处理
        pre_max[1] = a[1];
        rep(i,2,n) {
            pre_max[i] = max(pre_max[i - 1],a[i]);
        }
        sub_max[n] = a[n];
        pre(i,n - 1,1) {
            sub_max[i] = max(sub_max[i + 1],a[i]);
        }
        
        ansl = -1;
        ansm = -1;
        // 枚举左区间
        rep(i,1,n) {
            l = i + 1;
            r = n - 1;
            // 二分m=中区间和有区间的中间的隔板的位置
            while (l <= r) {
                m = (l + r) >> 1;
                al = pre_max[i]; // 左区间
                am = query(i + 1, m); // 中区间
                ar = sub_max[m + 1]; // 右区间
                // 记录答案
                if (al == am && al == ar) {
                    if (ansl == -1 || (i < ansl || (i == ansl && m - i < ansm))) {
                        ansl = i;
                        ansm = m - i;
                    }
                }
                
                if (am > al) {
                    l = m + 1; // 增大中间区间的长度以减小最小值
                } else if (am < al) {
                    r = m - 1; // 缩小中间区间的长度以增大最小值
                } else {
                    if (ar > al) l = m + 1; // 缩小右边区间以缩小最大值
                    else r = m - 1; // 增大右边区间以增大最大值，同时为了保证字典序，所以=的时候也减小m的值
                }
            }
        }
        
        if (ansl != -1) {
            printf("YES\n%d %d %d\n",ansl,ansm,n - ansl - ansm);
        } else puts("NO");
    }
}
*/

/*
const int MAXN = 1e5 + 10;

int a[MAXN];
map<int,int> mp;
map<int,pair<int,int> > pos;

int main()
{
    int n;
    int num;
    int ans;
    int t;
    __T {
        scanf("%d",&n);
        mp.clear();
        pos.clear();
        // 输入+预处理
        rep(i,1,n) {
            scanf("%d",a + i);
            // 如果这个数字没有出现过，则记录他的第一次出现的位置于pair.first
            if (pos[a[i]].first == 0) pos[a[i]].first = i;
            else {
                // 计算两个相同数字是否相邻，不相邻，操作数++
                if (i != pos[a[i]].second + 1) mp[a[i]] ++;
            }
            // 记录数字在序列中最后出现的位置
            pos[a[i]].second = i;
        }
        // 计算答案
        num = -1;
        ans = -1;
        // 枚举数字x
        rep(i,1,n) {
            t = mp[a[i]];
            if (pos[a[i]].first != 1) t ++; // 加头计算操作数
            if (pos[a[i]].second != n) t ++; // 加尾计算操作数
            if (ans == -1 || t < ans) { // 操作数比较小的时候
                num = a[i];
                ans = t;
            } else if (t == ans) { // 操作数相同
                if (a[i] < num) { // 比较数字大小
                    num = a[i];
                    ans = t;
                }
            }
        }
        printf("%d %d\n",num,ans); // 输出答案
        
    }
}
*/

/*
const int MAXN = 2e5+10;

ll a[MAXN],b[MAXN];

ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    rep(i,1,n) scanf("%lld",a + i);
    rep(i,1,m) scanf("%lld",b + i);
    sort(a + 1,a + 1 + n);
    if (n == 1) {
        rep(i,1,m) {
            if (i != 1) printf(" ");
            printf("%lld",a[i] + b[i]);
        }
        puts("");
        return 0;
    }
    ll g = a[2] - a[1];
    rep(i,2,n) {
        g = gcd(a[i] - a[i - 1],g);
    }
    rep(i,1,m) {
        if (i != 1) printf(" ");
        printf("%lld",gcd(b[i] + a[1],g));
    }
    puts("");
}
*/

// 单哈希
/*
const int MAXN = 10010;

char str[MAXN];

ull a[MAXN];

ull getHash() {
    ull ans = 0;
    for (int i = 0;str[i];i ++) {
        ans = ans * 131;
        ans += str[i];
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scanf("%s",str);
        a[i] = getHash();
    }
    int ans = 0;
    sort(a + 1,a + 1 + n);
    rep(i,1,n) {
        if (i == 1 || a[i] != a[i - 1]) ans ++;
    }
    printf("%d\n",ans);
}
*/


// 双哈希
/*
const int MAXN = 10010;

char str[MAXN];

pair<ull,ull> a[MAXN];
const ull mod = 212370440130137957ULL;

pair<ull,ull> getHash() {
    ull ans = 0,ans2 = 0;
    for (int i = 0;str[i];i ++) {
        ans = ans * 131;
        ans += str[i];
        ans2 = ans * 131 % mod;
        ans2 += str[i];
    }
    return mpair(ans,ans2);
}

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scanf("%s",str);
        a[i] = getHash();
    }
    int ans = 0;
    sort(a + 1,a + 1 + n);
    rep(i,1,n) {
        if (i == 1 || a[i] != a[i - 1]) ans ++;
    }
    printf("%d\n",ans);
}
*/

//pair<ull,int> h[50];
//
//pair<ull,int> tg;
//
//ull get_hash(string &str)
//{
//    ull ans = 0;
//    for (int i = 0;str[i];i ++) {
//        ans *= 131;
//        ans += str[i];
//    }
//    return ans;
//}
//
//ull quickpow(ull a, ull b)
//{
//    ull ans = 1;
//    while (b)
//    {
//        if (b & 1) ans = a * ans;
//        a = a * a;
//        b >>= 1;
//    }
//    return ans;
//}
//
//int n;
//
//int ans = 0;
//
//ull dp[45][5000010];
//int num[45][5000010];
//
//int main()
//{
//    scanf("%d",&n);
//    string str;
//    cin >> str;
//    tg.first = get_hash(str);
//    tg.second = (int) str.length();
//    rep(i,1,n) {
//        cin >> str;
//        h[i] = mpair(get_hash(str),str.length());
//    }
//    ull t;
//    rep(i,1,n) {
//
//        rep(j,h[i].second,tg.second) {
//            t = quickpow(131, h[i].second);
//            dp[i][j] = dp[i - 1][j - h[i].second] * t + h[i].first;
//        }
//        if (dp[i][tg.second] == tg.first) ans ++;
//    }
//    printf("%d\n",ans);
//}

/*
/// dp免费馅饼(数塔): http://acm.hdu.edu.cn/showproblem.php?pid=1176
/// 数塔：大的问题转变为小的问题
const int MAXN = 1e5 + 10;

ll dp[MAXN][11];
ll cake[MAXN][11];

int main()
{
    int n,x,T,maxT;
    ll t;
    while (~scanf("%d",&n))
    {
        if (n == 0) break;
        mem(dp, 0);
        mem(cake, 0);
        maxT = 0;
        rep(i,1,n) {
            scanf("%d%d",&x,&T);
            cake[T][x] ++;
            maxT = max(T,maxT);
        }
        pre(i,maxT,0) {
            rep(j,0,10) {
                t = dp[i + 1][j];
                if (j > 0) t = max(t,dp[i + 1][j - 1]);
                if (j < 10) t = max(t,dp[i + 1][j + 1]);
                dp[i][j] = t + cake[i][j];
            }
//            rep(j,0,10) printf("%lld ",dp[i][j]);
//            puts("");
        }
        
        printf("%lld\n",dp[0][5]);
    }
    
}
*/

/*
/// 最长上升子序列FatMouse's Speed http://acm.hdu.edu.cn/showproblem.php?pid=1160
struct Node {
    int w,s,x;
    bool operator<(const Node &o) const {
        return w > o.w;
    }
} mice[1010];

int dp[1010];
int from[1010];

int main()
{
    int n = 0;
    for (;~scanf("%d%d",&mice[n+1].w,&mice[n+1].s);n ++) {
        mice[n+1].x = n + 1;
    }
    sort(mice + 1,mice + 1 + n);
    int ans = 0;
    int end = 1;
    dp[1] = 1;
    mem(from, -1);
    rep(i,2,n) {
        REP(j,1,i) {
            if (mice[i].s > mice[j].s) {
                if (dp[i] < dp[j]) {
                    dp[i] = dp[j];
                    from[i] = j;
                }
            }
        }
        if (++ dp[i] > ans) {
            ans = dp[i];
            end = i;
        }
    }
    printf("%d\n",ans);
    do {
        printf("%d\n",mice[end].x);
        end = from[end];
    } while (end != -1);
    return 0;
}
*/

/*
// 最长上升子序列LIS_dp http://acm.hdu.edu.cn/showproblem.php?pid=1257
const int MAXN = 1e5 + 10;

int a[MAXN];
int dp[MAXN];

int LIS(int *a,int n) // start from zero
{
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    int ans = 1;
    REP(i,1,n) {
        REP(j,0,i) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i],dp[j]);
            }
        }
        ans = max(ans,++ dp[i]);
    }
    return ans;
}

int main()
{
    int n;
    while (~scanf("%d",&n)) {
        rep(i,1,n) scanf("%d",a + i);
        printf("%d\n",LIS(a + 1,n));
    }
    
}
*/

/*
// 最长上升子序列LIS_greedy http://acm.hdu.edu.cn/showproblem.php?pid=1257
const int MAXN = 1e5 + 10;

int a[MAXN];
int low[MAXN];

int LIS(int *a,int n) // start from zero
{
    int cnt = 0;
    int t;
    REP(i,0,n) {
        t = (int) (lower_bound(low, low + cnt, a[i]) - low);
        low[t] = a[i];
        if (t == cnt) cnt ++;
    }
    return cnt;
}

int main()
{
    int n;
    while (~scanf("%d",&n)) {
        rep(i,1,n) scanf("%d",a + i);
        printf("%d\n",LIS(a + 1,n));
    }
}
*/

/*
// dp: http://acm.hdu.edu.cn/showproblem.php?pid=1421
const int MAXN = 2e3 + 10;

ll a[MAXN];
ll dp[MAXN][MAXN];

int main()
{
    int n,k;
    ll t;
    while (~scanf("%d%d",&n,&k)) {
        rep(i,1,n) {
            scanf("%lld",a + i);
        }
        sort(a + 1,a + 1 + n);
        rep(i,1,k) {
    //        REP(j,0,2 * k) {
    //            dp[i][j] = 0;
    //        }
            t = 0;
            for (int j = 2;j <= 2 * i;j += 2) {
                t += (a[j] - a[j - 1]) * (a[j] - a[j - 1]);
            }
            dp[i][2 * i] = t;
            rep(j,2 * i + 1,n) {
                dp[i][j] = min(dp[i][j - 1],dp[i - 1][j - 2] + (a[j] - a[j - 1]) * (a[j] - a[j - 1]));
            }
        }
        printf("%lld\n",dp[k][n]);
    }
    return 0;
}
*/

/*
const double EPS = 1e-6;

const int MAXN = 5010;

struct Node3d {
    double x,y,z;
} a[MAXN];

struct Node {
    double x, y;
} s[MAXN];

Node o;//圆心坐标
double r;//半径

double dis(Node a, Node b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void getr(Node p1, Node p2, Node p3) {//三个点求三角形圆心坐标和半径
    double a, b, c, d, e, f;
    a = p2.y - p1.y;
    b = p3.y - p1.y;
    c = p2.x - p1.x;
    d = p3.x - p1.x;
    f = p3.x * p3.x + p3.y * p3.y - p1.x * p1.x - p1.y * p1.y;
    e = p2.x * p2.x + p2.y * p2.y - p1.x * p1.x - p1.y * p1.y;
    o.x = (a * f - b * e) / (2 * a * d - 2 * b * c);
    o.y = (d * e - c * f) / (2 * a * d - 2 * b * c);
    r = dis(o, p1);
}

int n;

void cal()
{
//    random_shuffle(s + 1, s + n + 1);
    o = s[1];
    r = 0;
    for (int i = 2; i <= n; i++) {
        if (dis(s[i], o) > r + EPS) {
            o = s[i];
            r = 0;//第一个点为圆心
            for (int j = 1; j < i; j++) {
                if (dis(o, s[j]) > r + EPS) {
                    o.x = (s[i].x + s[j].x) / 2;
                    o.y = (s[i].y + s[j].y) / 2;
                    r = dis(o, s[j]);//第一个点和第二个点中点为圆心，距离为直径
                    for (int k = 1; k < j; k++) {
                        if (dis(o, s[k]) > r + EPS) {
                            getr(s[i], s[j], s[k]);//三点定圆
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    scanf("%d",&n);
    rep(i,1,n) {
        scddd(a[i].x,a[i].y,a[i].z);
        s[i].x = a[i].x;
        s[i].y = a[i].y;
    }
    cal();
    double ans = r;
    
    rep(i,1,n) {
        s[i].x = a[i].x;
        s[i].y = a[i].z;
    }
    cal();
    ans = min(ans,r);
    
    
    rep(i,1,n) {
        s[i].x = a[i].y;
        s[i].y = a[i].z;
    }
    
    
    cal();
    ans = min(ans,r);
    printf("%.10f\n",ans * 2);
}
*/

/*
const int MAXN = 1e5 + 10;

ll w[MAXN];
ll sum[MAXN];

int main()
{
    int n;
    scanf("%d",&n);
    map<ll,ll> mp;
    rep(i,1,n) {
        scl(w[i]);
        mp[w[i]] ++;
    }
    sort(w + 1,w + 1 + n);
    rep(i,1,n) {
        sum[i] = sum[i - 1] + w[i];
    }
    int ri;
    ll l,r;
    rep(i,0,20001) {
        ri = (int) (lower_bound(w + 1, w + 1 + n, i) - w);
        l = sum[ri - 1];
        r = sum[n] - l;
        if (mp[i] > 0) {
            if (mp[i] & 1) {
                // odd
                r -= i * (mp[i] / 2 + 1);
                l += i * (mp[i] / 2);
            } else {
                // even
                r -= i * mp[i] / 2;
                l += i * mp[i] / 2;
            }
        }
        
//        _C(i << " " << l << " " << r << " " << mp[i])
        
        if (l == r) {
            printf("%d\n",i);
            return 0;
        }
        
    }
    
    
}
*/

/*
const int MAXN = 2e5 + 10;

struct Node {
    int n;
//    int last;
} u[MAXN];

int a[MAXN];
int vis[MAXN];

int cnt[MAXN];
int lst[MAXN];

int main()
{
    _C(1)
    int n,k;
    scii(n,k);
    int last = -1;
    int ucnt = 0;
    rep(i,1,n) {
        scanf("%d",a + i);
        if (last != a[i]) {
            u[++ ucnt].n = a[i];
        }
        last = a[i];
    }
    
    
//    rep(i,1,ucnt) {
//        printf("%d ",u[i].n);
//    }
    
    pre(i,ucnt,1) {
        if (!lst[i]) lst[u[i].n] = i;
    }
    
    vector<int> ans;
    
    rep(i,1,ucnt) {
        if (vis[u[i].n]) continue;
//        if (cnt[u[j].n] == 1) {
//            ans.pb(u[j].n);
//            continue;
//        }
        rep(j,i + 1,ucnt) {
            if (vis[u[j].n]) continue;
            if (u[j].n < u[i].n) break;
        }
        if (!vis[u[i].n]) {
            cnt[u[i].n] --;
            if (!cnt[u[i].n]) {
                ans.pb(u[i].n);
                vis[u[i].n] = 1;
            }
        }
        
    }
    int f = 1;
    for (auto i : ans) {
        if (f) f = 0;
        else printf(" ");
        printf("%d",i);
    }
    puts("");
    
}
*/

/*
const int MAXN = 50010; // 开比边大

int n,father[MAXN],vst[MAXN],match[MAXN],pre[MAXN],type[MAXN];

vector<int> g[MAXN];
queue<int> q;

void add_edge(int u,int v) {
    g[u].push_back(v);
}

int LCA(int x,int y) {
    static int times = 0;
    times ++;
    x = father[x];
    y = father[y]; //已知环位置
    while (vst[x] != times) {
        if (x) {
            vst[x] = times;
            x = father[pre[match[x]]];
        }
        swap(x,y);
    }
    return x;
}

void blossom(int x,int y,int lca) {
    while (father[x] != lca) {
        pre[x] = y;
        y = match[x];
        if (type[y] == 1) {
            type[y] = 0;
            q.push(y);
        }
        father[x] = father[y] = father[lca];
        x = pre[y];
    }
}

int augument(int s) {
    for (int i = 1; i <= n;i ++) father[i]=i;
    memset(type,-1,sizeof(type));

    q = queue<int>();
    type[s] = 0;
    q.push(s); //仅入队o型点

    int cur;
    while (!q.empty()) {
        cur = q.front();
        q.pop();
        for (int next : g[cur]) {
            if (type[next] == -1) {
                pre[next] = cur;
                type[next] = 1; //标记为i型点
                if(!match[next]) {
                    for(int to = next,from = cur; to; from = pre[to]) {
                        match[to] = from;
                        swap(match[from],to);
                    }
                    return true;
                }
                type[match[next]] = 0;
                q.push(match[next]);
            } else if (type[next] == 0 && father[cur] != father[next]) {
                int lca = LCA(cur,next);
                blossom(cur,next,lca);
                blossom(next,cur,lca);
            }
        }
    }
    return false;
}

int matching() {
    int ans = 0;
    for(int i=n; i>=1; i--)
        if(!match[i]) ans += augument(i);
    return ans;
}

int main() {
    sci(n);
    string str[510];
    cin >> str[1];
    int len = (int) str[1].size();
    int cnt;
    rep(i,2,n) {
        cin >> str[i];
        REP(j,1,i) {
            cnt = 0;
            REP(k,0,len) {
                if (str[i][k] != str[j][k]) {
                    cnt ++;
                }
            }
            if (cnt == 2) {
                add_edge(i,j);
                add_edge(j,i);
            }
        }
    }
    printf("%d\n",n - matching());
    rep(i,1,n) {
        printf("%d %d\n",i,match[i]);
    }
    return 0;
}
*/

/*
int cnt = 0;

const int MAXN = 2e5 + 10;

int st[MAXN];
int a[MAXN];

int mp[MAXN];
int vis[MAXN];

int main()
{
    int n,k;
    scii(n,k);
    rep(i,1,n) {
        sci(a[i]);
        mp[a[i]] ++;
    }
    
    rep(i,1,n) {
        mp[a[i]] --;
        if (vis[a[i]]) continue;
        if (cnt == 0) {
            st[++ cnt] = a[i];
            vis[a[i]] = 1;
        }
        else {
            while (st[cnt] > a[i] && mp[st[cnt]] != 0 && cnt != 0)
            {
                vis[st[cnt]] = 0;
                cnt --;
            }
            if (!vis[a[i]]) {
                st[++ cnt] = a[i];
                vis[a[i]] = 1;
            }
        }
        
    }
    
    rep(i,1,cnt) {
        if (i != 1) printf(" ");
        printf("%d",st[i]);
    }
    puts("");
    return 0;
}
*/

/*
set<int> mul[10];

int ans[25];
int fans[25];
string num;
int n;

int ok = 0;


void dfs(int u)
{
    if (ok) return;
    if (u >= n) {
        int o = 1;
        int t;
        REP(i,0,n) {
            t = 0;
            rep(j,0,i) {
                t += ans[n - j - 1] * ans[n - (i - j) - 1] % 10;
                t %= 10;
            }
            if (t != (num[n * 2 - i - 2] ^ 48)) {
                o = 0;
                break;
            }
        }
        if (o) {
            ok = 1;
            rep(i,0,n-1) fans[i] = ans[i];
        }
        return;
    }
    if (u == 0) {
        if (mul[num[u] ^ 48].size() == 0) {
            return;
        }
        for (auto i : mul[num[u] ^ 48]) {
            if (ok) return;
            ans[u] = i;
            dfs(u + 1);
        }
    } else {
        int k = 0,m = num[u] ^ 48;
        int x;
        rep(i,1,u-1) {
            k += ans[i] * ans[u - i];
        }
        rep(t,0,2500) {
            if ((m + 10 * t - k) % (2 * ans[0]) == 0) {
                x = (m + 10 * t - k) / (2 * ans[0]);
                if (x < 10 && x >= 0) {
                    if (ok && fans[u] < x) {
                        return;
                    }
                    ans[u] = x;
                    dfs(u + 1);
                }
            }
        }
    }
}

int main()
{
    cin >> num;
    n = (int) num.size();
    if (!(n & 1)) {
        puts("-1");
        return 0;
    }
    
    n /= 2;
    n ++;
    
    rep(i,0,9) {
        mul[i * i % 10].insert(i);
    }
    dfs(0);
    if (ok) {
        REP(i,0,n) {
            printf("%d",fans[i]);
        }
        puts("");
    } else puts("-1");
}
*/

/*
int main() {
    int n,m;
    string str;
    int k;
    int i;
    __T {
        scii(n,m);
        cin >> str;
        k = (int) str.size();
        if (!m) {
            puts("YES");
            continue;
        }
        if (m << 1 >= n) {
            puts("NO");
            continue;
        }
        for (i = 0;i < m && str[k - i - 1] == str[i];i ++);
        puts(i == m ? "YES" : "NO");
    }
    return 0;
}
*/

/*
int main()
{
    set<int> s;
    int n,k;
    int t;
    int j;
    int mex,mx;
    ll ans;
    const int step = 2;
    __T {
        s.clear();
        scii(n,k);
        rep(i,1,n) {
            sci(t);
            s.insert(t);
        }
        
        rep(i,1,min(step,k)) {
            j = 0;
            mx = *(-- s.end());
            if (mx == s.size() - 1) {
                s.insert(mx + 1);
            } else {
                for (auto it = s.begin();it != s.end();it ++,j ++) {
                    if (j != *it) {
                        mex = j;
                        s.insert((mx + mex) / 2 + (mx + mex) % 2);
                        break;
                    }
                }
            }
        }
        
        k -= step;
        k = max(0,k);
        
        ans = s.size();
        
        if (*(-- s.end()) == s.size() - 1) {
            ans += k;
        }
        
        printf("%lld\n",ans);
        
        
    }
}
*/

/*
const int MAXN = 3e5 + 10;

struct Dot {
    ll x,y;
} miner[MAXN],dm[MAXN];

int cmp1(const Dot &a,const Dot &b) {
    return abs(a.x) < abs(b.x);
}

int cmp2(const Dot &a,const Dot &b) {
    return abs(a.y) < abs(b.y);
}

int main()
{
    int n;
    ll x,y;
    int cnt_m,cnt_d;
    double ans;
    __T {
        cnt_m = cnt_d = 0;
        sci(n);
        rep(i,1,n * 2) {
            scll(x,y);
            if (x == 0) miner[++ cnt_m] = {x,y};
            else if (y == 0) dm[++ cnt_d] = {x,y};
        }
        sort(miner + 1,miner + 1 + cnt_m,cmp2);
        sort(dm + 1,dm + 1 + cnt_d,cmp1);
        ans = 0;
        rep(i,1,n) {
            ans += sqrt(miner[i].y * miner[i].y + dm[i].x * dm[i].x);
        }
        printf("%.15f\n",ans);
    }
}
*/

/*
const int MAXN = 1e5+10;

int a[MAXN];

struct Node {
    int l,r;
} all[MAXN];

int l[MAXN];
int r[MAXN];

int check(int l,int r)
{
    if (!l || !r) return 0;
    if (l == r && l % 2 == 1) return 1;
    return 0;
}

int main()
{
    int n;
    sci(n);
    rep(i,1,n) {
        sci(a[i]);
    }
    int st = 0;
    int x = 0;
    rep(i,2,n) {
        if (a[i] > a[i - 1]) {
            // up
            if (st != 1) x ++;
            x ++;
            st = 1;
        } else {
            l[i - 1] = x;
            x = 0;
            st = -1;
        }
    }
    if (st == 1) l[n] = x;
    st = 0;
    x = 0;
    pre(i,n,2) {
        if (a[i] < a[i - 1]) {
            // down
            if (st != 1) x ++;
            x ++;
            st = 1;
        } else {
            r[i] = x;
            x = 0;
            st = -1;
        }
    }
    if (st == 1) r[1] = x;

//    rep(i,1,n) {
//        _C(l[i] << " " << r[i])
//    }


    int mx = -1;
    int t;

    int ok = 0;

    rep(i,1,n) {
//        printf("%d %d\n",l[i],r[i]);
        t = max(l[i],r[i]);
        if (t >= mx) ok = 0;
        if (check(l[i],r[i])) {
            if (t > mx) ok = 1;
        }
        mx = max(t,mx);
    }
    printf("%d\n",ok);
    return 0;
}
*/

/*
double fact[40000];

int main()
{
    // 处理阶乘
    rep(i,1,40000) {
        fact[i] = fact[i - 1] + log10(i);
    }
    
    int n;
    sci(n);
    ll a[500];
    ll m = 0; // 总人数
    int cnt[400] = {0};
    rep(i,1,n) {
        scl(a[i]);
        m += a[i];
        cnt[a[i]] ++;
    }
    // 总情况数365^m
    double base = log10(365) * m;
    
    // 1. 从365天中选出n天: C_365^n
    double p1 = 0;
    int t = 365;
    rep(i,1,n)
    {
        p1 += log10(t --);
    }
    rep(i,1,n) {
        p1 -= log10(i);
    }
    
    // 2. 不重复分组C_m^a[1] * C_{m-a[1]}^a[2]*...*C_a[n]^a[n] / (\prod A_cnt[i]^cnt[i])
    double p2 = fact[m];
    rep(i,1,n) {
        p2 -= fact[a[i]];
    }
    
    rep(i,1,100) {
        p2 -= fact[cnt[i]];
    }
    
    // 3. 将日期分配给每个小组
    double p3 = fact[n];
    
    double ans = p1 + p2 + p3;
    printf("%.15f\n",ans - base);
    
}
*/

/*
const int MAXN = 1e6 + 10;

ll a[MAXN];

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
    return ans;
}

ll fac[MAXN],invfac[MAXN],invn[MAXN];

ll C(ll n,ll m){
    if (n < 0 || m < 0 || n < m) return 0;
    return fac[n] * invfac[m] % mod * invfac[n - m] % mod;
}

void init() {
    fac[0] = fac[1] = invn[0] = invn[1] = invfac[0] = invfac[1] = 1;
    for (int i = 2;i < MAXN;i ++){
        fac[i] = fac[i - 1] * i % mod;
        invn[i] = (mod - mod / i) * invn[mod % i] % mod;
        invfac[i] = invfac[i - 1] * invn[i] % mod;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    init();
    
    rep(i,1,n) {
        scanf("%lld",a + i);
    }
    
    sort(a + 1,a + 1 + n);
    
    int db = 0;
    
    for (int i = 2;i <= n;i ++) {
        if (a[i] == a[i - 1]) db ++;
    }

    ll ans = 0;
    
    ll t;
    
    int k = n - db;
    ll child = 1;
    
    rep(i,1,k) {
        child *= i;
        child %= mod;
    }
    
    ll base = quickpow(2, mod - 2);
    
    int j = db % 2;
    
    rep(i,1,db + 1) {
        t = child;
        
        t *= C(db,i - 1);
        t %= mod;
        
        if (!j) ans += t;
        else ans = (ans + mod - t) % mod;
        j ^= 1;
        ans %= mod;
        
        child *= ++ k;
        child %= mod;
        child *= base;
        child %= mod;
    }
    
    printf("%lld\n",ans);
    
}
*/

/*
int main()
{
    int n;
    sci(n);
    map<string,string> patch;
    string key;
    while (n --) {
        cin >> key;
        scanf(" ");
        getline(cin,patch[key]);
    }
    string str;
    stringstream ss;
    sci(n);
    scanf(" ");
    string word;
    string ans;
    int f = 1;
    while (n --) {
        getline(cin, str);
        ss = stringstream(str);
        ans = "";
        f = 1;
        while (ss >> word) {
            if (f) f = 0;
            else ans += " ";
            if (patch.find(word) != patch.end()) {
                ans += patch[word];
            } else ans += word;
        }
        _C(ans)
    }
}
*/

/*
int main()
{
    int n,p;
    __T {
        scii(n,p);
        
        printf("Circus Act %d:\n",T);
        if (n== 1) {
            puts("Chester can do it!");
            puts("");
            continue;
        }
        if (n * 2.5 <= p) {
            puts("Chester can do it!");
        } else puts("Chester will fail!");
        puts("");
    }
    
    
}
*/

/*
struct Point {
    double x,y;
};

inline double getDis(const Point &a,const Point &b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

inline double getDis2(const Point &a,const Point &b)
{
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main()
{
    Point center,start,finish;
    int n;
    Point dots[15];
    double a,b;
    double r,r2,k2,deg,k;
    
    Point sf,cs;
    double z;
    int T = 1;
    while (~scanf("%lf%lf%lf%lf%lf%lf",&center.x,&center.y,&start.x,&start.y,&finish.x,&finish.y)) {
        if (center.x == 0 && center.y == 0 && start.x == 0 && start.y == 0 && finish.x == 0 && finish.y == 0) break;
        scanf("%d",&n);
        rep(i,1,n) {
            scanf("%lf%lf",&dots[i].x,&dots[i].y);
        }
        
        r2 = getDis2(center, start);
        k2 = getDis2(start, finish);
        r = sqrt(r2);
        k = sqrt(k2);
        deg = acos((2 * r2 - k2) / (2 * r2));
        
        sf = {finish.x - start.x,finish.y - start.y};
        cs = {start.x - center.x,start.y - center.y};
        z = sf.x * cs.y - sf.y * cs.x;
        if (z > 0) deg = 2 * pi - deg;

        
        a = r * deg;
        b = 0;
        
        b += getDis(start,dots[1]);
        rep(i,2,n) {
            b += getDis(dots[i - 1],dots[i]);
        }
        b += getDis(dots[n],finish);
        
        printf("Case #%d: ",T ++);
        if (a < b) puts("Stick to the Circle.");
        else puts("Watch out for squirrels!");
        puts("");
    }
}
*/

/*
int main()
{
    ll n;
    ll k,nn;
    __T {
        scl(n);
        k = log2(n);
        nn = n;
        if ((1 << k) < n) nn = 1 << (k + 1);
        printf("Input value: %lld\n%lld\n\n",n,nn);
        
    }
}
*/
/*
int main()
{
    double n,p,m;
    __T {
        scddd(n,p,m);
        printf("%.2f\n",n * p / 100.0 * m);
    }
}
*/

/*
const int MAXN = 2e5 + 10;

int a[MAXN];
int ans[MAXN];

int main()
{
    int n;
    int cnt;
    __T {
        sci(n);
        rep(i,1,n) sci(a[i]);
        cnt = 0;
        pre(i,n,1) {
            cnt = max(a[i],cnt);
            ans[i] = 0;
            if (cnt) {
                ans[i] = 1;
                cnt --;
            }
        }
        rep(i,1,n) {
            if (i != 1) printf(" ");
            printf("%d",ans[i]);
        }
        puts("");
    }
}
*/

/*
const int MAXN = 110;

int a[MAXN];
int b[MAXN];
int t[MAXN];

int main()
{
    int n;
    ll ans;
    int k;
    __T {
        sci(n);
        rep(i,1,n) scii(a[i],b[i]);
        b[0] = 0;
        rep(i,1,n) {
            sci(t[i]);
            t[i] += a[i] - b[i - 1];
        }
        ans = 0;
        
        rep(i,1,n) {
            ans += t[i];
            if (i != n) {
                k = (b[i] - a[i]) / 2 + (b[i] - a[i]) % 2;
                ans = max(ans + k,(ll) b[i]);
            }
        }
        printf("%lld\n",ans);
        
        
    }
}
*/

/*
const int MAXN = 1e5 + 10;

int a[MAXN];
int ans[MAXN];
multiset<int> s;

int main()
{
    int n;
    sci(n);
    rep(i,1,n) {
        sci(a[i]);
    }
    s.insert(a[1]);
    rep(i,2,n) {
        s.insert(a[i]);
        ans[i] = *(--(-- s.end()));
    }
    int q;
    sci(q);
    int t;
    while (q --) {
        sci(t);
        printf("%d\n",ans[t]);
    }
}
*/

/*
const int MAXN = 1e6 + 10;
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
    return ans;
}

int w[MAXN];
ll sub[MAXN];

int main()
{
    int n;
    sci(n);
    rep(i,1,n) {
        sci(w[i]);
    }
    sub[n] = w[n];
    pre(i,n - 1,1) {
        sub[i] = (sub[i + 1] + w[i]) % mod;
    }
    ll ans = 1;
    rep(i,2,n-1) {
//        _C(w[i+1] * quickpow(sub[i], mod - 2) % mod)
        ans *= w[i] * quickpow(sub[i], mod - 2) % mod;
        ans %= mod;
    }
    printf("%lld\n",ans);
    
}
*/

/*
int ok(int a,int b,int c) {
    return a + b > c && a + c > b && b + c > a;
}

int main()
{
    int a[6];
    int p[6];
    int o;
    __T {
        rep(i,0,5) {
            sci(a[i]);
            p[i] = i;
        }
        o = 0;
        do {
            if (ok(a[p[0]],a[p[1]],a[p[2]]) && ok(a[p[3]],a[p[4]],a[p[5]])) {
                o = 1;
                break;
            }
        } while (next_permutation(p, p + 6));
        puts(o ? "Yes" : "No");
    }
}
*/

/*
int main()
{
    int n;
    int cur;
    int vis[40];
    int ans = 0;
    __T {
        sci(n);
        memset(vis, 0, sizeof vis);
        cur = 0;
        ans = 0;
        while (n) {
//            _C(n << " " << lowbit(n))
            if (lowbit(n) > (1 << cur)) {
                if (vis[cur]) {
                    cur ++;
                }
            }
            n -= (1 << cur);
            vis[cur] = 1;
            ans ++;
        }
        printf("%d\n",ans);
    }
    
}
*/

/*
int a[3][6][6];

int k[30];

int judge(int w)
{
    int t;
    rep(i,1,5) {
        t = 1;
        rep(j,1,5) {
            if (a[w][i][j]) {
                t = 0;
                break;
            }
        }
        if (t) return 1;
    }
    
    rep(j,1,5) {
        t = 1;
        rep(i,1,5) {
            if (a[w][i][j]) {
                t = 0;
                break;
            }
        }
        if (t) return 1;
    }
    
    t = 1;
    rep(i,1,5) {
        if (a[w][i][i]) {
            t = 0;
            break;
        }
    }
    if (t) return 1;
    
    t = 1;
    rep(i,1,5) {
        if (a[w][5 - i + 1][i]) {
            t = 0;
            break;
        }
    }
    if (t) return 1;
    
    return 0;
}

int main()
{
    int aa,bb;
    __T {
        rep(i,1,5) {
            rep(j,1,5) {
                sci(a[0][i][j]);
            }
        }
        rep(i,1,5) {
            rep(j,1,5) {
                sci(a[1][i][j]);
            }
        }
        rep(i,1,25) sci(k[i]);
        rep(x,1,25) {
            rep(i,1,5) {
                rep(j,1,5) {
                    if (a[0][i][j] == k[x]) {
                        a[0][i][j] = 0;
                    }
                }
            }
            rep(i,1,5) {
                rep(j,1,5) {
                    if (a[1][i][j] == k[x]) {
                        a[1][i][j] = 0;
                    }
                }
            }
            aa = judge(0);
            bb = judge(1);
            if (aa && !bb) puts("1");
            else if (!aa && bb) puts("2");
            else if (aa && bb) puts("0");
            if (aa || bb) break;
        }
        
    }
}

*/

/*
int const mod = 2019;
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",max(a,b) - min(d,c));
    return 0;
}
*/

/*
int const mod = 2019;
int main()
{
    string s;
    cin>>s;
    int n =s.length();
    for(int i=0;i<n;i++) {
        if(s[i] !='.') printf("%c",s[i]);
        else break;
    }
    puts("");
    return 0;
}
*/

/*
int main()
{
    ll n;
    scl(n);
    int len = log10(n) + 1;
    ll mx = len / 2 - !(len & 1);
    ll ans = 0;
    ll ed = 9;
    ll st = 1;
    rep(i,1,mx) {
        ans += ed - st + 1;
        st *= 10;
        ed *= 10;
        ed += 9;
    }
    ll a,b;
    if (len % 2 == 0) {
        ll k = 1;
        rep(i,1,len / 2)
        {
            k *= 10;
        }
        a = n / k;
        b = n % k;
        k /= 10;
        rep(i,k,a) {
            if (i * k * 10 + i > n) break;
            ans ++;
        }
    }
    printf("%lld\n",ans);
}
*/

//ll a,b;
//
//ll xx;
//
//void dfs(ll x,ll sum) {
//    if (x <= 0) {
//        xx = min(xx,sum);
//        return;
//    }
//    dfs(x - 2,sum + a);
//    dfs(x - 3,sum + b);
//}
//
//int main()
//{
//    ll n;
//    ll ans;
//    ll k;
//    ll m;
//    __T {
//        sclll(n,a,b);
//        k = n / 6;
//        m = k * 6;
//        ans = min(m / 2 * a,m / 3 * b);
//        n -= m;
//        xx = 1e18;
//        dfs(n,0);
//        ans += xx;
//        printf("%lld\n",ans);
//    }
//}

/*
const int MAXN = 30;

int x[MAXN];

int main()
{
    int n;
    sci(n);
    char t;
    rep(i,1,n) {
        scanf(" %c",&t);
        if (t == 'T') x[i] = 1;
        else x[i] = 0;
    }
    stack<int> s;
    int a,b;
    while (~scanf(" %c",&t)) {
        if (t >= 'A' && t <= 'Z') {
            s.push(x[t - 'A' + 1]);
        } else {
            if (t == '-') {
                a = s.top();
                s.pop();
                s.push(!a);
            } else {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                if (t == '*') {
                    s.push(a & b);
                } else {
                    s.push(a | b);
                }
            }
        }
    }
    printf("%s\n",s.top() ? "T" : "F");
    
}
*/

/*
const int MAXN = 1e5 + 10;

ll A[MAXN],B[MAXN];

int main()
{
    int n,d;
    scii(n,d);
    int w;
    ll a,b;
    ll all = 0;
    rep(i,1,n) {
        sci(w);
        scll(a,b);
        all += a + b;
        A[w] += a;
        B[w] += b;
    }
    ll wa = 0,wb = 0;
    rep(i,1,d) {
        if (A[i] > B[i]) {
            printf("A %lld %lld\n",a = A[i] - (A[i] + B[i]) / 2 - 1,b = B[i]);
            wa += a;
            wb += b;
        } else {
            printf("B %lld %lld\n",a = A[i],b = B[i] - (A[i] + B[i]) / 2 - 1);
            wa += a;
            wb += b;
        }
    }
    printf("%.10f\n",abs(wa - wb) / (double) all);
    
}
*/

/*
const int MAXN = 1e6 + 10;

ll a[MAXN];

ll pre[MAXN];
ll sub[MAXN];

double pp[MAXN];
double ss[MAXN];

int main()
{
    int n;
    sci(n);
    double mx = 0;
    rep(i,1,n) {
        scl(a[i]);
        pre[i] = pre[i - 1] + a[i];
        
        mx = max(pre[i] / (double) i,mx);
    }
    
    pre(i,n,1) {
        sub[i] = sub[i + 1] + a[i];
        mx = max(sub[i] / (double) (n - i + 1),mx);
    }
    printf("%.10f\n",mx);
    
    
    return 0;
}
*/

/*
const int MAXN = 510;
const ll inf = 0x7ffffffffffff;

ll mp[MAXN][MAXN];
ll mp2[MAXN][MAXN];

int n,m,t,d;

void init()
{
    for (int i = 1;i <= n;i ++){
        mp[i][i] = mp2[i][i] = 0;
        for (int j = 1;j <= n;j ++){
            mp[i][j] = mp2[i][j] = inf;
        }
    }
}

void floyd()
{
    for (int k = 1;k <= n;k ++)
    {
        for (int i = 1;i <= n;i ++)
        {
            for (int j = 1;j <= n;j ++)
            {
                mp[i][j] = min(mp[i][j],mp[i][k] + mp[k][j]);
            }
        }
    }
}

int st[MAXN];

int main()
{
    scii(n,m);
    scii(t,d);
    init();
    int u,v;
    ll w;
    
    rep(i,1,t) {
        sci(st[i]);
    }
    st[++ t] = 1;
    st[++ t] = n;
    
    while (m --) {
        scii(u,v);
        scl(w);
        mp[u][v] = w;
        mp[v][u] = w;
    }
    floyd();
    
    rep(i,1,t) {
        rep(j,1,t) {
            if (mp[st[i]][st[j]] <= d) {
                mp2[st[i]][st[j]] = mp[st[i]][st[j]];
                mp2[st[j]][st[i]] = mp[st[i]][st[j]];
            }
        }
    }
    rep(i,1,n) {
        rep(j,1,n) {
            mp[i][j] = mp2[i][j];
//            printf("%lld ",mp[i][j] == inf ? -1 : mp[i][j]);
        }
//        puts("");
    }
    floyd();
    
    if (mp[1][n] != inf) printf("%lld\n",mp[1][n]);
    else puts("stuck");
    
}
*/

/*
// 线段树 - 二叉树，节点存的是一个 l，r，区间的内容n
const int MAXN = 1e5 + 10;
 
struct P {
    ll mn;
    ll sum1;
    ll sum2;
    ll mx;
};
 
struct Node {
    int l,r;
    ll mx;
    ll mn;
    ll sum1;
    ll sum2;
} tree[MAXN << 2][20];
ll a[MAXN];
 
void push_up(int i,int t)
{
//    _C(i << " " << tree[i << 1].mn << " " << tree[i << 1 | 1].mn)
     
    tree[i][t].mn = min(tree[i << 1][t].mn,tree[i << 1 | 1][t].mn);
    tree[i][t].mx = max(tree[i << 1][t].mx,tree[i << 1 | 1][t].mx);
     
    tree[i][t].sum1 = max(tree[i << 1][t].sum1,tree[i << 1 | 1][t].sum1);
    tree[i][t].sum1 = max(tree[i][t].sum1,max(0ll,tree[i << 1 | 1][t].mx - tree[i << 1][t].mn));
     
    tree[i][t].sum2 = max(tree[i << 1][t].sum2,tree[i << 1 | 1][t].sum2);
    tree[i][t].sum2 = max(tree[i][t].sum2,max(0ll,tree[i << 1][t].mx - tree[i << 1 | 1][t].mn));
}
 
// i - 二叉树节点编号，调用时取1
// l，r 区间左右端下标，调用的时候取最大范围即可 build(1,n,1);
void build(int l,int r,int i,int t)
{
    tree[i][t].l = l;
    tree[i][t].r = r;
    if (l == r) {
        tree[i][t].sum1 = tree[i][t].sum2 = 0; // a原数组，把原来的数值给叶子结点
        tree[i][t].mx = a[l];
        tree[i][t].mn = a[l];
        return;
    }
    int m = (l + r) >> 1;
    build(l,m,i << 1,t);
    build(m + 1,r,i << 1 | 1,t);
    push_up(i,t);
}
 
P query(int l,int r,int i,int t) //查询
{
     
    if (l <= tree[i][t].l && r >= tree[i][t].r) return {tree[i][t].mn,tree[i][t].sum1,tree[i][t].sum2,tree[i][t].mx};
    int m = (tree[i][t].l + tree[i][t].r) >> 1;
    P sum;
    P a = {-1,-1,-1},b = {-1,-1,-1};
 
    if (l <= m) {
        a = query(l,r,i << 1,t);
    }
    if (r > m) {
        b = query(l,r,i << 1 | 1,t);
    }
     
    if (a.mn == -1) return b;
    if (b.mn == -1) return a;
     
    sum.mn = min(a.mn,b.mn);
    sum.mx = max(a.mx,b.mx);
     
    sum.sum1 = max(a.sum1,b.sum1);
    sum.sum1 = max(sum.sum1,max(0ll,b.mx - a.mn));
     
    sum.sum2 = max(a.sum2,b.sum2);
    sum.sum2 = max(sum.sum2,max(0ll,a.mx - b.mn));
     
    return sum;
}
 
ll v[MAXN],d[MAXN];
 
int main()
{
    int n;
    sci(n);
    rep(i,1,n) {
        scll(v[i],d[i]);
    }
     
    int w,k;
     
    rep(i,1,7) {
        w = i;
        rep(j,1,n) {
            if (w <= 4) k = w - 1;
            else k = 7 - w;
            a[j] = v[j] + d[j] * k;
            w ++;
            if (w == 8) w = 1;
        }
        build(1, n, 1, i);
    }
     
    rep(i,1,7) {
        w = i;
        pre(j,n,1) {
            if (w <= 4) k = w - 1;
            else k = 7 - w;
            a[j] = v[j] + d[j] * k;
            w ++;
            if (w == 8) w = 1;
        }
        build(1, n, 1, i + 7);
    }
     
     
    int q;
    sci(q);
    int s,t;
    ll ans;
    int x;
    while (q --) {
        scii(s,t);
        if (s <= t) {
            x = (7 - (s - 1) % 7 + 1) % 7;
            x = x ? x : 7;
            ans = query(s, t, 1, x).sum1;
        } else {
            x = (7 - (n - s) % 7 + 1) % 7;
            x = x ? x : 7;
            ans = query(t, s, 1, x + 7).sum2;
        }
        printf("%lld\n",ans);
//        _C(x.mn << " " << x.sum1 << " " << x.sum2 << " " << x.mx)
    }
     
     
}
*/

//ll a[310][310];
//ll sum[310][310];
//
//int main()
//{
//    int n,m,k;
//    sciii(n,m,k);
//    rep(i,1,n) {
//        rep(j,1,m) {
//            scl(a[i][j]);
//        }
//    }
//    ll ans = 0;
//    ll s;
//    rep(ii,1,n) {
//        rep(jj,1,m) {
//            if (ii * jj <= k) {
//                s = 0;
//                pre(i,ii,1) {
//                    pre(j,jj,1) {
//                        s += a[i][j];
//                        if (s > sum[i][j]) sum[i][j] = s;
//                    }
//                }
//            }
//        }
//    }
//    printf("%lld\n",sum[1][1]);
//}

//int main()
//{
//    ll n,x,y;
//    __T {
//        sclll(n,x,y);
//        if (n == 1) {
//            printf("%lld\n",min(x,y));
//            continue;
//        }
//        x += n - 2;
//        y += n - 2;
//        while (x != y) {
//            if (x > y) {
//                x /= n;
//                x ++;
//            } else if (x < y) {
//                y /= n;
//                y ++;
//            }
//        }
//        _C(x)
//
//    }
//}

//ll Manacher_n(string &s)
//{
//    //改造字符串
//    int n = (int) s.size();
//    string res = "$#";
//    for (int i = 0;i < n;i ++)
//    {
//        res += s[i];
//        res += "#";
//    }
//
//    _C(res)
//
//    //数组
//    n = (int) res.size();
//    vector<ll> P(n,0);
//    ll mi = 0,right = 0; //mi为最大回文串对应的中心点，right为该回文串能达到的最右端的值
//    ll maxLen = 0,maxPoint = 0; //maxLen为最大回文串的长度，maxPoint为记录中心点
//
//    ll ans = 0;
//    for (ll i = 1;i < n;i ++)
//    {
//        P[i] = right > i ? min(P[2 * mi - i],right - i) : 1; //关键句，文中对这句以详细讲解
//        while (res[i + P[i]] == res[i - P[i]]) {
//            P[i] ++;
//        }
//        if (right < i + P[i]) //超过之前的最右端，则改变中心点和对应的最右端
//        {
//            right = i + P[i];
//            mi = i;
//        }
//        if (maxLen < P[i]) //更新最大回文串的长度，并记下此时的点
//        {
//            maxLen = P[i];
//            maxPoint = i;
//        }
//        _C(i << " > " << maxPoint << " " << maxLen << " " << P[i])
////        if (maxPoint)
//        ans += P[i] / 2;
//    }
//    return ans;
//}
//
//
//int main()
//{
//    string str;
//    cin >> str;
//    _C(Manacher_n(str))
//}

/*
const int MAXN = 200010;

int nxt[MAXN];
int extend[MAXN];

string T,S;

// 求解 T 中 next[]，注释参考 exkmp()
void make()
{
    int a = 0, p = 0;
    int m = (int) T.size();
    nxt[0] = m;

    for (int i = 1; i < m; i++)
    {
        if (i >= p || i + nxt[i - a] >= p)
        {
            if (i >= p)
                p = i;

            while (p < m && T[p] == T[p - i])
                p++;

            nxt[i] = p - i;
            a = i;
        }
        else
            nxt[i] = nxt[i - a];
    }
}

// 求解 extend[]
void exkmp()
{
    make();

    int a = 0, p = 0;
    int n = (int) S.size();
    int m = (int) T.size();

    for (int i = 0; i < n; i++)
    {
        if (i >= p || i + nxt[i - a] >= p) // i >= p 的作用：举个典型例子，S 和 T 无一字符相同
        {
            if (i >= p) p = i;
            while (p < n && p - i < m && S[p] == T[p - i]) p ++;
            extend[i] = p - i;
            a = i;
        } else extend[i] = nxt[i - a];
    }
}

int pre[MAXN];
int pcnt;

ull hs[MAXN];
ull bin[MAXN];
const int p = 131;

string str;

void getHash()
{
    bin[0] = 1;
    for (int i = 1;str[i - 1];i ++) {
        hs[i] = hs[i - 1] * p + str[i - 1] - 'a';
        bin[i] = bin[i - 1] * p;
    }
}

ull getSub(int l,int r)
{
    return hs[r] - hs[l - 1] * bin[r - l + 1];
}

int main()
{
    cin >> str;
    int n = (int) str.size();
    T = S = "";
    REP(i,0,n) {
        T += str[i];
        S += str[n - i - 1];
    }
    
    exkmp();
    
    pre[++ pcnt] = 1;
    for (int i = 0;str[i];i ++) {
        if (extend[i] == n - i) {
            pre[++ pcnt] = n - i;
        }
    }

    sort(pre + 1,pre + 1 + pcnt);
    pcnt = (int) (unique(pre + 1, pre + 1 + pcnt) - pre) - 1;
    
    getHash();
    int ans = 0;
    for (int i = 1,k = 1;str[i - 1] && k <= pcnt;i ++) {
        if (i == pre[k]) {
            k ++;
            if (i * 2 <= n) {
                if (getSub(1, i) == getSub(i + 1,i * 2)) {
                    ans ++;
                }
            }
            if (i * 2 - 1 <= n) {
                if (getSub(1, i) == getSub(i,i * 2 - 1)) {
                    ans ++;
                }
            }
        }
    }
    printf("%d\n",ans);
}
*/

/*
const int MAXN = 1e5 + 10;
const int mod = 1e9 + 7;

ll x[MAXN],y[MAXN];

int main()
{
    int n,m;
    scii(n,m);
    rep(i,1,n) scl(x[i]);
    rep(i,1,m) scl(y[i]);
    sort(x + 1,x + 1 + n);
    sort(y + 1,y + 1 + m);

    ll a = n - 3,b = m - 3;
    ll aa = 0,bb = 0;
    
    ll k;
    ll num = n - 1;
    
    rep(i,2,n) {
        k = x[i] - x[i - 1];
        aa += k * num % mod;
        aa %= mod;
        
        num += a;
        a -= 2;
    }
    
    num = m - 1;
    
    rep(i,2,m) {
        k = y[i] - y[i - 1];
        bb += k * num % mod;
        bb %= mod;
        
        num += b;
        b -= 2;
    }
//    _C(a << " " << b)
//    _C(aa * a)
//    _C(bb * b)
    printf("%lld\n",aa * bb % mod);
}
*/

/*
inline ll cal(ll n)
{
    ll ans = 0;
    while (n) {
        ans += (n % 10) * (n % 10);
        n /= 10;
    }
    return ans;
}

int main()
{
    ll n;
    
        scl(n);
        rep(i,1,100000) {
            if (n == 1) {
                puts("HAPPY");
                return 0;
            }
            n = cal(n);
        }
    puts("UNHAPPY");
    
}
*/

/*
const int MAXN = 1e4 + 10;

int dd[MAXN];
int dir[MAXN];

struct Node {
    int x,y;
};

int ans[MAXN];

int l,r,u,d;

int main()
{
    int n;
    scanf("%d",&n);
    int t;
    rep(i,1,n) {
        scanf("%d %d",&t,dd + i);
    }
    
    dir[1] = 4;
    rep(i,2,n) {
        if (dir[i - 1] == 1) {
            if (dd[i - 1] == 1) dir[i] = 3;
            else if (dd[i - 1] == -1) dir[i] = 4;
        } else if (dir[i - 1] == 2) {
            if (dd[i - 1] == 1) dir[i] = 4;
            else if (dd[i - 1] == -1) dir[i] = 3;
        } else if (dir[i - 1] == 3) {
            if (dd[i - 1] == 1) dir[i] = 2;
            else if (dd[i - 1] == -1) dir[i] = 1;
        } else if (dir[i - 1] == 4) {
            if (dd[i - 1] == 1) dir[i] = 1;
            else if (dd[i - 1] == -1) dir[i] = 2;
        }
    }
    // 1 up
    // 2 down
    // 3 l
    // 4 r
    
    Node pos = {0,0};
    
    
    rep(i,1,n) {
        if (dir[i] == 1) {
            ans[i] = u + 1 - pos.y;
            u ++;pos.y = u;
            
        } else if (dir[i] == 2) {
            ans[i] = pos.y - d + 1;
            d --;
            pos.y = d;
            
        } else if (dir[i] == 3) {
            ans[i] = pos.x - l + 1;
            l --;pos.x = l;
            
        } else if (dir[i] == 4) {
            ans[i] = r + 1 - pos.x;
            
            r ++;pos.x = r;
            
        }
    }
    rep(i,1,n) {
        if (i != 1) printf(" ");
        printf("%d",ans[i]);
    }
    puts("");
}
*/

/*
int main()
{
    ll n;
    scl(n);
    printf("%lld\n",n * (n - 1) / 2);
}
*/

/*
int main()
{
    vector<int> ans;
    int n;
    sci(n);
    rep(i,1,n) {
        if (i & 1) {
            if (i % 9 == 0) ans.pb(i);
        } else {
            if (i % 7) ans.pb(i);
        }
    }
    int x = 0;
    for (vector<int>::iterator i = ans.begin();i != ans.end();i ++) {
        x += log10(*i) + 1;
    }
    _C(x);
}
*/

/*
const int mod = 10007;

char prime[100];

void shai()
{
    memset(prime,1,sizeof prime);
    for (int i = 2;i < 100;i ++) {
        for (int j = i + i;j < 100;j += i) {
            prime[j] = 0;
        }
    }
    prime[1] = 0;
    prime[0] = 0;
}

int dp[1010][10];

int main()
{
    int k;
    sci(k);
    int s;
    shai();
    rep(i,0,9) dp[1][i] = 1;
    rep(ii,2,k) {
        s = 0;
        if (ii == 2) s = 1;
        rep(i,s,9) {
            rep(j,0,9) {
                if (prime[i * 10 + j]) {
                    dp[ii][j] += dp[ii - 1][i];
                    dp[ii][j] %= mod;
                }
            }
        }
    }
    ll ans = 0;
    rep(i,0,9) {
        ans += dp[k][i];
        ans %= mod;
    }
    printf("%lld\n",ans);
}
*/

/*
inline ll ceil(ll a,ll b) {
    return a / b + (a % b ? 1 : 0);
}

int main()
{
    ll hp,atk,n,h,a,t;
    ll k,times,lt;
    ll end;
    ll dmg = 0;
    __T {
        scll(hp,atk);
        sclll(n,h,a);
        scl(t);
        k = ceil(h,atk);
        times = t / k;
        lt = t % k;
        end = max(0ll,n - times + 1);
//        _C(times)
//        _C(end);
        dmg = (n + end) * (n - end + 1) / 2 * k * a;
        if (lt) {
            dmg += lt * max(0ll,end - 1) * a;
        }
        puts(dmg >= hp ? "Yes" : "No");
    }
}
*/

/*
const int MAXN = 100010;

struct Edge {
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
    Edge(){}
};

vector<Edge> g[MAXN];
int in[MAXN];

int vis[MAXN];

int n;

void find_circle() {
    queue<int> q;
    rep(i,1,n) {
        if (in[i] == 1) {
            q.push(i);
        }
    }
    int top;
    while (!q.empty()) {
        top = q.front();
        q.pop();
        for (vector<Edge>::iterator it = g[top].begin();it != g[top].end();it ++) {
            if (in[it -> to]) {
                in[it -> to] --;
                in[top] --;
                if (in[it -> to] == 1) {
                    q.push(it -> to);
                }
            }
        }
    }
}

int st;
ll x;
int fd;

void run(int u,int f,ll num)
{
    if (fd) return;
    if (f != -1 && st == u) {
        x = num / 2;
        fd = 1;
        return;
    }
    for (vector<Edge>::iterator it = g[u].begin();it != g[u].end();it ++) {
        if (it -> to != f)
            run(it -> to,u,it -> w - num);
    }
}

ll ww[MAXN];

void dfs(int u,ll s)
{
    if (vis[u]) return;
    vis[u] = 1;
    ww[u] = s;
    for (vector<Edge>::iterator it = g[u].begin();it != g[u].end();it ++) {
        dfs(it -> to,it -> w - s);
    }
}

int main()
{
    sci(n);
    int u,v;
    ll w;
    rep(i,1,n) {
        scii(u,v);
        scl(w);
        g[u].pb(Edge(v,w));
        g[v].pb(Edge(u,w));
        in[u] ++;
        in[v] ++;
    }
    find_circle();
    rep(i,1,n) {
        if (in[i]) {
            st = i;
            run(i,-1,0);
            dfs(i,x);
            break;
        }
    }
    rep(i,1,n) {
        printf("%lld\n",ww[i]);
    }
}
*/

/*
const int MAXN = 1e5 + 10;

int a[MAXN];
multiset<int> s;

int main()
{
    int n,k;
    scii(n,k);
    int t;
    rep(i,1,n) {
        sci(t);
        s.insert(t);
    }
    int l = 1;
    int fd;
    multiset<int>::iterator it;
    int die = 0;
    while (!s.empty()) {
        fd = 0;
        it = s.find(l);
        if (it != s.end()) {
            s.erase(it);
            die ++;
            fd = 1;
        }
        if (!fd) {
            it = s.find(l + k);
            if (it != s.end())
            {
                s.erase(it);
                die ++;
                fd = 1;
            }
        }
        if (!fd) break;
        l ++;
    }
    for (it = s.begin();it != s.end();it ++) {
        if (*it - k <= l) die ++;
    }
    printf("%d %d\n",die,l);
}
*/

/*
struct big{
    int d;ll a[N>>2];
    void rd(){
        scanf("%s",S),d=strlen(S);
        for(int i=1;i<=d;i++)
        a[d-i>>3]=a[d-i>>3]*10+S[i-1]-'0';
        d=d-1>>3;
    }
    void upd(){while(d&&!a[d])d--;}
    void div(){
        for(int i=d;i>=0;i--)
        i?a[i-1]+=a[i]%p*V:0,a[i]/=p;
        upd();
    }
    int mod(int k){
        LL ret=0;
        for(int i=d;i>=0;i--)
        ret=(ret*V+a[i])%k;
        return ret;
    }
}
//ll operator%(Wint a,ll mod)
//{
//    ll ans = 0;
//    for (Wint::reverse_iterator it = a.rbegin();it != a.rend();it ++) {
//        ans *= 10;
//        ans %= mod;
//        ans += *it;
//        ans %= mod;
//    }
//    return ans;
//}


int p;

ll eular(ll x)
{
    ll ans = x;
    for (int i = 2;i * i <= x;i ++)
    {
        if (x % i == 0)
        {
            ans = ans / i * (i - 1);
            while (x % i == 0) x /= i;
        }
    }
    if (x > 1) ans = ans / x * (x - 1);
    return ans;
}

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % p;
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}

const int MAXXN = 1e6 + 10;

BigNum l,r;

int pr[MAXXN];
int cnt_p;

char sheiv[MAXXN];

inline ll solve()
{
    
    mem(sheiv,1);
    
    int pp = p;
    for (int i = 2;i * i <= p && pp != 1;i ++) {
        if (pp % i == 0) pr[++ cnt_p] = i;
        while (pp % i == 0) pp /= i;
    }
    if (pp != 1) pr[++ cnt_p] = pp;
    sort(pr + 1,pr + 1 + cnt_p);
    
    //
//    rep(i,1,cnt_p) {
//        printf("%d ",pr[i]);
//    }
//    puts("");
    //
    sheiv[0] = 0;
    for (int i = 1;i <= cnt_p;i ++) {
        for (int j = pr[i];j < p;j += pr[i]) sheiv[j] = 0;
    }
    //
//    REP(i,0,p) printf("%3d",i);
//    puts("");
//    REP(i,0,p) printf("%3d",sheiv[i]);
//    puts("");
    //
    
    r - l + 1;
    
    int stp = (int) (l % p);
    
    ll cycle = 1;
    for (int i = 0,j = stp;i < p;i ++,j = (j + 1) % p) {
        if (sheiv[j]) {
            cycle *= j;
            cycle %= p;
        }
    }
    _C(cycle)
    
    r = l / p;
    _C("aaa")
    ll e = eular(p);
    _C(e)
    ll ans = quickpow(cycle % p, (r % e) + e);
    _C(ans)
    
    ll left = l % p;
    for (ll i = 0,j = stp;i < left;i ++,j = (j + 1) % p) {
        if (sheiv[j]) {
            ans *= j;
            ans %= p;
        }
    }
    
    ll ans = 0;
    return ans;
}



int main()
{
    cin >> l >> r >> p;
    _C(solve());


}
*/

/*
struct Wint:vector<int>//用标准库vector做基类，完美解决位数问题，同时更易于实现
{
    //将低精度转高精度的初始化，可以自动被编译器调用
    //因此无需单独写高精度数和低精度数的运算函数，十分方便
    Wint(int n = 0)//默认初始化为0，但0的保存形式为空
    {
        push_back(n);
        check();
    }
    Wint& check()//在各类运算中经常用到的进位小函数，不妨内置
    {
        while(!empty()&&!back())pop_back();//去除最高位可能存在的0
        if(empty())return *this;
        for(int i=1; i<size(); ++i)//处理进位
        {
            (*this)[i]+=(*this)[i-1]/10;
            (*this)[i-1]%=10;
        }
        while(back()>=10)
        {
            push_back(back()/10);
            (*this)[size()-2]%=10;
        }
        return *this;//为使用方便，将进位后的自身返回引用
    }
};
//输入输出
istream& operator>>(istream &is,Wint &n)
{
    string s;
    is>>s;
    n.clear();
    for(int i = (int) s.size() - 1; i>=0; --i)n.push_back(s[i]-'0');
    return is;
}
ostream& operator<<(ostream &os,const Wint &n)
{
    if(n.empty())os<<0;
    for(int i = (int) n.size() - 1; i>=0; --i)os<<n[i];
    return os;
}
//比较，只需要写两个，其他的直接代入即可
//常量引用当参数，避免拷贝更高效
bool operator!=(const Wint &a,const Wint &b)
{
    if(a.size()!=b.size())return 1;
    for(int i = (int) a.size() -1; i>=0; --i)
        if(a[i]!=b[i])return 1;
    return 0;
}
bool operator==(const Wint &a,const Wint &b)
{
    return !(a!=b);
}
bool operator<(const Wint &a,const Wint &b)
{
    if(a.size()!=b.size())return a.size()<b.size();
    for(int i = (int) a.size()-1; i>=0; --i)
        if(a[i]!=b[i])return a[i]<b[i];
    return 0;
}
bool operator>(const Wint &a,const Wint &b)
{
    return b<a;
}
bool operator<=(const Wint &a,const Wint &b)
{
    return !(a>b);
}
bool operator>=(const Wint &a,const Wint &b)
{
    return !(a<b);
}
//加法，先实现+=，这样更简洁高效
Wint& operator+=(Wint &a,const Wint &b)
{
    if(a.size()<b.size())a.resize(b.size());
    for(int i=0; i!=b.size(); ++i)a[i]+=b[i];
    return a.check();
}
Wint operator+(Wint a,const Wint &b)
{
    return a+=b;
}
//减法，返回差的绝对值，由于后面有交换，故参数不用引用
Wint& operator-=(Wint &a,Wint b)
{
    if(a<b)swap(a,b);
    for(int i=0; i!=b.size(); a[i]-=b[i],++i)
        if(a[i]<b[i])//需要借位
        {
            int j=i+1;
            while(!a[j])++j;
            while(j>i)
            {
                --a[j];
                a[--j]+=10;
            }
        }
    return a.check();
}
Wint operator-(Wint a,const Wint &b)
{
    return a-=b;
}
//乘法不能先实现*=，原因自己想
Wint operator*(const Wint &a,const Wint &b)
{
    Wint n;
    n.assign(a.size()+b.size()-1,0);
    for(int i=0; i!=a.size(); ++i)
        for(int j=0; j!=b.size(); ++j)
            n[i+j]+=a[i]*b[j];
    return n.check();
}
Wint& operator*=(Wint &a,const Wint &b)
{
    return a=a*b;
}
//除法和取模先实现一个带余除法函数
Wint divmod(Wint &a,int b)
{
    Wint ans;
    int n = (int) a.size();
    int sum = 0;
    for(int i = n-1;i >= 0;i--) {
        sum = sum * 10 + a[i];
        ans.push_back(sum/b);
        sum%=b;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
Wint operator/(Wint &a,int &b)
{
    return divmod(a,b);
}
Wint& operator/=(Wint &a,int &b)
{
    return a=a/b;
}
Wint& operator%=(Wint &a,int &b)
{
    divmod(a,b);
    return a;
}

ll operator%(Wint a,ll mod)
{
    ll ans = 0;
    for (Wint::reverse_iterator it = a.rbegin();it != a.rend();it ++) {
        ans *= 10;
        ans %= mod;
        ans += *it;
        ans %= mod;
    }
    return ans;
}


int p;

ll eular(ll x)
{
    ll ans = x;
    for (int i = 2;i * i <= x;i ++)
    {
        if (x % i == 0)
        {
            ans = ans / i * (i - 1);
            while (x % i == 0) x /= i;
        }
    }
    if (x > 1) ans = ans / x * (x - 1);
    return ans;
}

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % p;
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}

const int MAXN = 1e6 + 10;

int pr[MAXN];
int cnt_p;

char sheiv[MAXN];
Wint l,r;

inline ll solve()
{
    
    mem(sheiv,1);
    int pp = p;
    for (int i = 2;i * i <= p && pp != 1;i ++) {
        if (pp % i == 0) pr[++ cnt_p] = i;
        while (pp % i == 0) pp /= i;
    }
    
    if (pp != 1) pr[++ cnt_p] = pp;
    sort(pr + 1,pr + 1 + cnt_p);

    sheiv[0] = 0;
    for (int i = 1;i <= cnt_p;i ++) {
        for (int j = pr[i];j < p;j += pr[i]) sheiv[j] = 0;
    }

    
    Wint len = r - l + 1;
    int stp = (int) (l % p);
    
    ll cycle = 1;
    
    for (int i = 0,j = stp;i < p;i ++,j = (j + 1) % p)  {
        if (sheiv[j]) {
            cycle *= j;
            cycle %= p;
        }
    }
    
    Wint times = len / p;
    
    ll e = eular(p);
    ll ans = quickpow(cycle % p, (times % e) + e);

    ll left = len % p;
    for (ll i = 0,j = stp;i < left;i ++,j = (j + 1) % p) {
        if (sheiv[j]) {
            ans *= j;
            ans %= p;
        }
    }
    return ans;
}


int main()
{
    
    cin >> l >> r >> p;
    _C(solve());
    
}
*/

/*
int main()
{
    int n,m;
    string str;
    __T {
        scanf("%d%d",&n,&m);
        cin >> str;
        for (int i = 0,j = 0;str[i];i ++,j ++) {
            if (j == m) {
                puts("");
                j = 0;
            }
            printf("%c",str[i]);
        }
        puts("");
    }
}
*/

/*
const int MAXN = 1e5 + 10;
char str[MAXN];

ull hs[MAXN]; // 哈希数组，定义成ull自动取模
ull bin[MAXN]; // 记录p的次方数
const int p = 131; // 进制数


void getHash()
{
    bin[0] = 1;
    for (int i = 1;str[i - 1];i ++) {
        hs[i] = hs[i - 1] * p + str[i - 1] - 'a'; // 算哈希值，把他当一个大数字来看待
        bin[i] = bin[i - 1] * p; // 计算p的次方数
    }
}

inline ull getSub(int l,int r) // 获取其中的一段subString的哈希值hash[l...r]
{
    return hs[r] - hs[l - 1] * bin[r - l + 1];
}

int main()
{
    int m,l;
    map<ull,int> x;
    int ans;
    ull t;
    int len;
    while (~scanf("%d%d",&m,&l)) {
        scanf("%s",str);
        getHash();
        ans = 0;
        len = (int) strlen(str);
        for (int i = 0;i < l && i + m * l - 1 < len;i ++) {
            x.clear();
            for (int j = i,k = 0;k < m && j + l - 1 < len;j += l,k ++) {
                x[getSub(j + 1, j + l)] ++;
            }
            if (x.size() == m) ans ++;
            for (int j = i + l * m;j + l - 1 < len;j += l) {
                t = getSub(j - l * m + 1, j - l * m + l);
                x[t] --;
                if (!x[t]) x.erase(x.find(t));
                t = getSub(j + 1,j + l);
                x[t] ++;
                if (x.size() == m) ans ++;
                
            }
        }
        printf("%d\n",ans);
    }
    
}
*/

/*
int a[50][50];
int b[50][50];
int n;

void rotate()
{
    int tmp[50][50];
    rep(i,1,n) {
        rep(j,1,n) {
            tmp[j][n - i + 1] = a[i][j];
        }
    }
    rep(i,1,n) {
        rep(j,1,n) {
            a[i][j] = tmp[i][j];
        }
    }
}

int eq() {
    int ans = 0;
    rep(i,1,n) {
        rep(j,1,n) {
            ans += a[i][j] == b[i][j];
        }
    }
    return ans;
}

int main()
{
    int ans;
    while (~scanf("%d",&n)) {
        if (n == 0) break;
        rep(i,1,n) {
            rep(j,1,n) {
                scanf("%d",&a[i][j]);
            }
        }
        rep(i,1,n) {
            rep(j,1,n) {
                scanf("%d",&b[i][j]);
            }
        }
        ans = 0;
        rep(i,0,3) {
            ans = max(eq(),ans);
            rotate();
        }
        printf("%d\n",ans);
    }
}
*/

/*
int main()
{
    ll a[3];
    ll ans = 0;
    set<int> l[2];
    while (~scanf("%lld%lld%lld",a,a + 1,a + 2)) {
        l[0].clear();
        l[1].clear();
        ans = 0;
        for (int i = 0;i < 6;i ++) {
            if (a[i % 3]) {
                ans += l[0].size();
                ans += l[1].size();
                if (l[0].size() < l[1].size()) {
                    if (l[0].find(i % 3) == l[0].end()) l[0].insert(i % 3);
                    else l[1].insert(i % 3);
                } else {
                    if (l[1].find(i % 3) == l[1].end()) l[1].insert(i % 3);
                    else l[0].insert(i % 3);
                }
                a[i % 3] --;
            }
        }
        ans += (l[0].size() + l[1].size()) * (a[0] + a[1] + a[2]);
        printf("%lld\n",ans);
    }
}
*/

/*
const double eps = 1e-8;
int sgn(double x) {
    if(fabs(x) < eps)return 0;
    if(x < 0)return -1;
    else return 1;
}
struct Point
{
    double x,y;
    Point(){}
    Point(double _x,double _y):x(_x),y(_y) {}
    Point(const Point &p):x(p.x),y(p.y) {}
    
    Point operator-(const Point &b)const
    {
        return Point(x - b.x,y - b.y);
    }
    
    //绕原点旋转角度B（弧度值），后x,y的变化
    void transXY(double B)
    {
        double tx = x,ty = y;
        x = tx * cos(B) - ty * sin(B);
        y = tx * sin(B) + ty * cos(B);
    }
    
    void identity() {
        double k = sqrt(x * x + y * y);
        x /= k;
        y /= k;
    }
    
    void print()
    {
        printf("%f %f\n",x,y);
    }
    
    void abs() {
        x = fabs(x);
        y = fabs(y);
    }
    
    bool operator<(const Point &o) const {
        if (sgn(x - o.x) == 0) return sgn(y - o.y) == 1;
        return sgn(x - o.x) == 1;
    }
};

const int MAXN = 1e3 + 10;

Point a[MAXN];
map<Point,map<Point,int>> mp;

int main()
{
    int n;
    sci(n);
    rep(i,1,n) {
        scanf("%lf%lf",&a[i].x,&a[i].y);
    }
    Point node,t;
    rep(i,1,n) {
        rep(j,1,n) {
            if (i == j) continue;
            node = a[j] - a[i];
            node.identity();
            mp[a[i]][node] ++;
        }
    }
    int ans = 0;
    rep(i,1,n) {
        rep(j,i + 1,n) {
            node = {(a[i].x + a[j].x) / 2,(a[i].y + a[j].y) / 2};
            t = a[i] - a[j];
            t.identity();
            t.abs();
            if (!((sgn(t.x - 1) == 0 && sgn(t.y) == 0) || (sgn(t.y - 1) == 0 && sgn(t.x) == 0))) continue;
            
            t = a[i] - a[j];
            t.identity();
            t.transXY(pi / 2);
            
            ans += mp[node][t];
            
            t = a[i] - a[j];
            t.identity();
            t.transXY(-pi / 2);
            
            ans += mp[node][t];
        }
    }
    _C(ans)
}
*/

/*
const int MAXN = 1e6 + 10;
 
int mp[4][15];
 
#define WAN 0
#define BING 1
#define SUO 2
#define ZI 3
struct Node {
    int type;
    int n;
    int hash()
    {
        return type * 9 + n;
    }
    bool operator<(const Node &o) const {
        if (type == o.type) return n < o.n;
        return type < o.type;
    }
    bool operator==(const Node &o) const {
        return type == o.type && n == o.n;
    }
} cards[20];

set<Node> ans[100];
 
char n2c[] = {'w','b','s','z'};
 
int xx[15];
bool dfs(int i)
{
    if (i > 9) return 1;
    if (xx[i] == 0)return dfs(i+1);
    if (i <= 7 && xx[i + 1] >= xx[i] && xx[i + 2] >= xx[i]) {
        xx[i + 1] -= xx[i];
        xx[i + 2] -= xx[i];
        if (dfs(i + 1)) return 1;
        xx[i + 1] += xx[i];
        xx[i + 2] += xx[i];
    }
    if (xx[i] >= 3) {
        xx[i] -= 3;
        if (dfs(i)) return 1;
        xx[i] += 3;
    }
    return 0;
}
 
inline bool single(Node type) {
    int k;
 
    for (int i = 1;i <= 7;i ++) {
        k = mp[ZI][i] - (type.type == ZI && type.n == i ? 2 : 0);
        if (k % 3) return 0;
    }
 
    int ok = 1;
    for (int t = 0;t < 3;t ++) {
        for (int i = 1;i <= 9;i ++) {
            k = mp[t][i] - (type.type == t && type.n == i ? 2 : 0);
            xx[i] = k;
        }
        ok = ok && dfs(1);
    }
    return ok;
}
 
inline bool check()
{
    for (int i = 0;i < 4;i ++) {
        // 找对子
        for (int j = 1;j <= 9;j ++) {
            if (mp[i][j] >= 2){
                if (single({i,j})) return 1;
            }
        }
    }
    return 0;
}
 
inline void add(Node x)
{
    // 把所有牌都加一遍
    for (int i = 1;i <= 9;i ++) {
        for (int t = 0;t < 3;t ++) {
            if (x.type == t && x.n == i) continue;
            mp[t][i] ++;
            if (check()) ans[x.hash()].insert({t,i});
            mp[t][i] --;
        }
    }
 
    // z
    for (int i = 1;i <= 7;i ++) {
        if (x.type == ZI && x.n == i) continue;
        mp[ZI][i] ++;
        if (check()) ans[x.hash()].insert({ZI,i});
        mp[ZI][i] --;
    }
}

inline int getNum(int i) {
    return i % 9 ? i % 9 : 9;
}

inline char getType(int i)
{
    return n2c[(i - 1) / 9];
}
 
int main()
{
    char str[35];
    int t;
    int cc;
    int k;
    __T {
        scanf("%s",str);
        memset(mp,0,sizeof(mp));
        rep(i,1,40) ans[i].clear();
        cc = 1;
        for (int i = 0;str[i];i ++) {
            if (i & 1) {
                cards[cc].n = t;
                if (str[i] == 's') {
                    mp[SUO][t] ++;
                    cards[cc].type = SUO;
                } else if (str[i] == 'b') {
                    mp[BING][t] ++;
                    cards[cc].type = BING;
                } else if (str[i] == 'w') {
                    mp[WAN][t] ++;
                    cards[cc].type = WAN;
                } else if (str[i] == 'z') {
                    mp[ZI][t] ++;
                    cards[cc].type = ZI;
                }
                cc ++;
            } else {
                t = str[i] ^ 48;
            }
        }
        if (check()) {
            puts("Tsumo!");
            continue;
        }
 
        // 找牌进行丢卡
        for (int i = 1;i <= 14;i ++) {
            if (cards[i] == cards[i - 1]) continue;
            t = cards[i].type;
            mp[t][cards[i].n] --;
            add(cards[i]);
            mp[t][cards[i].n] ++;
        }
        
        k = 0;
        for (int i = 1;i <= 40;i ++) {
            if (ans[i].size() != 0) k ++;
        }
        
        printf("%d\n",k);
        for (int i = 1;i <= 40;i ++) {
            if (!ans[i].size()) continue;
            printf("%d%c ",getNum(i),getType(i));
            for (auto jt = ans[i].begin();jt != ans[i].end();jt ++) {
                printf("%d%c",jt -> n,n2c[jt -> type]);
            }
            puts("");
        }
    }
}
*/


/*
const double eps = 1e-8;

int sign(double x)
{
    if (fabs(x) < eps) return 0;
    if (x < 0) return -1;
    return 1;
}

struct Point
{
    double x,y;
    Point() {}
    Point(double _x,double _y):x(_x),y(_y) {}
    Point(const Point &o):x(o.x),y(o.y) {}
    
    Point operator-(const Point &b) const
    {
        return Point(x - b.x,y - b.y);
    }
    
    // 叉积
    double operator^(const Point &b) const
    {
        return x * b.y - y * b.x;
    }
    
    // 点积
    double operator*(const Point &b) const
    {
        return x * b.x + y * b.y;
    }
    
    // 变成单位向量
    void identity() {
        double k = sqrt(x * x + y * y);
        x /= k;
        y /= k;
    }
    
    // 绕原点旋转角度B（弧度值），后x,y的变化
    void transXY(double B)
    {
        double tx = x,ty = y;
        x = tx * cos(B) - ty * sin(B);
        y = tx * sin(B) + ty * cos(B);
    }
};


struct Line
{
    Point s,e;
    Line() {}
    Line(Point _s,Point _e):s(_s),e(_e) {}
    
    // 两直线相交求交点
    // 第一个值为0表示直线重合，为1表示平行，为0表示相交,为2是相交
    // 只有第一个值为2时，交点才有意义
    pair<int,Point> operator &(const Line &b) const
    {
        Point res = s;
        if (sign((s - e) ^ (b.s - b.e)) == 0)
        {
            if (sign((s - b.e) ^ (b.s - b.e)) == 0) return make_pair(0,res); // 重合
            else return make_pair(1,res); // 平行
        }
        double t = ((s - b.s) ^ (b.s - b.e)) / ((s - e) ^ (b.s - b.e));
        res.x += (e.x-s.x) * t;
        res.y += (e.y-s.y) * t;
        return make_pair(2,res);
    }
};

// *两点间距离
double dis(Point a,Point b)
{
    return sqrt((a - b) * (a - b));
}

// *判断线段相交
bool inter(Line a,Line b)
{
    return max(a.s.x,a.e.x) >= min(b.s.x,b.e.x) &&
        max(b.s.x,b.e.x) >= min(a.s.x,a.e.x) &&
        max(a.s.y,a.e.y) >= min(b.s.y,b.e.y) &&
        max(b.s.y,b.e.y) >= min(a.s.y,a.e.y) &&
        sign((b.s - a.e) ^ (a.s - a.e)) * sign((b.e - a.e) ^ (a.s - a.e)) <= 0 &&
        sign((a.s - b.e) ^ (b.s - b.e)) * sign((a.e - b.e) ^ (b.s - b.e)) <= 0;
}

// 判断直线和线段相交
bool isLineAcrossSegment(Line a,Line b) // 判断直线a和线段b是否相交
{
    return sign((b.s - a.e) ^ (a.s - a.e)) * sign((b.e - a.e) ^ (a.s - a.e)) <= 0;
}

// 点到直线距离
// 返回为result,是点到直线最近的点
Point pointToLine(Point P,Line L)
{
    Point result;
    double t = ((P - L.s) * (L.e - L.s)) / ((L.e - L.s) * (L.e - L.s));
    result.x = L.s.x + (L.e.x - L.s.x) * t;
    result.y = L.s.y + (L.e.y - L.s.y) * t;
    return result;
}

// 点到线段的距离
// 返回点到线段最近的点
Point nearestPointToLineSeg(Point P,Line L)
{
    Point result;
    double t = ((P - L.s) * (L.e - L.s)) / ((L.e - L.s) * (L.e - L.s));
    if (t >= 0 && t <= 1)
    {
        result.x = L.s.x + (L.e.x - L.s.x) * t;
        result.y = L.s.y + (L.e.y - L.s.y) * t;
    } else {
        if (dis(P,L.s) < dis(P,L.e))
            result = L.s;
        else result = L.e;
    }
    return result;
}

// 计算多边形面积
// 点的编号从0~n-1
double calcArea(Point p[],int n)
{
    double res = 0;
    for (int i = 0;i < n;i++)
        res += (p[i] ^ p[(i + 1) % n]) / 2;
    return fabs(res);
}

// *判断点在线段上
bool isOnSeg(Point P,Line L)
{
    return sign((L.s - P) ^ (L.e - P)) == 0 &&
        sign((P.x - L.s.x) * (P.x - L.e.x)) <= 0 &&
        sign((P.y - L.s.y) * (P.y - L.e.y)) <= 0;
}

vector<Point> a[1010];
 
Point s,t,all[1010];
 
bool cmp(const Point &a,const Point &b) {
    return dis(a,s) < dis(b,s);
}
 
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
 
    scanf("%lf%lf%lf%lf",&s.x,&s.y,&t.x,&t.y);
    rep(i,1,n) {
        scanf("%lf%lf",&all[i].x,&all[i].y);
    }
    Line l;
    Line st(s,t);
    pair<int,Point> pr;
    rep(i,1,n) {
        rep(j,1,n) {
            if (i == j) continue;
            l = Line(all[i],all[j]);
            if (isLineAcrossSegment(l,st)) {
                pr = l & st;
                if (pr.first == 2) a[i].pb(pr.second);
            }
        }
    }
    rep(i,1,n) {
        sort(a[i].begin(),a[i].end(),cmp);
    }
    int h,k;
    while (m --) {
        scanf("%d%d",&h,&k);
        if (a[h].size() < k) puts("-1");
        else {
            printf("%.10f %.10f\n",a[h][k - 1].x,a[h][k - 1].y);
        }
    }
}
*/

/*
template <typename _Tp> inline void read(_Tp&x) {
    char ch;x=0;
    ch=getchar();
    while(!isdigit(ch)){ch=getchar();}
    while(isdigit(ch)){ch=getchar();}
    ch=getchar();
    while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
}


int main()
{
    int n;
    double ans;
    int t;
    while (~scanf("%d",&n)) {
        ans = 0;
        rep(i,1,n) {
            read(t);
            if (t % 10 >= 5) ans += 10 - t % 10;
            else ans -= t % 10;
        }
        printf("%.3f\n",ans / 1000.0);
    }
}
*/

/*
int a[1010],b[1010];

int main()
{
    int n,m;
    int ok;
    int ter;
    int aa,bb;
    while (~scanf("%d%d",&n,&m)) {
        rep(i,1,n) sci(a[i]);
        rep(i,1,m) sci(b[i]);
        sort(a + 1,a + 1 + n);
        sort(b + 1,b + 1 + m);
        ter = max(a[n],b[m]) + 1;
        
        rep(t,0,ter) {
            ok = 1;
            for (int i = 1,j = 1;i <= n && j <= m;) {
                aa = a[i];
                bb = b[j] + t;
                if (aa == bb) {
                    ok = 0;
                    break;
                }
                if (aa < bb) {
                    i ++;
                } else {
                    j ++;
                }
            }
            if (ok) {
                printf("%d\n",t);
                break;
            }
        }
        
    }
}
*/

//const int mod = 1000000007;
//
//ll quickpow(ll a, ll b)
//{
//    ll ans = 1;
//    while (b)
//    {
//        if (b & 1) ans = a * ans % mod;
//        a = a * a % mod;
//        b >>= 1;
//    }
//    return ans;
//}
//
//int main()
//{
//    ll n;
//    ll ans;
//    ll t;
//    while (~scl(n)) {
//        ans = 0;
//        for (ll r1 = 1;r1 <= n;r1 ++) {
//            t = r1 * r1 % mod;
//            t *= n - r1 + 1;
//            t %= mod;
//            ans += quickpow(t, mod - 2);
//            ans %= mod;
//        }
//        printf("%lld\n",ans);
//    }
//}

//struct Node {
//    int l,r;
//} k[1000];
//
//
//int main()
//{
//    _C(3 * quickpow(4, mod - 2))
//    rep(n,1,10) {
//        int cnt = 0;
//        rep(r,1,n) {
//            rep(l,1,r) {
//                k[++ cnt] = {l, r};
//            }
//        }
//        int ok = 0;
//        rep(i,1,cnt) {
//            rep(j,1,cnt) {
//                if (k[j].l >= k[i].l && k[j].l <= k[i].r) ok ++;
//                else if (k[j].r >= k[i].l && k[j].r <= k[i].r) ok ++;
//                else if (k[i].l >= k[j].l && k[i].r <= k[j].r) ok ++;
//            }
//        }
//        _C(ok << " " << cnt * cnt)
//    }
//
//}


/*
const ll mod = 1000000007;

ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll n;
    while (~scl(n)) {
        printf("%lld\n",(n+1) * quickpow(n * 2, mod - 2) % mod);
    }
}
*/

/*
int main()
{
    string str;
    ll ans;
    ll t;
    char last;
    __T
    {
        cin >> str;
        ans = 0;
        t = 0;
        last = 0;
        for (int i = 0;str[i];i ++) {
            if (str[i] != last) {
                ans += (1 + t) * t / 2;
                t = 1;
            } else t ++;
            last = str[i];
        }
        ans += (1 + t) * t / 2;
        printf("%lld\n",ans);
    }
}
*/

/*
int main()
{
    ll n;
    ll ans;
    __T {
        scl(n);
        ans = 1;
        for (ll k = 1;k <= 12;k ++) {
            ans *= k;
            if (ans % n == 0) {
                printf("%lld\n",k);
                break;
            }
        }
    }
}
*/

/*
char str[1010];

struct Node {
    string str;
    int n;
    int type; // 0 - str,1 - num
};

int main()
{
    list<string> ans;
    stack<Node> st;
    string tmp,k;
    Node a;
    __T {
        scanf("%s",str);
        tmp = "";
        
        for (int i = 0;str[i];i ++) {
            if (str[i] == ']') {
                // calc
                st.push({tmp,0,0});
                k = tmp = "";
                while (st.top().type == 0) {
                    k = st.top().str + k;
                    st.pop();
                }
                
                a = st.top();
                st.pop();
                rep(i,1,a.n) {
                    tmp += k;
                }
                st.push({tmp,0,0});
                tmp = "";
            } else if (str[i] >= '0' && str[i] <= '9') {
                st.push({tmp,0,0});
                tmp = "";
                st.push({"",str[i] ^ 48,1});
            } else if (str[i] != '[') {
                tmp += str[i];
            }
        }
        st.push({tmp,0,0});
        
        tmp = "";
        while (!st.empty()) {
            a = st.top();
            st.pop();
            tmp = a.str + tmp;
        }
        cout << tmp << endl;
    }
}
*/

/*
struct Node {
    int num;
    Node *pre;
    Node *nxt;
};

Node *all[100010];

inline void init(int n) {
    rep(i,1,n) {
        all[i] -> num = i;
        all[i] -> pre = all[i - 1];
        all[i] -> nxt = all[i + 1];
    }
    all[1] -> pre = NULL;
    all[n] -> nxt = NULL;
}

int re;

Node *preNode(Node *node)
{
    if (!re) return node -> pre;
    return node -> nxt;
}

Node *nxtNode(Node *node)
{
    if (!re) return node -> nxt;
    return node -> pre;
}

void setNxtNode(Node *node,Node *value)
{
    if (node == NULL) return;
    if (!re) node -> nxt = value;
    else node -> pre = value;
}

void setPreNode(Node *node,Node *value)
{
    if (node == NULL) return;
    if (!re) node -> pre = value;
    else node -> nxt = value;
}

Node *findHead(int n)
{
    rep(i,1,n) {
        if (preNode(all[i]) == NULL)
            return all[i];
    }
    return NULL;
}

void print(int n)
{
    Node *node = findHead(n);
    while (node != NULL) {
        printf("%d ",node -> num);
        node = nxtNode(node);
    }
    puts("");
}

ll getAns(int n)
{
    ll ans = 0;
    Node *node = findHead(n);
    int i = 1;
    while (node != NULL) {
        if (i & 1) ans += node -> num;
        node = nxtNode(node);
        i ++;
    }
    return ans;
}


int main()
{
    rep(i,1,100000) {
        all[i] = new Node();
    }
    
    int n,m;
    int t,aa = 0,bb = 0;
    Node *a = NULL,*b = NULL,*c = NULL,*d = NULL,*e = NULL,*f = NULL;
    
    
    while (~scanf("%d%d",&n,&m)) {
        init(n);
        re = 0;
        
        while (m --) {
//            print(n);
            scanf("%d",&t);
            if (t != 4) {
                scanf("%d%d",&aa,&bb);
            }
            
            if (t == 1) {
                b = all[aa];
                e = all[bb];
                a = preNode(b);
                c = nxtNode(b);
                
                d = preNode(e);
                
                if (b == d) continue;
                
                setNxtNode(a, c);
                setPreNode(c, a);
                setNxtNode(d, b);
                
                setPreNode(b, d);
                setNxtNode(b, e);
                setPreNode(e, b);
                
            } else if (t == 2) {
                b = all[aa];
                e = all[bb];
                a = preNode(b);
                c = nxtNode(b);
                
                d = preNode(e);
                f = nxtNode(e);
                
                if (b == f) continue;
                setNxtNode(a, c);
                setPreNode(c, a);
                
                setNxtNode(b, f);
                setPreNode(b, e);
                setNxtNode(e, b);
                setPreNode(f, b);
                
                
            } else if (t == 3) {
                swap(all[aa] -> num,all[bb] -> num);
                swap(all[aa],all[bb]);
            } if (t == 4) {
                re ^= 1;
            }
        }
        printf("%lld\n",getAns(n));
    }
}
*/

/*
int main()
{
    string str;
    char c;
    while (getline(cin, str)) {
        if (str == "I quacked the code!") {
            
            break;
        }
        c = str[str.size() - 1];
        if (c == '?') {
            printf("Quack!\n");
        } else if (c == '.') {
            printf("*Nod*\n");
        }
    }
    return 0;
}
*/

/*
ll a[100010];
int t[20];

int main()
{
    int n,m;
    ll time;
    __T {
        scii(m,n);
        rep(i,1,m) {
            scl(a[i]);
        }
        sort(a + 1,a + 1 + m);
        
        time = 0;
        rep(i,1,n) {
            sci(t[i]);
        }
        sort(t + 1,t + 1 + n);
        for (int i = 1,j = 1;i <= m;i ++) {
            t[j] --;
            time += 20;
            if (t[j] == 0) {
                j ++;
                time -= 20;
                time += a[i];
            }
        }
        printf("Case %d: %lld\n",T,time);
    }
}
*/

/*
double getAns(double a1,double b1,double a2,double b2)
{
    if (b1 > b2) return a2 * fabs(b1 - b2) / 2;
    return a1 * fabs(b1 - b2) / 2;
}

int main() {
    double a1,b1,a2,b2;
    double ans;
    __T {
        scdd(a1,b1);
        scdd(a2,b2);
        ans = getAns(a1,b1,a2,b2);
        ans = min(ans,getAns(b1, a1, a2, b2));
        ans = min(ans,getAns(a1, b1, b2, a2));
        ans = min(ans,getAns(b1, a1, b2, a2));
        
        ans = min(ans,getAns(a2,b2,a1,b1));
        ans = min(ans,getAns(b2, a2, a1, b1));
        ans = min(ans,getAns(a2, b2, b1, a1));
        ans = min(ans,getAns(b2, a2, b1, a1));
        
        printf("Case %d: %.1f\n",T,ans + a1 * b1 + a2 * b2);
    }
}
*/

/*
const int MAXN = 1e6 + 10;

struct Edge {
    int to;
    int nxt;
} e[MAXN * 2];
int g[MAXN]; // Please call init() to memset it to -1!
int cnt = 0;

void init(int n)
{
    cnt = 0;
    memn(g,-1,int,n);
}

void add_edge(int u,int v)
{
    e[cnt] = {v,g[u]};
    g[u] = cnt ++;
}

int vis[MAXN];
int lost = -1;

void dfs(int u)
{
    if (u == lost) return;
    if (vis[u]) return;
    vis[u] = 1;
    for (int i = g[u];~i;i = e[i].nxt) {
        dfs(e[i].to);
    }
}

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    init(n + 5);
    int u,v;
    while (m --) {
        scanf("%d%d",&u,&v);
        add_edge(u, v);
        add_edge(v, u);
    }
    int cnt;
    while (k --) {
        scanf("%d",&u);
        lost = u;
        cnt = 0;
        for (int i = 1;i <= n;i ++) vis[i] = 0;
        rep(i,1,n) {
            if (i == lost) continue;
            if (!vis[i]) {
                cnt ++;
                dfs(i);
            }
        }
        printf("%d\n",cnt - 1);
    }
}

*/

/*
int a[45];

int main()
{
    int n;
    scanf("%d",&n);
    rep(i,1,n) {
        scanf("%d",a + i);
    }
    sort(a + 1,a + 1 + n);
    ll x = 1ll << n;
    double ans = 0;
    rep(i,1,n) {
        ans += (double) a[i] / x;
        x >>= 1;
    }
    printf("%.10f\n",ans);
}
*/

/*
int main()
{
    int w,h;
    scii(w,h);
    double k = sqrt(w * w + h * h);
    printf("%.10f\n",w + h - k);
}
*/

//ll toLL(vector<int> &vec) {
//    ll ans = 0;
//    pre(j,(int) vec.size() - 1,0) {
//        ans *= 10;
//        ans += vec[j];
//    }
//    return ans;
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    ll a[10000];
//    rep(i,1,n) {
//        scanf("%lld",a + i);
//    }
//    vector<int> sep;
//    vector<int> last;
//
//    int len = 0;
//    ll t;
//    int ok = -1;
//    int k;
//    rep(i,1,n) {
//        t = a[i];
//        sep.clear();
//        ok = k = 0;
//        while (t) {
//            sep.pb(t % 10);
//            t /= 10;
//            k ++;
//        }
//        pre(j,(int)sep.size() - 1,0) {
//            if (sep[j] == 9) sep[j] = 6;
//        }
//
//        if (k > len) ok = 1;
//        if (k < len) ok = -1;
//        if (k == len) {
//            pre(j,(int) sep.size() - 1,0) {
//                if (sep[j] > last[j]) {
//                    ok = 1;
//                    break;
//                }
//                if (sep[j] != 6) {
//                    if ()
//                }
//            }
//        }
//
//        if (ok == -1) {
//            break;
//        }
//
//        last = vector<int>(sep);
//        len = k;
//    }
//    if (ok == -1) printf("impossible\n");
//    else {
//        puts("possible");
//        rep(i,1,n) {
//            printf("%lld\n",a[i]);
//        }
//    }
//}


/*
int main()
{
    string name;
    int a,b;
    __T {
        cin >> name >> a >> b;
        if (a < 15 || a > 20 || b > 70 || b < 50) _C(name)
    }
}
*/

/*
int main()
{
    int a,b;
    int cnta = 0,cntb = 0;
    scanf("%d%d",&a,&b);
    int ahan,a_hua,bhan,b_hua;
    int aa,bb;
    __T {
        scanf("%d%d%d%d",&ahan,&a_hua,&bhan,&b_hua);
        aa = 0;
        bb = 0;
        if (a_hua == ahan + bhan) aa = 1;
        if (b_hua == ahan + bhan) bb = 1;
        if ((aa && bb) || (!aa && !bb)) continue;
        if (aa) cnta ++;
        if (bb) cntb ++;
        if (cnta == a + 1) {
            printf("A\n%d\n",cntb);
            break;
        }
        if (cntb == 1 + b) {
            printf("B\n%d\n",cnta);
            break;
        }
    }
}
*/

/*
int cnt[10];

int ok(char *str,int &n) {
    rep(i,0,9) cnt[i] = 0;
    rep(i,0,3) {
        cnt[str[i]^48] ++;
    }
    int cc = 0;
    rep(i,0,9) if (cnt[i]) cc ++;
    return n == cc;
}

int main()
{
    int y,n;
    int k = 0;
    scanf("%d%d",&y,&n);
    char str[5];
    do {
        sprintf(str,"%04d",y);
        y ++;
        k ++;
    } while (!ok(str,n));
    printf("%d %s\n",k - 1,str);
}
*/

/*
int main()
{
    double w,h;
    scanf("%lf%lf",&w,&h);
    double ans = w / (h * h);
    printf("%.1f\n",ans);
    if (ans > 25) puts("PANG");
    else puts("Hai Xing");
}
*/

/*
int id[100000];
int vis[100000];

int main()
{
    int n;
    scanf("%d",&n);
    int k;
    int t;
    set<int> st;
    rep(i,1,n) {
        scanf("%d",&k);
        st.clear();
        rep(j,1,k) {
            scanf("%d",&t);
            st.insert(t);
        }
        if (st.size() > 1) {
            for (auto x : st) {
                id[x] ++;
            }
            
        }
    }
    int m;
    scanf("%d",&m);
    int f = 1;
    int cnt = 0;
    while (m --) {
        scanf("%d",&t);
        if (vis[t]) continue;
        vis[t] = 1;
        if (!id[t]) {
            if (f) f = 0;
            else printf(" ");
            printf("%05d",t);
            cnt ++;
        }
    }
    if (cnt == 0) printf("No one is handsome");
    puts("");
}
*/

/*
int main()
{
    int n;
    char a;
    scanf("%d %c ",&n,&a);
    string str;
    getline(cin, str);
    if (n >= str.size()) {
        ulong k = n - str.size();
        rep(i,1,k) printf("%c",a);
        _C(str)
    } else _C(str.substr(str.size() - n))
    
}
*/

/*
const int MAXN = 510;

vector<int> g[MAXN];

int vis[MAXN];
int die[MAXN];

void dfs(int u)
{
    if (vis[u] || die[u]) return;
    vis[u] = 1;
    for (auto i : g[u]) {
        if (die[i] || vis[i]) continue;
        dfs(i);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int u,v;
    while (m --) {
        scanf("%d%d",&u,&v);
        g[u].pb(v);
        g[v].pb(u);
    }
    int k;
    scanf("%d",&k);
    
    int t;
    int cnt,org;
    rep(i,1,k) {
        scanf("%d",&t);
        
        memset(vis,0,sizeof vis);
        org = 0;
        rep(i,0,n-1) {
            if (!(vis[i] || die[i])) {
                dfs(i);
                org ++;
            }
        }
        
        die[t] = 1;
        
        memset(vis,0,sizeof vis);
        cnt = 0;
        rep(i,0,n-1) {
            if (!(vis[i] || die[i])) {
                dfs(i);
                cnt ++;
            }
        }
        if (cnt > org) {
            printf("Red Alert: ");
        }
        printf("City %d is lost",t);
        if (cnt > org) {
            puts("!");
        } else puts(".");
    }
    if (k == n) puts("Game Over.");
}
*/

/*
int tree[1 << 21];

int main()
{
    int n;
    scanf("%d",&n);
    int num;
    sci(num);
    tree[1] = num;
    int k;
    rep(i,1,n-1) {
        scanf("%d",&num);
        k = 1;
        while (1)
        {
            if (num > tree[k]) {
                if (tree[k << 1]) k <<= 1;
                else {
                    tree[k << 1] = num;
                    break;
                }
            } else {
                if (tree[k << 1 | 1]) k = k << 1 | 1;
                else {
                    tree[k << 1 | 1] = num;
                    break;
                }
            }
        }
    }
    queue<int> q;
    q.push(1);
    int f = 1;
    int node;
    while (!q.empty()) {
        node = q.front();
        q.pop();
        if (!f) printf(" ");
        else f = 0;
        printf("%d",tree[node]);
        if (tree[node << 1]) q.push(node << 1);
        if (tree[node << 1|1]) q.push(node << 1|1);
    }
    puts("");
    int ok = 1;
    rep(i,1,n) {
        if (!tree[i]) {
            ok = 0;
            break;
        }
    }
    puts(ok ? "YES" : "NO");
    
}
*/

/*
const int MAXN = 510;

vector<int> g[MAXN];

int vis[MAXN];
int col[MAXN];

int ok = 1;

void dfs(int u)
{
    if (!ok) return;
    if (vis[u]) return;
    vis[u] = 1;
    for (auto i : g[u]) {
        if (col[u] == col[i]) {
//            _C(u << " " << i)
            ok = 0;
            return;
        }
        dfs(i);
    }
}

int main()
{
    int n,m,k;
    sciii(n,m,k);
    int u,v;
    while (m --) {
        scii(u,v);
        g[u].pb(v);
        g[v].pb(u);
    }
    int q;
    sci(q);
    set<int> st;
    while (q --) {
        st.clear();
        rep(i,1,n) {
            scanf("%d",col + i);
            st.insert(col[i]);
            vis[i] = 0;
        }
        ok = 1;
        if (st.size() != k) ok = 0;
        rep(i,1,n)
            dfs(i);
        puts(ok ? "Yes" : "No");
    }
}
*/

/*
const int MAXN = 1e5 + 10;

vector<int> g[MAXN];
int vis[MAXN];

double r;

double d[MAXN];
double ans = 0;

void dfs(int u,double from)
{
    if (vis[u]) return;
    vis[u] = 1;

    ans += d[u] * from;
    for (auto i : g[u]) {
        dfs(i,from * (1 - r / 100));
    }
}

int main()
{
    int n;
    double val;
    scanf("%d%lf%lf",&n,&val,&r);
    
    int k;
    int v;
    double t;
    rep(i,0,n-1) {
        scanf("%d",&k);
        if (k == 0) {
            scanf("%lf",&t);
            d[i] = t;
        }
        else
            rep(j,1,k) {
                scanf("%d",&v);
                g[i].pb(v);
            }
    }
    dfs(0,val);
    printf("%.0f\n",floor(ans));
}

*/

//const int MAXN = 1e4 + 10;
//
//ull hs[510][MAXN]; // 哈希数组，定义成ull自动取模
//ull bin[MAXN]; // 记录p的次方数
//const int p = 131; // 进制数
//
//char str[510][MAXN]; // 字符串
//
//void getHash(int j) // str是从0开始的下标
//{
//    bin[0] = 1;
//    for (int i = 1;str[j][i - 1];i ++) {
//        hs[j][i] = hs[j][i - 1] * p + str[j][i - 1] - 'a'; // 算哈希值，把他当一个大数字来看待
//        bin[i] = bin[i - 1] * p; // 计算p的次方数
//    }
//}
//
//ull getSub(int j,int l,int r) // 获取其中的一段subString的哈希值hash[l...r]，l和r均为从1开始的下标
//{
//    return hs[j][r] - hs[j][l - 1] * bin[r - l + 1];
//}
//
//int main()
//{
//    int n,len;
//    scanf("%d%d",&n,&len);
//    rep(i,1,n) {
//        scanf("%s",str[i]);
//        getHash(i);
//    }
//    set<ull> s;
//    int st = 1;
//    rep(i,1,len) {
//        s.clear();
//        rep(j,1,n) {
//            s.insert(getSub(j, st, i));
//        }
//
//    }
//}

/*
int main()
{
    int n1,n2;
    char op;
    scanf("a+%d%c%d",&n1,&op,&n2);
    int X = (1ll << 31ll) - 1;
    if (op == '>') {
        _C(X - n2)
    } else {
        _C(-((ll)(X + 1) - n2))
    }
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

int main()
{
    int cnt;
    scanf("%d",&cnt);
    s = 1;
    n = 1;
    string str;
    int k;
    init(cnt * 2 + 10);
    rep(i,1,cnt) {
        n ++;
        add_edge(1, n, 1);
        add_edge(n, 1, 0);
//        _C("add:" << 1 << " " << n)
    }
//    _C("222")
    rep(i,1,cnt) {
        scanf("%d",&k);
        n ++;
        set<char> st;
        rep(j,1,k) {
            cin >> str;
            if (st.find(str[0]) != st.end()) continue;
            st.insert(str[0]);
            if (str[0] - 'a' + 1 > cnt) continue;
            add_edge(str[0] - 'a' + 2, n, 1);
            add_edge(n, str[0] - 'a' + 2, 0);
            
//            _C("add:" << str[0] - 'a' + 2 << " " << n)
        }
    }
    n ++;
    rep(i,cnt+2,n-1) {
        add_edge(i, n, 1);
        add_edge(n, i, 0);
//        _C("add:" << i << " " << n)
    }
    t = n;
//    _C(111)
    puts(dinic() == cnt ? "Yes" : "No");
    return 0;
}
*/

/*
ll a[100010];

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int cnt = 0;
    rep(i,1,n) scanf("%lld",a + i);
    rep(i,1,n)
    {
        if (i != 1) {
            if (abs(a[i] - a[i - 1]) < k) {
                a[i] = 1e18;
                cnt ++;
            }
        }
    }
    _C(cnt)
}
*/

/*
int main()
{
    string s,t;
    int cnt;
    __T {
        cin >> s >> t;
        cnt = 0;
        if (t.size() != s.size() - 2) {
            puts("0");
            continue;
        }
        for (int i = 0,j = 0;s[i];i ++) {
            if (j >= t.size()) {
                cnt ++;
                continue;
            }
            if (s[i] == t[j]) j ++;
            else {
                cnt ++;
            }
        }
        printf("%d\n",cnt == 2);
    }
}
*/

/*
int main()
{
    ll n;
    int cnt;
    __T {
        scanf("%lld",&n);
        cnt = 0;
        if (n % 17 == 0) cnt ++;
        if (n % 18 == 0) cnt ++;
        _C(cnt)
    }
}
*/

/*
int judge(int *a) {
    if (a[1] == 1 && a[2] == 2 && a[3] == 3 && a[4] == 4) return 1;
    if (a[1] == 2 && a[2] == 3 && a[3] == 4 && a[4] == 1) return 1;
    if (a[1] == 3 && a[2] == 4 && a[3] == 1 && a[4] == 2) return 1;
    if (a[1] == 4 && a[2] == 1 && a[3] == 2 && a[4] == 3) return 1;
    reutnr 0;
}

int s(int *a,int i,int j)
{
    int ok = 0;
    swap(a[i],a[j]);
    if (judge(a)) ok = 1;
    swap(a[i],a[j]);
    return ok;
}

int main()
{
    int a[10];
    rep(i,1,4) {
        scanf("%d",a + i);
    }
    if (judge(a)) {
        puts("0");
        return 0;
    }
    int ok = 0;
    ok |= s(a,1,2);
    ok |= s(a,1,4);
    ok |= s(a,2,3);
    ok |= s(a,3,4);
    puts(ok ? "1" : "2");
}
*/

int main()
{
    ll x;
    scl(x);
}
