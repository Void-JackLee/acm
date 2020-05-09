//
//  main.cpp
//  c++_acm
//
//  Created by 李弘辰 on 2019/7/18.
//  Copyright © 2019 李弘辰. All rights reserved.
//

#include "header_useful.h"

/*
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[410][410];
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    ll s[410][410];
    ll last;
    for (int i = 0;i < n;i ++)
    {
        last = 0;
        for (int j = 0;j < n;j ++)
        {
            s[i][j] += last + a[i][j];
            last = s[i][j];
        }
    }
    ll sum;
    ll maax = 0;
    int l,r;
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            l = max(0,j - k);
            r = min(n - 1,j + k);
            sum = s[i][r] - s[i][l] + a[i][l];
            for (int y = i - 1,v = k - 1;y >= 0 && v >= 0;y --,v --)
            {
                l = max(0,j - v);
                r = min(n - 1,j + v);
                sum += s[y][r] - s[y][l] + a[y][l];
            }
            
            for (int y = i + 1,v = k - 1;y < n && v >= 0;y ++,v --)
            {
                l = max(0,j - v);
                r = min(n - 1,j + v);
                sum += s[y][r] - s[y][l] + a[y][l];
            }
            maax = max(maax,sum);
        }
    }
    printf("%lld\n",maax);
    return 0;
}
*/

///// 最小生成树 prime

/*
int x[2010];
int y[2010];

int cal(int i, int j)
{
    return (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
}

int main()
{
    int n,c;
    scanf("%d %d",&n,&c);
    for (int i = 0;i < n;i ++)
    {
        scanf("%d %d",x + i,y + i);
    }
    
    int v[2010] = {1}; // 已经记录下的树的点，初始情况是0号点在里边
    int min = -1;
    int dis[2010]; // 代表当前这棵树与别的点的最小值
    int s = 0; // 起始点
    int d; // 暂时记录一下距离，就这题得用
    for (int i = 0;i < n;i ++)
    {
        dis[i] = (d = cal(s,i)) >= c ? d : -1; // 计算其余各点到树的距离，注意这题得>=c
    }
    int dot; // 找到的最小点
    int sum = 0;
    int ok = 1; // 有解
    for (int i = 0;i < n - 1;i ++) // 循环n-1次，也就是n-1条边
    {
        min = -1;
        dot = -1; // 一开始没有找到最小点
        for (int j = 0;j < n;j ++)
        {
            if (!v[j] && dis[j] != -1 && (min == -1 || dis[j] < min)) // 找最小，忽略不联通的边
            {
                min = dis[j]; // 找最小
                dot = j; // 找到的最小点记录
            }
        }
        if (dot == -1) {
            ok = 0; // 无解
            break; // 点都没找着emmm
        }
        v[dot] = 1; // 加入已找到点套餐
        sum += min; // 计算权值
        
        // 开始重新计算各点到已生成的树的距离
        for (int j = 0;j < n;j ++)
        {
            if (!v[j] && ((d = cal(dot,j)) < dis[j] || dis[j] == -1) && d >= c) // 重新找最小的，当然只要找新加入的点到各未加入的点的距离即可，同样要注意得>=c
            {
                dis[j] = d; // 更新权值
            }
        }
    }
    if (ok) printf("%d\n",sum);
    else printf("-1\n");
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",n*(n-1)/2 + m*(m-1)/2);
    return 0;
}
*/

/*
inline bool jd(char *str,int n)
{
    int ok = 1;
    for (int i = 0;i < n / 2;i ++)
    {
        if (str[i] != str[n - i - 1])
        {
            ok = 0;
            break;
        }
    }
    return ok;
}

int main()
{
    char str[110];
    scanf("%s",str);
    int n = (int) strlen(str);
    if (jd(str,n) && jd(str,(n - 1) / 2) && jd(str + (n + 3) / 2 - 1,n - (n + 3) / 2) + 1) printf("Yes\n");
    else printf("No\n");
    return 0;
}
*/

/*
int main()
{
    int l;
    scanf("%d",&l);
    double t = l / 3.0;
    printf("%.12f\n",t*t*t);
    return 0;
}
*/

/*
int a[200010];

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",a + i);
    }
    ll s[200010] = {0};
    for (int i = 0;i < n;i ++)
    {
        s[a[i]] ++;
    }
    ll sum = 0;
    for (int i = 0;i < 200010;i ++)
    {
        sum += (s[i] - 1) * s[i] / 2;
    }
    for (int k = 0;k < n;k ++)
    {
        int i = a[k];
        printf("%lld\n",sum - (s[i] - 1) * s[i] / 2 + (s[i] - 2) * (s[i] - 1) / 2);
    }
    return 0;
}
*/

//class Calculator {
//private:
//    int x,y;
//public:
//    Calculator(int x,int y):x(x),y(y) {}
//    int add() {
//        return x + y;
//    }
//    int sub() {
//        return x - y;
//    }
//
//    ~Calculator()
//    {
//        cout << "Destoried" << endl;
//    }
//};
//
//int main()
//{
//    int x,y;
//    cin >> x >> y;
//    Calculator *c = new Calculator(x,y);
//    cout << c -> add() << endl << c -> sub() << endl;
//    delete c;
//    return 0;
//}

/*
int main()
{
    int w,h,d;
    scanf("%d %d %d",&w,&h,&d);
    if (w - d * 2 > 0 && h - d * 2 > 0)
    {
        int s = (w - d * 2) * (h - d * 2);
        printf("%d\n",s);
    }
    else printf("0\n");
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    map<string,ll> name;
    string str;
    ll c['Z' + 10] = {0};
    while (T --) {
        cin >> str;
        name[str] ++;
        c[str[0]] ++;
    }
    ll sum = 0;
    for (auto i = name.begin();i != name.end();i ++)
    {
        sum -= (i -> second - 1) * i -> second;
    }
    
    for (char i = 'A';i <= 'Z';i ++)
    {
        sum += (c[i] - 1) * c[i];
    }
    printf("%lld\n",sum);
    return 0;
}
*/

/*
int main()
{
    string str;
    cin >> str;
    int c['z' + 1] = {0};
    for (int i = 0;str[i];i ++) {
        c[str[i]] ++;
    }
    int ok = -1;
    for (int i = 'a';i <= 'z';i ++)
    {
        if (c[i] == 0) continue;
        if (ok == -1) ok = c[i] % 2;
        else if (ok != c[i] % 2) {
            ok = -1;
            break;
        }
    }
    if (ok == -1) printf("2\n");
    else printf("%d\n",ok);
    return 0;
}
*/

/*
int a[10] = {0};

inline bool judge(int c)
{
    int ok = 1;
    if (c == 0) return !a[c];
    while (c != 0)
    {
        if (a[c % 10]) {
            ok = 0;
            break;
        }
        c /= 10;
    }
    return ok;
}

int main()
{
    int n;
    scanf("%d",&n);
    int in;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&in);
        a[in] = 1;
    }
    
    int ch;
    scanf("%d",&ch);
    int m = 10000;
    for (int i = ch;i <= 999;i ++)
    {
        if (judge(i)) {
            m = min(i - ch,m);
            break;
        }
    }
    for (int i = ch;i >= 0;i --)
    {
        if (judge(i)) {
            m = min(ch - i,m);
            break;
        }
    }
    if (m == 10000) printf("%d\n",ch);
    else printf("%d\n",m);
    return 0;
}
*/

/*
int main()
{
    ll n;
    scanf("%lld",&n);
    ll i2 = 0,i5 = 0;
    while (n % 2 == 0)
    {
        i2 ++;
        n /= 2;
    }
    while (n % 5 == 0) {
        i5 ++;
        n /= 5;
    }
    ll s2 = 1,s5 = 1;
//    printf("%d %d\n",i2,i5);
    set<ll> all;
    for (ll i = 0;i <= i2;i ++)
    {
        s5 = 1;
        for (ll j = 0;j <= i5;j ++)
        {
            all.insert(s2 * s5);
            s5 *= 5;
        }
        s2 *= 2;
    }
    printf("%lu\n",all.size());
    for (auto i = all.begin();i != all.end();i ++)
    {
        printf("%lld\n",*i);
    }
    return 0;
}
*/

/*int main()
{
    int n;
    scanf("%d",&n);
    int in;
    int f[100010] = {0};
    for (int i = 0;i < n;i ++) {
        scanf("%d",&in);
        f[in + 1] += f[in] + 1;
    }
    int m = 0;
    for (int i = 1;i <= n + 1;i ++)
    {
        m = max(m,f[i]);
    }
    printf("%d\n",n - m);
    return 0;
}
*/

/*
int main()
{
    double x,y,r,tx,ty,s;
    scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&r,&tx,&ty,&s);
    tx += s / 2;
    ty += s / 2;
    
    double xx = abs(x - tx) - s / 2;
    double yy = abs(y - ty) - s / 2;
    
    if (yy < 0) yy = 0;
    if (xx < 0) xx = 0;
    
    double k = xx * xx + yy * yy - r * r;
    if (abs(k) <= 1e-6) printf("1\n");
    else if (k > 0) printf("0\n");
    else if (k < 0) printf("2\n");
    return 0;
}
*/

/*
int main()
{
    ll sum = 0;
    int n;
    scanf("%d",&n);
    ll x[1010];
    ll y[1010];
    for (int i = 0;i < n;i ++) scanf("%lld %lld",x + i,y + i);
    for (int i = 0;i < n;i ++)
    {
        for (int j = i + 1;j < n;j ++)
        {
            sum = (sum + abs(x[i] - x[j]) + abs(y[i] - y[j])) % 998244353;
        }
    }
    ll s = 0;
    for (int i = 0;i < n - 2;i ++)
    {
        s = (s + sum) % 998244353;
    }
    printf("%lld\n",s);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[100010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    ll k[35] = {0};
    int j = 0;
    for (int i = 0;i < n;i ++)
    {
        j = 0;
        while (a[i] != 0)
        {
            k[j ++] += a[i] % 2;
            a[i] /= 2;
        }
    }
    ll sum = 0;
    ll v = 1;
    for (int i = 0;i < 35;i ++) {
        sum += k[i] * k[i] * v;
        v *= 2;
    }
    printf("%lld\n",sum);
    return 0;
}
*/

/*
int main()
{
    string str;
    cin >> str;
    int ok = 0;
    if (str.size() == 6)
    {
        if (str[2] == str[3] && str[4] == str[5]) ok = 1;
    }
    if (ok) printf("Yes\n");
    else printf("No\n");
    return 0;
}
*/

/*
int main() {
    int x;
    scanf("%d",&x);
    ll v = 0;
    while (x >= 500) {
        x -= 500;
        v += 1000;
    }
    while (x >= 5) {
        x -= 5;
        v += 5;
    }
    printf("%lld\n",v);
    return 0;
}
*/

/*
int main()
{
    int k,n;
    int a[200010];
    scanf("%d %d",&k,&n);
    for (int i = 0;i < n;i ++) {
        scanf("%d",a + i);
    }
    sort(a,a + n);
    int maax = 0;
    for (int i = 1;i < n;i ++)
    {
        maax = max(a[i] - a[i - 1],maax);
    }
    maax = max(maax,k - a[n - 1] + a[0]);
    printf("%d\n",k - maax);
    return 0;
}
*/

/*
int main()
{
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    vector<int> dis;
    int d;
    for (int i = 1;i <= n;i ++)
    {
        for (int j = i + 1;j <= n;j ++)
        {
            d = 0;
            if (i < x) {
                if (j <= x) d += j - i;
                else {
                    d += x - i;
                    if (j > x && j < y) d += min(j - x,y - j + 1);
                    else d += j - y + 1;
                }
            } else if (i >= x && i <= y) {
                if (j <= y) d += min(j - i,y - x + 1 - (j - i));
                else {
                    d += j - y;
                    d += min(y - i,i - x + 1);
                }
            } else {
                d += j - i;
            }
//            printf("%d %d: %d\n",i,j,d);
            dis.push_back(d);
        }
    }
    int k[2010] = {0};
    for (auto i = dis.begin();i != dis.end();i ++)
    {
        k[*i] ++;
    }
    for (int i = 1;i < n;i ++)
    {
        printf("%d\n",k[i]);
    }
    return 0;
}
*/

/*
int main()
{
    int x,y,A,B,C;
    scanf("%d %d %d %d %d",&x,&y,&A,&B,&C);
    
    int a[100010];
    int b[100010];
    int c[100010];
    for (int i = 0;i < A;i ++) scanf("%d",a + i);
    for (int i = 0;i < B;i ++) scanf("%d",b + i);
    for (int i = 0;i < C;i ++) scanf("%d",c + i);
    sort(a, a + A, greater<int>());
    sort(b, b + B, greater<int>());
    sort(c, c + C, greater<int>());
    int ea = x - 1;
    int eb = y - 1;
    for (int i = 0;i < C;i ++)
    {
        if (ea >= 0 && eb >= 0)
        {
            if (a[ea] <= b[eb])
            {
                if (a[ea] < c[i]) {
                    a[ea] = c[i];
                    ea --;
                }
            } else {
                if (b[eb] < c[i]) {
                    b[eb] = c[i];
                    eb --;
                }
            }
        } else {
            if (ea < 0 && eb < 0) break;
            if (ea < 0) {
                if (b[eb] < c[i]) {
                    b[eb] = c[i];
                    eb --;
                }
            }
            if (eb < 0) {
                if (a[ea] < c[i]) {
                    a[ea] = c[i];
                    ea --;
                }
            }
        }
        
    }
    ll sum = 0;
    for (int i = 0;i < x;i ++) sum += a[i];
    for (int i = 0;i < y;i ++) sum += b[i];
    printf("%lld\n",sum);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[110];
    int b[110];
    int pb[110];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    for (int i = 0;i < n;i ++) {
        scanf("%d",b + i);
        pb[b[i]] = i;
    }
    int mc = -1;
    int c;
    int ct = 0;
    for (int i = 0;i < n;i ++)
    {
        if (a[i] != b[i]) {
            int k = pb[a[i]];
            int j = a[i];
            int t = -1;
            c = 1;
            while (a[k] != -1)
            {
                t = a[k];
                a[k] = j;
                a[i] = -1;
                j = t;
                k = pb[t];
                c ++;
            }
            a[k] = t;
            ct ++;
            mc = max(mc,c);
        }
    }
    printf("%d %d\n",ct,mc);
    return 0;
}
*/

/*
int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    if (a == "bubble" || a == "tapioka") a = "";
    if (b == "bubble" || b == "tapioka") b = "";
    if (c == "bubble" || c == "tapioka") c = "";
    if (a == "" && b == "" && c == "") printf("nothing\n");
    else {
        int f = 1;
        if (a != "") {
            cout << a;
            f = 0;
        }
        if (b != "") {
            if (f) f = 0;
            else printf(" ");
            cout << b;
        }
        
        if (c != "") {
            if (f) f = 0;
            else printf(" ");
            cout << c;
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[55];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    int ok = 1;
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            for (int k = 0;k < n;k ++)
            {
                if (i != k && i != j && k != j) {
                    ok = fabs((a[i] - a[j]) / a[k] - (a[i] - a[j]) / (double) a[k]) <= 1e-6;
                    if (!ok) goto end;
                }
            }
        }
    }
end:
    if (ok) printf("yes\n");
    else printf("no\n");
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    itn in;
    while (T --)
    {
        scanf("%d",&n);
        priority_queue<int,vector<int>,greater<int> > k;
        for (itn i = 0;i < n;i ++) {
            scanf("%d",&in);
            k.push(in);
        }
        if (n == 1) {
            printf("%d\n",in);
            continue;
        }
        itn sum = 0;
        int a;
        while (!k.empty())
        {
            if (k.size() == 1) break;
            a = k.top();
            k.pop();
            a += k.top();
            sum += a;
            k.pop();
            k.push(a);
        }
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
    ll n;
    while (T --)
    {
        scanf("%lld",&n);
        ll b,x,k;
        ll maax = 0;
        for (itn i = 1;i * i <= n;i ++)
        {
            if (n % i == 0) {
                b = (i + 1) * n;
                k = (b / i) ^ b;
                maax = max(maax,k);
                
                x = n / i;
                b = (x + 1) * n;
                k = (b / x) ^ b;
                maax = max(maax,k);
            }
        }
        printf("%lld\n",maax);
    }
    return 0;
}
*/

//int t(int *a,int n)
//{
//    int re = 0,cur = 0,l = 0;
//    for (int i = 1;i <= n;i ++)
//    {
//        cur += a[i - 1];
//        if (cur < 0) {
//            cur = 0;
//            l = i;
//        }
//        re = max(re,(i - l) * cur);
//    }
//    return re;
//}
//
//int main()
//{
//    int a[1000];
//    int n;
//    scanf("%d",&n);
//    for (int i = 0;i < n;i ++) scanf("%d",a + i);
//    printf("%d\n",t(a,n));
//    return 0;
//}

/// 二进制状态压缩
/*
int n,m;
bitset<510> a[20];

int main()
{
    int T;
    scanf("%d",&T);
    string str;
    while (T --)
    {
        scanf("%d %d",&n,&m);
        for (int i = 0;i < m;i ++)
        {
            cin >> str;
            a[i] = bitset<510>(str);
        }
        int ans = -1;
        int mu = 1 << m;
        for (int i = 0;i < mu;i ++)
        {
            bitset<510> k(0);
            int v = i;
            int c = 0;
            for (int j = 0;j < m && v > 0;j ++)
            {
                if (v & 1) {
                    k |= a[j];
                    c ++;
                }
                v >>= 1;
            }
            if (k.count() == n)
            {
                if (ans == -1) ans = c;
                else ans = min(ans, c);
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    itn T;
    scanf("%d",&T);
    while (T --)
    {
        cin >> str;
        int k = 0;
        itn ok = 1;
        for (int i = 0;str[i];i ++)
        {
            if (str[i] == 'm')
            {
                if (k == 0) k = 1;
                else {
                    ok = 0;
                    break;
                }
            } else if (str[i] == 'q')
            {
                if (k == 1) k = 0;
                else {
                    ok = 0;
                    break;
                }
            } else {
                ok = 0;
                break;
            }
        }
        if (ok && !k) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/



//int n,m;
//const int mod = 998244355;
//ll all = 0;
//int f[2010];
//
//int main()
//{
//    scanf("%d %d",&n,&m);
//    int a[2010];
//    for (int i = 0;i < n;i ++) scanf("%d",a + i);
//    f[0] = 0;
//    for (int i = 0;i < n;i ++) f[i + 1] = f[i] + a[i];
//
////    for (int i = 1;i <= n;i ++) printf("%d ",f[i]);
//
//
//    return 0;
//}

//pair<int,int> a[100010];
//int n,m;
//
//int dp[50][100010];
//
//int dfs(int d,int start)
//{
////    printf("%d\n",d);
//    if (d == m) return 1;
//    if (start == n - 1) return 0;
//    int sum = 0;
//    int k = start == -1 ? -1 : a[start].second;
//    int v = start == -1 ? -1 : a[start].first;
//    for (int i = start + 1;i < n;i ++)
//    {
//        if (a[i].second > k && a[i].first > v) {
//            sum += (dp[d + 1][i] == -1) ? (dp[d + 1][i] = dfs(d + 1,i)) : dp[d + 1][i];
//        }
//    }
//    return sum;
//}
//
//
//int main()
//{
//    mem(dp,-1);
//    scanf("%d %d",&n,&m);
//    int in;
//    for (int i = 0;i < n;i ++){
//        scanf("%d",&in);
//        a[i].first = in;
//        a[i].second = i;
//    }
//    sort(a,a + n);
//    printf("%d\n",dfs(0,-1));
//    return 0;
//}



//priority_queue<int,vector<int>,greater<int> > q;
//
//int a[110][110];
//int m[110];
//int n,k;
//
//void dfs(int d,int v)
//{
//    if (d == n) {
//        q.push(v);
//        return;
//    }
//    for (int i = 0;i < m[d];i ++)
//    {
//        dfs(d + 1,v + a[d][i]);
//    }
//}
//
//int main()
//{
//
//    scanf("%d %d",&n,&k);
//
//    for (int i = 0;i < n;i ++)
//    {
//        scanf("%d",m + i);
//        for (itn j = 0;j < m[i];j ++) scanf("%d",&a[i][j]);
//    }
//    dfs(0,0);
//    int ans = 0;
//    for (int i = 0;i < k;i ++)
//    {
//        ans += q.top();
//        q.pop();
//    }
//
//    printf("%d\n",ans);
//
//    return 0;
//}

/*
struct Node
{
    int to,w;
    ll ch;
    Node *nxt;
} *g[1000010] = {NULL};

int vis[1000010] = {0};
int to;
ll t;

ll dfs(int n,int w)
{
    vis[n] = 1;
    Node *node;
    node = g[n];
    ll sum = w;
    while (node != NULL)
    {
        to = node -> to;
        if (!vis[to]) {
            node -> ch = dfs(to,node -> w);
            sum += node -> ch;
        }
        node = node -> nxt;
    }
    return sum;
}

ll all;
ll miin = -1;

void dfs(int n)
{
    vis[n] = 1;
    Node *node;
    node = g[n];
    while (node != NULL)
    {
        to = node -> to;
        if (!vis[to]) {
            printf("%d -> %d = %lld,%lld\n",n,node -> to,node -> ch - node -> w,all - node -> ch);
            t = max(node -> ch - node -> w,all - node -> ch);
            if (miin == -1) miin = t;
            else miin = min(miin,t);
            dfs(to);
        }
        node = node -> nxt;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int u,v,w;
    Node *node;
    for (int i = 0;i < n - 1;i ++)
    {
        scanf("%d %d %d",&u,&v,&w);
        node = (Node*) malloc(sizeof(Node));
        node -> w = w;
        node -> to = v;
        node -> ch = 0;
        node -> nxt = g[u];
        g[u] = node;
        
        node = (Node*) malloc(sizeof(Node));
        node -> w = w;
        node -> to = u;
        node -> ch = 0;
        node -> nxt = g[v];
        g[v] = node;
    }
    all = dfs(1,0);
    
    mem(vis,0);
    
    dfs(1);
    printf("%lld\n",miin);
    
    
    return 0;
}
 */


/*
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    n --;
    int k = (n - 1) / (x - 1) - 1;
    priority_queue<int> q;
    for (int i = 0;i < x;i ++)
    {
        q.push(n);
    }
    int t = n;
    for (int i = 0;i < k;i ++)
    {
        t = q.top() - 1;
        q.pop();
        for (int i = 0;i < x;i ++) q.push(t);
    }
    
    printf("%d",n + 1 - t);
    
    while (!q.empty())
    {
        printf(" %d",q.top() - t);
        q.pop();
    }
    printf("\n");
    return 0;
}
*/

/*
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[100010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    int l = 1 << n;
    int j;
    int v;
    int sum;
    bitset<1000> b;
    b.set();
    for (int i = 0;i < l;i ++)
    {
        bitset<1000> now;
        j = i;
        v = 0;
        sum = 0;
        while (j != 0)
        {
            if (j & 1) {
                sum += a[v];
                now[v] = 1;
            }
            j >>= 1;
            v ++;
        }
        if (sum == t) b &= now;
    }
    printf("%lu\n",b.count());
    for (int i = 0;i < 1000;i ++)
    {
        if (b[i]) printf("%d\n",a[i]);
    }
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[110];
    int tt = 0;
    for (int i = 0;i < n;i ++) {
        scanf("%d",a + i);
        tt += a[i];
    }
    itn ok = 0;
    for (int i = 0;i < n;i ++)
    {
        if (a[i] * 4 * m >= tt) {
            ok ++;
        }
    }
    if (ok >= m) printf("Yes\n");
    else printf("No\n");
    return 0;
}
*/

/*
int t = 0;
string num = "";
int l = 0;
int k;

void f(int n,int d,string str)
{
    if (d == l) {
        t ++;
        if (t == k) num += str + (char) (n + '0');
        return;
    }
    int s = (n == 0 ? 0 : n - 1);
    int e = (n == 9 ? n : n + 1);
    for (int i = s;i <= e;i ++)
    {
        if (t != k) f(i,d + 1,str + (char)(n + '0'));
    }
}

int main()
{
    
    scanf("%d",&k);
    
    while (t != k)
    {
        for (int i = 1;i < 10;i ++)
        {
            if (t == k) break;
            f(i,0,string());
        }
        l ++;
    }
    cout << num << endl;
    
    return 0;
}
*/

//int main()
//{
////    ll n;
////    scanf("%lld",&n);
//    for (int n = 2;n <= 100;n ++)
//    {
//        printf("%d: \n",n);
//        int c = 0;
//        for (int k = 2;k <= n;k ++)
//        {
//            ll m = n;
//            while (m > 1)
//            {
//                if (m % k == 0) m /= k;
//                else m -= k;
//            }
//            if (m == 1) {
//                if ((n - 1) % k != 0 && k != 2 && k != n) printf(">>>>>%d\n",k);
//            }
//        }
////        printf("%d\n",c);
//    }
//    return 0;
//}

// 骗分
/*
struct Node {
    int n;
    Node *nxt;
} *g[50010] = {NULL};

int n;
int a[50010];

int d[2010][2010] = {0};

int s;

void dfs(int n,int from,int dis)
{
    d[n][s] = dis;
    d[s][n] = dis;
    Node *node = g[n];
    while (node != NULL)
    {
        if (node -> n != from) dfs(node -> n,n,dis + 1);
        node = node -> nxt;
    }
}

int main()
{
    scanf("%d",&n);
    for (int i = 0;i < n;i ++) scanf("%d",a + 1 + i);
    int u,v;
    Node *node;
    for (int i = 0;i < n - 1;i ++)
    {
        scanf("%d %d",&u,&v);
        node = (Node*) malloc(sizeof(Node));
        node -> n = v;
        node -> nxt = g[u];
        g[u] = node;
        
        node = (Node*) malloc(sizeof(Node));
        node -> n = u;
        node -> nxt = g[v];
        g[v] = node;
    }
    for (int i = 1;i <= n;i ++)
    {
        s = i;
        dfs(i,i,0);
    }
    int maax = -1;
    for (int i = 1;i <= n;i ++)
    {
        for (int j = 1;j <= n;j ++)
        {
            maax = max(maax,d[i][j] * max(a[i],a[j]));
        }
    }
    printf("%d\n",maax);
    
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    if (n == 2) {
        printf("5\n");
        printf("1 1\n1 2\n1 3\n2 3\n2 2\n2 1\n");
    } else {
        int end = n * (n + 1);
        printf("%d\n",end - 1);
        int x = n + 1,y = 1;
        int mode = 0;
        for (int i = 0;i < end;i ++)
        {
            printf("%d %d\n",y,x);
            switch (mode) {
                case 0:
                    x --;
                    y ++;
                    if (y == n) {
                        mode = 5;
                    } else {
                        mode = 1;
                    }
                    break;
                case 1:
                    x --;
                    y --;
                    if (y == 1) mode = 2;
                    else if (x == 1) mode = 6;
                    break;
                case 2:
                    x ++;
                    mode = 3;
                    break;
                case 3:
                    x ++;
                    y ++;
                    if (x == n + 1) mode = 4;
                    else if (y == n - 1) mode = 0;
                    break;
                case 4:
                    y ++;
                    if (n % 2) {
                        if (y <= n - 2) mode = 0;
                        else if (y == n) mode = 5;
                    } else {
                        if (y <= n - 3) mode = 0;
                        else if (y == n) mode = 5;
                    }
                    break;
                case 5:
                    x --;
                    if (n % 2) {
                        if (x <= n - 1) mode = 1;
                    } else {
                        mode = 1;
                    }
                    break;
                case 6:
                    y --;
                    mode = 3;
                    break;
            }
        }
    }
    return 0;
}
*/


///  类复制考点
//class Cal {
//private:
//    double r;
//    double h;
//public:
//    Cal(double r,double h):r(r),h(h){
//        cout << "Inited" << endl;
//    }
//
//    Cal(const Cal& c)
//    {
//        cout << "Copied" << endl;
//        this -> r = c.r;
//        this -> h = c.h;
//    }
//
//    double execute()
//    {
//        return pi * r * r * h;
//    }
//
//    ~Cal()
//    {
//        cout << "Destoried" << endl;
//    }
//
//
//};
//
//Cal fun(double r,double h)
//{
//    Cal *a = new Cal(r,h);
//    cout << a -> execute() << endl;
//    return Cal(r,h);
//}
//
//Cal fun(Cal &a)
//{
//    cout << "Before copy!" << endl;
//    return a;
//}
//
//
//int main()
//{
//    Cal c(12,34);
//    cout << c.execute() << endl;
//    cout << fun(23,34).execute() << endl;
//    cout << fun(c).execute() << endl;
//    return 0;
//}

/*
template<typename T> class Swap {
    T *a,*b;
public:
    Swap(T &a,T &b)
    {
        this -> a = &a;
        this -> b = &b;
    }
    
    void exec()
    {
        
        for (int i = 0;i < sizeof(T);i ++)
        {
            *((char*) this -> a + i) ^= *((char*) this -> b + i);
            *((char*) this -> b + i) ^= *((char*) this -> a + i);
            *((char*) this -> a + i) ^= *((char*) this -> b + i);
        }
    }
};


int main()
{
    double a,b;
    cin >> a >> b;
    Swap<double> s(a,b);
    s.exec();
    cout << a << " " << b << endl;
    return 0;
}
*/

/*
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int a[1010];
    int m = 1;
    int maax = 1;
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    sort(a,a + n);
    for (int i = 1;i < n;i ++)
    {
        if (a[i] - a[i - 1] <= x) m ++;
        else m = 1;
        maax = max(m,maax);
    }
    printf("%d\n",maax);
    return 0;
}
*/

/*
int main()
{
    cio
    string str;
    itn b;
    cin >> str >> b;
    int n = (int) str.size();
    int e[200010];
    int en = 0;
    for (int i = 0;str[i];i ++)
    {
        if (str[i] == 'E') {
            e[en ++] = i;
        }
    }
    for (int i = 0;str[i];i ++)
    {
        if (str[i] == 'E') {
            e[en ++] = i + n;
        }
    }
    if (en == 0) {
        printf("0\n");
        return 0;
    }
    int p[100010];
    for (int i = 0,k = 0;str[i];i ++)
    {
        if (str[i] == 'P')
        {
            while (i > e[k]) k ++;
            p[i] = e[k] - i;
        }
    }
    ll s = 0;
    for (int i = 0;str[i];i ++) {
        if (str[i] == 'E') {
            s += b;
            if (b == n) {
                if (i + b > n) {
                    s --;
                }
            }
        } else {
            if (b - p[i] > 0) {
                s += b - p[i];
                if (b == n) {
                    if (i + b > n) {
                        s --;
                    }
                }
            }
        }
    }
    printf("%lld\n",s);
    return 0;
}
*/

/*
vector<int> g[2010];

int dp[2010] = {0};
const int mod = 1000000007;
int nums[2010] = {0};
int n,l;

int dfs(int n)
{
    if (n > l) {
        return dp[n] = (nums[n] = 1);
    }
    ll s = 0;
    for (auto i = g[n].begin();i != g[n].end();i ++) {
        s = (s + (dp[*i] == 0 ? dp[*i] = dfs(*i) : dp[*i])) % mod;
    }
    return (int) s;
}

int main()
{
    scanf("%d%d",&n,&l);
    int k,t;
    for (int i = 1;i <= l;i ++) {
        scanf("%d",&k);
        for (int j = 0;j < k;j ++)
        {
            scanf("%d",&t);
            g[i].push_back(t);
        }
    }
    k = dfs(1);
    int all = 0;
    for (int i = 0;i < 2010;i ++)
    {
        if (nums[i]) all ++;
    }
    printf("%d %d\n",k,all);
    return 0;
}
*/

/*
vector<int> g[50010];
int a[50010];
int maax_n;
int maax = -1;

int vis[50010] = {0};

void dfs(int n, int d) {
    vis[n] = 1;
    if (d > maax) {
        maax = d;
        maax_n = n;
    }
    vector<int> c = g[n];
    for (auto i = c.begin();i != c.end();i ++) {
        if (!vis[*i]) dfs(*i,d + 1);
    }
}

void dfs2(int s,int n,int d)
{
    vis[n] = 1;
    maax = max(d * max(a[s],a[n]),maax);
    vector<int> c = g[n];
    for (auto i = c.begin();i != c.end();i ++) {
        if (!vis[*i]) dfs2(s,*i,d + 1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i ++) scanf("%d",a + i);
    int u,v;
    for (int i = 0;i < n - 1;i ++) {
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    maax = -1;
    mem(vis,0);
    int s = maax_n;
    dfs(s,0);
    int e = maax_n;
    mem(vis,0);
    maax = -1;
    dfs2(s, s, 0);
    mem(vis,0);
    dfs2(e, e, 0);
    printf("%d\n",maax);
    return 0;
}
*/

/*
int main()
{
    itn T;
    scanf("%d",&T);
    while (T --) {
        itn h,a,H,A;
        scanf("%d %d %d %d",&h,&a,&H,&A);
        if (A == 0 || a >= H) {
            printf("-1\n");
            continue;
        }
        if (a == 0) {
            printf("0\n");
            continue;
        }
        int HH;
        int k = 0;
        int t = 0;
        while (h > 0) {
            t = 0;
            HH = H;
            do {
                if (!t) {
                    HH -= a;
                    t = 1;
                } else {
                    h -= A;
                    t = 0;
                }
            } while (HH > 0);
            if (h > 0) k ++;
        }
        printf("%d\n",k);
    }
    return 0;
}
*/

/*
int main()
{
    itn t;
    scanf("%d",&t);
    while (t --) {
        int a,b;
        scanf("%d %d",&a,&b);
        if (a > b) swap(a,b);
        int c = b - a;
        if (c == 0) printf("%d\n",a);
        else {
            if (c <= a) printf("%d\n",b + 1);
            else {
                int k = 0;
                do {
                    a *= 2;
                    c = b - a;
                    k ++;
                } while (c > a);
                printf("%d\n",k + b + 1);
            }
        }
    }
    return 0;
}
*/

/*
int j(int n)
{
    if (n == 0) return 1;
    for (int i = n - 1;i >= 1;i --) n *= i;
    return n;
}

int type = 0;
int t[20];
int vis[10] = {0};

set<map<int,int>> all;
ll ss = 0;
int l;

void dfs(int a,int b,int c,int d,int n,map<int,int> k) {
    if (n == 0) {
        
        if (all.find(k) == all.end()) {
//            cout << j(l) / (j(a) * j(b) * j(c) * j(d)) << endl;
            ss += j(l) / (j(a) * j(b) * j(c) * j(d));
            all.insert(k);
        }
        return;
    }
    for (int i = 0;i < type;i ++) {
        if (!vis[i]) {
            if (a - t[i] >= 0) {
                vis[i] = 1;
                k[i] = 'a';
                dfs(a - t[i],b,c,d,n - 1,k);
                vis[i] = 0;
            }
            if (b - t[i] >= 0) {
                vis[i] = 1;
                k[i] = 'b';
                dfs(a,b - t[i],c,d,n - 1,k);
                vis[i] = 0;
            }
            if (c - t[i] >= 0) {
                vis[i] = 1;
                k[i] = 'c';
                dfs(a,b,c - t[i],d,n - 1,k);
                vis[i] = 0;
            }
            if (d - t[i] >= 0) {
                vis[i] = 1;
                k[i] = 'd';
                dfs(a,b,c,d - t[i],n - 1,k);
                vis[i] = 0;
            }
        }
    }
}

int main()
{
    int na,nb,nc,nd,c;
    scanf("%d %d %d %d %d",&na,&nb,&nc,&nd,&c);
    int u,v;
    int g[20] = {0};
    set<int> h[20];
    for (int i = 1;i <= 12;i ++) {
        g[i] = i;
        h[i].insert(i);
    }
    
    for (int i = 0;i < c;i ++) {
        scanf("%d %d",&u,&v);
        
        if (g[u] != g[v]) {
            int l = g[v];
            for (auto j : h[l]) {
                h[g[u]].insert(j);
                g[j] = g[u];
            }
            h[l].clear();
        }
        
//        for (int j = 1;j <= 12;j ++) printf("%d ",g[j]);
//        printf("\n");
//        for (int j = 1;j <= 12;j ++) {
//            printf("%d:",j);
//            for (auto k : h[j]) {
//                printf("%d ",k);
//            }
//            printf("\n");
//        }
    }
    
    
    int k = 0;
    for (int i = 0;i < 20;i ++) {
        k = (int) h[i].size();
        if (k > 1) t[type ++] = k;
    }
    
    k = 12;
    for (int i = 0;i < type;i ++) {
//        printf("%d ",t[i]);
        k -= t[i];
    }
//    printf("\n");
    l = k;
    
    if (k == 12) {
        printf("%d\n",j(12) / (j(na) * j(nb) * j(nc) * j(nd)));
    } else {
        dfs(na,nb,nc,nd,type,map<int,int>());
        printf("%lld\n",ss);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --) {
        int n;
        int la = -1;
        int lb = -1;
        int ok = 1;
        int a,b;
        scanf("%d",&n);
        while (n --) {
            scanf("%d %d",&a,&b);
            if (b > a) ok = 0;
            if (a < la) ok = 0;
            if (b < lb) ok = 0;
            if (ok && b - lb > a - la) ok = 0;
            la = a;
            lb = b;
        }
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --) {
        itn n,x;
        int a[100010];
        scanf("%d%d",&n,&x);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        sort(a,a + n,greater<int>());
        int k = 0;
        ll sum = 0;
        for (int i = 0;i < n;i ++) {
            sum += a[i];
            if (sum / (double) (i + 1) >= x) k ++;
            else break;
        }
        printf("%d\n",k);
    }
    return 0;
}
*/

//int main()
//{
//    int T;
//    scanf("%d",&T);
//    int n;
//    ll miin = -1,niin = -1;
//    ll sum;
//    ll lb;
//    ll a[300010],b[300010];
//    while (T --) {
//        scanf("%d",&n);
//        sum = 0;
//        lb = -1;
//        for (int i = 0;i < n;i ++) {
//            scanf("%lld %lld",a + i,b + i);
//            if (i != 0) {
//                sum += max(0ll,a[i] - lb);
//            }
//            lb = b[i];
//        }
//        sum += max(0ll,a[0] - lb);
//
//        miin = a[0];
//        niin = b[n - 1];
//
//        for (int i = 1;i < n;i ++) {
//            if (a[i] <= miin) {
//                miin = a[i];
//                niin = min(niin,b[i - 1]);
//            }
//        }
//        sum += miin;
//        sum -= max(0ll,miin - niin);
//        printf("%lld\n",sum);
//    }
//    return 0;
//}

/// Dijkstra
/*
struct Node {
    ll n,w;
    bool operator< (const Node &other) const {
        return w > other.w;
    }
};

vector<Node> g[2][100010];

ll dis[2][100010];
int vis[2][100010] = {0};

void dij(int mode,int s) {
    mem(dis[mode],-1);
    
    priority_queue<Node> q;
    q.push({s,dis[mode][s] = 0});
    Node current;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[mode][current.n]) continue;
        vis[mode][current.n] = 1;
        for (auto to : g[mode][current.n]) {
            if (dis[mode][to.n] == -1 || dis[mode][to.n] > dis[mode][current.n] + to.w) {
                q.push({to.n,dis[mode][to.n] = dis[mode][current.n] + to.w});
            }
        }
    }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int u,v,w;
    struct Edge {int u,v,w;} edges[200010];
    for (int i = 0;i < m;i ++) {
        scanf("%d%d%d",&u,&v,&w);
        g[0][u].push_back({v,w});
        g[1][v].push_back({u,w});
        edges[i + 1] = {u,v,w};
    }
    
    dij(0, 1);
    dij(1, n);
    
    int q;
    scanf("%d",&q);
    ll o = dis[0][n];
    while (q --) {
        scanf("%d",&v);
        if (dis[1][edges[v].u] != -1 && dis[0][edges[v].v] != -1 && dis[0][edges[v].v] + edges[v].w + dis[1][edges[v].u] < o) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/

/*
int cmp(string a,string b) {
    if (a.size() == b.size())
    {
        for (int i = 0;a[i];i ++) {
            if (a[i] == b[i]) continue;
            return a[i] < b[i];
        }
    }
    return a.size() < b.size();
}

int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    string a[1010];
    for (int i = 0;i < n;i ++) {
        cin >> a[i];
    }
    int l,L;
    string in,miin,v;
    int ok;
    for (int i = 0;i < q;i ++) {
        scanf("%d",&l);
        cin >> in;
        miin = "-1";
        for (int j = 0;j < n;j ++) {
            ok = 1;
            L = (int) a[j].size();
            if (L < l) ok = 0;
            for (int k = l - 1,p = L - 1;ok && k >= 0;k --, p --) {
                if (in[k] != a[j][p]) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                if (miin == "-1") miin = a[j];
                else if (cmp(a[j],miin)) miin = a[j];
            }
        }
        cout << miin << endl;
    }
    
    
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[1010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    ll s = -1;
    ll ss = 0;
    sort(a,a + n);
    for (int i = a[0];i < a[n - 1];i ++) {
        ss = 0;
        for (int j = 0;j < n;j ++) {
            if (a[j] < i) ss += (a[j] - i) * (a[j] - i);
            else if (a[j] - 17 > i) ss += (a[j] - i - 17) * (a[j] - i - 17);
        }
        if (s == -1) s = ss;
        else s = min(ss,s);
    }
    printf("%lld\n",s);
    return 0;
}
*/

/// 并查集(new)
/*
int g[1010];
int d[1010];

int find(int a)
{
    if (g[a] == a) return a;
    return g[a] = find(g[a]);
}

inline void bind(int a,int b)
{
    int x = find(a), y = find(b);
    if (d[x] >= d[y]) { // 如果a的 根的子树深度 比b的 根的子树深度 大，那a的根继续做根
        g[y] = x; // 改变b节点的根的根为a的根
        if (d[x] == d[y]) { // 俩根深度一样
            if (x != y) d[x] ++; // 作为a的根，自然子树的深度++
        }
    } else g[x] = y;
}

ll x[1010];
ll y[1010];
ll z[1010];

inline ll dis(int a,int b)
{
    return (x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * (y[a] - y[b]) + (z[a] - z[b]) * (z[a] - z[b]);
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --) {
        ll n,h,r;
        scanf("%lld%lld%lld",&n,&h,&r);
        for (int i = 0;i < n;i ++) {
            g[i] = i;
            d[i] = 1;
        }
        
        for (int i = 0;i < n;i ++) scanf("%lld%lld%lld",x + i,y + i,z + i);
        for (int i = 0;i < n;i ++) {
            for (int j = 0;j < n;j ++) {
                if (dis(i,j) <= r * r * 4) {
//                    printf("%d %d\n",i,j);
                    bind(i,j);
                }
            }
        }
//        for (int i = 0;i < n;i ++) printf("%d ",g[i]);
        for (int i = 0;i < n;i ++) {
            if (z[i] <= r) {
                for (int j = 0;j < n;j ++) {
                    if (h - z[j] <= r && find(i) == find(j)) {
                        printf("Yes\n");
                        goto ok;
                    }
                }
            }
        }
        printf("No\n");
        ok:
        continue;
    }
    
    return 0;
}
*/

/*
int main()
{
    int n;
    ll t;
    scanf("%d%lld",&n,&t);
    pair<ll,int> a[100010];
    int u,v;
    for (int i = 0;i < n;i ++) {
        scanf("%d%d",&u,&v);
        a[i].first = u;
        a[i].second = v;
    }
    sort(a, a + n);
    int s = 1;
    for (int i = 0;i < n;i ++) {
        a[i].first += a[i].second * t;
    }
    for (int i = n - 1;i >= 1;i --) {
        if (a[i - 1].first >= a[i].first) {
            a[i - 1].first = a[i].first;
        } else s ++;
    }
    printf("%d\n",s);
    return 0;
}
*/

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[1010];
//    int b[1010];
//    for (int i = 0;i < n;i ++) scanf("%d",a + i);
//    for (int i = 0;i < n;i ++) scanf("%d",b + i);
//    int miin;
//    int maax = -1;
//    for (int i = 0;i < n;i ++) {
//        miin = INT_INF;
//        for (int j = 0;j < n;j ++) {
//            miin = min(miin,abs(a[i] - b[j]));
//        }
//        maax = max(maax,miin);
//    }
//    printf("%d\n",maax);
//    return 0;
//}

/*
int main() {
    
    int n,m;
    scanf("%d%d",&n,&m);
    char *a[3010];
    for (int i = 0;i < 3010;i ++) a[i] = new char[3010];
    
    for (int i = 0;i < n;i ++) {
        scanf(" ");
        for (int j = 0;j < m;j ++) {
            scanf("%c",&a[i][j]);
        }
    }

    int ot;
    int it[3010] = {0};
    ll sum = 0;
    for (int i = n - 1;i >= 0;i --) {
        ot = 0;
        for (int j = m - 1;j >= 0;j --) {
            if (a[i][j] == 'O') ot ++;
            else if (a[i][j] == 'I') it[j] ++;
            else sum += ot * it[j];
        }
    }
    
    printf("%lld\n",sum);
    
    
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    pair<int,int> a[100010];
    int c[100010];
    int s,v;
    for (int i = 0;i < n;i ++) {
        scanf("%d%d",&s,&v);
        a[i].first = v;
        a[i].second = s;
    }
    for (int i = 0;i < m;i ++) scanf("%d",c + i);
    sort(a, a + n, greater<pair<int,int> >());
    sort(c, c + m, greater<int>());
    s = 0;
    for (int i = 0,j = 0;i < n && j < m;) {
        if (a[i].second <= c[j]) {
            s ++;
            i ++;
            j ++;
        } else {
            i ++;
        }
    }
    printf("%d\n",s);
    return 0;
}
*/


//vector<int> g[200010];
//
//int c[200010];
//multiset<int> all;
//int dvis[200010] = {0};
//int vis[200010] = {0};
//
//void dfs(int n,int d)
//{
//    if (d != 0) {
//        if (!dvis[d]) {
//            all.insert(dvis[d] = c[n]);
//        } else if (dvis[d] != -1) {
//            all.erase(all.find(dvis[d]));
//            dvis[d] = -1;
//        }
//    }
//    vis[n] = 1;
//    for (auto i : g[n]) {
//        if (!vis[i]) dfs(i,d + 1);
//    }
//}
//
//int main()
//{
//    int n,m;
//    scanf("%d%d",&n,&m);
//    int u,v;
//    for (int i = 0;i < n - 1;i ++) {
//        scanf("%d%d",&u,&v);
//        g[u].push_back(v);
//        g[v].push_back(u);
//    }
//    for (int i = 1;i <= n;i ++) {
//        scanf("%d",c + i);
//    }
//    set<int> k;
//    for (int i = 1;i <= n;i ++) {
//        all.clear();
//        mem(vis,0);
//        mem(dvis,0);
//        dfs(i,0);
//        k.clear();
//        for (auto j : all) k.insert(j);
//        printf("%lu\n",k.size());
//    }
//
//    return 0;
//}

//int main()
//{
//    int n;
//    string str;
//    scanf("%d",&n);
//    cin >> str;
//    char k,v;
//    int j;
//    ll sum = 0;
//    for (int i = 0;i < n - 1;) {
//        if (str[i] == str[i + 1])
//        {
//            k = str[i];
//            for (j = i + 1;j < n;j ++) {
//                if (str[j] != k) {
//                    v = str[j];
//                    str.erase(str.begin() + j);
//                    str.insert(str.begin() + i + 1, v);
//                    sum += j - i - 1;
//                    break;
//                }
//            }
//            if (j == n) {
//                printf("-1\n");
//                return 0;
//            }
////            cout << str << endl;
//        } else i ++;
//    }
//    printf("%lld\n",sum);
//    return 0;
//}

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int m = n * 2;
//    int x[100010];
//    int y[100010];
//    int c[3][100010] = {0};
//    for (int i = 0;i < m;i ++) {
//        scanf("%d%d",x + i,y + i);
//    }
//
//    int miin = 0,min_x = 0,min_y = 0,t;
//    ll sum = 0;
//    for (int k = 0;k < m;k ++) {
//        miin = INT_INF;
//        for (int i = 1;i <= 2;i ++) {
//            for (int j = 1;j <= n;j ++) {
//                if (c[i][j]) continue;
//                if ((t = abs(y[k] - i) + abs(x[k] - j)) < miin) {
//                    miin = t;
//                    min_x = j;
//                    min_y = i;
//                }
//            }
//        }
//        c[min_y][min_x] = 1;
//        sum += miin;
//    }
//    printf("%lld\n",sum);
//    return 0;
//}

/*
int main()
{
    string str;
    cin >> str;
    int ok = 0;
    for (int i = 0;str[i];i ++) if (str[i] == '7') ok = 1;
    if (ok) printf("Yes\n");
    else printf("No\n");
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    ll s = 0;
    for (int i = 1;i <= n;i ++) {
        if (i % 3 == 0 && i % 5 == 0) continue;
        if (i % 3 == 0) continue;
        if (i % 5 == 0) continue;
        s += i;
    }
    printf("%lld\n",s);
    return 0;
}
*/

/*
int gcd(int a,int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    int n;
    scanf("%d",&n);
    ll sum = 0;
    for (int i = 1;i <= n;i ++) {
        for (int j = 1;j <= n;j ++) {
            for (int k = 1;k <= n;k ++) {
                sum += gcd(gcd(i,j),k);
            }
        }
    }
    printf("%lld\n",sum);
    return 0;
}
*/


/*
int main()
{
    int n;
    string str;
    scanf("%d",&n);
    cin >> str;
    int rb[4010];
    int br[4010];
    int rg[4010];
    int gr[4010];
    int bg[4010];
    int gb[4010];
    
    int r[4010] = {0};
    int g[4010] = {0};
    int b[4010] = {0};
    
    int tr = 0,tg = 0,tb = 0;
    for (int i = n - 1;i >= 0;i --) {
        if (str[i] == 'R') {
            tr ++;
            rb[i] = tb;
            rg[i] = tg;
            r[i] = 1;
        }
        if (str[i] == 'G') {
            tg ++;
            gb[i] = tb;
            gr[i] = tr;
            g[i] = 1;
        }
        if (str[i] == 'B') {
            tb ++;
            br[i] = tr;
            bg[i] = tg;
            b[i] = 1;
        }
    }
    
    ll sum = 0;
    
    for (int i = 0;i < n;i ++) {
        for (int j = i + 1;j < n;j ++) {
//            printf("%d ",j);
            if (str[i] == 'R') {
                if (str[j] == 'B') {
                    sum += bg[j];
                    if (j + j - i < n && g[j + j - i]) sum --;
                }
                if (str[j] == 'G') {
                    sum += gb[j];
                    if (j + j - i < n && b[j + j - i]) sum --;
                }
            }
            if (str[i] == 'B') {
                if (str[j] == 'R') {
                    sum += rg[j];
                    if (j + j - i < n && g[j + j - i]) sum --;
                }
                if (str[j] == 'G') {
                    sum += gr[j];
                    if (j + j - i < n && r[j + j - i]) sum --;
                }
            }
            if (str[i] == 'G') {
                if (str[j] == 'B') {
                    sum += br[j];
                    if (j + j - i < n && r[j + j - i]) sum --;
                }
                if (str[j] == 'R') {
                    sum += rb[j];
                    if (j + j - i < n && b[j + j - i]) sum --;
                }
            }
        }
    }
    printf("%lld\n",sum);
    return 0;
}
*/


//int g[510][510] = {0};
//
//int dis[510];
//int vis[110] = {0};
//int n;
//
//void dij()
//{
//    mem(dis,-1);
//    priority_queue<int> q;
//    q.push(1);
//    dis[1] = 0;
//
//}
//
//int main()
//{
//    int m;
//    scanf("%d%d",&m,&n);
//    scanf(" ");
//    string str;
//    int in;
//    int l,a[510];
//    for (int k = 1;k <= m;k ++) {
//        getline(cin,str);
//        stringstream ss(str);
//        l = 0;
//        while (ss >> in) {
//            a[l ++] = in;
//        }
//        for (int i = 0;i < l;i ++) {
//            for (int j = i + 1;j < l;j ++) {
//                g[a[i]][a[j]] = k;
//                g[a[j]][a[i]] = k;
//            }
//        }
//    }
//    dij();
//
//    return 0;
//}


// 静态变量、友元函数
/*
class A {
public:
    A(int a){ this -> a = a;};
    static void kk() // 静态类，和java一样
    {
        printf("aaa%d\n",a);
        
    }
private:
    static int a;
    friend void p(); // 友元函数，类也类似
};

int A::a = 2; // static必须在外面初始化

void p()
{
    printf("%d\n",A::a);
}

void f()
{
    static int h;
    cout << h ++ << endl;
}

int main()
{
    A a(1);
    p();
    printf("");
    f();
    f();
    return 0;
}
*/

/*
class Cal {
public:
    friend double get(Cal &c);
    Cal(double r,double h):r(r),h(h){}
private:
    int r,h;
};

double get(Cal &c) {
    return pi * c.r * c.r * c.h;
}

int main()
{
    double r,h;
    cin >> r >> h;
    Cal k(r,h);
    cout << get(k) << endl;
    return 0;
}
*/

//int main()
//{
//    int n;
//    int a[1010];
//    int b[1000010];
//    int m;
////    set<int> k;
//    int ok = 0;
//    int d = 0;
//    while (~scanf("%d",&n)) {
//        for (int i = 0;i < n;i ++) scanf("%d",a + i);
//        sort(a,a + n);
//        m = 0;
//        for (int i = 0;i < n - 3;i ++) {
//            for (int j = i + 1;j < n - 2;j ++) {
//                b[m ++] = a[i] + a[j];
//            }
//        }
//        ok = 0;
//        sort(b,b + m);
//        for (int i = n - 1;i >= 3;i --) {
//            for (int j = i - 1;j >= 2;j --) {
//                if (binary_search(b, b + m, a[i] - a[j]))
//                {
//                    ok = 1;
//                    d = a[i];
//                    goto end;
//                }
//            }
//        }
//        end:
//        if (ok) printf("%d\n",d);
//        else printf("no solution\n");
//    }
//    return 0;
//}


/*int nums[1010];
int n;

inline int b_find(int l,int r,int a) {
    int m = (l + r - 1) / 2;
    while (l <= r) {
        if (m < n && m >= 0 && nums[m] == a) {
            return 1;
        }
        else {
            if (nums[m] > a) {
                l = m + 1;
            } else {
                r = m - 1;
            }
            m = (l + r) / 2;
        }
    }
    return 0;
}

int main()
{
    int a,b,c,d;
    while (~scanf("%d",&n))
    {
        for (int i = 0;i < n;i ++) scanf("%d",nums + i);
        sort(nums, nums + n);
        for (d = n - 1;d >= 0;d --)
        {
            for (c = n - 2;c >= 0;c --)
            {
                for (b = n - 3;b >= 0;b --)
                {
                    a = nums[d] - nums[c] - nums[b];
                    if (!(nums[d] == nums[c] || nums[d] == nums[b] || nums[d] == a ||
                        nums[c] == nums[b] || nums[c] == a ||
                        nums[b] == a) && binary_search(nums, nums + n, a))
                    {
                        printf("%d\n",nums[d]);
                        goto ok;
                    }
                }
            }
        }
        printf("no solution\n");
        ok:;
    }
    return 0;
}
*/

/*
int gcd(int a,int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    int c,a,b;
    while (~scanf("%d%d%d",&c,&a,&b))
        if (c % gcd(a,b)) printf("NO\n");
        else printf("YES\n");
    return 0;
}
*/

/*
int main()
{
    int n;
    int a[1010];
    int b[1010];
    while (~scanf("%d",&n)) {
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        for (int i = 0;i < n;i ++) scanf("%d",b + i);
        sort(a, a + n);
        sort(b, b + n);
        int m = -INT_INF;
        int k;
        for (int v = n - 1;v >= 0;v --) {
            k = -200 * n;
            for (int i = n - 1,j = v;i >= 0 && j >= 0;j --,i --) {
                if (a[i] > b[j]) {
                    k += 400;
                } else if (a[i] == b[j]) k += 200;
            }
            m = max(m,k);
        }
        
        printf("%d\n",m);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    string table,str;
    while (T --) {
        cin >> table >> str;
        char c['z' + 1];
        for (int i = 'a';i <= 'z';i ++) c[table[i - 'a']] = i;
        int j = 0;
        int n = (int) str.size();
        
        for (int i = ceil(n / 2.0);str[i];i ++) {
            if (str[i] == c[str[j]]) j ++;
            else {
                j = 0;
                if (str[i] == c[str[j]]) j ++;
            }
        }
        
        for (int i = 0;i < n - j;i ++) {
            printf("%c",str[i]);
        }
        for (int i = 0;i < n - j;i ++) {
            printf("%c",c[str[i]]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    string x;
    while (cin >> str)
    {
        if (str == "0") break;
        x = str[0];
        for (int i = 1;str[i];i ++) {
            if (str[i - 1] == str[i]) {
                if (str[i] != '9') x += str[i] + 1;
                else x += "10";
            }
            x += str[i];
        }
        cout << x << endl;
    }
    return 0;
}
*/

/// 规律+快速幂
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


int main()
{
    ll n;
    scanf("%lld",&n);
    if (n <= 1) printf("0\n");
    else if (n == 2) printf("1\n");
    else {
        ll a = quickpow(2, n - 3);
        n %= mod;
        a = (a * n) % mod;
        a = (a * (n - 1)) % mod;
        printf("%lld\n",a);
    }
    return 0;
}
*/

/// 单调栈
/*
using namespace std;
int main()
{
    int n;
    int in;
    while (~scanf("%d",&n)) {
        stack<int> a;
        int ans = 0;
        for (int i = 0;i < n;i ++) {
            scanf("%d",&in);
            while (!a.empty() && a.top() > in) ans ++,a.pop();
            if (in != 0 && (a.empty() || a.top() < in)) a.push(in);
        }
        while (!a.empty()) ans ++,a.pop();
        printf("%d\n",ans);
    }
    return 0;
}
*/

/// 阶乘位数公式
/*
int main()
{
    int a;
    while (~scanf("%d",&a)) {
        if (a == 0) printf("1\n");
        else printf("%d\n",(int) (log10(sqrt(2 * pi * a)) + a * log10(a / exp(1))) + 1);
    }
    return 0;
}
*/

/*
ll n;
ll quickpow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = a * ans % n;
        a = a * a % n;
        b >>= 1;
    }
    return ans;
}

int main()
{
    while (~scanf("%lld",&n))
    {
        if (n % 2 == 0) printf("2^? mod %lld = 1\n",n);
        else {
            for (ll i = 1;;i ++) {
                if (quickpow(2, i) == 1) {
                    printf("2^%lld mod %lld = 1\n",i,n);
                    break;
                }
            }
        }
    }
    return 0;
}
*/

/*
//int T(int k,int n)
//{
//    if (k == 0) return n;
//    int sum = 0;
//    for (int i = 1;i <= n;i ++)
//    {
//        sum += T(k - 1,i);
//    }
//    return sum;
//}

int main()
{
    int k,n;
    int a[1020][1020] = {0};
    int v[1020] = {0};
    const int mod = 100007;
    for (int i = 0;i <= 1010;i ++) a[0][i] = i;
    v[0] = 1010;
    while (~scanf("%d%d",&k,&n)) {
        for (int i = 1;i <= k;i ++) {
            for (int j = v[i] + 1;j <= n;j ++) {
                a[i][j] = (a[i][j - 1] + a[i - 1][j]) % mod;
            }
            if (v[i] < n) v[i] = n;
        }
        printf("%d\n",a[k][n]);
    }
    return 0;
}
*/

/*
int main()
{
    int a[20010];
    int b[10010];
    for (int i = 1;i <= 20005;i ++) a[i] = i;
    printf("#include<stdio.h>\nint main(){int a[] = {0,");
    for (itn n = 1;n <= 10000;n ++) {
        int c = 0;
        while (1)
        {
            for (int i = 1;i <= n;i ++) {
                b[i] = a[i];
            }
            for (int i = 1,j = 1;i <= 2 * n;i += 2,j ++) {
                a[i] = a[n + j];
            }
            for (int i = 2,j = 1;i <= 2 * n;i += 2,j ++) {
                a[i] = b[j];
            }
            c ++;
            int ok = 1;
            for (int i = 1;i <= 2 * n;i ++) {
                if (a[i] != i) {
                    ok = 0;
                    break;
                }
            }
            if (ok) break;
        }
        printf("%d,",c);
    }
    printf("};int n;while (~scanf(\"%%d\",&n)){printf(\"%%d\\n\",a[n]);}return 0;}");
    return 0;
}
*/

/*
int main()
{
    int n,T;
    int a[100010];
    int miin,maax;
    scanf("%d",&T);
    int ok = 0;
    int pos = 0;
    while (T --) {
        scanf("%d",&n);
        for (int i = 0;i < n;i ++) {
            scanf("%d",a + i);
        }
        if (n == 1) {
            printf("0\n");
            continue;
        }
        sort(a, a + n);
        maax = a[n - 1];
        miin = a[0];
        if (maax > 0 && abs(maax) > abs(miin)) {
            ok = 0;
            for (int i = n - 2;i >= 0 && a[i] > 0;i --) {
                int c = maax - a[i];
                if (ceil(c / 2.0) <= a[i]) {
                    pos = i;
                    ok = 1;
                }
            }
            if (ok) {
                int m = ceil((maax - a[pos]) / 2.0);
                if (pos > 0) m = max(m,max(abs(miin),abs(a[pos - 1])));
                printf("%d\n",m);
            } else {
                int m = abs(miin);
                m = max(m,abs(a[n - 2]));
                printf("%d\n",m);
            }
        } else {
            ok = 0;
            for (int i = 1;i < n && a[i] < 0;i ++) {
                int c = a[i] - miin;
                if (ceil(c / 2.0) <= abs(a[i])) {
                    pos = i;
                    ok = 1;
                }
            }
            if (ok) {
                int m = ceil((a[pos] - miin) / 2.0);
                if (pos < n - 1) m = max(m,max(abs(maax),abs(a[pos + 1])));
                printf("%d\n",m);
            } else {
                int m = abs(maax);
                m = max(m,abs(a[1]));
                printf("%d\n",m);
            }
        }
    }
    
    return 0;
}
*/

/*
struct h {
    int time,x;
    double t;
};

int cmp(h &a,h &b)
{
    if (a.time == b.time) {
        if (a.t == b.t) {
            return a.x < b.x;
        }
        return a.t > b.t;
    }
    return a.time > b.time;
}

int main()
{
    int n;
    scanf("%d",&n);
    int t,x;
    double tp;
    vector<h> k;
    while (n --) {
        scanf("%d%d%lf",&t,&x,&tp);
        if (tp >= 38) k.push_back({t,x,tp});
    }
    sort(k.begin(), k.end(), cmp);
    printf("%d\n",(int) k.size());
    for (auto i : k) {
        printf("%08d %08d %.1f\n",i.time,i.x,i.t);
    }
    
    return 0;
}
*/

/*
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    if (s1 == s2) printf("-1\n");
    else printf("%lu\n",max(s1.size(),s2.size()));
    return 0;
}
 */

/*
int main()
{
    itn n;
    scanf("%d",&n);
    int a[100010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    ll k = 0;
    ll sum = 0;
    for (int i = 0;i < n;i ++)
    {
        sum += a[i];
        sum -= k;
        k ++;
    }
    k = 0;
    ll sum2 = 0;
    for (int i = n - 1;i >= 0;i --)
    {
        sum2 += a[i];
        sum2 -= k;
        k ++;
    }
    printf("%lld\n",max(sum,sum2));
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    if (n == 1) printf("1\n1\n");
    else if (n == 2) {
        printf("2\n0\n11\n");
    } else {
        printf("%d\n",n - 1);
        string s = "1";
        for (int i = 0;i < n - 1;i ++) {
            if (i != 0) s += '0';
            cout << s;
            printf("1\n");
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
    int a,b;
    int n;
    int s = 0;
    while (T --) {
        s = 0;
        scanf("%d",&n);
        while (n --) {
            scanf("%d%d",&a,&b);
            if (b - a >= 2) s ++;
        }
        printf("%d\n",s);
    }
    return 0;
}
*/

/*
int main()
{
    int n,k;
    int T;
    scanf("%d",&T);
    int a[200010];
    int s = 0;
    int m;
    while (T --) {
        scanf("%d%d",&n,&k);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        sort(a, a + n);
        s = 0;
        m = 1;
        for (int i = 0;i < n;i ++) {
            while (a[i] - a[s] > k) {
                s ++;
            }
            m = max(m,i - s + 1);
        }
        printf("%d\n",m);
    }
    return 0;
}
*/

/*
int main()
{
    ll n,m;
    scanf("%lld%lld",&n,&m);
    int a[500010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    sort(a, a + n);
    int s = 0;
    ll k = 0;
    for (int i = 0;i < n;i ++) {
        k += a[i];
        if (k > m) break;
        s ++;
    }
    printf("%d\n",s);
    return 0;
}
*/

//int a[1000010];
//int vis[1000010] = {0};
//vector<int> g[1000010];
//ll val[1000010];
//
//void dfs(int f,int n)
//{
//    a[n] = f;
//    vis[n] = 1;
//    for (auto i : g[n]) {
//        if (vis[i]) continue;
//        dfs(n,i);
//        val[n] += val[i];
//    }
//}
//
//void update(int n,int v)
//{
//    int u = v;
//    while (a[n] != 0) {
//        val[n] += u;
//        n = a[n];
//    }
//}
//
//int main()
//{
//    int n,m,k;
//    scanf("%d%d%d",&n,&m,&k);
//    for (int i = 1;i <= n;i ++) scanf("%lld",val + i);
//    int u,v;
//    for (int i = 0;i < n - 1;i ++) {
//        scanf("%d%d",&u,&v);
//        g[u].push_back(v);
//        g[v].push_back(u);
//    }
//    dfs(0,k);
//    int op;
//    int node;
//    for (int i = 0;i < m;i ++) {
//        scanf("%d",&op);
//        if (op == 1) {
//            scanf("%d%d",&node,&v);
//            update(node,v);
//        } else {
//            scanf("%d",&node);
//            printf("%lld\n",val[node]);
//        }
//    }
//    return 0;
//}


/*int* gg[10010] = {NULL};

int g(int n,int k)
{
    return gg[n / 100000][n % 100000] = k;
}

int g(int n)
{
    return gg[n / 100000][n % 100000];
}

int find(int a)
{
    if (g(a) == a) return a;
    return g(a,find(g(a)));
}

inline void bind(int a,int b)
{
    g(find(a),find(b));
}

int main()
{
    int T;
    scanf("%d",&T);
    int n;
    int a,b,c;
    struct K {
        int a,b;
    };
    vector<K> zz;
    while (T --) {
        for (int i = 0;i < 10010;i ++) {
            if (gg[i] != NULL) {
                delete[] gg[i];
            }
            gg[i] = new int[100010];
        }
        zz.clear();
        scanf("%d",&n);
        while (n --) {
            scanf("%d%d%d",&a,&b,&c);
            a --;
            b --;
            if (c == 1) {
                bind(a,b);
            } else {
                zz.push_back({a,b});
            }
        }
        int ok = 1;
        for (auto i : zz) {
            if (find(i.a) == find(i.b)) {
                ok = 0;
                break;
            }
        }
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    ll a[500010];
    for (int i = 0;i < n;i ++) scanf("%lld",a + i);
    sort(a,a + n);
    n --;
    for (int i = 0;i < n;i ++) {
        a[i] = a[i + 1] - a[i];
    }
    ll s = 0;
    ll last = 0;
    ll l = 0;
    const int mod = 1000000007;
    for (int i = 0;i < n;i ++) {
        l = (l + ((i + 1) * ((a[i] * a[i]) % mod) % mod + (2 * a[i] * last) % mod) % mod) % mod;
        s = (s + l) % mod;
        last = (last + ((i + 1) * a[i]) % mod) % mod;
    }
    printf("%lld\n",s);
    return 0;
}
*/

//
//int main()
//{
//    int n,q;
//    scanf("%d%d",&n,&q);
//    int t[100010],s[100010];
//    for (int i = 0;i < n;i ++) {
//        scanf("%d%d",s + i,t + i);
//    }
//    int a,b,c;
//    int k;
//    for (int i = 0;i < q;i ++) {
//        scanf("%d%d%d",&a,&b,&c);
//        k = 0;
//        for (int i = 0;i < n;i ++) {
//            if (s[i] >= a && t[i] >= b && t[i] + s[i] >= c) k ++;
//        }
//        printf("%d\n",k);
//    }
//    return 0;
//}
//

/*
map<int,int> dis[500010];
vector<int> g[500010];
int vis[500010];

void dfs(int s,int n,int d)
{
    dis[s][n] = d;
    dis[n][s] = d;
    vis[n] = 1;
    for (auto i : g[n]) {
        if (vis[i]) continue;
        dfs(s,i,d + 1);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int u,v;
    for (int i = 0;i < n - 1;i ++) {
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1;i <= n;i ++) {
        mem(vis,0);
        dfs(i,i,0);
    }
    int a,b,c;
    int miin = 0,mm = 0;
    int t;
    for (int i = 0;i < m;i ++) {
        scanf("%d%d%d",&a,&b,&c);
        for (int i = 1;i <= n;i ++) {
            t = dis[i][a] + dis[i][b] + dis[i][c];
            if (i == 1) {
                miin = t;
                mm = i;
            } else if (t < miin) {
                miin = t;
                mm = i;
            }
        }
        printf("%d %d\n",mm,miin);
    }
    return 0;
}
*/

/*
int main()
{
    double  r;
    scanf("%lf",&r);
    printf("%.20f\n",2 * pi * r);
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int in;
    ll sum = 0;
    for (int i = 0;i < m;i ++) {
        scanf("%d",&in);
        sum += in;
    }
    if (n >= sum) printf("%lld\n",n - sum);
    else printf("-1\n");
    
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[200010] = {0};
    int in;
    for (int i = 0;i < n - 1;i ++) {
        scanf("%d",&in);
        a[in] ++;
    }
    for (int i = 1;i <= n;i ++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
*/

/*
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    ll sum = 0;
    ll init = n + 1;
    ll init_plus = n - 2;
    const int mod = 1000000007;
    for (int i = 1;i <= n + 1;i ++) {
        if (i >= k) sum = (sum + init) % mod;
        init = init + init_plus;
        init_plus = init_plus - 2;
    }
    printf("%lld\n",sum);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    pair<int,int> a[2010];
    int in;
    for (int i = 0;i < n;i ++) {
        scanf("%d",&in);
        a[i].first = in;
        a[i].second = i;
    }
    sort(a, a + n, greater<pair<int,int> >());
    
    
    return 0;
}
*/


/*
class A {
public:
    int x;
    A(int x):x(x) {}
};

class B {
public:
    int x;
    B(int x):x(x) {}
};

class C {
public:
    A a;
    B b;
    C(int a,int b):a(a),b(b) {}
    C(A a,B b):a(a.x),b(b.x) {}
    
    int plus() {
        return a.x + b.x;
    }
};


int main()
{
    A a(1);
    B b(2);
    C c(a,b);
    cout << a.x << "+" << b.x << "=" << c.plus() << endl;
    C cc(3,4);
    cout << cc.a.x << "+" << cc.b.x << "=" << cc.plus() << endl;
    
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
    int b[200010];
    int k,f,m,s;
    while (T --) {
        scanf("%d",&n);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        k = 0;
        s = (a[0] / abs(a[0])) * -1;
        f = 1;
        m = 0;
        for (int i = 0;i < n;i ++) {
            if (a[i] / abs(a[i]) != s) {
                if (f == 1) f = 0;
                else b[k ++] = m;
                m = a[i];
                s = a[i] / abs(a[i]);
            } else {
                m = max(m,a[i]);
            }
        }
        b[k ++] = m;
        ll sum = 0;
        for (int i = 0;i < k;i ++) sum += b[i];
        printf("%lld\n",sum);
    }
    return 0;
}
*/

/*
void solve()
{
    int n;
    int k;
    ll s;
    int mid;
    scanf("%d",&n);
    if (n % 4 == 0)
    {
        printf("YES\n2");
        k = 2;
        mid = n / 2 - 1;
        s = 2;
        for (int i = 0;i < mid;i ++)
        {
            k += 2;
            printf(" %d",k);
            s += k;
        }
        k = 1;
        fir (int i = 0;i < mid;i ++)
        {
            s -= k;
            printf(" %d",k);
            k += 2;
        }
        printf(" %lld\n",s);
    } else printf("NO\n");
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        solve();
    }
    return 0;
}
*/

/*
const int maxn = 2e5+10;
int a[maxn],c[maxn*2];
int main(){
    int T;
    for(scanf("%d",&T);T;T--){
        int n,k;
        scanf("%d%d",&n,&k);
        for(int i = 2; i <= 2*k; i++) c[i] = 0;
        for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
        for(int i = 1; i <= n/2; i++){
            c[2] += 2;
            c[min(a[i],a[n-i+1])+1]--;
            c[a[i]+a[n-i+1]]--;
            c[a[i]+a[n-i+1]+1]++;
            c[max(a[i],a[n-i+1])+k+1]++;
        }
        int ans = 2*n;
        for(int i = 2; i <= 2*k; i++){
            c[i] = c[i]+c[i-1];
            printf("%d ",c[i]);
            ans = min(ans,c[i]);
        }
        printf("\n%d\n",ans);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    ll n;
    ll k;
    while (T --) {
        scanf("%lld",&n);
        k = 4;
        while (n % (k - 1)) k <<= 1;
        printf("%lld\n",n / (k - 1));
    }
    return 0;
}
*/


/// long long组合数带mod模版，Lucas定理
//ll quick_mod(ll a, ll b)
//{
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


/*const int mod = 998244353;

ll a[5010][1010] = {0};

int main()
{
    // 杨辉三角，组合数预处理
    a[0][0] = 1;
    for(int i = 1;i <= 5000;i ++)
    {
        a[i][0] = 1;
        for (int j = 1;j <= min(i, 1000);j ++)
        {
            a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % mod;
        }
    }
    
    
    int T;
    int x,y,t;
    ll j;

    for (scanf("%d",&T);T --;) {
        scanf("%d%d%d",&x,&y,&t);
        if (x + y > t) {
            printf("0\n");
            continue;
        }
        if(x > y) swap(x,y);
        j = (a[t][y] * a[t - y][x]) % mod;

        printf("%lld\n",j);
    }
    return 0;
}*/


/*int main()
{
    int T;
    int n,k;
    int a[200010];
    for (scanf("%d",&T);T --;) {
        scanf("%d%d",&n,&k);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        
    }
    return 0;
}
*/

/*int main()
{
    int n;
    scanf("%d",&n);
    int a[1010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    sort(a,a + n);
    int count = 0;
    int aa,bb;
    for (int i = 0;i < n;i ++) {
        for (int j = i + 1;j < n;j ++) {
            for (int k = j + 1;k < n;k ++) {
                aa = a[j] - a[i];
                bb = a[k] - a[j];
                if (bb >= aa) {
                    if (bb <= aa * 2) count ++;
                    else break;
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int x[100010],y[100010];
    for (int i = 0;i < n;i ++) scanf("%d%d",x + i,y + i);
    int dis[100010];
    int k = 0;
    ll all = 0;
    for (int i = 1;i < n - 1;i ++) {
        dis[k ++] = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]) + abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]) - abs(x[i + 1] - x[i - 1]) - abs(y[i + 1] - y[i - 1]);
        all += abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
    }
    all += abs(x[n - 1] - x[n - 2]) + abs(y[n - 1] - y[n - 2]);
    sort(dis, dis + k);
    printf("%lld\n",all - dis[k - 1]);
    return 0;
}
*/

/*char a[60][60];
int n,m;

int checkV(int x,int y)
{
    if (a[y][x] == '#') return 0;
    if (y - 1 < 0 || a[y - 1][x] == '#')
    {
        if (y + 2 < n && a[y + 1][x] == '.' && a[y + 2][x] == '.') return 1;
    }
    return 0;
}

int checkH(int x,int y)
{
    if (a[y][x] == '#') return 0;
    if (x - 1 < 0 || a[y][x - 1] == '#')
    {
        if (x + 2 < m && a[y][x + 1] == '.' && a[y][x + 2] == '.') return 1;
    }
    return 0;
}
int main()
{
    scanf("%d%d",&n,&m);
    for (int i = 0;i < n;i ++) {
        scanf(" ");
        for (int j = 0;j < m;j ++) {
            scanf("%c",&a[i][j]);
        }
    }
    vector<pair<int, int>> all;
    for (int i = 0;i < n;i ++) {
        for (int j = 0;j < m;j ++) {
            if (checkH(j, i) || checkV(j, i)) all.push_back(make_pair(i + 1,j + 1));
        }
    }
    printf("%lu\n",all.size());
    for (auto i : all) {
        printf("%d %d\n",i.first,i.second);
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    map<set<string>,int> all;
    set<string> in;
    string a,b,c;
    for (int i = 0;i < n;i ++)
    {
        cin >> a >> b >> c;
        in.clear();
        in.insert(a);
        in.insert(b);
        in.insert(c);
        all[in] ++;
    }
    int m = -1;
    for (auto i : all) {
        m = max(m,i.second);
    }
    printf("%d\n",m);
    return 0;
}
*/

/*
int cmp(pair<int,int> &a,pair<int, int> &b)
{
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int n;
    scanf("%d",&n);
    int u,v;
    pair<int,int> cow[10010];
    set<int> avb;
    for (int i = 1;i <= 10000;i ++) avb.insert(i);
    for (int i = 0;i < n;i ++) {
        scanf("%d%d",&u,&v);
        cow[i].first = u;
        cow[i].second = v;
    }
    sort(cow, cow + n, cmp);
    ll sum = 0;
    set<int>::iterator it;
    for (int i = 0;i < n && !avb.empty();i ++) {
        it = avb.lower_bound(cow[i].second);
        if (it != avb.end()) {
            if (*it == cow[i].second) {
                sum += cow[i].first;
                avb.erase(it);
            } else {
                if (it != avb.begin()) {
                    sum += cow[i].first;
                    avb.erase(-- it);
                }
            }
        }
    }
    printf("%lld\n",sum);
    return 0;
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

int main()
{
    ll a,b;
    int T;
    for (scanf("%d",&T);T --;) {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",(quickpow(2, a - 1) * b) % mod);
    }
    return 0;
}
*/

/*
void tg(string str,ll *chr)
{
    for (int i = 0;str[i];i ++) {
        chr[str[i]] ++;
    }
}

void out(ll *a)
{
    for (int i = 'A';i <= 'z';i ++) {
        if (a[i] != 0) printf("%c: %lld\n",i,a[i]);
    }
}

void pl(ll *a,ll *b,ll *tg) {
    for (int i = 'A';i <= 'z';i ++) {
        tg[i] = a[i] + b[i];
    }
}

void cpy(ll *a,ll *tg) {
    for (int i = 'A';i <= 'z';i ++) {
        tg[i] = a[i];
    }
}

int main()
{
    string s,t;
    cin >> s >> t;
    itn n;
    scanf("%d",&n);
    ll a['z' + 1] = {0},b['z' + 1] = {0},c['z' + 1] = {0};
    tg(s,a);
    tg(t,b);
    if (n == 1) {
        out(a);
    } else if (n == 2) {
        out(b);
    } else for (int i = 3;i <= n;i ++) {
        pl(a,b,c);
        cpy(b,a);
        cpy(c,b);
    }
    out(c);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[110];
    int b[110];
    int c[110];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    for (int i = 0;i < n;i ++) scanf("%d",b + i);
    for (int i = 0;i < n;i ++) scanf("%d",c + i);
    int miin;
    int maax = -INT_INF;
    int zz;
    for (int i = 0;i < n;i ++) {
        miin = INT_INF;
        for (int j = 0;j < n;j ++) {
            zz = INT_INF;
            for (int k = 0;k < n;k ++) {
                if (abs(a[i] + b[j] + c[k]) < abs(zz)) {
                    zz = a[i] + b[j] + c[k];
                } else if (abs(a[i] + b[j] + c[k]) == abs(zz)) {
                    zz = max(zz,a[i] + b[j] + c[k]);
                }
            }
            miin = min(miin,zz);
        }
        maax = max(maax,miin);
    }
    printf("%d\n",maax);
    return 0;
}

*/

/*
int main()
{
    int T;
    int n,m,s,*k;
    int a[100010];
    
    for (scanf("%d",&T);T --;)
    {
        scanf("%d%d",&n,&m);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        s = ++ a[0];
        m --;
        sort(a, a + n);
        k = lower_bound(a, a + n, s);
        
//        for (int i = 0;i < n;i ++) printf("%d ",a[i]);
//        printf("\n");
        
        for (int *i = a + n - 1;i > k && m > 0;i --,m --) {
            (*i) ++;
        }
        
//        for (int i = 0;i < n;i ++) printf("%d ",a[i]);
//        printf("\n");
        
        for (int *i = a;i < k && m > 0;i ++, m --) {
            (*i) ++;
        }
        
        sort(a, a + n);
//        for (int i = 0;i < n;i ++) printf("%d ",a[i]);
//        printf("\n");
        
        k = lower_bound(a, a + n, s);
        printf("%lu\n",a + n - k);
    }
    return 0;
}
*/

/*int cont = 0;
int i;

void dfs(int dps,int k)
{
    if (k < 0) return;
    if (dps >= i * 2) {
        if (dps == i * 2 && k == 0) cont ++;
        return;
    }
    dfs(dps + 1,k - 1);
    dfs(dps + 2,k);
    dfs(dps + 1,k + 1);
}

int main()
{
    int n = 100;
    for (i = 0;i <= n;i ++) {
        cont = 0;
        dfs(0,0);
        printf("%d: %d\n",i,cont);
    }
    return 0;
}
*/

/// 逆元：a / b % mod = a * qp(b,mod - 2) % mod;
/*const int mod = 998244353;

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
    const int mod = 998244353;
    int n;
    scanf("%d",&n);
    ll a[100010] = {0};
    a[0] = 1;
    a[1] = 2;
    for (int i = 2;i <= n;i ++) {
        a[i] = ((6 * i - 3) * a[i - 1] % mod- (i - 2) * a[i - 2] % mod + mod) % mod * quickpow(i + 1,mod - 2) % mod;
    }
    printf("%lld\n",a[n]);
    return 0;
}
*/


/// a % c = d
/// b % c = d
/// (a - b) % c = 0
/*int main()
{
    string str;
    cin >> str;
    int k;
    int last = 0;
    int a[2020] = {0};
    a[0] = 1;
    ll ans = 0;
    int l = 1;
    for (int i = (int) str.size() - 1;i >= 0;i --) {
        k = str[i] ^ 48;
        last = (last + k * l) % 2019;
        l = (l * 10) % 2019;
        ans += a[last] ++;
    }
    printf("%lld\n",ans);
    return 0;
}
*/

/*class Object {
protected:
    int i;
    string type;
public:
    Object(int index,string type):i(index),type(type)
    {
        cout << "You create a " << type << "! Indexed " << i << "." << endl;
    }
    
    ~Object()
    {
        cout << i << "-th " << type << " was Destoried!" << endl;
    }
};

class Window : public Object {
    
public:
    Window(int index):Object(index,"Window") {}
    
    void open() {
        cout << "Window " << i << " opened!" << endl;
    }
};

class Wheel : public Object {
public:
    Wheel(int index):Object(index,"Wheel") {}
    
    void run()
    {
        cout << "Wheel " << i << " is running!" << endl;
    }
};

class Door : public Object  {
public:
    Door(int index):Object(index,"Door") {}
    
    void open() {
        cout << "Door " << i << " opened!" << endl;
    }
};

class Car {
    Door *doors[4];
    Wheel *wheels[4];
    Window *windows[4];
    string name;
public:
    Car(string name):name(name)
    {
        for (int i = 0;i < 4;i ++) {
            doors[i] = new Door(i);
            wheels[i] = new Wheel(i);
            windows[i] = new Window(i);
        }
        cout << "You create a Car!" << endl;
    }
    
    void call()
    {
        cout << "My name is " << name << "." << endl;
    }
    
    void run()
    {
        for (int i = 0;i < 4;i ++) {
            wheels[i] -> run();
        }
    }
        
    void openDoor(int i) {
        doors[i] -> open();
    }
        
    void openWindow(int i) {
        windows[i] -> open();
    }
    
    ~Car()
    {
        for (int i = 0;i < 4;i ++) {
            delete doors[i];
            delete wheels[i];
            delete windows[i];
        }
        cout << "Your car \"" << name << "\" was destroied!" << endl;
    }
};

int main()
{
    Car c("Jack");
    c.call();
    c.openDoor(0);
    c.run();
    c.openWindow(1);
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    if (T == 1) printf("Yang\n");
    else printf("Shi\n");
    return 0;
}

*/

/*int isZhi(int n)
{
    if (n == 1) return 0;
    for (int i = 2;i <= sqrt(n);i ++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int T;
    scanf("%d",&T);
    ll j;
    int i,p;
    while (T --) {
        scanf("%d",&p);
        if (isZhi(p)) {
            printf("%d\n",p);
            continue;
        }
        j = 1;
        for (i = 1;i <= p;i ++) {
            j = (j * i) % p;
            if (j == 0) {
                printf("%d\n",i);
                break;
            }
            
            if (p % i == 0) {
                if (p / i > i && isZhi(p / i)) {
                    printf("%d\n",p / i);
                    break;
                }
            }
        }
    }
    return 0;
}
*/

/// 数组模拟链表
/*
int a[500010];
int nxt[500010];
int ed;

int main()
{
    int n,q;
    memset(nxt, -1, sizeof(nxt));
    scanf("%d%d",&n,&q);
    int in;
    int start = 1;
    for (int i = 1;i <= n;i ++) {
        scanf("%d",a + i);
        if (i != n) nxt[i] = i + 1;
    }
    ed = n + 1;
    int op,k;
    for (int i = 0;i < q;i ++) {
        scanf("%d",&op);
        if (op == 1) {
            scanf("%d%d",&k,&in);
            a[ed] = in;
            nxt[ed] = nxt[k];
            nxt[k] = ed ++;
        } else {
            scanf("%d",&in);
            k = start;
            for (int i = 1;i < in;i ++) {
                k = nxt[k];
            }
            printf("%d\n",a[k]);
        }
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    int a[200010];
    int nxt[200010];
    int pre[200010];
    memset(nxt, -1, sizeof(nxt));
    memset(pre, -1, sizeof(pre));
    int in;
    scanf("%d",&n);
    for (int i = 1;i <= n;i ++) {
        scanf("%d",a + i);
        if (i != n) nxt[i] = i + 1;
        if (i != 1) pre[i] = i - 1;
    }
    for (int i = 0;i < n;i ++) {
        scanf("%d",&in);
        printf("%d %d\n",(pre[in] != -1) ? a[pre[in]] : -1,nxt[in] != -1 ? a[nxt[in]] : -1);
        if (nxt[in] != -1) pre[nxt[in]] = pre[in];
        if (pre[in] != -1) nxt[pre[in]] = nxt[in];
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    for (int i = 1;i <= n;i ++) scanf("%d",a + i);
    int miin = INT_INF;
    int d = 0;
    for (int i = 1;i <= n - 2;i ++) {
        int mx = max(a[i],a[i + 2]);
        if (mx < miin) {
            miin = mx;
            d = i;
        }
    }
    printf("%d %d\n",d,miin);
    return 0;
}
*/

/*vector<pair<char,string>> g['z' + 1];

int main()
{
    string str;
    cin >> str;
    int n;
    scanf("%d",&n);
    string in;
    while (n --) {
        cin >> in;
        g[in[0]].push_back(make_pair(in[in.size() - 1],in));
    }
    vector<pair<char,string>> k = g[str[str.size() - 1]];
    if (k.size() == 0) printf("?\n");
    else {
        int ok = 0;
        string a;
        for (auto i : k) {
            if (g[i.first].size() == 0) {
                ok = 1;
                a = i.second;
                break;
            } else if (i.second[0] == i.second[i.second.size() - 1]) {
                if (g[i.first].size() == 1) {
                    ok = 1;
                    a = i.second;
                    break;
                }
            }
        }
        if (ok) cout << a << "!" << endl;
        else cout << k[0].second << endl;
    }
    
    return 0;
}
*/

/*
int main()
{
    cio
    string str;
    getline(cin, str);
    int w = 0;
    for (int i = 0;str[i];i ++) if (str[i] == ' ') w ++;
    int n;
    cin >> n;
    vector<string> all;
    for (int i = 0;i < n;i ++) {
        cin >> str;
        all.push_back(str);
    }
    vector<string> a,b;
    int size,s = 0;
    int t = 1;
    while (!all.empty()) {
        size = (int) all.size();
        s = (s + w) % size;
        if (t) a.push_back(all[s]);
        else b.push_back(all[s]);
        t = !t;
        all.erase(all.begin() + s);
    }
    cout << a.size() << endl;
    for (auto i : a) cout << i << endl;
    cout << b.size() << endl;
    for (auto i : b) cout << i << endl;
    return 0;
}
*/

/*
int main()
{
    ll n,m,a;
    scanf("%lld%lld%lld",&n,&m,&a);
    if (m == n && m == 1) printf("0\n");
    if (a % m == 0 || a % n == 0) printf("1\n");
    else {
        ll mx = max(m,n);
        ll mn = min(m,n);
        int ok = 0;
        for (int i = 1;i <= mn;i ++) {
            if (a % i == 0) {
                if (a / i < mx) {
                    ok = 1;
                    break;
                }
            }
        }
        a = m * n - a;
        for (int i = 1;i <= mn;i ++) {
            if (a % i == 0) {
                if (a / i < mx) {
                    ok = 1;
                    break;
                }
            }
        }
        if (ok) printf("2\n");
        else printf("3\n");
    }
    return 0;
}
*/

/*
ll case1(ll a1,ll b1,ll a2,ll b2,ll a3,ll b3)
{
    ll h = max(max(b1,b2),b3);
    ll w = a1 + a2 + a3;
    return h * w;
}

ll case2(ll a1,ll b1,ll a2,ll b2,ll a3,ll b3)
{
    ll s;
    if (b2 == b3) {
        ll w = max(a2 + a3,a1);
        ll h = b2 + b1;
        s = w * h;
    } else {
        ll w;
        ll h;
        if (b2 > b3) {
            swap(b2,b3);
            swap(a2,a3);
        }
        w = a3 + max(a2,a1);
        h = max(b3,b2 + b1);
        s = w * h;
        w = max(a2 + a3,a1);
        h = b3 + b1;
        s = min(s,w * h);
    }
    return s;
}

int main()
{
    int T;
    ll a1,b1,a2,b2,a3,b3;
    for (scanf("%d",&T);T --;)
    {
        scanf("%lld%lld%lld%lld%lld%lld",&a1,&b1,&a2,&b2,&a3,&b3);
        ll m1 = case1(a1,b1,a2,b2,a3,b3);
        m1 = min(m1,case1(b1,a1,a2,b2,a3,b3));
        m1 = min(m1,case1(b1,a1,b2,a2,a3,b3));
        m1 = min(m1,case1(a1,b1,b2,a2,a3,b3));
        m1 = min(m1,case1(b1,a1,a2,b2,b3,a3));
        m1 = min(m1,case1(a1,b1,a2,b2,b3,a3));
        m1 = min(m1,case1(a1,b1,b2,a2,b3,a3));
        m1 = min(m1,case1(b1,a1,b2,a2,b3,a3));
        
        ll m2 = case2(a1,b1,a2,b2,a3,b3);
        m2 = min(m2,case2(b1,a1,a2,b2,a3,b3));
        m2 = min(m2,case2(a1,b1,b2,a2,a3,b3));
        m2 = min(m2,case2(b1,a1,b2,a2,a3,b3));
        m2 = min(m2,case2(a1,b1,a2,b2,b3,a3));
        m2 = min(m2,case2(b1,a1,a2,b2,b3,a3));
        m2 = min(m2,case2(a1,b1,b2,a2,b3,a3));
        m2 = min(m2,case2(b1,a1,b2,a2,b3,a3));
        
    
        m2 = min(m2,case2(a1,b1,a3,b3,a2,b2));
        m2 = min(m2,case2(b1,a1,a3,b3,a2,b2));
        m2 = min(m2,case2(a1,b1,b3,a3,a2,b2));
        m2 = min(m2,case2(b1,a1,b3,a3,a2,b2));
        m2 = min(m2,case2(a1,b1,a3,b3,b2,a2));
        m2 = min(m2,case2(b1,a1,a3,b3,b2,a2));
        m2 = min(m2,case2(a1,b1,b3,a3,b2,a2));
        m2 = min(m2,case2(b1,a1,b3,a3,b2,a2));
        
        m2 = min(m2,case2(a2,b2,a1,b1,a3,b3));
        m2 = min(m2,case2(b2,a2,a1,b1,a3,b3));
        m2 = min(m2,case2(a2,b2,b1,a1,a3,b3));
        m2 = min(m2,case2(b2,a2,b1,a1,a3,b3));
        m2 = min(m2,case2(a2,b2,a1,b1,b3,a3));
        m2 = min(m2,case2(b2,a2,a1,b1,b3,a3));
        m2 = min(m2,case2(a2,b2,b1,a1,b3,a3));
        m2 = min(m2,case2(b2,a2,b1,a1,b3,a3));
        
        m2 = min(m2,case2(a2,b2,a3,b3,a1,b1));
        m2 = min(m2,case2(b2,a2,a3,b3,a1,b1));
        m2 = min(m2,case2(a2,b2,b3,a3,a1,b1));
        m2 = min(m2,case2(b2,a2,b3,a3,a1,b1));
        m2 = min(m2,case2(a2,b2,a3,b3,b1,a1));
        m2 = min(m2,case2(b2,a2,a3,b3,b1,a1));
        m2 = min(m2,case2(a2,b2,b3,a3,b1,a1));
        m2 = min(m2,case2(b2,a2,b3,a3,b1,a1));
        
        m2 = min(m2,case2(a3,b3,a1,b1,a2,b2));
        m2 = min(m2,case2(b3,a3,a1,b1,a2,b2));
        m2 = min(m2,case2(a3,b3,b1,a1,a2,b2));
        m2 = min(m2,case2(b3,a3,b1,a1,a2,b2));
        m2 = min(m2,case2(a3,b3,a1,b1,b2,a2));
        m2 = min(m2,case2(b3,a3,a1,b1,b2,a2));
        m2 = min(m2,case2(a3,b3,b1,a1,b2,a2));
        m2 = min(m2,case2(b3,a3,b1,a1,b2,a2));
        
        m2 = min(m2,case2(a3,b3,a2,b2,a1,b1));
        m2 = min(m2,case2(b3,a3,a2,b2,a1,b1));
        m2 = min(m2,case2(a3,b3,b2,a2,a1,b1));
        m2 = min(m2,case2(b3,a3,b2,a2,a1,b1));
        m2 = min(m2,case2(a3,b3,a2,b2,b1,a1));
        m2 = min(m2,case2(b3,a3,a2,b2,b1,a1));
        m2 = min(m2,case2(a3,b3,b2,a2,b1,a1));
        m2 = min(m2,case2(b3,a3,b2,a2,b1,a1));
        
        printf("%lld\n",min(m1,m2));
    }
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[1000010];
    int s = 0;
    for (int i = 0;i < n;i ++) {
        scanf("%d",a + i);
        s += a[i];
    }
    sort(a, a + n);
    int g = 0;
    for (int i = 0;i < n && m > s;i ++) {
        s += 9 - a[i];
        a[i] = 9;
        g ++;
    }
    printf("%d\n",g);
    return 0;
}
*/

/*int vis[15] = {0};
int n;

int all;

void dfs(int d)
{
    if (vis[d]) dfs(d + 1);
    if (d > n) {
        all ++;
        return;
    }
    for (int i = 1;i <= n;i ++) {
        if (!vis[i] && !vis[d]) {
            vis[i] = 1;
            vis[d] = 1;
            dfs(d + 1);
            vis[i] = 0;
            vis[d] = 0;
        }
    }
}*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    ll a[100010];
    a[1] = 1;
    a[2] = 2;
    int mod = 1000000007;
    for (int i = 3;i <= n;i ++) {
        a[i] = (a[i - 1] + a[i - 2] * (i - 1) % mod) % mod;
    }
    printf("%lld\n",a[n]);
    return 0;
}
*/


//int vis[30] = {0};
//int del[30] = {0};
//vector<int> g[30];
//int a[30];
//
//int mx = -1;
//int mx_n = 0;
//
//int n,l;
//
//void dfs(int n,int d)
//{
//    vis[n] = 1;
//    if (d > mx) {
//        mx = d;
//        mx_n = n;
//    }
//    for (auto i : g[n]) {
//        if (!vis[i] && !del[i]) dfs(i,d + 1);
//    }
//}
//
//int k = 0;
//
//int make(int ok) {
//
//        mem(vis,0);
//        mx = -1;
//        dfs(ok,0);
//        int s = mx_n;
//
//        mem(vis,0);
//        mx = -1;
//        dfs(s,0);
////        printf("%d->%d\n",s,e);
//        return mx;
//}
//
//int main()
//{
//    scanf("%d%d",&n,&l);
//    for (int i = 1;i <= n;i ++) scanf("%d",a + i);
//    int u,v;
//    for (int i = 0;i < n - 1;i ++) {
//        scanf("%d%d",&u,&v);
//        g[u].push_back(v);
//        g[v].push_back(u);
//    }
//
//    int all = 1 << n;
//    int k;
//    int mn = INT_INF;
//    int mm = -1;
//    int x;
//    for (int i = 0;i < all;i ++) {
//        k = i;
//        mem(del,0);
//        x = 0;
//        for (int j = 1;k != 0;j ++) {
//            if ((del[j] = k & 1) == 1) {
//                x += a[j];
//            }
//            k >>= 1;
//        }
////        for (int i = 1;i <= n;i ++) printf("%d ",a[i]);
////        printf("\n");
////        for (int i = 1;i <= n;i ++) printf("%d ",del[i]);
////        printf("\n");
////        printf("%d\n",x);
//        mm = -1;
//        int t;
//        int ok = 1;
//        for (int j = 1;j <= n;j ++) {
//            if (!del[j]) {
//                t = make(j);
//                if (mm != -1 && t != mm) {
//                    ok = 0;
//                    break;
//                } else mm = t;
//            }
//        }
//        if (mm < l && ok) mn = min(mn,x);
//    }
//    printf("%d\n",mn);
//
//
////    make();
////    printf("%d\n",k);
//
//    return 0;
//}

/*
int a[5000010];
int b[5000010];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    for (int i = 0;i < m;i ++) scanf("%d",b + i);
    int f = 1;
    int i = 0,j = 0;
    for (;i < n && j < m;)
    {
        if (f) f = 0;
        else printf(" ");
        if (a[i] <= b[j]) {
            printf("%d",a[i]);
            i ++;
        } else {
            printf("%d",b[j]);
            j ++;
        }
    }
    for (;i < n;i ++) printf(" %d",a[i]);
    for (;j < m;j ++) printf(" %d",b[j]);
    printf("\n");
    return 0;
}
*/

//int t[1000010];
//
//void merge(int *a,int *e)
//{
//    int n = (int) (e - a);
//    int k = 0;
//    int m = n / 2;
//    int i = 0,j = m;
//
//    for (;i < m && j < n;) {
//        if (a[i] <= a[j]) {
//            t[k ++] = a[i ++];
//        } else {
//            t[k ++] = a[j ++];
//        }
//    }
//    for (;i < m;i ++) t[k ++] = a[i];
//    for (;j < n;j ++) t[k ++] = a[j];
//    for (int i = 0;i < n;i ++) {
//        a[i] = t[i];
//    }
//}
//
//void merge_sort(int *a,int *e)
//{
//    int n = (int) (e - a);
//    int j;
//    for (int i = 2;i < n;i *= 2) {
//        for (j = 0;j + i < n;j += i) {
//
//        }
//    }
//}
//
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[1000010];
//    for (int i = 0;i < n;i ++) scanf("%d",a + i);
//
//    return 0;
//}

/*
int main()
{
    int k,a,b;
    scanf("%d%d%d",&k,&a,&b);
    int x = a / k;
    int y = x * k;
    if (y <= b && y >= a) printf("OK\n");
    else {
        y = (x + 1) * k;
        if (y <= b && y >= a) printf("OK\n");
        else printf("NG\n");
    }
    
    
    return 0;
}
*/

/*
int main()
{
    ll x;
    scanf("%lld",&x);
    ll k = 100;
    ll f = 0;
    while (k < x) {
        k *= 1.01;
        f ++;
    }
    printf("%lld\n",f);
    return 0;
}
*/

/*
int n,m,q;
int mx = -1;

struct Score {
    int a,b,c,d;
} arr[100];

void dfs(int k,int d,vector<int> A) {
    if (d == n) {
        int s = 0;
        for (int j = 0;j < q;j ++) {
            if (A[arr[j].b - 1] - A[arr[j].a - 1] == arr[j].c) {
                s += arr[j].d;
            }
        }
        mx = max(mx,s);
        return;
    }
    for (int i = k;i <= m;i ++) {
        A.push_back(i);
        dfs(i,d + 1,A);
        A.erase(A.end() - 1);
    }
}

int main()
{
    scanf("%d%d%d",&n,&m,&q);
    
    int a,b,c,d;
    for (int i = 0;i < q;i ++) {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        arr[i].a = a;
        arr[i].b = b;
        arr[i].c = c;
        arr[i].d = d;
    }
    dfs(1,0,vector<int>());
    printf("%d\n",mx);
    return 0;
}
*/

/*
int main()
{
    ll a,b,n;
    scanf("%lld%lld%lld",&a,&b,&n);
    ll x;
    if (b <= n) x = b - 1;
    else x = n;
    printf("%lld\n",a * x / b - a * (x / b));
    return 0;
}
*/

/*
int main()
{
    uint n;
    scanf("%u",&n);
    bitset<32> b;
    uint i = 0;
    while (n != 0) {
        b[i ++] = n & 1;
        n >>= 1;
    }
    int f = 1;
    for (int i = 31;i >= 0;i --) {
        if (!f) b[i].flip();
        if (f && b[i]) {
            b[i].flip();
            f = 0;
        }
    }
    uint k = 0;
    for (uint i = 0,j = 31;i < 32;i ++,j --) {
        k += b[i] * (1 << j);
    }
    printf("%u\n",k);
    return 0;
}
*/

/*int main()
{
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    s += 33;
    if (s >= 60) {
        s -= 60;
        m ++;
    }
    m += 22;
    if (m >= 60) {
        m -= 60;
        h ++;
    }
    h += 1;
    ll b = 19 * 60 * 60;
    ll e = 21 * 60 * 60;
    ll k = h * 60 * 60 + m * 60 + s;
    if (k >= e) printf("too late\n");
    else if (k >= b) printf("arrive late\n");
    else if (k < b) printf("arrive on time\n");
    return 0;
}
*/

/*
int main()
{
    int n,m;
    int a[100010];
    scanf("%d%d",&n,&m);
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    sort(a,a + n);
    int l = 1;
    int r = a[n - 1];
    int s,x;
    int mm = 0;
    while (l <= r) {
        x = (l + r) / 2;
        s = 0;
        for (int i = 0;i < n;i ++) {
            s += a[i] / x;
        }
        if (s >= m) {
            mm = max(mm,x);
            l = x + 1;
        } else {
            r = x - 1;
        }
    }
    printf("%d\n",mm);
    return 0;
}
*/

/*
int main()
{
    ll k,l;
    scanf("%lld%lld",&k,&l);
    int x = log2(l);
    ll m = log2(l);
    while (x <= k && x > 0 && l != 0) {
        l -= (1ll << x);
        x = log2(l);
    }
    if (l == 0) {
        printf("Yes\n%lld\n",1ll << m);
    } else printf("No\n");
    return 0;
}
*/

/// lca
/*
int bcj[100010];
int d[100010];

int find(int a)
{
    if (bcj[a] == a) return a;
    return bcj[a] = find(bcj[a]);
}

inline void bind(int a,int b)
{
    int x = find(a), y = find(b);
    if (d[x] >= d[y]) { // 如果a的 根的子树深度 比b的 根的子树深度 大，那a的根继续做根
        bcj[y] = x; // 改变b节点的根的根为a的根
        if (d[x] == d[y]) { // 俩根深度一样
            if (x != y) d[x] ++; // 作为a的根，自然子树的深度++
        }
    } else bcj[x] = y;
}

vector<int> g[100010];
int h[100010] = {0};

void dfs(int n,int d)
{
    h[n] = d;
    for (auto i : g[n]) {
        
        dfs(i,d + 1);
    }
    
}

map<pair<int,int>,int> dis;

vector<int> query[100010]; //所有查询的内容
int ancestor[100010]; //已访问节点集合的祖先
bool vs[100010] = {0};      //访问标志
void Tarjan(int x) //Tarjan算法求解LCA
{
    for (auto i : g[x])
    {
        Tarjan(i);         //访问子树
        bind(x, i); //将子树节点与根节点x的集合合并
        ancestor[find(x)] = x;//合并后的集合的祖先为x
    }
    vs[x] = 1; //标记为已访问
    for (auto i : query[x]) //与根节点x有关的查询
        if (vs[i]){
            pair<int,int> v = make_pair(min(x,i),max(x,i));
            dis[v] = ancestor[find(i)]; //如果查询的另一个节点已访问，则输出结果
        }
}

int main()
{
    int a[100010];
    mem(a,-1);
    int n,q;
    scanf("%d%d",&n,&q);
    
    for (int i = 1;i <= n;i ++) {
        bcj[i] = i;
        d[i] = 1;
        ancestor[i] = i;
    }
    
    int u = -1,v;
    for (int i = 0;i < n - 1;i ++) {
        scanf("%d%d",&u,&v);
        a[v] = u;
        g[u].push_back(v);
    }
    int k = u;
    int root = -1;
    while (k != -1) {
        root = k;
        k = a[k];
    }
    
    dfs(root,0);
//    for (int i = 1;i <= n;i ++) printf("%d ",h[i]);
    
    vector<pair<int,int>> all;
    
    for (int i = 0;i < q;i ++) {
        scanf("%d%d",&u,&v);
        query[u].push_back(v);
        query[v].push_back(u);
        all.push_back(make_pair(u, v));
    }
    
    Tarjan(root);
    int kk,x;
    for (auto i : all) {
        
        kk = dis[make_pair(min(i.first,i.second), max(i.first,i.second))];
        if (kk == i.first || kk == i.second) {
            printf("NO\n%d\n",abs(h[i.second] - h[i.first]));
        } else {
            x = h[i.first] + h[i.second] - h[kk] * 2;
            if (x <= 4) printf("NO\n");
            else printf("YES\n");
            printf("%d\n",x);
        }
    }
    
    
    return 0;
}
*/

/*
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int s[110] = {0};
    int d;
    int in;
    for (int i = 0;i < k;i ++) {
        scanf("%d",&d);
        for (int j = 0;j < d;j ++) {
            scanf("%d",&in);
            s[in] ++;
        }
    }
    int c = 0;
    for (int i = 1;i <= n;i ++) if (s[i] == 0) c ++;
    printf("%d\n",c);
    return 0;
}
*/

/*
vector<int> g[100010];
int vis[100010] = {0};

int a[100010];
int c = 0;

void dfs(int n) {
    vis[n] = 1;
    int ok = 1;
    for (auto i : g[n]) {
        if (a[i] >= a[n]) ok = 0;
        if (!vis[i]) dfs(i);
    }
    if (ok) c ++;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1;i <= n;i ++) {
        scanf("%d",a + i);
    }
    int u,v = 1;
    for (int i = 0;i < m;i ++) {
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1;i <= n;i ++) {
        if (!vis[i]) dfs(i);
    }
    printf("%d\n",c);
    return 0;
}
*/

/*
int main()
{
    ll x;
    scanf("%lld",&x);
    for (ll a = -500;a <= 500;a ++) {
        for (ll b = -500;b <= 500;b ++) {
            if (a * a * a * a * a - b * b * b * b * b == x) {
                printf("%lld %lld\n",a,b);
                return 0;
            }
        }
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[200010];
    for (int i = 1;i <= n;i ++) {
        scanf("%d",a + i);
    }
    int x[200010];
    for (int i = 1;i <= n;i ++) {
        x[i] = i - a[i];
    }
    sort(x + 1, x + 1 + n);
    ll c = 0;
    for (int i = 1;i <= n;i ++) {
        if (a[i] + i == i - a[i]) c --;
        int *l = lower_bound(x + 1, x + n + 1, a[i] + i);
        int *e = upper_bound(x + 1, x + n + 1, a[i] + i);
        c += e - l;
    }
    printf("%lld\n",c);
    return 0;
}
*/

// 优先队列https://ac.nowcoder.com/acm/contest/5207/H
// 仅仅考虑最高的奶牛即可
/*
int cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second < b.second;
}

int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    pair<int,int> a[50010];
    int x,h;
    for (int i = 0;i < n;i ++) {
        scanf("%d%d",&x,&h);
        a[i].first = h;
        a[i].second = x;
    }
    sort(a, a + n,cmp);
    priority_queue<pair<int, int>> q;
    int vis[50010] = {0};
    for (int i = 0;i < n;i ++) {
        while (!q.empty() && q.top().second < a[i].second - d) q.pop();
        if (!q.empty() && q.top().first >= 2 * a[i].first) vis[i] ++;
        q.push(a[i]);
    }
    while (!q.empty()) q.pop();
    
    for (int i = n - 1;i >= 0;i --) {
        while (!q.empty() && q.top().second > a[i].second + d) q.pop();
        if (!q.empty() && q.top().first >= 2 * a[i].first) vis[i] ++;
        q.push(a[i]);
    }
    
    int c = 0;
    for (int i = 0;i < n;i ++) if (vis[i] == 2) c ++;
    printf("%d\n",c);
    return 0;
}
*/

/*int n;

int p(int a,int b) {
    return (a + n + b) % n;
}

int chk(int *a,int i,int j,int k) {
    int i1 = 0,i2 = 0,i3 = 0;
    for (int v = -2;v <= 2;v ++) {
        if (p(a[0],v) == i) i1 = 1;
        if (p(a[1],v) == j) i2 = 1;
        if (p(a[2],v) == k) i3 = 1;
    }
    return i1 && i2 && i3;
}

int main()
{
    scanf("%d",&n);
    int a[3],b[3];
    scanf("%d%d%d",a,a + 1,a + 2);
    scanf("%d%d%d",b,b + 1,b + 2);
    for (int i = 0;i < 3;i ++) {
        a[i] --;
        b[i] --;
    }
    int c = 0;
    for (int i = 0;i < n;i ++) {
        for (int j = 0;j < n;j ++) {
            for (int k = 0;k < n;k ++) {
                if (chk(a, i, j, k) || chk(b, i, j, k)) c ++;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
*/

/*
int main()
{
    int n,X,Y,Z,x,y,z;
    scanf("%d%d%d%d",&n,&X,&Y,&Z);
    int a[20010],b[20010];
    for (int i = 0;i < n;i ++) scanf("%d%d",a + i,b + i);
    sort(a, a + n);
    sort(b, b + n);
    // 以温度下限a[i]枚举温度
    int m = -1;
    
    for (int i = 0,j = 0;i < n;i ++) {
        while (j < n && a[i] > b[j]) j ++;
        x = n - i - 1;
        z = j;
        y = n - x - z;
        printf("%d %d %d\n",x,y,z);
        m = max(m,x * X + y * Y + z * Z);
    }
    printf("%d\n",m);
    return 0;
}
*/

//int main()
//{
//    string size[] = {"large","small"},
//    color[] = {"brown", "white","spotted"},
//    sound[] = {"noisy","silent"};
//    struct Des {
//        string size;
//        string color;
//        string sound;
//        int operator < (const Des &o) const
//        {
//            return size + color + sound < o.size + o.color + o.sound;
//        }
//    };
//    set<Des> a;
//    for (int i = 0;i < 2;i ++) {
//        for (int j = 0;j < 3;j ++) {
//            for (int k = 0;k < 2;k ++) {
//                a.insert({size[i],color[j],sound[k]});
//            }
//        }
//    }
//
//    int n,k;
//    scanf("%d%d",&n,&k);
//    string in[10];
//
//    for (int i = 0;i < n;i ++) {
//        for (int j = 0;j < 8;j ++) cin >> in[j];
//        a.erase(a.find({in[4],in[5],in[6]}));
//    }
//    int j = 1;
//    for (auto i : a) {
//        if (j == k) {
//            cout << i.size << " " << i.color << " " << i.sound << endl;
//            break;
//        }
//        j ++;
//    }
//    return 0;
//}

/*
int cnt[3000010] = {0};

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    ll x,y,a,b;
    for (int i = 0;i < k;i ++) {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        for (int i = 1;i <= y;i ++) {
            cnt[(a * i + b) % n] += x;
        }
    }

    for (int i = 0;i < 2 * n;i ++) {
        if (cnt[i % n] > 1) {
            cnt[(i + 1) % n] += cnt[i % n] - 1;
            cnt[i % n] = 1;
        }
    }

    for (int i = 0;i < n;i ++) if (cnt[i] == 0) {
        printf("%d\n",i);
        break;
    }
    return 0;
}
*/

/// 并查集+离散化 使用unique函数，比set快
/*
int g[2000010];
int d[2000010];

int dis[2000010];

int find(int a)
{
    if (g[a] == a) return a;
    return g[a] = find(g[a]);
}

inline void bind(int a,int b)
{
    int x = find(a), y = find(b);
    if (d[x] >= d[y]) { // 如果a的 根的子树深度 比b的 根的子树深度 大，那a的根继续做根
        g[y] = x; // 改变b节点的根的根为a的根
        if (d[x] == d[y]) { // 俩根深度一样
            if (x != y) d[x] ++; // 作为a的根，自然子树的深度++
        }
    } else g[x] = y;
}

int main()
{
    int T;
    scanf("%d",&T);
    int n,a,b,c,len;
    struct Q {
        int a,b,c;
    };
    vector<pair<int,int>> m;
    vector<Q> k;
    while (T --) {
        m.clear();
        k.clear();
        len = 0;
        scanf("%d",&n);
        while (n --) {
            scanf("%d%d%d",&a,&b,&c);
            k.push_back({a,b,c});
            dis[len ++] = a;
            dis[len ++] = b;
        }
        
        sort(dis, dis + len);
        len = (int) (unique(dis, dis + len) - dis);
        
        for (int i = 0;i < len;i ++) {
            g[i] = i;
            d[i] = 1;
//            printf("%d ",dis[i]);
        }
//        printf("\n");
        
        for (auto i : k) {
            a = (int) (lower_bound(dis, dis + len, i.a) - dis);
            b = (int) (lower_bound(dis, dis + len, i.b) - dis);
            if (i.c) bind(a,b);
            else m.push_back(make_pair(a, b));
        }
        
        int ok = 1;
        for (auto i : m) {
            if (find(i.first) == find(i.second)) {
                ok = 0;
                break;
            }
        }
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/

///分层图
/*
int dis[1000010];

int vis[1000010] = {0};

struct ST {
    int n; // 去哪个站
    int w; // 一站的钱
    
    bool operator< (const ST &other) const {
        return w > other.w;
    }
};
vector<ST> g[1000010];

void dij(int s) {
    mem(dis,-1);
    
    priority_queue<ST> q;
    q.push({s,dis[s] = 0});
    
    ST current;
    int k;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.n]) continue;
        vis[current.n] = 1;
        
        for (auto to : g[current.n]) {
            k = dis[current.n] + to.w;
            if (dis[to.n] == -1 || dis[to.n] > k) {
                q.push({to.n,dis[to.n] = k});
            }
        }
    }
}

int main()
{
    int n,m,s,t;
    scanf("%d%d%d%d",&n,&m,&s,&t);
    int a,b,c;
    int ci[1010];
    for (int i = 1;i <= m;i ++) {
        scanf("%d%d%d%d",&a,&b,&c,ci);
        for (int j = 0;j < c;j ++) {
            if (j != 0) {
                scanf("%d",ci + j);
                g[ci[j - 1] + n * i].push_back({ci[j] + n * i,b});
                g[ci[j] + n * i].push_back({ci[j - 1] + n * i,b});
            }
            
            g[ci[j]].push_back({ci[j] + n * i,a});
            g[ci[j] + n * i].push_back({ci[j],0});
        }
    }
    dij(s);
    printf("%d\n",dis[t]);
//
//
//    for (int i = 1;i <= n;i ++) printf("%d ",vis[i]);
//    printf("\n");
//
//
//    for (int i = 1;i <= n;i ++) printf("%d ",dis[i]);
//    printf("\n");
//
    return 0;
}
*/

/*
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a;
    for (int i = 0;i < n;i ++) {
        scanf("%d",&a);
    }

    n -= k --;
    printf("%d\n",1 + (int) ceil(n / (double) k));
    return 0;
}
*/

/*
struct Node {
    int n,w;
    int operator<(const Node &o) const {
        return w > o.w;
    }
};

const int MAXN = 1000000;

vector<Node> g[MAXN];
int dis[MAXN];
int vis[MAXN] = {0};

void dij(int s) {
    mem(dis,-1);
    
    priority_queue<Node> q;
    q.push({s,dis[s] = 0});
    
    Node current;
    int k;
    while (!q.empty()) {
        current = q.top();
        q.pop();
        if (vis[current.n]) continue;
        vis[current.n] = 1;
        
        for (auto to : g[current.n]) {
            k = dis[current.n] + to.w;
            if (dis[to.n] == -1 || dis[to.n] > k) {
                q.push({to.n,dis[to.n] = k});
            }
        }
    }
}

int main()
{
    int m,n;
    scanf("%d%d ",&m,&n);
    string str;
    int in;
    int f,ff = -1;
    for (int i = 1;i <= m;i ++) {
        getline(cin, str);
        stringstream ss(str);
        f = 1;
        while (ss >> in) {
            if (f) {
                f = 0;
                ff = in;
            } else {
                g[i * n + ff].push_back({i * n + in,0});
                ff = in;
            }
            g[i * n + in].push_back({in,0});
            g[in].push_back({in + i * n,1});
        }
    }
    dij(1);
    
//    for (int i = 1;i <= n;i ++) {
//        printf("%d ",dis[i]);
//    }
//    printf("\n");
    
    if (dis[n] == -1) printf("NO\n");
    else printf("%d\n",dis[n] - 1);
    return 0;
}
*/

/*
inline int chk(int a,int b,int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
    for (int i = 0;i < n;i ++) {
        scanf("%d",a + i);
    }
    int ok = 0;
    for (int i = 0;i < n;i ++) {
        for (int j = i + 1;j < n;j ++) {
            for (int k = j + 1;k < n;k ++) {
                if (chk(a[i],a[j],a[k])) {
                    printf("%d %d %d\n",a[i],a[j],a[k]);
                    ok = 1;
                    goto end;
                }
            }
        }
    }
    end:
    if (!ok) printf("No solution\n");
    return 0;
}
*/

/*
int main()
{
    double h,l,H,L;
    scanf("%lf%lf%lf%lf",&h,&l,&H,&L);
    if (h * L / H <= l) printf("%.8f\n",0.5 * h * h * L / H);
    else printf("%.8f\n",0.5 * l * l * H / L + l * (h - l * H / L));
    return 0;
}
*/

//
//int n;
//ll ok = -1;
//
//ll chk(int i,ll t)
//{
//    if (t % n == i) {
//        return t;
//    }
//    ll v;
//    v = t / n;
//    if (i < t % n) v ++;
//    v *= n;
//    v += i;
//    return v;
//}
//
//void prt(int j,int x)
//{
//    for (int i = 0;i < n;i ++) {
//        if (i < j) printf("%d ",x - 1);
//        else printf("%d ",x);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    scanf("%d",&n);
//    int a[100010];
//    ll x = 0;
//    for (int i = 0;i < n;i ++) {
//        scanf("%d",a + i);
//        x += a[i];
//    }
//    int l = floor(x / (double) n),
//    r = ceil(x / (double) n);
//    l --;
//    r ++;
////    if (l < 1) l = 1;
//    ll t = 0;
//    for (int i = l;i < r;i ++) {
//        t = 0;
//        for (int j = 0;j < n;j ++) {
//            t += abs(a[j] - (i + 1));
//        }
//        printf("\nt = %lld\n",t);
//        // chk once
//        prt(0,i + 1);
//        x = chk(0,t);
//        if (ok == -1) ok = x;
//        else ok = min(ok,x);
//        printf("%lld\n",x);
//        // chk rest
//        for (int j = 0;j < n;j ++) {
//            t -= abs(a[j] - (i + 1));
//            t += abs(a[j] - i);
//            printf("\nt = %lld\n",t);
//            x = chk((j + 1) % n,t);
//            if (ok == -1) ok = x;
//            else ok = min(ok,x);
//            prt(j + 1,i + 1);
//            printf("%lld\n",x);
//        }
//    }
//    printf("%lld\n",ok);
//
//    return 0;
//}
//
//
///*
//int n;
//ll ok = -1;
//
//void chk(int i,ll t)
//{
//    ll v;
//    if (t % n == i) {
//        v = t;
//    } else {
//        v = t / n;
//        if (i < t % n) v ++;
//        v *= n;
//        v += i;
//    }
//
//    if (ok == -1) ok = v;
//    else ok = min(ok,v);
//}
//
//int main()
//{
//    scanf("%d",&n);
//    int a[100010];
//    ll x = 0;
//    for (int i = 0;i < n;i ++) {
//        scanf("%d",a + i);
//        x += a[i];
//    }
//    int l = floor(x / (double) n),
//    r = ceil(x / (double) n);
//    l --;
//    r ++;
//    if (l < 1) l = 1;
//    ll t = 0;
//    for (int i = l;i < r;i ++) {
//        t = 0;
//        for (int j = 0;j < n;j ++) {
//            t += abs(a[j] - (i + 1));
//        }
//        // chk once
//        chk(0,t);
//        // chk rest
//        for (int j = 0;j < n;j ++) {
//            t -= abs(a[j] - (i + 1));
//            t += abs(a[j] - i);
//            chk((j + 1) % n,t);
//        }
//    }
//    printf("%lld\n",ok);
//
//    return 0;
//}
//
//*/

