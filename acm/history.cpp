//
//  history.cpp
//  acm
//
//  Created by 李弘辰 on 2019/9/4.
//  Copyright © 2019 李弘辰. All rights reserved.
//


/*#include <iostream>
 #include <stdio.h>
 #include <math.h>
 //#include <sstream>
 
 //void triangle();
 //void ants();
 void chouqian();
 
 using namespace std;
 
 string toString(int n)
 {
 //int length = 0;
 //length = log10(n);
 //length += 1;
 //string str;
 //for (int i = 0;i < length;i ++)
 //{
 //    str += ((int) n / pow(10,length - i - 1)) + '0';
 //    n = n % ((int) pow(10,length - i - 1));
 //}
 //return str;
 
 
 
 stringstream ss;
 ss << n;
 return ss.str();
 }
 
 int main(int argc, const char * argv[]) {
 // insert code here...
 
 return 0;
 }
 
 void triangle()
 {
 int n,N_MAX = 100;
 int a[N_MAX];
 scanf("%d",&n);
 
 for (int i = 0;i < n;i ++)
 {
 scanf("%d",&a[i]);
 }
 
 bool ok = false;
 
 for (int i = n - 1;i >= 0; i --)
 {
 int max = a[i];
 if (i - 2 >= 0)
 {
 if (a[i - 1] + a[i - 2] > max)
 {
 ok = true;
 cout << a[i - 2] + a[i - 1] + a[i];
 break;
 }
 } else
 {
 break;
 }
 }
 
 if (!ok)
 {
 cout << 0;
 }
 }*/

/*void ants()
 {
 int times = 0;
 scanf("%d",&times);
 for (int t = 0;t < times;t ++)
 {
 // Ants: --o-------o--------o-------- 求所有蚂蚁的最长时间/最短时间
 // 蚂蚁有往右的，也有往左的，但是可以不管这些，忽略蚂蚁的区别，那么问题
 int N_MAX = pow(10,6);
 int n,L;
 scanf("%d",&L);
 scanf("%d",&n);
 int L_mid = L / 2;
 int x[N_MAX];
 for (int i = 0;i < n;i ++)
 {
 scanf("%d",&x[i]);
 }
 
 int mid = 0;
 int max = 0;
 for (int i = 0;i < n;i ++)
 {
 // min
 if (x[i] <= L_mid)
 {
 if (x[i] > mid)
 {
 mid = x[i];
 }
 } else
 {
 if ((L - x[i]) > mid)
 {
 mid = L - x[i];
 }
 }
 // max
 if (x[i] > max)
 {
 max = x[i];
 }
 if (L - x[i] > max)
 {
 max = L - x[i];
 }
 }
 
 printf("%d %d\n",mid,max);
 }
 
 }*/

/*void chouqian()
 {
 
 }*/


/////////////////////////////////

/*#include<stdio.h>
#include<math.h>


void things()
{
    
}

int main()
{
    
    int r = 0;
    scanf("%d",&r);
    getchar();
    for (int k = 0;k < r;k ++)
    {
        things();
    }
}*/
/////////////////////

/*#include<stdio.h>

int main()
{
    int v,t;
    while(scanf("%d %d",&v,&t) != EOF)
    {
        printf("%d\n",v * t * 2);
    }
    printf("%d",EOF);
    return 0;
}*/

/*#include<stdio.h>
#include<stack>

int main()
{
    int n;
    scanf("%d",&n);
    int egg[101] = {0};
    for (int i = 0; i < n * 2 + 1; i ++) {
        int in;
        scanf("%d",&in);
        if (in == 0) break;
        else egg[in] += 1;
    }
    for (int i = 0;i < n;i ++)
    {
        
    }
    for (int i = 0;i < 101;i ++)
    {
        printf(" %d",egg[i]);
    }
    return 0;
}*/

/*#include<stdio.h>

void things()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    int min = -1;
    for (int i = 0;i < n;i ++)
    {
        int in;
        scanf("%d",&in);
        if (min == -1) min = in;
        if (in < min) min = in;
        nums[i] = in;
    }
    int gong = 1;
    for (int i = 1;i <= min;i ++)
    {
        int ok = 1;
        for (int j = 0;j < n;j ++)
        {
            if (nums[j] % i != 0) ok = 0;
        }
        if (ok == 1) gong = i;
    }
    printf("%d\n",gong);
}

int main()
{
    int r = 0;
    scanf("%d",&r);
    getchar();
    for (int k = 0;k < r;k ++)
    {
        things();
    }
    return 0;
}*/


/*#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

void things()
{
    int num;
    scanf("%d",&num);
    string str = "";
    while (num != 0)
    {
        int last = num % 16;
        num = num / 16;
        char n;
        if (last >= 0 && last <= 9) n = '0' + last;
        else n = 'A' + last - 10;
        str = n + str;
    }
    cout << str << endl;
}

int main()
{
    int r = 0;
    scanf("%d",&r);
    getchar();
    for (int k = 0;k < r;k ++)
    {
        things();
    }
    return 0;
}*/

///求余
/*#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    string n;
    int k;
    while (cin >> n >> k)
    {
        int last = 0;
        for (int i = 0;i < ((int) n.length());i ++)
        {
            int num = ((int) (n[i] - '0')) + last * 10;
            last = num % k;
        }
        printf("%d\n",last);
            
    }
    return 0;
}*/

/*#include<stdio.h>
#include<string>



int isHui(string n)
{
    
}

int main()
{
    int min,max;
    scanf("%d %d",&min,&max);
    for (int i = min;i <= max; i ++)
    {
        
    }
    return 0;
}
*/

/*#include<stdio.h>

int main()
{
    float m,n;
    scanf("%f %f",&m,&n);
    const float Fe = 56, H2 = 2;
    float mol_Fe = n / H2;
    float mFe = mol_Fe * Fe;
    float mCu = m - mFe;
    if (mCu < 0) printf("impossible");
    else printf("%.2f%%",mCu / m * 100);
    return 0;
}*/

/*#include<stdio.h>
#include<iostream>

using namespace std;

int a[21];
int n, k;

bool dfs(int i, int sum)
{
    if (i == n) return sum == k; //
    if (dfs(i + 1, sum)) return true; //
    if (dfs(i + 1, sum + a[i])) return true;
    return false;
}

int main()
{
    
    scanf("%d",&n);
    for (int i = 1;i <= n;i ++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    cout << dfs(1, 0);
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int input = 1;
    while (input != 0) {
        scanf("%d",&input);
        int sum = 0;
        for (int i = 0;i < input;i ++)
        {
            int in;
            scanf("%d",&in);
            sum += in;
        }
        if (input != 0) printf("%d\n",sum);
    }
    return 0;
}
*/

/*#include<stdio.h>

int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        printf("%d\n",a + b);
    }
    return 0;
}*/

/*#include<stdio.h>

void things()
{
    int input;
    scanf("%d",&input);
    int sum = 0;
    for (int i = 0;i < input;i ++)
    {
        int in;
        scanf("%d",&in);
        sum += in;
    }
    printf("%d\n",sum);
}

int main()
{
    int r = 0;
    scanf("%d",&r);
    getchar();
    for (int k = 0;k < r;k ++)
    {
        things();
    }
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>

void printNum(int n,int hasSpace)
{
    char pinyin[10][5] = {{'l','i','n','g','\0'},
        {'y','i','\0'},
        {'e','r','\0'},
        {'s','a','n','\0'},
        {'s','i','\0'},
        {'w','u','\0'},
        {'l','i','u','\0'},
        {'q','i','\0'},
        {'b','a','\0'},
        {'j','i','u','\0'}};
    if (hasSpace) printf(" ");
    printf("%s",pinyin[n]);
}

int main()
{
    
    char in[101];
    
    scanf("%s",in);
    int sum = 0;
    for (int i = 0;in[i] != '\0';i ++)
    {
        sum += in[i] - '0';
    }
    int length = log10(sum);
    length ++;
    
    for (int i = length;i > 0;i --)
    {
        int n = sum / pow(10, i - 1);
        sum = sum % ((int) pow(10, i - 1));
        int s = 0;
        if (i != length) s = 1;
        printNum(n, s);
    }
    printf("\n");
    return 0;
}
*/

/*#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<vector>

using namespace std;

int main()
{
    string in;
    cin >> in;
    vector<int> nums;
    for (int i = 0;in[i] != '\0';i ++)
    {
        nums.push_back(in[i] - '0');
    }
    int length = (int) nums.size();
    string op = "";
    // 234
    // 012
    // 23
    // 01
    for (int i = 0;i < length;i ++)
    {
        string single = "";
        switch (length - i - 1) {
            case 0:
                for (int j = 1;j <= nums[i];j ++)
                {
                    single += ((char) j) + '0';
                }
                op += single;
                break;
            case 1:
                for (int j = 1;j <= nums[i];j ++)
                {
                    single += "S";
                }
                op += single;
                break;
            case 2:
                for (int j = 1;j <= nums[i];j ++)
                {
                    single += "B";
                }
                op += single;
                break;
            default:
                break;
        }
    }
    cout << op << endl;
    
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[N];
    for (int i = 0;i < N;i ++)
    {
        int n = i + M;
        while (n >= N) n -= N;
        scanf("%d",&arr[n]);
    }
    int isF = 1;
    for (int i = 0;i < N;i ++)
    {
        if (isF == 1)
        {
            isF = 0;
        } else
        {
            printf(" ");
        }
        printf("%d",arr[i]);
    }
    return 0;
}*/

/*#include<string>
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    vector<string> words;
    string _text;
    getline(cin,_text);
    int last = 0;
    for (int i = 0;i <= _text.size();i ++){
        if (_text[i] == '\0' || _text[i] == ' ')
        {
            words.push_back(_text.substr(last,i - last));
            last = i + 1;
        }
    }
    bool isF = true;
    for (int i = (int) (words.size() - 1);i >= 0;i --)
    {
        if (!isF) printf(" ");
        else isF = false;
        cout << words[i];
    }
    cout << endl;
    return 0;
}*/

////////////////////////////////////////////////////////////////////////////////

/*#include <stdio.h>

int main()
{
    int a,b;
    int isFisrt = 1;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if (a == 0 || b == 0) continue;
        a = a * b;
        b -= 1;
        if (!isFisrt) printf(" ");
        else isFisrt = 0;
        printf("%d %d",a,b);
    }
    if (isFisrt) printf("0 0");
}
*/


//#include<stdio.h>
//
//
//int main()
//{
//    int r = 0;
//    scanf("%d",&r);
//    getchar();
//    for (int k = 0;k < r;k ++)
//    {
//        long long a,b,c;
//        scanf("%lld %lld %lld",&a,&b,&c);
//        int ok = 0;
//        if (a + b > c) ok = 1;
//        if (!ok) printf("Case #%d: false\n",k + 1);
//        else printf("Case #%d: true\n",k + 1);
//    }
//    return 0;
//}

/*#include<stdio.h>

int main()
{
    int r = 0;
    scanf("%d",&r);
    int A1 = 0,A2 = 0,A3 = 0,A4_n = 0,A5 = 0;
    int hasA[5] = {0};
    float A4 = 0;
    int isP = 1;
    for (int k = 0;k < r;k ++)
    {
        int num;
        scanf("%d",&num);
        if (num % 10 == 0)
        {
            A1 += num;
            hasA[0] = 1;
        }
        if (num % 5 == 1)
        {
            A2 += isP * num;
            isP *= -1;
            hasA[1] = 1;
        }
        if (num % 5 == 2)
        {
            A3 ++;
            hasA[2] = 1;
        }
        if (num % 5 == 3)
        {
            A4_n ++;
            A4 += (float) num;
            hasA[3] = 1;
        }
        if (num % 5 == 4)
        {
            if (num > A5) A5 = num;
            hasA[4] = 1;
        }
        
    }
    A4 /= (float) A4_n;
    if (hasA[0]) printf("%d",A1);
    else printf("N");
    printf(" ");
    if (hasA[1]) printf("%d",A2);
    else printf("N");
    printf(" ");
    if (hasA[2]) printf("%d",A3);
    else printf("N");
    printf(" ");
    if (hasA[3]) printf("%.1f",A4);
    else printf("N");
    printf(" ");
    if (hasA[4]) printf("%d\n",A5);
    else printf("N\n");
} */

//#include<stdio.h>
//
//int main()
//{
//    char nums[1001];
//    int d = 0;
//    scanf("%s %d",nums,&d);
//    int last = 0;
//    char left[1001];
//    int leftIndex = 0;
//    for (int i = 0;nums[i] != '\0';i ++)
//    {
//        int n = (nums[i] - '0') + last * 10;
//        if (n >= d)
//        {
//            int a = n / d;
//            last = n % d;
//            left[leftIndex] = '0' + a;
//            leftIndex ++;
//        } else
//        {
//            if (leftIndex != 0)
//            {
//                left[leftIndex] = '0';
//                leftIndex ++;
//            }
//            last = n;
//        }
//    }
//    if (leftIndex == 0) printf("%d",0);
//    left[leftIndex] = '\0';
//    for (int i = 0;left[i] != '\0';i ++)
//    {
//        printf("%c",left[i]);
//    }
//    printf(" %d\n",last);
//    return 0;
//}


/////////////////////////time

/*#include <stdio.h>
#include <math.h>

int main()
{
    long min,max;
    scanf("%ld %ld",&min,&max);
    long zhiIndex = 0;
    long zhi[max];
    int isF = 1;
    int hang = 1;
    for (long i = 2;;i ++)
    {
        if (zhiIndex >= max) {
            break;
        }

        int shouldContinue = 0;
        for (long j = 0;j < zhiIndex && zhi[j] <= sqrt(i);j ++)
        {
            if (i % zhi[j] == 0)
            {
                shouldContinue = 1;
                break;
            }
        }
        if (shouldContinue) continue;
        zhi[zhiIndex] = i;
        zhiIndex ++;
        if (zhiIndex >= min)
        {
            if (!isF) printf(" ");
            else isF = 0;
            printf("%ld",i);
            if (hang % 10 == 0)
            {
                printf("\n");
                isF = 1;
            }
            hang ++;
        }
    }
    return 0;
}*/

//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//    map<char,string> day;
//    day['A'] = "MON";
//    day['B'] = "TUE";
//    day['C'] = "WED";
//    day['D'] = "THU";
//    day['E'] = "FRI";
//    day['F'] = "SAT";
//    day['G'] = "SUN";
//    string str[4];
//    cin >> str[0] >> str[1] >> str[2] >> str[3];
//    string dd = "MON";
//    int h = 0,m = 0;
//    bool is1F = true;
//    for (int i = 0;i < min(str[0].size(), str[1].size());i ++)
//    {
//        char c = str[0][i];
//        if (is1F && (c >= 'A' && c <= 'Z') && c == str[1][i])
//        {
//            dd = day[c];
//            is1F = false;
//        }
//        if (!is1F)
//        {
//            if (((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')) && c == str[1][i])
//            {
//                if (c >= '0' && c <= '9') h = c - '0';
//                if (c >= 'A' && c <= 'Z') h = c - 'A' + 10;
//            }
//        }
//
//    }
//    for (int i = 0;i < min(str[2].size(), str[3].size());i ++)
//    {
//        char c = str[2][i];
//        if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) && c == str[3][i])
//        {
//            m = i;
//            break;
//        }
//    }
//
//
//    cout << dd << " ";
//    if (h < 10) cout << 0;
//    cout << h << ":";
//    if (m < 10) cout << 0;
//    cout << m << endl;
//    return 0;
//}

/*#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string A,B;
    char Da,Db;
    cin >> A >> Da >> B >> Db;
    long Pa = 0, Pb = 0;
    for (int i = 0;i < A.size();i ++)
    {
        if (A[i] == Da) Pa = Pa * 10 + Da - '0';
    }
    for (int i = 0;i < B.size();i ++)
    {
        if (B[i] == Db) Pb = Pb * 10 + Db - '0';
    }
    cout << Pa + Pb << endl;
    return 0;
}
*/


//////////////////////////////////////读%s速度很慢，要读%d快一些
/*#include <stdio.h>

void sort(int a[])
{
    int NUM = 4;
    for (int i = 0;i < NUM - 1;i ++)
    {
        for (int j = 1;j < NUM - i;j ++)
        {
            if (a[j] < a[j - 1])
            {
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
}

int main()
{
    int num = 1;
    int input[4];
    scanf("%d",&num);
    do
    {
        input[0] = num / 1000;
        num %= 1000;
        input[1] = num / 100;
        num %= 100;
        input[2] = num / 10;
        num %= 10;
        input[3] = num;
        sort(input);
        int a = input[3] * 1000 + input[2] * 100 + input[1] * 10 + input[0];
        int b = input[0] * 1000 + input[1] * 100 + input[2] * 10 + input[3];
        num = a - b;
        printf("%04d - %04d = ",a,b);
        printf("%04d\n",num);
        if (num == 0 || num == 6174) break;
    } while (1);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int N;
    double D;
    scanf("%d %lf",&N,&D);
    double n[N],dan[N];
    for (int i = 0;i < N;i ++)
    {
        scanf("%lf",&n[i]);
    }
    for (int i = 0;i < N;i ++)
    {
        double a;
        scanf("%lf",&a);
        dan[i] = a / n[i];
    }
    double sum = 0;
    for (int i = 0;i < N;i ++)
    {
        int k = i;
        for (int j = i;j < N;j ++)
        {
            if (dan[j] >= dan[k]) k = j;
        }
        if (D >= n[k])
        {
            D -= n[k];
            sum += dan[k] * n[k];
        } else {
            sum += dan[k] * (D);
            break;
        }
        if (k != i)
        {
            double t = dan[k];
            dan[k] = dan[i];
            dan[i] = t;
        }
        
    }
    printf("%.2lf\n",sum);
    return 0;
}
*/

/*#include <stdio.h>

int main()
{
    int num[10] = {0};
    char n[1001];
    scanf("%s",n);
    for (int i = 0;n[i] != '\0';i ++)
    {
        num[n[i] - '0'] ++;
    }
    for (int i = 0;i < 10;i ++)
    {
        if (num[i] != 0) printf("%d:%d\n",i,num[i]);
    }
    return 0;
}
*/


/*#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned long a,b,sum;
    unsigned long d;
    scanf("%lu %lu %lu",&a,&b,&d);
    sum = a + b;
    string op;
    if (sum == 0) printf("%d",0);
    while (sum != 0)
    {
        char n = '0' + (char) (sum % d);
        op = n + op;
        sum /= d;
    }
    cout << op << endl;
    return 0;
}*/

/*
#include <stdio.h>

int num[10];

void printIt()
{
    for (int i = 0;i < 10;i ++)
    {
        for (int j = 0;j < num[i];j ++)
        {
            printf("%d",i);
        }
    }
    printf("\n");
}

int main()
{
    
    for (int i = 0;i < 10;i ++)
    {
        int n;
        scanf("%d",&n);
        num[i] = n;
    }
    if (num[0] != 0)
    {
        int min = 10;
        for (int i = 1;i < 10;i ++)
        {
            if (num[i] != 0)
            {
                min = i;
                num[i] --;
                break;
            }
        }
        if (min == 10) printf("0");
        else
        {
            printf("%d",min);
            printIt();
        }
    } else
    {
        printIt();
    }
    
    return 0;
}
*/

/*#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string num_k;
    cin >> num_k;
    if (num_k[0] == '-') printf("-");
    int ZHENG = num_k[1] - '0';
    int index_e = 3;
    string XIAO;
    for (;num_k[index_e] != 'E';index_e ++)
    {
        XIAO = XIAO + num_k[index_e];
    }
    int isZhiFu = num_k[index_e + 1] == '-';
    int zhi = 0;
    for (int i = index_e + 2;num_k[i] != '\0';i ++)
    {
        zhi = zhi * 10 + (num_k[i] - '0');
    }
    if (isZhiFu)
    {
        printf("0.");
        for (int i = 0;i < zhi - 1;i ++)
        {
            printf("0");
        }
        printf("%d",ZHENG);
        cout << XIAO;
    } else {
        printf("%d",ZHENG);
        if (XIAO.size() > zhi)
        {
            for (int i = 0;i < zhi;i ++)
            {
                printf("%c",XIAO[i]);
            }
            printf(".");
            for (int i = zhi;i < XIAO.size(); i ++) {
                printf("%c",XIAO[i]);
            }
        } else
        {
            cout << XIAO;
        }
        for (int i = (int) XIAO.size();i < zhi;i ++)
        {
            printf("0");
        }
    }
    printf("\n");
}*/


//SB 题目a*b=c
/*
#include <stdio.h>

void things()
{
    char str[101];
    scanf("%s",str);
    int isPStart = 0;
    int isTEnd = 0;
    int hasA = 0;
    int numA = 0;
    int numA2 = 0;
    int i = 0;
    for (;str[i] != '\0';i ++)
    {
        if (!isPStart)
        {
            if (str[i] != 'A')
            {
                if (str[i] == 'P') isPStart = 1;
                else break;
            } else numA ++;
        } else {
            if (!isTEnd)
            {
                if (str[i] == 'A') hasA ++;
                else
                if (str[i] == 'T')
                {
                    if (hasA == 1 || hasA == 2) isTEnd = 1;
                    else break;
                } else break;
            } else {
                if (str[i] != 'A') break;
                else numA2 ++;
                
            }
        }
    }
    if (isPStart && str[i] == '\0' && isTEnd && numA2 >= numA) printf("YES\n");
    else printf("NO\n");
}

int main()
{
    int r = 0;
    scanf("%d",&r);
    getchar();
    for (int k = 0;k < r;k ++)
    {
        things();
    }
    return 0;
}
*/


/*#include <stdio.h>
#include <math.h>

int main()
{
    long max;
    scanf("%ld",&max);
    long zhiIndex = 0;
    long zhi[max];
    int all = 0;
    for (long i = 2;;i ++)
    {
        if (i > max) {
            break;
        }
        
        int shouldContinue = 0;
        for (long j = 0;j < zhiIndex && zhi[j] <= sqrt(i);j ++)
        {
            if (i % zhi[j] == 0)
            {
                shouldContinue = 1;
                break;
            }
        }
        if (shouldContinue) continue;
        
        zhi[zhiIndex] = i;
        if (zhiIndex > 0 && (zhi[zhiIndex] - zhi[zhiIndex - 1] == 2))
        {
            all ++;
        }
        zhiIndex ++;
        
    }
    printf("%d\n",all);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    double c1,c2,d_value;
    scanf("%lf %lf", &c1, &c2);
    d_value = c2 - c1;
    double sec, min, hour;
    sec = d_value / 100;
    min = sec / 60;
    hour = min / 60;
    long long hour_int = (long long) hour;
    int min_int;
    min_int = (int) (min - hour_int * 60);
    sec = sec - ((double) (min_int * 60 + hour_int * 3600));
    if (sec - ((int) sec) >= 0.5)
    {
        sec += 0.1;
    }
    printf("%02lld:%02d:%02.0lf\n",hour_int,min_int,sec);
    return 0;
}
*/


/*#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int sum = 1;
    int max = 3;
    while (sum + max * 2 < n)
    {
        sum += max * 2;
        max += 2;
    }
    max -= 2;
    int blank = 0;
    for (int i = max;i > 1;i -= 2)
    {
        for (int j = 0;j < blank;j ++) printf(" ");
        for (int j = 0;j < i;j ++) printf("%c",c);
        blank ++;
        printf("\n");
    }
    for (int i = 1;i <= max;i += 2)
    {
        for (int j = 0;j < blank;j ++) printf(" ");
        for (int j = 0;j < i;j ++) printf("%c",c);
        blank --;
        printf("\n");
    }
    printf("%d",n - sum);
    return 0;
}*/

/*
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    long valid = 0;
    scanf("%d",&n);
    string name_in;
    int year,month,day;
    long min = 999999999,max = 0;
    string name_max,name_min;
    long TODAY = 2014 * 10000 + 9 * 100 + 6;
    long Y200 = TODAY - (1814 * 10000 + 9 * 100 + 6);
    for (int i = 0;i < n;i ++)
    {
        cin >> name_in;
        scanf("%d/%d/%d",&year,&month,&day);
        long time = year * 10000 + month * 100 + day;
        if (time <= TODAY && TODAY - time <= Y200)
        {
            if (time >= max)
            {
                max = time;
                name_max = name_in;
            }
            if (time <= min)
            {
                min = time;
                name_min = name_in;
            }
            valid ++;
        }
        
    }
    printf("%ld",valid);
    if (valid != 0) cout << " " << name_min << " " << name_max << endl;
    return 0;
}
*/

/*
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void upper(char *c)
{
    if (*c >= 'a' && *c <= 'z') *c += 'A' - 'a';
}

int main()
{
    int a[96] = {0};
    string origin,current;
    cin >> origin >> current;
    int i = 0, j = 0;
    while(origin[i] != '\0')
    {
        upper(&origin[i]);
        upper(&current[j]);
        //printf("%c==%c\n",origin[i],current[j]);
        if (origin[i] != current[j])
        {
            if (a[origin[i]] == 0)
            {
                printf("%c",origin[i]);
                a[origin[i]] = 1;
            }
            i ++;
            continue;
        }
        
        
        i ++;
        if (current[j] != '\0') j ++;
    }
    
    
    
}
*/


/*#include <stdio.h>
#include <math.h>
#include <algorithm>

int main()
{
    long long n,p;
    scanf("%lld %lld",&n,&p);
    long long nums[n];
    for (long long i = 0;i < n;i ++)
    {
        scanf("%lld",&nums[i]);
    }
    std::sort(nums,nums + n);

    long long max = 0;
    long long j = 0;
    for (long long i = 0;i < n;i ++)
    {
        for (;j < n;j ++)
        {
            if (!(nums[i] * p >= nums[j])) break;
        }
        max = (max < j - i) ? (j - i) : max;
    }

    printf("%lld",max);
    return 0;
}*/


/*
#include <stdio.h>
#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //Z：0 1 2 3 4 5 6 7 8 9 10
    //M：1 0 X 9 8 7 6 5 4 3 2
    map<int,char> ZM;
    ZM[0] = '1';
    ZM[1] = '0';
    ZM[2] = 'X';
    ZM[3] = '9';
    ZM[4] = '8';
    ZM[5] = '7';
    ZM[6] = '6';
    ZM[7] = '5';
    ZM[8] = '4';
    ZM[9] = '3';
    ZM[10] = '2';
    vector<string> wrong;
    int quan[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int n;
    scanf("%d",&n);
    for (int i = 0;i < n;i ++)
    {
        int sum = 0;
        bool shouldC = false;
        string num;
        cin >> num;
        for (int j = 0;j < 17;j ++)
        {
            if (num[j] >= '0' && num[j] <= '9')
            {
                sum += quan[j] * (num[j] - '0');
            } else
            {
                wrong.push_back(num);
                shouldC = true;
                break;
            }
        }
        if (shouldC) continue;
        if (ZM[sum % 11] != num[17])
        {
            wrong.push_back(num);
        }
    }
    //cout << endl;
    if (wrong.size() == 0) printf("All passed\n");
    for (int i = 0;i < wrong.size();i ++)
    {
        cout << wrong[i] << endl;
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long schools[100001] = {0};
    int last = 1;
    for (int t = 0;t < n;t ++)
    {
        int num,scr;
        scanf("%d %d",&num,&scr);
        schools[num] += scr;
        last = (num > last) ? num : last;
    }
    
    long max = -1,max_index = 0;
    for (int i = 1;i <= last;i ++)
    {
        //printf("%d ",i);
        if (schools[i] > max) {
            max = schools[i];
            max_index = i;
        }
    }
    
    printf("%ld %ld\n",max_index,max);
    return 0;
}*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int character[129] = {0};
    char c;
    bool hasU = true;
    while ((c = getchar()) != '\n')
    {
        if (c != '+') {
            if (c >= 'A' && c <= 'Z') {
                character[c] = 1;
                c -= ('A' - 'a');
            }
            character[c] = 1;
        }
        else hasU = false;
    }
    string str;
    cin >> str;
    for (int i = 0;str[i] != '\0';i ++)
    {
        if ((!hasU) && (str[i] >= 'A' && str[i] <= 'Z')) continue;
        if (character[str[i]] == 1) continue;
        cout << str[i];
    }
    cout << endl;
    return 0;
}
*/

//#include <stdio.h>
//#include <vector>
//
//int main()
//{
//    const int N = 10;
//    int a[N];
//    for (int i = 0;i < N;i ++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for (int j = 0;j < (N + 1) / 2;j ++)
//    {
//
//    }
//
//}

/*#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    float hh = n / 2.0;
    hh += 0.5;
    int h = (int) hh;
    for (int i = 0;i < n;i ++) printf("%c",c);
    printf("\n");
    for (int i = 0;i < h - 2;i ++)
    {
        printf("%c",c);
        for (int j = 0;j < n - 2;j ++) printf(" ");
        printf("%c\n",c);
    }
    for (int i = 0;i < n;i ++) printf("%c",c);
    printf("\n");
    return 0;
}*/

/*
#include <stdio.h>

struct Money {
    long galleon;
    long sickle;
    long knut;
};

long toKnut(struct Money m)
{
    long st = m.sickle + m.galleon * 17;
    return st * 29 + m.knut;
}

struct Money toMoney(long knut)
{
    long st = knut / 29;
    knut %= 29;
    long gl = st / 17;
    st %= 17;
    struct Money r;
    r.galleon = gl;
    r.sickle = st;
    r.knut = knut;
    return r;
}

int main()
{
    struct Money P,A;
    scanf("%ld.%ld.%ld %ld.%ld.%ld",&P.galleon,&P.sickle,&P.knut,&A.galleon,&A.sickle,&A.knut);
    long leftK = toKnut(A) - toKnut(P);
    long isF = (leftK < 0) ? -1 : 1;
    leftK *= isF;
    struct Money left = toMoney(leftK);
    if (isF < 0) printf("-");
    printf("%ld.%ld.%ld\n",left.galleon,left.sickle,left.knut);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int scr[101] = {0};
    for (int i = 0;i < N;i ++)
    {
        int n;
        scanf("%d",&n);
        scr[n] += 1;
    }
    int K;
    scanf("%d",&K);
    for (int i = 0;i < K;i ++)
    {
        int n;
        scanf("%d",&n);
        if (i != 0) printf(" ");
        printf("%d",scr[n]);
    }
    return 0;
}*/

/*
#include <stdio.h>

int main()
{
    int cs[128] = {0};
    char c;
    while ((c = getchar()) != '\n')
    {
        cs[c] ++;
    }
    char need[1001];
    scanf("%s",need);
    for (int i = 0;need[i] != '\0';i ++)
    {
        cs[need[i]] --;
    }
    int duo = 0;
    int shao = 0;
    for (int i = 0;i < 128;i ++)
    {
        if (cs[i] < 0) shao += cs[i] * -1;
        else duo += cs[i];
    }
    if (shao == 0) printf("Yes %d\n",duo);
    else printf("No %d\n",shao);
    return 0;
}*/


//#include <stdio.h>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string in;
//    cin >> in;
//    long words = 0;
//    for (int i = 0;in[i] != '\0';i ++)
//    {
//        if (in[i] == 'P')
//        {
//            int hasA = 0;
//            for (int j = i + 1;in[j] != '\0';j ++)
//            {
//
//                if (in[j] == 'T') {
//                    words ++;
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}

/*
#include <stdio.h>

struct Student
{
    char zhen[17];
    int zuo;
};

int main()
{
    int N;
    scanf("%d",&N);
    struct Student s[N + 1];
    
    for (int t = 0;t < N;t ++)
    {
        struct Student st;
        int j;
        scanf("%s %d %d", st.zhen, &j, &st.zuo);
        s[j] = st;
    }
    int k;
    scanf("%d",&k);
    for (int i = 0;i < k;i ++)
    {
        int j;
        scanf("%d",&j);
        printf("%s %d\n",s[j].zhen,s[j].zuo);
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int an = 0,bn = 0;
    for (int r = 0;r < t;r ++)
    {
        int ah,ax,bh,bx;
        scanf("%d %d %d %d",&ah,&ax,&bh,&bx);
        int sum = ah + bh;
        if (ax == sum && bx == sum) continue;
        if (ax == sum) bn ++;
        if (bx == sum) an ++;
    }
    printf("%d %d",an,bn);
    return 0;
}*/

/*
#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int num[N];
    for (int i = 0;i < N;i ++)
    {
        scanf("%d",&num[i]);
    }
    long sum = 0;
    for (int i = 0;i < N;i ++)
        for (int j = i + 1;j < N;j ++)
        {
            int n1 = num[i] * 10 + num[j],n2 = num[j] * 10 + num[i];
            sum += n1;
            if (n1 != n2) sum += n2;
        }
    
    printf("%ld\n",sum);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int mn[M];
    for (int i = 0;i < M;i ++) scanf("%d",&mn[i]);
    int dc[M];
    for (int i = 0;i < M;i ++) scanf("%d",&dc[i]);
    for (int i = 0;i < N;i ++)
    {
        int sum = 0;
        for (int j = 0;j < M;j ++)
        {
            int n;
            scanf("%d",&n);
            if (n == dc[j]) sum += mn[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}*/

/*
#include <stdio.h>

int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int A,B;
    int To;
    scanf("%d %d %d",&A,&B,&To);
    for (int i = 0;i < M;i ++)
    {
        for (int j = 0;j < N;j ++)
        {
            int a;
            scanf("%d",&a);
            if (a >= A && a <= B) a = To;
            if (j != 0) printf(" ");
            printf("%03d",a);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int T,k;
    scanf("%d %d",&T,&k);
    for (int i = 0;i < k;i ++)
    {
        int n1,b,t,n2;
        scanf("%d %d %d %d",&n1,&b,&t,&n2);
        if (t > T) printf("Not enough tokens.  Total = %d.\n",T);
        else {
            int ok = (n1 > n2) ? 0 : 1;
            if (b == ok)
            {
                T += t;
                printf("Win %d!  Total = %d.\n",t,T);
            } else {
                T -= t;
                printf("Lose %d.  Total = %d.\n",t,T);
                if (T <= 0) {
                    printf("Game Over.\n");
                    break;
                }
            }
        }
    }
    return 0;
}
*/

/*
int main()
{
    int r;
    scanf("%d",&r);
    for (int t = 0;t < r;t ++)
    {
        for (int i = 0;i < 4;i ++)
        {
            char str[4];
            scanf("%s",str);
            char a = str[0],b = str[2];
            if (b == 'T') printf("%c",a - 'A' + '1');
        }
    }
    return 0;
}*/

/*using namespace std;

int main()
{
    int t = 0;
    string num;
    getline(cin,num);
    for (int i = 0;num[i] != '\0';i ++)
    {
        t = t * 10 + num[i] - '0';
    }
    for (int r = 0;r < t;r ++)
    {
        string pw;
        getline(cin,pw);
        int hasNum = 0;
        int hasLetter = 0;
        int invalid = 0;
        int i = 0;
        for (;pw[i] != '\0';i ++)
        {
            
            if ((pw[i] >= 'a' && pw[i] <= 'z') || (pw[i] >= 'A' && pw[i] <= 'Z'))
                hasLetter = 1;
            else if (pw[i] >= '0' && pw[i] <= '9')
                hasNum = 1;
            else if (pw[i] != '.') invalid = 1;
        }
        if (i < 6) printf("Your password is tai duan le.\n");
        else if (invalid) printf("Your password is tai luan le.\n");
        else
        {
            if (hasLetter && !hasNum) printf("Your password needs shu zi.\n");
            if (hasNum && !hasLetter) printf("Your password needs zi mu.\n");
            if (hasNum && hasLetter) printf("Your password is wan mei.\n");
        }
        
    }
    return 0;
}*/

/*
int main()
{
    int M;
    scanf("%d",&M);
    for (int u = 0;u < M;u ++)
    {
        long long K;
        scanf("%lld",&K);
        int length = log10(K) + 1;
        long long num = 0;
        double len = pow(10, length);
        long long K2 = K * K;
        int has = 0;
        for (long long N = 1;N < 10;N ++)
        {
            num = N * K2;
            //printf("num = %lld ",num);
            double d = ((double) num) / len;
            //printf("d = %lf  ",d);
            long long zheng = d;
            double mm = ((d - (double) zheng)) * len;
            mm += 0.1;
            long long mo = mm;
            //printf("mo = %lld\n",mo);
            if (mo == K) {
                printf("%lld %lld\n",N,K2 * N);
                has = 1;
                break;
            }
        }
        if (!has) printf("No\n");
    }
    return 0;
}
*/

/*#include <stdio.h>

int main()
{
    char c;
    char cs[128] = {0};
    while ((c = getchar()) != '\n')
    {
        if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
        if (c >= 'a' && c <= 'z') cs[c] ++;
    }
    int max = 0;
    char cc = '\0';
    for (char i = 0;i < 127;i ++)
    {
        if (cs[i] > max && (i >= 'a' && i <= 'z'))
        {
            max = cs[i];
            cc = i;
        }
    }
    printf("%c %d",cc,max);
    return 0;
}
*/

/*#include <stdio.h>

int main()
{
    char cs[128] = {0};
    char c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        cs[c] ++;
    }
    const int length = 6;
    int n = length;
    char str[] = "PATest";
    while (n > 0) {
        n = length;
        for (int i = 0;str[i] != '\0';i ++)
        {
            if (cs[str[i]] == 0) n --;
            else {
                printf("%c",str[i]);
                cs[str[i]] --;
            }
        }
    }
    return 0;
}*/

/*
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<int,string> EtM;
    map<string,int> MtE;
    EtM[0] = "tret";
    MtE["tret"] = 0;
    string nm[] = {"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string _nm[] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    for (int i = 1;i <= 12;i ++)
    {
        EtM[i] = nm[i - 1];
        MtE[nm[i - 1]] = i;
        EtM[i * 13] = _nm[i - 1];
        MtE[_nm[i - 1]] = i * 13;
    }
    int N;
    scanf("%d ",&N);
    for (int t = 0;t < N;t ++)
    {
        string input;
        getline(cin, input);
        if (input[0] >= '0' && input[0] <= '9')
        {
            int num = 0;
            for (int i = 0;input[i] != '\0';i ++)
            {
                num = num * 10 + input[i] - '0';
            }
            if (num == 0) cout << EtM[0] << endl;
            else
            {
                int a1 = num % 13;
                num /= 13;
                if (num != 0) cout << EtM[num * 13];
                if (num != 0 && a1 != 0) cout << " ";
                if (a1 != 0) cout << EtM[a1];
                cout << endl;
            }
        } else
        {
            int num = 0;
            if (input[3] == ' ')
            {
                num = MtE[input.substr(0,3)] + MtE[input.substr(4,3)];
            } else {
                num = MtE[input];
            }
            printf("%d\n",num);
        }
    }
    
    
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    char cs[128] = {0};
    char c;
    for (int i = 0;i < 2;i ++)
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (cs[c] == 0)
        {
            printf("%c", c);
            cs[c] ++;
        }
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int isZhi(int n)
{
    for (int i = 2;i <= sqrt(n);i ++) if (n % i == 0) return 0;
    return 1;
}

int toNum(char *start,int length)
{
    int num = 0;
    for (char *i = start;i < start + length;i ++)
    {
        num = num * 10 + *i - '0';
    }
    return num;
}

int numChanged(int origin,int length, int newNum)
{
    return (origin % (int) pow(10, length - 1)) * 10 + newNum;
}

int main()
{
    int L,K;
    scanf("%d %d",&L,&K);
    char num[L + 1];
    scanf("%s",num);
    int end = K;
    int n = toNum(num, K);
    int found = -1;
    while (end <= L)
    {
        if (isZhi(n))
        {
            found = n;
            break;
        }
        n = numChanged(n, K, num[end] - '0');
        end ++;
    }
    if (found == -1) printf("404\n");
    else {
        int length = log10(found) + 1;
        if (length < K) for (int i = 0;i < K - length;i ++) printf("0");
        printf("%d\n",found);
    }
}
*/

/*
#include <stdio.h>
#include <vector>

int main()
{
    int M,N;
    scanf("%d %d",&N,&M);
    // N 种月饼
    long all[1000] = {0};
    
    for (int r = 0;r < M;r ++)
    {
        for (int i = 0;i < N;i ++)
        {
            int a;
            scanf("%d",&a);
            all[i] += a;
        }
    }
    
    long max = -1;
    std::vector<int> maxs;
    for (int i = 0;i < N;i ++)
    {
        if (all[i] > max)
        {
            max = all[i];
            maxs.clear();
            maxs.push_back(i);
        } else
            if (all[i] == max) maxs.push_back(i);
    }
    int isF = 1;
    printf("%ld\n",max);
    for (int i = 0;i != maxs.size();i ++)
    {
        if (isF) isF = 0;
        else printf(" ");
        printf("%d",maxs[i] + 1);
    }
    return 0;
}
*/

//#include <stdio.h>
//
//int main()
//{
//    int N;
//    scanf("%d",&N);
//    for (int j = 0;j < N;j ++)
//    {
//        int a;
//        scanf("%d",&a);
//        printf("%d\n",a);
//    }
//    return 0;
//}

/*int main()
{
    int N;
    scanf("%d",&N);
    int dui[1001] = {0};
    for (int j = 0;j < N;j ++)
    {
        int d,yuan,scr;
        scanf("%d-%d %d",&d, &yuan, &scr);
        dui[d] += scr;
    }
    
    int max = 0;
    int maxIndex = 0;
    for (int i = 1;i < 1001;i ++)
    {
        if (dui[i] > max) {
            maxIndex = i;
            max = dui[i];
        }
    }
    printf("%d %d\n", maxIndex, max);
    return 0;
}*/

/*
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string A,B;
    cin >> A >> B;
    int A_S = (int) A.size();
    int B_S = (int) B.size();
    for (int i = 0;i < B_S - A_S ;i ++) A = '0' + A;
    for (int i = 0;i < A_S - B_S ;i ++) B = '0' + B;
    int index = 1;
    string ans = "";
    for (int i = max(A_S, B_S) - 1;i >= 0;i --)
    {
        int a = A[i] - '0';
        int b = B[i] - '0';
        if (index % 2 == 1)
        {
            int l = (a + b) % 13;
            if (l >= 0 && l <= 9) ans = ((char) (l + '0')) + ans;
            else {
                char ll = '\0';
                switch (l) {
                    case 10:
                        ll = 'J';
                        break;
                    case 11:
                        ll = 'Q';
                        break;
                    case 12:
                        ll = 'K';
                        break;
                    default:
                        break;
                }
                ans = ll + ans;
            }
        } else {
            int l = b - a;
            if (l < 0) l += 10;
            ans = ((char) (l + '0')) + ans;
        }
        index ++;
    }
    cout << ans << endl;
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    double last = 0;
    double a = 0;
    for (int i = 0;i < n;i ++)
    {
        scanf("%lf", &a);
        sum += (n - i) * a * ((double) (i + 1.0));
        //sum += last;
    }
    printf("%.2f\n",sum);
    return 0;
}*/

/*
#include<stdio.h>
#include<algorithm>
#include<functional>

int main()
{
    int N;
    scanf("%d",&N);
    int m = 1,n = N;
    int i = 1;
    while (m < n)
    {
        if (N % i == 0) {
            m = i;
            n = N / i;
        }
        i ++;
    }
    int arr[10000];
    for (int i  = 0;i < N;i ++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr + N,std::greater<int>());
    int ju[1000][1000];
    int d = 0;
    int top = 0, bottom = 0, left = 0, right = 0;
    int x = 0,y = 0;
    for (int i = 0;i < N;i ++)
    {
        
        switch (d)
        {
            // ->
            case 0:
                ju[x][y] = arr[i];
                x ++;
                if (x == n - right)
                {
                    d = 3;
                    x --;
                    y ++;
                    top ++;
                }
                break;
            // <-
            case -1:
                ju[x][y] = arr[i];
                x --;
                if (x == left - 1)
                {
                    d = 2;
                    y --;
                    x ++;
                    bottom ++;
                }
                break;
            // up
            case 2:
                ju[x][y] = arr[i];
                y --;
                if (y == top - 1)
                {
                    y ++;
                    x ++;
                    d = 0;
                    left ++;
                }
                break;
            // down
            case 3:
                ju[x][y] = arr[i];
                y ++;
                if (y == m - bottom)
                {
                    d = -1;
                    x --;
                    y --;
                    right ++;
                }
                break;
            default:
                break;
                
        }
    }
    
    // Print
    int f = 1;
    for (int i = 0;i < m;i ++)
    {
        f = 1;
        for (int j = 0;j < n;j ++)
        {
            if (f == 1) f = 0;
            else printf(" ");
            printf("%d", ju[j][i]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*int main()
{
    int T;
    scanf("%d",&T);
    for (int t = 0;t < T;t ++)
    {
        int n;
        int k; // 抓鱼
        scanf("%d %d",&n,&k);
        vector<int> time_cook;
        int tt; // 炖鱼时间
        for (int r = 0;r < n;r ++)
        {
            scanf("%d",&tt);
            time_cook.push_back(tt);
        }
        sort(time_cook.begin(), time_cook.end(), greater<int>());
        int time_all = 0;
        time_all += k;
        int ok = 1;
        n --;
        while (ok > 0)
        {
            int current = time_cook[0];
            time_cook.erase(time_cook.begin());
            int times = 0;
            while (n > 0 && times <= current)
            {
                times += k;
                n --;
                ok ++;
            }
            if (n > 0)
            {
                int time_not = current - times;
                int time_yes = times + k - current;
                if (time_not > time_yes)
                {
                    
                    
                }
            }
        }
    }
    
    return 0;
}*/

/*int arr[101][101];

int arr_s[101][101];

int dp(int n, int x,int y)
{
    if (arr_s[y][x] >= 0) return arr_s[y][x];
    else return arr_s[y][x] = arr[y][x] + ((y == n - 1) ? 0 : max(dp(n, x, y + 1), dp(n, x + 1,y + 1)));
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int n;
        memset(arr_s,-1,sizeof(arr_s));
        scanf("%d",&n);
        for (int y = 0;y < n;y ++) {
            for (int x = 0;x <= y;x ++) scanf("%d",&arr[y][x]);
        }
        
        printf("%d\n",dp(n,0,0));
    }
    return 0;
}*/

/*int main()
{
    int K;
    map<int,double,greater<int> > all;
    scanf("%d",&K);
    for (int t = 0;t < K;t ++)
    {
        int key;
        double value;
        scanf("%d %lf",&key,&value);
        auto it = all.find(key);
        if (it != all.end()) {
            all[key] += value;
            if (all[key] == 0) all.erase(it);
        }
        else all[key] = value;
    }
    scanf("%d",&K);
    for (int t = 0;t < K;t ++)
    {
        int key;
        double value;
        scanf("%d %lf",&key,&value);
        auto it = all.find(key);
        if (it != all.end()) {
            all[key] += value;
            if (all[key] == 0) all.erase(it);
        }
        else all[key] = value;
    }
    printf("%d", (int) all.size());
    string a = "";
    for (auto i = all.begin();i != all.end();i ++)
    {
        printf(" %d %.1f",i -> first,i -> second);
    }
    return 0;
}
*/

/*int gcd(int a,int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int t;
        scanf("%d",&t);
        int last = -1;
        int a;
        while (t --)
        {
            scanf("%d",&a);
            if (last == -1) last = a;
            else {
                if (last > a)
                {
                    int t = last;
                    last = a;
                    a = t;
                }
                last = gcd(a, last);
            }
        }
        printf("%d\n",last);
    }
    return 0;
}*/

/*
int main()
{
    string str;
    char c['Z' + 1] = {0};
    while (getline(cin,str))
    {
        for (int i = 0;str[i] != '\0';i ++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                c[str[i] - 32] ++;
            } else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                c[str[i]] ++;
            }
        }
    }
    int max = -1;
    for (char i = 'A';i <= 'Z';i ++)
    {
        if (c[i] > max) max = c[i];
    }
    
    while (max != 0)
    {
        int f = 1;
        for (char i = 'A';i <= 'Z';i ++)
        {
            if (f) f = 0;
            else printf(" ");
            if (c[i] == max)
            {
                printf("*");
                c[i] --;
            } else printf(" ");
        }
        printf("\n");
        max --;
    }
    for (char i = 'A';i <= 'Z';i ++)
    {
        if (i != 'A') printf(" ");
        printf("%c",i);
    }
    return 0;
}
*/

// zcmuOJ 1029-normal
/*int main()
{
    int i,j;
    while (scanf("%d %d",&i,&j) != EOF) {
        int max_num = -1;
        int q,w;
        q = min(i,j);
        w = max(i,j);
        for (int num = q;num <= w;num ++)
        {
            int n = num;
            int a = 1;
            while (n != 1)
            {
                if (n % 2 == 1) n = 3 * n + 1;
                else n = n / 2;
                a ++;
            }
            max_num = (max_num > a) ? max_num : a;
        }
        printf("%d %d %d\n", i, j, max_num);
    }
    return 0;
}*/

// zcmuOJ 1029-dp
/*map<int,int> dp;

int dd(int n)
{
    if (n == 1) return 1;
    if (n % 2 == 1) n = 3 * n + 1;
    else n = n / 2;
    if (dp.find(n) != dp.end()) return dp[n];
    return dp[n] = dd(n) + 1;
}

int main()
{
    int i,j;
    while (scanf("%d %d",&i,&j) != EOF) {
        int max_num = -1;
        int s,b;
        s = min(i,j);
        b = max(i,j);
        for (int n = s;n <= b;n ++)
        {
            int a = dd(n);
            max_num = (max_num > a) ? max_num : a;
        }
        printf("%d %d %d\n", i, j, max_num);
    }
    return 0;
}*/

/*int main()
{
    const int N = 6;
    int time_all = 0;
    int times;
    int time_ac;
    int a = 0;
    while (scanf("%d %d",&times,&time_ac) != EOF)
    {
        if (!(times == 0 || time_ac == 0)) time_all += (times - 1) * 20 + time_ac;
        a ++;
        if (a == N)
        {
            printf("%d\n",time_all);
            time_all = 0;
            a = 0;
        }
    }
    return 0;
}
*/

/*
int gcd(int a,int b)
{
    return b != 0 ? gcd(b,a % b) : a;
}

int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        if (a == 0 && b == 0) break;
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
*/

/*
long long gcd(long long a,long long b)
{
    return b != 0 ? gcd(b,a % b) : a;
}

int main()
{
    long long a,b;
    while (scanf("%lld %lld",&a,&b) != EOF)
    {
        if (a == 0 && b == 0) break;
        printf("%lld\n",a * b / gcd(a,b));
    }
    return 0;
}
*/

/*int main()
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        long long a = 1;
        for (int i = 1;i <= n;i ++)
            a *= i;
        printf("%lld\n",a);
    }
    return 0;
}*/

/*
int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        if (a == 0 && b == 0) break;
        long long n = 1;
        if (b > a / 2) b = a - b;
        for (int i = 1,c = a;i <= b;i ++,c --)
        {
            n *= c;
            n /= i;
        }
        printf("%lld\n",n);
    }
    return 0;
}
*/
/*
int main()
{
    int N;
    scanf("%d",&N);
    while (N --)
    {
        long long a;
        scanf("%lld",&a);
        // 由于3个除数，那么除了自身和1，那么只有完全平方数才符合
        int ok = 1;
        if (a == 1) ok = 0;
        
        long long a_s = sqrt(a);
        if (a_s * a_s == a)
        {
            for (int i = 2;i <= sqrt(a_s);i ++)
                if (a_s % i == 0) {
                    ok = 0;
                    break;
                }
        } else ok = 0;
        if (ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}*/

/*
int a(int num)
{
    if (num == 1) return 1;
    return a(num / 2) + 1;
}

int main()
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        printf("%d\n",a(n));
    }
    return 0;
}
*/

/*
int main()
{
    int n,m;
    int f = 1;
    while (scanf("%d %d",&n,&m) != EOF)
    {
        int a[100][100];
        for (int i = 0;i < n;i ++)
            for (int j = 0;j < m;j ++) scanf("%d",&a[j][i]);
        for (int i = 0;i < n;i ++)
            for (int j = 0;j < m;j ++)
            {
                if (a[j][i] == -1)
                {
                    int num = 0;
                    for (int q = -1;q <= 1;q ++)
                    {
                        for (int w = -1;w <= 1;w ++)
                        {
                            if (j + w >= 0 && j + w < m && i + q >= 0 && i + q < n)
                            {
                                if (a[j + w][i + q] == 9) num ++;
                            }
                        }
                    }
                    a[j][i] = num;
                }
                
            }
        if (f) f = 0;
        else printf("\n");
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < m;j ++) printf("%d",a[j][i]);
            printf("\n");
        }
    }
    return 0;
}
*/

/*
int main()
{
    string in,current;
    while(cin >> in)
    {
        current = "";
        int c = 0;
        for (int i = 0;in[i] != '\0';i ++)
        {
            if (current.size() == 0) {
                current += in[i];
            } else {
                if (in[i] == current[c])
                {
                    c ++;
                    //cout << i << " y>> "<< current << endl;
                } else {
                    c = 1;
                    if (in[i] != current[0]) for (int k = (int) current.size();k <= i;k ++)
                    {
                        current += in[k];
                    }
                    //cout << i << " n>> "<< current << endl;
                }
            
            }
        }
        int e = (int) current.size();
        if (in.size() % e == 0) printf("%d\n",e);
        else printf("%d\n",(int) in.size());
    }
    return 0;
}
*/

/*int main()
{
    int a,b,c;
    while (scanf("%d %d %d",&a,&b,&c) != EOF) {
        if (a == 0 && b == 0 && c == 0) break;
        if (b == 0)
        {
            printf("%d\n",1 % c);
            continue;
        }
        int cr = 0;
        int gui[1000];
        int has = 0;
        for (int i = 1;i <= b;i ++)
        {
            int x = ((int) pow(a,i)) % c;
            if (cr != 0)
            {
                if (x == gui[0]) {
                    has = 1;
                    break;
                }
                else {
                    gui[cr] = x;
                    cr ++;
                }
            } else {
                gui[cr] = x;
                cr ++;
            }
        }
        int last = 0;
        if (has) last = gui[(b - 1) % cr];
        else last = gui[cr - 1];
        printf("%d\n",last);
    }
    return 0;
}
*/

/*
int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m) != EOF)
    {
        int *a = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        int sum = 0;
        for (int i = 0;i < n;i ++) sum += a[i];
        for (int i = 0;i < m;i ++)
        {
            int x,y;
            int s = sum;
            scanf("%d %d",&x,&y);
            if (x <= y)
            {
                for (int j = x;j < y;j ++) s -= a[j];
            } else {
                for (int j = y;j < x;j ++) s += a[j];
            }
            
            printf("%d\n",s);
        }
    }
    return 0;
}
*/

/*
int main ()
{
    unsigned int n;
    while (scanf("%ud",&n) != EOF)
    {
        int ok = 1;
        for (unsigned int i = 2;i <= sqrt(n);i ++)
        {
            if (n % i == 0) {
                ok = 0;
                break;
            }
        }
        if (n == 1) ok = 0;
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
    while (n --) {
        int a;
        int all = 1;
        scanf("%d",&a);
        for (int i = 0;i < a;i ++)
        {
            all += i + 1;
        }
        printf("%d\n",all);
    }
    return 0;
}
*/

/*
int main()
{
    string num;
    while (cin >> num)
    {
        int n;
        scanf("%d",&n);
        if (n + 2 > num.size()) printf("0\n");
        else printf("%c\n",num[n + 1]);
    }
    return 0;
}
*/

/*int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m) != EOF) {
        printf("%d\n",m * n - 1);
    }
    return 0;
}
*/

/*
int main()
{
    int N;
    scanf("%d",&N);
    while (N --)
    {
        string str;
        cin >> str;
        ll sum = 0;
        for (int i = 0;str[i] != '\0';i ++)
        {
            sum += str[i];
        }
        string bin_num = "";
        while (sum != 0)
        {
            bin_num = (char) (sum % 2 + '0') + bin_num;
            sum /= 2;
        }
        cout << bin_num << endl;
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int n,o,e;
        scanf("%d %d %d",&n, &o ,&e);
        while (n --)
        {
            string url;
            cin >> url;
            int sum = 0;
            int odd = 0;
            int even = 0;
            for (int i = 0;url[i] != '\0';i ++)
            {
                sum += url[i];
                if (i % 2 == 0) odd += url[i];
                else even += url[i];
            }
            printf("(%d,%d)\n",odd % o + even % e,sum);
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
    while (T --)
    {
        int n;
        scanf("%d",&n);
        int m = 0;
        int i = 0;
        for (;i < n;)
        {
            m ++;
            i += log10(m) + 1;
        }
        if (i == n) printf("%d\n", m);
        else printf("-1\n");
    }
    return 0;
}
*/

/*
int main()
{
    int n,c;
    while (scanf("%d %d",&n,&c) != EOF)
    {
        int *w = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d",w + i);
        sort(w,w + n);
        int sum = 0,count = 0;
        for (int i = 0;i < n;i ++)
        {
            sum += w[i];
            if (sum <= c) count ++;
        }
        printf("%d\n",count);
    }
    return 0;
}
*/

//int main()
//{
//    int T;
//    while (scanf("%d", &T) != EOF)
//    {
//        vector<int> t(T);
//        vector<int> q(T);
//        for (int i = 0;i < T;i ++) scanf("%d", &t[i]);
//        for (int i = 0;i < T;i ++) scanf("%d", &q[i]);
//        sort(t.begin(), t.end());
//        sort(q.begin(), q.end());
//        int count = 0;
//        int pin = 0;
//        for (vector<int>::iterator i = t.begin(), j = q.begin();i != t.end();)
//        {
//            if (*i > *j)
//            {
//                count ++;
//                t.erase(i);
//                q.erase(j);
//
//            } else
//            {
//                i ++;
//            }
//        }
//        for (vector<int>::iterator i = t.begin(),j = q.begin();i != t.end();i ++,j ++)
//        {
//            if (*i == *j) pin ++;
//        }
//        printf("%d\n",count * 200 - (T - pin - count) * 200);
//    }
//    return 0;
//}

/*
int isHui(string num)
{
    size_t l = num.size();
    size_t l_d = num.size() / 2;
    for (size_t i = 0;i < l_d;i ++)
    {
        if (num[i] != num[l - i - 1]) return 0;
    }
    return 1;
}

int main()
{
    string num;
    while(cin >> num)
    {
        string re,ans;
        int p;
        for (int k = 0;k < 20;k ++)
        {
            ans = num;
            if (isHui(ans)) {
                cout << k << " " << ans << endl;
                goto end;
            }
            re = num;
            reverse(re.begin(),re.end());
            p = 0;
            ans = "";
            for (int i = 0;num[i] != '\0';i ++)
            {
                int pd = num[i] - '0' + re[i] - '0' + p;
                ans = (char) (pd % 10 + '0') + ans;
                p = pd / 10;
            }
            if (p != 0) ans = (char) (p + '0') + ans;
            num = ans;
        }
        printf("impossible\n");
        end:
        continue;
    }

    return 0;
}
*/

/*
int main()
{
    string str;
    while (cin >> str) {
        stringstream ss;
        ss << str;
        double current;
        double a[50];
        double sum = 0;
        char op;
        ss >> current;
        a[0] = current;
        int i = 0;
        while (ss >> op >> current)
        {
            switch (op) {
                case '+':
                    a[++ i] = current;
                    break;
                case '-':
                    a[++ i] = -current;
                    break;
                case '*':
                    a[i] *= current;
                    break;
                case '/':
                    if (current == 0) goto error;
                    a[i] /= current;
                    break;
                default:
                    break;
            }
        }
        for (int j = 0;j <= i;j ++) sum += a[j];
        printf("%e\n",sum);
        goto end;
        error:
        printf("DivByZero\n");
        end:
        continue;
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        int *a = (int*) malloc(sizeof(int) * (n + 1));
        a[n] = 0;
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        int c;
        scanf("%d",&c);
        int min = 0;
        for (int i = 0;i <= n;i ++)
        {
            int dis = 0;
            for (int j = 0;j <= n;j ++)
            {
                dis += abs(a[j] - a[i]);
            }
            if (i == 0) min = dis;
            else {
                if (dis < min) min = dis;
            }
        }
        printf("%d\n",min * c);
        free(a);
    }
    return 0;
}
*/

/*
int main()
{
    int n,m,a,b;
    while (scanf("%d %d %d %d",&n,&m,&a,&b) != EOF) {
        if (n < m) {
            printf("0\n");
            continue;
        }
        if (b >= a){
            if (n - a < m) printf("1\n");
            else printf("impossible\n");
            continue;
        }
        int t = 0;
        while (n >= m)
        {
            t ++;
            n -= a;
            if (n < m) break;
            n += b;
        }
        printf("%d\n",t);
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    int f = 1;
    while (getline(cin,str)) {
        if (str.size() >= 2)
        {
            if (str[0] == '/' && str[1] == '/') continue;
        }
        if (f) f = 0;
        else printf("\n");
        string a = "";
        int syh = 0;
        for (int i = 0;str[i] != '\0';i ++)
        {
            if (str[i] == '"') syh = !syh;
            if (str[i] == '/' && !syh)
            {
                if (str[i + 1] != '/')
                {
                    a += '/';
                } else break;
            } else a += str[i];
        }
        size_t s = a.size();
        while (a[s - 1] == ' ')
        {
            a.erase(a.begin() + (s - 1));
            s = a.size();
        }
        cout << a;
    }
    return 0;
}
*/

/*
int gcd(int a,int b)
{
    return b != 0 ? gcd(b,a % b) : a;
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        int c = gcd(a, b);
        int a_c = a / c;
        int b_c = b / c;
        int count = 0;
        while (a_c % 2 == 0 || a_c % 3 == 0)
        {
            if (a_c % 2 == 0) {
                a_c /= 2;
                count ++;
            }
            if (a_c % 3 == 0) {
                a_c /= 3;
                count ++;
            }
        }
        if (a_c != 1) {
            printf("-1\n");
            continue;
        }
        while (b_c % 2 == 0 || b_c % 3 == 0)
        {
            if (b_c % 2 == 0) {
                b_c /= 2;
                count ++;
            }
            if (b_c % 3 == 0) {
                b_c /= 3;
                count ++;
            }
        }
        if (b_c != 1) {
            printf("-1\n");
            continue;
        } else printf("%d\n",count);
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    while (cin >> str)
    {
        string xun = "";
        int j = 0;
        for (int i = 0;str[i] != '\0';i ++)
        {
            if (str[i] != xun[j])
            {
                j = 0;
                xun = str.substr(0,i + 1);
            } else {
                if (j < xun.size() - 1) j ++;
                else j = 0;
            }
        }
        if (j != 0) xun = str;
        cout << xun.size() << endl;
    }
    
    return 0;
}
*/

//int main()
//{
//    int N,K;
//    int a[100010];
//    while (scanf("%d %d",&N,&K) != EOF)
//    {
//        for (int i = 0;i < N;i ++) scanf("%d",i + a);
//        int s = a[0];
//        int e = a[N - 1];
//        int count = 0;
//        for (int i = 0;i < N;i ++)
//        {
//            if (a[i] % K == 0)
//            {
//                count ++;
//                count += min(a[i] - s,e - a[i]);
//            }
//        }
//
//        printf("%d\n",count);
//    }
//    return 0;
//}

//typedef struct Item
//{
//    int a;
//    int b;
//    int c;
//} Item;
//
//int main()
//{
//    int m,n;
//    while (~scanf("%d %d",&n,&m))
//    {
//        Item *it = (Item*) malloc(sizeof(Item) * n);
//        for (int i = 0;i < n;i ++) scanf("%d",&(it[i].a));
//        for (int i = 0;i < n;i ++) scanf("%d",&(it[i].b));
//        for (int i = 0;i < n;i ++) scanf("%d",&(it[i].c));
//        sort(it, it + n, [](Item a, Item b){return a.b < b.b;});
//        int my = 0;
//        int i = 0;
//        while (i < n)
//        {
//            Item *t = it + i;
//            if (t -> c > 0)
//            {
//                m -= t -> a;
//                my += t -> b;
//                (t -> c) --;
//            } else i ++;
//            if (m <= 0) break;
//        }
//        if (m <= 0) printf("%d\n",my);
//        else printf("Impossible\n");
//    }
//    return 0;
//}

/*int dp[26] = {0};

int f(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return (dp[n - 1] == 0 ? (dp[n - 1] = f(n - 1)) : dp[n - 1]) + (dp[n - 2] == 0 ? (dp[n - 2] = f(n - 2)) : dp[n - 2]);
}

int main()
{
    int N;
    while (scanf("%d",&N) != EOF)
    {
        printf("%d\n",f(N));
    }
    return 0;
}*/


/*
int f;

struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};

struct Node *crt(int data)
{
    struct Node *n = (struct Node*) malloc(sizeof(struct Node));
    n -> left = NULL;
    n -> right = NULL;
    n -> data = data;
    return n;
}

void postorderTraversal(struct Node *nd)
{
    if (nd == NULL) return;
    postorderTraversal(nd -> left);
    postorderTraversal(nd -> right);
    if (f) f = 0;
    else printf(" ");
    printf("%d",nd -> data);
}

void pre_in_add(int *pr, int l, int *in, struct Node **n)
{
    int data = pr[0];
    *n = crt(data);
    int i = 0;
    for (;i < l;i ++) if (in[i] == data) break;
    if (i > 0) pre_in_add(pr + 1, i, in, &((*n) -> left));
    if (i + 1 < l) pre_in_add(pr + 1 + i, l - 1 - i, in + i + 1, &((*n) -> right));
}



int main()
{
    int n;
    while (scanf("%d",&n) != EOF)
    {
        f = 1;
        int *pr = (int*) malloc(sizeof(int) * n);
        int *in = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d", i + pr);
        for (int i = 0;i < n;i ++) scanf("%d", i + in);
        struct Node *root = NULL;
        pre_in_add(pr, n, in, &root);
        postorderTraversal(root);
        printf("\n");
    }
    return 0;
}
*/


/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
/*
#include<stdio.h>
 
int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m) != EOF && n != 0 && m != 0)
    {
        if (n % 2 == 0 || m % 2 == 0) printf("H\n");
        else printf("X\n");
    }
    return 0;
}
*/

/*
int main()
{
    int t;
    scanf("%d",&t);
    int f = 1;
    while (t --)
    {
        int n;
        scanf("%d",&n);
        double ji = 0;
        double unji = 0;
        while (n --)
        {
            int a;
            scanf("%d",&a);
            if (a >= 60) ji ++;
            else unji ++;
        }
        double rate = ji / (ji + unji) * 100.0;
        if (f) f = 0;
        else printf("\n\n");
        printf("%.3f%%",rate);
    }
    return 0;
}
*/

/*
map<int,int> dp;

int go(int n)
{
    if (n == 1) return 1;
    else if (n % 2 == 1) n = 3 * n + 1;
    else n /= 2;
    return dp.find(n) != dp.end() ? dp[n] : dp[n] = go(n) + 1;
}

int main()
{
    int a,b,m,n;
    while (~scanf("%d %d",&m,&n))
    {
        int max = 0;
        a = m;
        b = n;
        if (m > n)
        {
            a = n;
            b = m;
        }
        for (int i = a;i <= b;i ++)
        {
            int k = go(i);
            if (k >= max) max = k;
        }
        printf("%d %d %d\n",m,n,max);
    }
    return 0;
}
*/

//int find(int *a, int i, int n, int s, int sum, int ct)
//{
//    if (i == n) {
//        if (sum == s && ct == 3) return 1;
//        return 0;
//    }
//    if (find(a, i + 1, n, s, sum, ct)) return 1;
//    if (find(a, i + 1, n, s, sum + a[i], ct + 1)) return 1;
//    return 0;
//}
//
//int main()
//{
//    int n;
//    while (scanf("%d",&n) != EOF)
//    {
//        int *a = (int*) malloc(sizeof(int) * n);
//        for (int i = 0;i < n;i ++) scanf("%d",a + i);
//        sort(a,a + n);
//        long sum = 0;
//        for (int i = 0;i < n;i ++)
//        {
//            sum += a[i];
//        }
//        for (int i = n - 1;i >= 0;i --)
//        {
//            sum -= a[i];
//            if (sum >= a[i])
//            {
//                if (find(a, 0, i, a[i], 0, 0)) {
//                    printf("%d\n", a[i]);
//                    goto ok;
//                }
//            }
//        }
//        printf("no solution\n");
//        ok:
//        continue;
//    }
//    return 0;
//}


/// (a * b) % c = (a % c * b % c) % c.
//int main()
//{
//    int n;
//    while (scanf("%d",&n) != EOF)
//    {
//        int c = 1;
//        int f = 2 % n;
//        int k = 2 % n;
//        while (1)
//        {
//            f = (f * k) % n;
//            c ++;
//            if (f == 1)
//            {
//                printf("2^%d mod %d = 1\n", c, n);
//                goto end;
//            }
//            if (f == k || f == 0) goto error;
//        }
//        error:
//        printf("2^? mod %d = 1\n", n);
//        end:
//        continue;
//    }
//    return 0;
//}

/*
int main()
{
    int m,n;
    while (~scanf("%d %d",&m,&n))
    {
        int *a = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d",i + a);
        sort(a,a + n);
        int c = 0;
        for (int i = 0;i < n;i ++)
        {
            if (a[i] > m)
            {
                m += 2;
                c ++;
            }
        }
        m += n - c;
        printf("%d\n",m);
    }
    return 0;
}
*/

/*
struct time
{
    int hour;
    int min;
    double angle;
};

int com(struct time a, struct time b)
{
    if (a.angle == b.angle) return a.hour * 100 + a.min < b.hour * 100 + b.min;
    return a.angle < b.angle;
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        struct time t[5];
        for (int i = 0;i < 5;i ++)
        {
            int h,m;
            scanf("%d:%d", &h, &m);
            struct time *crt = t + i;
            crt -> hour = h;
            crt -> min = m;
            double a = fabs(m * 6.0 - (h % 12) * 30.0 - m * 0.5);
            crt -> angle = (a > 180) ? 360.0 - a : a;
            
        }
        sort(t,t + 5,com);
        int f = 1;
        for (int i = 0;i < 5;i ++)
        {
            if (f) f = 0;
            else printf(" ");
            printf("%02d:%02d",(t + i) -> hour, (t + i) -> min);
        }
        printf("\n");
    }
    return 0;
}
*/

//int dp[1011][1011] = {0};
//
//int T(int k, int n)
//{
//    if (k == 0) return n;
//    int sum = 0;
//    //printf("(");
//    //int f = 1;
//    for (int i = 1;i <= n;i ++)
//    {
//        //if (f) f = 0;
//        //else printf(" ");
//        //printf("%d",i);
//        sum += (dp[k - 1][i] == 0) ? dp[k - 1][i] = T(k - 1, i) : dp[k - 1][i];
//        if (sum >= 100007) sum -= 100007;
//    }
//    //printf(")");
//    return sum;
//}
//
//int main()
//{
//    int k,n;
//    while (~scanf("%d %d",&k,&n))
//    {
//        int sum = 0;
//        for (int j = 0;j < k;j ++)
//        {
//
//        }
//        printf("%d\n",T(k,n));
//    }
//    return 0;
//}



/*int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        int *a = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        sort(a,a + n);
        printf("%d\n",a[n / 2]);
        free(a);
    }
    return 0;
}*/

/*int main()
{
    long long sum = 0;
    long long a,b;
    long long last = 0;
    while (~scanf("%lld %lld",&a,&b))
    {
        sum = 0;
        last = a;
        sum += last;
        for (int i = 1;i < b;i ++)
        {
            last = last * 10 + a;
            sum += last;
        }
        printf("%lld\n",sum);
    }
    return 0;
}*/

/*int main()
{
    int N;
    while (~scanf("%d",&N))
    {
        if (N <= 0) break;
        int k[101] = {0};
        for (int h = 0;h < N;h ++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            for (int i = a;i <= b;i ++)
            {
                k[i] ++;
            }
        }
        int f = 1;
        for (int i = 1;i <= N;i ++)
        {
            if (f) f = 0;
            else printf(" ");
            printf("%d",k[i]);
        }
        printf("\n");
    }
    return 0;
}*/

/*int main()
{
    int N,M;
    while (~scanf("%d",&N))
    {
        if (N == 0) break;
        scanf("%d",&M);
        int *a = (int*) malloc(sizeof(int) * N);
        memset(a, 0, sizeof(int) * N);
        for (int h = 0;h < M;h ++)
        {
            int p,q;
            scanf("%d %d",&p,&q);
            a[p - 1] ++;
            a[q - 1] --;
        }
        int f = 1;
        int num = 0;
        for (int i = 0;i < N;i ++) {
            num += a[i];
            if (f) f = 0;
            else printf(" ");
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}
*/

/*int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int n;
        scanf("%d",&n);
        int *a = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        int times = 0;
        for (int i = 0;i < n - 1;i ++)
        {
            for (int j = i + 1;j < n;j ++)
            {
                if (a[i] > a[j])
                {
                    times ++;
                    break;
                }
            }
        }
        printf("%d\n",times);
    }
    return 0;
}
*/

/*int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        if (n % 2 == 0)
        {
            for (int i = 0;i < n / 2;i ++) printf("1");
            printf("\n");
        }
        else {
            printf("7");
            for (int i = 0;i < n / 2 - 1;i ++) printf("1");
            printf("\n");
        }
    }
    return 0;
}
*/

//int main()
//{
//    int N,M,a,b,t;
//    while (~scanf("%d %d",&N,&M))
//    {
//        int *arr = (int*) calloc(N, sizeof(int));
//        for (int j = 0;j < M;j ++)
//        {
//            scanf("%d %d %d",&t,&a,&b);
//            if (a > b)
//            {
//                a = a ^ b;
//                b = a ^ b;
//                a = a ^ b;
//            }
//            if (t == 1) for (int i = a - 1;i < b;i ++) arr[i] = !arr[i];
//            else {
//                for (int i = a - 1;i < b;i ++) printf("%d",arr[i]);
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n,m;
//    while (~scanf("%d %d",&n,&m))
//    {
//        if (n == 0 && m == 0) break;
//        vector<set<int>> meng;
//        while (m --)
//        {
//            char c;
//            int a;
//            scanf(" %c",&c);
//            if (c == 'M')
//            {
//                int b;
//                scanf("%d %d",&a,&b);
//                vector<set<int>>::iterator fd_1 = meng.end(), fd_2 = meng.end();
//                for (vector<set<int>>::iterator i = meng.begin();i != meng.end();i ++)
//                {
//                    set<int>::iterator n1 = i -> find(a);
//                    set<int>::iterator n2 = i -> find(b);
//                    if (n1 != i -> end())
//                    {
//                        fd_1 = i;
//                    }
//                    if (n2 != i -> end())
//                    {
//                        fd_2 = i;
//                    }
//                }
//                if (fd_1 == meng.end() && fd_2 == meng.end())
//                {
//                    set<int> s;
//                    s.insert(a);
//                    s.insert(b);
//                    meng.push_back(s);
//                } else if (fd_1 != meng.end() && fd_2 == meng.end())
//                {
//                    fd_1 -> insert(b);
//                } else if (fd_2 != meng.end() && fd_1 == meng.end())
//                {
//                    fd_2 -> insert(a);
//                } else if (fd_1 != fd_2)
//                {
//                    for (set<int>::iterator i;i != fd_2 -> end();i ++)
//                    {
//                        fd_1 -> insert(*i);
//                    }
//                    meng.erase(fd_2);
//                }
//            } else {
//                scanf("%d",&a);
//                for (vector<set<int>>::iterator i = meng.begin();i != meng.end();)
//                {
//                    if (i -> find(a) != i -> end()) meng.erase(i);
//                    else i ++;
//                }
//            }
//        }
//        printf("%lu",meng.size());
//    }
//    return 0;
//}

/*int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if (a < 12 && b >= 12)
        {
            if (b == 24) printf("%d\n",b - a - 2);
            else printf("%d\n",b - a - 1);
        }
        else if (b % 12 != 0) printf("%d\n",b - a);
        else printf("%d\n",b - a - 1);
    }
    return 0;
}
*/

//int main()
//{
//    int T;
//    scanf("%d",&T);
//    while (T --)
//    {
//        double a,b;
//        scanf("%lf %lf",&a,&b);
//        printf("%.0f\n",pow(a,b) - pow(b,a));
//    }
//    return 0;
//}

//int main()
//{
//    int m,n;
//    while (~scanf("%d %d",&n,&m))
//    {
//        char a[12][12];
//        int s_x,s_y,e_x,e_y;
//        for (int i = 0;i < n;i ++)
//        {
//            scanf(" ");
//            for (int j = 0;j < m;j ++)
//            {
//                char c;
//                scanf("%c",&c);
//                a[i][j] = c;
//                if (c == 'S') {
//                    s_x = j;
//                    s_y = i;
//                } else if (c == 'T')
//                {
//                    e_x = j;
//                    e_y = i;
//                }
//            }
//        }
//        stack<int> stk;
//
//    }
//    return 0;
//}

//struct msn
//{
//    int start;
//    int end;
//};
//
//int com(msn a, msn b)
//{
//    if (a.start == b.start) return a.end > b.end;
//    else return a.start < b.start;
//}
//
//int main()
//{
//    int N;
//    while (~scanf("%d",&N))
//    {
//        if (!N) break;
//        msn *m = (msn*) malloc(sizeof(msn) * N);
//        for (int i = 0;i < N;i ++)
//        {
//            int a,b;
//            scanf("%d %d",&a,&b);
//            (m + i) -> start = a;
//            (m + i) -> end = a + b;
//        }
//        sort(m, m + N, com);
//        //for (int i = 0;i < N;i ++) printf("%d %d\n",m[i].start,m[i].end);
//        for (int i = 0;i < N;i ++)
//        {
//
//        }
//    }
//    return 0;
//}

//int com(pair<int,int> a,pair<int,int> b)
//{
//    if (a.first == b.first) return a.second < b.second;
//    return a.first > b.first;
//}
//
//int main()
//{
//    int T;
//    while (~scanf("%d",&T))
//    {
//        vector<pair<int,int> > a(T);
//        set<int> b;
//        for (int i = 0;i < T;i ++)
//        {
//            int n;
//            scanf("%d",&n);
//            a[i]=pair<int,int>(n,i);
//            b.insert(i);
//        }
//        sort(a.begin(),a.end(),com);
//        int c = 0;
//        for (vector<pair<int,int> >::iterator i = a.begin();i != a.end();i ++)
//        {
//            set<int>::iterator k = b.find(i -> second);
//            c += distance(k,b.end()) - 1;
//            b.erase(k);
//        }
//        printf("%d\n",c);
//    }
//    return 0;

/*int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        queue<int> a;
        stack<int> b;
        priority_queue<int,vector<int>,greater<int> > c;
        priority_queue<int> d;
        for (int i = 0;i < n;i ++)
        {
            int k;
            scanf("%d",&k);
            a.push(k);
            b.push(k);
            c.push(k);
            d.push(k);
        }
        int ok[4] = {1,1,1,1};
        for (int i = 0;i < n;i ++)
        {
            int k;
            scanf("%d",&k);

            if (k != a.front()) ok[0] = 0;
            if (k != b.top()) ok[1] = 0;
            if (k != c.top()) ok[2] = 0;
            if (k != d.top()) ok[3] = 0;

            a.pop();
            b.pop();
            c.pop();
            d.pop();
        }
        int f = 1;
        if (ok[1]) {
            if (f) f = 0;
            else printf(" ");
            printf("stack");
        }
        if (ok[0]) {
            if (f) f = 0;
            else printf(" ");
            printf("queue");
        }
        if (ok[2] || ok[3]) {
            if (f) f = 0;
            else printf(" ");
            printf("priority_queue");
        }
        if (f) printf("none");
        printf("\n");

    }
    return 0;
}
*/

/*
int a[1000002] = {0};
int j = 2;

int main()
{
    int T;
    scanf("%d",&T);
    a[1] = 2;
    a[2] = 4;
    while (T --)
    {
        int n;
        scanf("%d",&n);
        
        if (n == 1) printf("1\n");
        else {
            int k = n / 2 + 1;
            if (k > j) for (int i = j;i < k;i ++)
            {
                a[i] = (a[i / 2] % 1000000000 + a[i - 1] % 1000000000) % 1000000000;
                j ++;
            }
            printf("%d\n",a[k - 1]);
        }
    }
    return 0;
}
*/

/*
int main()
{
    int M, L;
    scanf("%d %d",&L,&M);
    vector<set<int> > aaa(L + 1);
    int *arr = (int*) calloc(L + 1,sizeof(int));
    int *brr = (int*) calloc(M + 1,sizeof(int));
    int n = 1;
    for (int i = 1;i <= M;i ++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        aaa[a].insert(i);
        aaa[b].insert(i);
        arr[a] = 1;
        arr[b] = 1;
    }
    int k = 0;
    int c = 0;
    for (int i = 0;i <= L;i ++)
    {
        if (k == 0) c ++;
        if (arr[i] != 0)
        {
            for (set<int>::iterator j = aaa[i].begin();j != aaa[i].end();j ++)
            {
                if (brr[*j] == 0)
                {
                    brr[*j] = 1;
                    if (k == 0) c --;
                    k ++;
                } else {
                    k --;
                }
            }
            
        }
        //printf("%d\n",c);
    }
    printf("%d",c);
    return 0;
*/

/*int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        map<int,int> arr;
        for (int i = 0;i < n;i ++) {
            int m;
            scanf("%d", &m);
            arr[m] ++;
        }
        for (map<int,int>::iterator i = arr.begin();i != arr.end();)
        {
            
            int a = i -> first, b = i -> second;
            if (b >= 2) arr[a + 1] += b / 2;
            if (b % 2 == 0)
            {
                arr.erase(i++);
            } else {
                arr[a] = 1;
                i ++;
            }
        }
        
        printf("%lu\n",arr.size());
    }
    return 0;
}*/

/*int main()
{
    int n,k;
    while (~scanf("%d %d",&n,&k))
    {
        int *a = (int*) malloc(sizeof(int) * n);
        for (int i = 0;i < n;i ++) scanf("%d",i + a);
        sort(a,a + n);
        printf("%d\n",a[k - 1]);
        
    }
    
}*/

/*int main()
{
    int n,m;
    while (~scanf("%d %d",&n,&m))
    {
    if (m - n >= 2) printf("NO\n");
    else if (m == 0){
        while (n --) printf("0");
        printf("\n");
    } else {
        if (m > n)
        {
            printf("1");
            while (n --) printf("01");
            printf("\n");
        } else {
            int c = m;
            while (c --) printf("01");
            int k = n - m;
            while (k --) printf("0");
            printf("\n");
        }
    }
    }
    return 0;
}*/

/*int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        if (n <= 36) printf("duiciwohenbaoqian\n");
        else printf("wochengrenniyingle\n");
    }
    return 0;
}*/

/*int main()
{
    int n,w,s;
    while (~scanf("%d %d %d",&n,&w,&s))
    {
        vector<int> a(n);
        for (int i = 0;i < n;i ++) a[i] = i + 1;
        int k = n;
        for (int i = 0;i < n;i ++)
        {
            int m = (w - 1 + s - 1) % k;
            printf("%d\n",a[m]);
            a.erase(a.begin() + m);
            k --;
            if (k != 0) w = m % k + 1;
            
        }
    }
    return 0;
}*/

/*int main()
{
    char num[20] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j'};
    string a,b;
    string ans;
    while (cin >> a >> b)
    {
        ans = "";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        size_t a_s = a.size();
        size_t b_s = b.size();
        if (a_s > b_s) for (size_t i = b_s;i < a_s;i ++) b += '0';
        else for (size_t i = a_s;i < b_s;i ++) a += '0';
        int jin = 0;
        int current = 0;
        for (int i = 0;i < max(a_s,b_s);i ++)
        {
            int a_n,b_n;
            if (a[i] >= 'a' && a[i] <= 'j') a_n = 10 + a[i] - 'a';
            else a_n = a[i] - '0';
            if (b[i] >= 'a' && b[i] <= 'j') b_n = 10 + b[i] - 'a';
            else b_n = b[i] - '0';
            current = a_n + b_n + jin;
            jin = current / 20;
            current %= 20;
            ans = num[current] + ans;
        }
        if (jin != 0)
        {
            current = jin;
            jin = current / 20;
            current %= 20;
            ans = num[current] + ans;
        }
        cout << ans << endl;
    }
    
    return 0;
}*/

/////////////精度
/*
int main()
{
    int a,b,c,d;
    while (~scanf("%d %d %d %d",&a,&b,&c,&d))
    {
        double k = b * log(a);
        double l = d * log(c);
        //printf("%.5f %.5f\n",k,l);
        if (fabs(k - l) < 1e-10) printf("=\n");
        else if (k > l) printf(">\n");
        else printf("<\n");
    }
    return 0;
}*/

//struct stu
//{
//    double jun;
//    int fen[5];
//} a[50];
//
//int main()
//{
//    int n,m;
//    while (~scanf("%d %d",&n,&m))
//    {
//        double *c = (double*) calloc(m,sizeof(double));
//        for (int i = 0;i < n;i ++)
//        {
//            (a + i) -> jun = 0;
//            for (int j = 0;j < m;j ++)
//            {
//                int k;
//                scanf("%d",&k);
//                *((a + i) -> fen + j) = k;
//                (a + i) -> jun += k;
//                *(c + j) = k;
//            }
//        }
//        for (int i = 0;i < n;i ++)
//        {
//            if (i) printf(" ");
//            printf("%.2f",(a + i) -> jun / m);
//        }
//        printf("\n");
//        for (int i = 0;i < m;i ++)
//        {
// 
//        }
//    }
//    return 0;
//}


/*int main()
{
    int T;
    while (~scanf("%d",&T))
    {
        if (!T) break;
        string a;
        map<string,int> l;
        while (T --)
        {
            cin >> a;
            l[a] ++;
        }
        int max = -1;
        string k;
        for (map<string,int>::iterator i = l.begin();i != l.end();i ++)
        {
            if (i -> second > max)
            {
                max = i -> second;
                k = i -> first;
            }
        }
        cout << k << endl;
    }
    return 0;
}*/

//map<pair<pair<int,int>,int>,int> dp;
//
//int f(int n,pair<int,int> &p)
//{
//    if (n == 1 || n == 2) return 1;
//    return (p.first * f(n  - 1,p) + p.second * f(n - 2,p)) % 7;
//}
//
//int main()
//{
//    int A,B,n;
//    while (~scanf("%d %d %d",&A,&B,&n))
//    {
//        if (!A && !B && !n) break;
//        pair<int,int> a(A,B);
//        printf("%d\n",f(n,a));
//    }
//    return 0;
//}

//////zcmu oj 1226
/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int n;
        scanf("%d",&n);
        int has = 0;
        int ans = 1000;
        int last = 0;
        int l = 0;
        int current;
        for (int i = 0;i < n;i ++)
        {
            scanf("%d",&current);
            
            last = max(l, last) + current;
            l = current;
            if (i != 0)
            {
                if (!has) {
                    ans = last;
                    has = 1;
                }
                else ans = max(last, ans);
            }
        }
        if (ans > 0) printf("%d\n",ans);
        else printf("Game Over\n");
    }
    return 0;
}
*/

/*
int w;

void printDot()
{
    for (int i = 0;i < w;i ++) printf(".");
}

int main()
{
    scanf("%d",&w);
    printf("o...o");
    printDot();
    printf("o...o");
    printDot();
    printf("o...o");
    printDot();
    printf("ooooo");
    printDot();
    printf("o...o\n");
    
    printf("o...o");
    printDot();
    printf("oo..o");
    printDot();
    printf("o...o");
    printDot();
    printf("o....");
    printDot();
    printf("oo.oo\n");
    
    printf("ooooo");
    printDot();
           printf("o.o.o");
    printDot();
           printf("o...o");
    printDot();
           printf("o....");
    printDot();
           printf("o.o.o\n");
    
    printf("o...o");
    printDot();
           printf("o..oo");
    printDot();
           printf("o...o");
    printDot();
           printf("o....");
    printDot();
           printf("o...o\n");
    
    printf("o...o");
    printDot();
           printf("o...o");
    printDot();
           printf("ooooo");
    printDot();
           printf("ooooo");
    printDot();
           printf("o...o\n");
    return 0;
}
*/

/*
int main()
{
    int N,k;
    scanf("%d %d",&N,&k);
    
    int a[1000][1000] = {0};
    int y[5][5] = {0};
    char c;
    for (int i = 0;i < N;i ++)
    {
        scanf(" ");
        for (int j = 0;j < N;j ++)
        {
            scanf("%c",&c);
            if (c == '.') y[i][j] = 1;
        }
    }
    
    
    
    int b[1000][1000] = {0};
    int n = N;
    for (int i = 0;i < n;i ++) for (int j = 0;j < n;j ++) a[i][j] = y[i][j];
    for (int z = 1;z < k;z ++)
    {
        for (int q = 0;q < N;q ++)
        {
            for (int w = 0;w < N;w ++)
            {

                for (int i = 0;i < n;i ++)
                {

                    for (int j = 0;j < n;j ++)
                    {
                        if (y[q][w]) b[q * n + i][w * n + j] = a[i][j];
                        else b[q * n + i][w * n + j] = 0;
                    }
                }
            }
        }

        n *= N;
        for (int i = 0;i < n;i ++) for (int j = 0;j < n;j ++) a[i][j] = b[i][j];

    }
    
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            if (a[i][j]) c = '.';
            else c = '*';
            printf("%c",c);
        }
        if (i != n - 1) printf("\n");
    }
    return 0;
}
*/

/*int main()
{
    uint n;
    uint sum,a;
    while (~scanf("%d",&n))
    {
        sum = 0;
        while (n --)
        {
            scanf("%u",&a);
            sum += a;
        }
        printf("%u\n",sum);
    }
    return 0;
}
*/

/*
int main()
{
    int m,n;
    while (~scanf("%d %d",&n,&m))
    {
        vector<string> arr;
        string line;
        for(int i=0; i<n; i++)
        {
            cin >> line;
            arr.push_back(line);
        }

        long q;
        scanf("%ld", &q);
        while(q--){
            int o;
            scanf("%d",&o);
            int f = 1;
            if(o){
                if (f) f = 0;
                else printf("\n");
                int x1, y1, x2, y2;
                scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                int s[26] = {0};
                for(int i=x1; i<=x2; i++){
                    for(int j=y1; j<=y2; j++) {
                        s[arr[i-1][j-1] - 'a'] ++;
                    }
                }
                for(int i=0; i<26; i++){
                    if(i!=0){
                        printf(" ");
                    }
                    printf("%d", s[i]);
                }
            }else{
                int x, y;
                char z;
                scanf("%d %d %c", &x, &y, &z);
                arr[x-1][y-1] = z;
            }
        }
    }
    return 0;
}
*/

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    map<string,int> arr_name;
//    map<int,string> arr_src;
//    for (int i = 0;i < n;i ++)
//    {
//        string name;
//        int src;
//        cin >> name >> src;
//        arr_name[name] = src;
//        arr_src[src] = name;
//    }
//    int m;
//    scanf("%d",&m);
//    int mx = -1;
//    for (int i = 0;i < m;i ++)
//    {
//        int a;
//        scanf("%d",&a);
//        if (a > mx) mx = a;
//    }
//
//    return 0;
//}

//int main()
//{
//    string str;
//    string chn = "CHN";
//    cin >> str;
//    int cnt = 0;
//    set<int> c,h,n;
//    for (int i = 0;str[i] != 0;i ++)
//    {
//        if (str[i] == 'C') c.insert(i);
//        else if (str[i] == 'H') h.insert(i);
//        else if (str[i] == 'N') n.insert(i);
//    }
//    for (set<int>::iterator i = c.begin();i != c.end();i ++) printf("%d ",*i);
//    printf("\n");
//    for (set<int>::iterator i = h.begin();i != h.end();i ++) printf("%d ",*i);
//    printf("\n");
//    for (set<int>::iterator i = n.begin();i != n.end();i ++) printf("%d ",*i);
//    printf("\n");
//
////    for (set<int>::iterator i = c.begin();i != c.end();i ++)
////    {
////        for ()
////    }
//    //printf("%d",cnt);
//
//    return 0;
//}

/*int dp[505] = {0};

int f(int n)
{
    if (n == 1) return 1;
    int i = n - 3;
    int m = (1 + i) / 2;
    int k = (2 - i % 2 + i) * m / 2;
    return dp[n] = (dp[n - 1] == 0 ? f(n - 1) : dp[n - 1]) + 2 * n - 1 + (n - 1) * n / 2 + k;
}

int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        printf("%d\n",f(n));
        //for (int i = 0;i < 500;i ++) printf("%d ",dp[i]);
    }
    return 0;
}*/

/*int main()
{
    char a[5];
    scanf("%s",a);
    for (int i = 0;i < 4;i ++)
    {
        a[i] = (a[i] - '0' + 9) % 10;
    }
    printf("The encrypted number is %hhd%hhd%hhd%hhd\n",a[2],a[3],a[0],a[1]);
    return 0;
}*/

/*
int main()
{
    int N;
    while (~scanf("%d",&N))
    {
        double sum = 0;
        int k = 0;
        while (N --)
        {
            int s;
            char c;
            double a = 0;
            scanf("%d %c",&s,&c);
            if (c != 'P' && c != 'N')
            {
                switch (c) {
                    case 'A':
                        a = 4;
                        break;
                    case 'B':
                        a = 3;
                        break;
                    case 'C':
                        a = 2;
                        break;
                    case 'D':
                        a = 1.3;
                        break;
                }
                k += s;
                sum += s * a;
            }
        }
        if (k != 0) sum /= k;
        printf("%.2lf\n",sum);
    }
    return 0;
}
*/

/*int main()
{
    int T;
    scanf("%d", &T);
    while (T --)
    {
        int K;
        scanf("%d",&K);
        string str = "a";
        int k = 0;
        int n = 'b';
        int i = 1;
        while (k != K)
        {
            str += n;
            if (str[i] > str[i - 1]) k ++;
            if (n != 'z') n ++;
            else {
                n = 'a';
            }
            i ++;
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    multiset<int> s;
    while (n --)
    {
        int op, n;
        scanf("%d %d", &op, &n);
        int i;
        multiset<int>::iterator l;
        switch (op) {
            case 1:
                s.insert(n);
                break;
            case 2:
                s.erase(s.find(n));
                break;
            case 3:
                l = s.find(n);
                if (l != s.end()) printf("%ld\n",distance(s.begin(), l) + 1);
                break;
            case 4:
                i = 0;
                for (multiset<int>::iterator p = s.begin(); p != s.end(); p ++, i ++)
                {
                    if (i == n - 1) {
                        printf("%d\n", *p);
                        break;
                    }
                }
                break;
            case 5:
                l = s.find(n);
                if (l == s.end()) l = s.upper_bound(n);
                if (l != s.begin()) printf("%d\n",*(-- l));
                break;
            case 6:
                l = s.upper_bound(n);
                if (l != s.end()) printf("%d\n",*l);
                break;
            default:
                for (multiset<int>::iterator p = s.begin();p != s.end();p ++) printf("%d ",*p);
                printf("\n");
                break;
        }
        
    }
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int> s;
    for (int i = 1;i <= n;i ++) s.push_back(i);
    while (m --)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        reverse(s.begin() + (a - 1), s.begin() + b);
    }
    
    for (vector<int>::iterator i = s.begin();i != s.end();i ++)
    {
        if (i != s.begin()) printf(" ");
        printf("%d",*i);
    }
    return 0;
}
*/

/*
int gcd(int a,int b)
{
    return b != 0 ? gcd(b,a % b) : a;
}

int main()
{
    int T;
    scanf("%d",&T);
    int a[(int)1e5+10];
    while (T --)
    {
        int l;
        scanf("%d",&l);
        int last;
        int ok = -1;
        for (int i = 0;i < l;i ++) {
            scanf("%d",a + i);
            if (i > 0) {
                if (i == 1) last = gcd(a[i],a[i - 1]);
                else last = gcd(a[i],last);
                if (last == 1) ok = 1;
            }
        }
        if (ok != -1) ok = l;
        printf("%d\n",ok);
    }
    return 0;
}
*/

//int com(pair<int,int> a, pair<int,int> b)
//{
//    if (a.second == b.second) return a.first < b.first;
//    return a.second > b.second;
//}
//
//int main()
//{
//    int T;
//    scanf("%d",&T);
//    while (T --)
//    {
//        int v,n;
//        scanf("%d %d", &v, &n);
//        pair<int,int> ab[1010];
//        for (int i = 0;i < n;i ++) scanf("%d %d",&(ab + i) -> first, &(ab + i) -> second);
//
//        /*sort(ab, ab + n, com);
//        int ok = 1;
//        for (int i = 0;i < n;i ++)
//        {
//            pair<int,int> *it = ab + i;
//            printf("v=%d\n",v);
//            if (v >= it -> second) v -= it -> first;
//            else {
//                ok = 0;
//                break;
//            }
//            printf(">>%d %d\n",(ab + i) -> first, (ab + i) -> second);
//        }
//        if (ok) printf("Yes\n");
//        else printf("No\n");*/
//    }
//    return 0;
//}

/*
int main()
{
    string str;
    cin >> str;
    string p;
    cin >> p;
    int ps = -1;
    int cnt = 0;
    while ((ps = str.find(p, ps + 1)) != string::npos)
    {
        cnt ++;
    }
    printf("%d",cnt);
    return 0;
}
*/

//int main()
//{
//    int n;
//    int tmp;
//    while (~scanf("%d",&n))
//    {
//        vector<set<int> > v;
//        while (n --)
//        {
//            int k;
//            scanf("%d", &k);
//            set<int> s;
//            while (k --)
//            {
//                scanf("%d",&tmp);
//                s.insert(tmp);
//            }
//            v.push_back(s);
//        }
//        int q;
//        int a,b;
//        scanf("%d", &q);
//        while (q --)
//        {
//            scanf("%d %d", &a, &b);
//            int ok = 0;
//            for (vector<set<int> >::iterator i = v.begin();i != v.end();i ++)
//            {
//                if (i -> find(a) != i -> end() && i -> find(b) != i -> end()) {
//                    ok = 1;
//                    printf("Yes\n");
//                }
//            }
//            if (!ok) printf("No\n");
//        }
//    }
//    return 0;
//}

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int arr[12];
        for (int i = 0;i < 12;i ++) scanf("%d", arr + i);
        int k[4] = {0};
        for (int i = 0;i < 12;i ++)
        {
            k[0] = arr[i];
            for (int j = 0;j < 12;j ++)
            {
                if (j != i)
                {
                    k[1] = arr[j];
                    if (k[0] + k[1] == a || k[0] * k[1] == a)
                    {
                        for (int t = 0;t < 12;t ++)
                        {
                            if (t != i && t != j)
                            {
                                k[2] = arr[t];
                                if (k[0] + k[2] == c || k[0] * k[2] == c)
                                {
                                    for (int y = 0;y < 12;y ++)
                                    {
                                        if (y != i && y != j && y != t)
                                        {
                                            k[3] = arr[y];
                                            if ((k[1] + k[3] == d || k[1] * k[3] == d) && (k[3] + k[2] == b || k[3] * k[2] == b))
                                            {
                                                goto done;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        done:
        for (int i = 0;i < 4;i ++) {
            if (i != 0) printf(" ");
            printf("%d",k[i]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int x;
        scanf("%d",&x);
        printf("%d\n",x);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    string k[] = {"1","#1","2","#2","3","4","#4","5","#5","6","#6","7"};
    map<string,ll> l;
    l["1"] = 0;
    l["#1"] = 1;
    l["2"] = 2;
    l["#2"] = 3;
    l["3"] = 4;
    l["4"] = 5;
    l["#4"] = 6;
    l["5"] = 7;
    l["#5"] = 8;
    l["6"] = 9;
    l["#6"] = 10;
    l["7"] = 11;
    while (T --)
    {
        ll n,m;
        scanf("%lld %lld",&n,&m);
        int f = 1;
        for (int i = 0;i < n;i ++)
        {
            string s;
            cin >> s;
            if (f) f = 0;
            else printf(" ");
            cout << k[(l[s] + m + 12 * abs(m)) % 12];
        }
        printf("\n");
    }
    return 0;
}*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    pair<int,int> d[10] = {make_pair(0, 0),
        make_pair(-1, -1),make_pair(0, -1),make_pair(1, -1),
        make_pair(-1, 0),make_pair(0, 0),make_pair(1, 0),
        make_pair(-1, 1),make_pair(0, 1),make_pair(1, 1)};
    while (T --)
    {
        int k[3][3];
        for (int i = 0;i < 3;i ++)
        {
            for (int j = 0;j < 3;j ++)
            {
                scanf("%d",&k[i][j]);
            }
        }
        int a[3][3] = {0};
        int b[3][3] = {0};
        for (int i = 0;i < 3;i ++)
        {
            for (int j = 0;j < 3;j ++)
            {
                if (k[i][j] == 5) continue;
                a[i + d[k[i][j]].second][j + d[k[i][j]].first] ++;
            }
        }
        int max_a = -1;
        pair<int,int> index_a;
        for (int i = 0;i < 3;i ++)
        {
            for (int j = 0;j < 3;j ++)
            {
                if (a[i][j] > max_a){
                    max_a = a[i][j];
                    index_a = make_pair(i, j);
                }
                if (k[i][j] == 5) {
                    b[i][j] = 9;
                    continue;
                }
                b[i][j] = a[i + d[k[i][j]].second][j + d[k[i][j]].first];
            }
        }
        int min_b = 10;
        pair<int, int> index_b;
        for (int i = 0;i < 3;i ++)
        {
            for (int j = 0;j < 3;j ++)
            {
                if (!(i == index_a.first && j == index_a.second))
                if (b[i][j] < min_b)
                {
                    index_b = make_pair(i, j);
                    min_b = b[i][j];
                }
            }
        }
        printf("%d %d %d %d\n",index_a.first + 1,index_a.second + 1,index_b.first + 1,index_b.second + 1);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int a[10010];
    while (T --)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        if (k == 1)
        {
            printf("0\n");
            continue;
        }
        sort(a, a + n);
        int sum = 0;
        if (n % 2) {
            int s = 0;
            for (int i = 0;i < n - 1;i += 2)
            {
                s = 0;
                for (int j = 0;j < n;j ++)
                {
                    if (i == j)
                    {
                        s += a[j + 2] - a[j];
                        j += 2;
                    } else {
                        s += a[j + 1] - a[j];
                        j ++;
                    }
                }
                if (i == 0) sum = s;
                else sum = min(s, sum);
            }
        } else {
            for (int i = 0;i < n - 1;i += 2)
            {
                sum += a[i + 1] - a[i];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
*/

//void combinate(int iPos, int iProc, long iTol, int iKey, vector<int> data,int des[],long long *sum,vector<int> p)
//{
//    if(iProc > iTol)
//    {
//        return;
//    }
//    if(iPos == iKey)
//    {
//        ll ans = 1;
//        for(int i = 0;i < iKey; i++)
//        {
//            ans  = ans * p[des[i]] % 1000000007;
//        }
//        *sum = (*sum + ans) % 1000000007;
//        return;
//    }
//    else
//    {
//        combinate(iPos,iProc+1,iTol,iKey,data,des,sum,p);
//        des[iPos] = data[iProc];
//        combinate(iPos+1,iProc+1,iTol,iKey,data,des,sum,p);
//    }
//}
//
//int main()
//{
//    int T;
//    scanf("%d",&T);
//    map<int,int> b;
//    while (T --)
//    {
//        int n,m;
//        scanf("%d %d",&n,&m);
//        b.clear();
//        while (m --)
//        {
//            int op;
//            scanf("%d",&op);
//            if (op == 1)
//            {
//                int p,x;
//                scanf("%d %d",&p,&x);
//                b[p] += x;
//                // test
//
//            } else
//            {
//                int l,r,k;
//                scanf("%d %d %d",&l,&r,&k);
//                // test
////                for (map<int,int>::iterator i = b.begin();i != b.end();i ++) printf("%d ",i -> first);
////                cout << endl;
//                map<int,int>::iterator start_i = b.lower_bound(l);
//                map<int,int>::iterator end_i = b.upper_bound(r);
//                long d = distance(start_i, end_i);
//                if (d < k) printf("0\n");
//                else {
//                    if (d == k) printf("1\n");
//                    else {
//                        vector<int> p(d);
//                        vector<int> q(d);
//                        int u = 0;
//                        for (map<int,int>::iterator i = start_i;i != end_i;i ++,u ++)
//                        {
//                            p[u] = i -> second;
//                            q[u] = u;
//                        }
//                        int tmp[20];
//                        long long sum = 0;
//                        combinate(0, 0, d, k, q, tmp, &sum, p);
//                        printf("%lld\n",sum);
//                    }
//                }
//
////                long long num = distance(start_i, end_i);
//
////                cout << endl;
//            }
//        }
//    }
//    return 0;
//}

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int n;
        scanf("%d",&n);
        int max = -1;
        int a;
        while (n --)
        {
            scanf("%d",&a);
            if (a > max) max = a;
        }
        printf("%d\n",max);
    }
    return 0;
}
*/

/*
int main()
{
    char a,b,c;
    scanf("%c%c",&a,&b);
    scanf(" %c",&c);
    int k = 0;
    switch (c) {
        case 'S':
            if ((a == 'S' && b == 'J') || (a == 'J' && b == 'S'))
            {
                k = 0;
            } else if ((a == 'S' && b == 'B') || (a == 'B' && b == 'S'))
            {
                k = 1;
            } else if ((a == 'J' && b == 'B') || (a == 'B' && b == 'J'))
            {
                k = 1;
            }
            break;
        case 'J':
            if ((a == 'S' && b == 'J') || (a == 'J' && b == 'S'))
            {
                k = 1;
            } else if ((a == 'S' && b == 'B') || (a == 'B' && b == 'S'))
            {
                k = 1;
            } else if ((a == 'J' && b == 'B') || (a == 'B' && b == 'J'))
            {
                k = 0;
            }
            break;
            
        case 'B':
            if ((a == 'S' && b == 'J') || (a == 'J' && b == 'S'))
            {
                k = 1;
            } else if ((a == 'S' && b == 'B') || (a == 'B' && b == 'S'))
            {
                k = 0;
            } else if ((a == 'J' && b == 'B') || (a == 'B' && b == 'J'))
            {
                k = 1;
            }
            break;
        default:
            break;
    }
    switch (k) {
        case 0:
            printf("lyrnb\n");;
            break;
        case 1:
            printf("pmznb\n");
            break;
        case 2:
            printf("ljrnb\n");
            break;
            
        default:
            break;
    }
    // S > J
    // J > B
    // B > S
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        string str;
        cin >> str;
        int num = (int) str.size();
        int y = 0, n = 0;
        for (int i = 0;str[i] != '\0';i ++)
        {
            if (str[i] == 'y' || str[i] == 'Y')
            {
                y ++;
            } else if (str[i] == 'n' || str[i] == 'N')
            {
                n ++;
            }
        }
        if (y >= num / 2) printf("pmznb\n");
        else if (n >= num / 2) printf("lyrnb\n");
        else printf("wsdd\n");
    }
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    ll j[110];
    for (int i = 0;i < n;i ++) scanf("%lld", j + i);
    while (m --)
    {
        int o,l,r;
        scanf("%d %d %d",&o,&l,&r);
        if (o == 1)
        {
            for (int i = l - 1;i < r;i ++)
            {
                j[i] = j[i] * 251 % 996 * 404 * 123;
            }
            
            //for (int i = 0;i < n;i ++) printf("%lld ",j[i]);
        } else {
            map<ll,int> mp;
            for (int i = l - 1;i < r;i ++)
            {
                mp[j[i]] ++;
            }
            int max = -1;
            for (map<ll,int>::iterator i = mp.begin();i != mp.end();i ++)
            {
                if (i -> second >= max) max = i -> second;
            }
            printf("%d\n",max);
        }
    }
    return 0;
}
*/

//int main()
//{
//    int n,m,k;
//    scanf("%d %d %d",&n,&m,&k);
//    int a[2010];
//    multiset<int> b;
//    for (int i = 0;i < n;i ++) {
//        scanf("%d", a + i);
//        if (i > 0) {
//            b.insert(a[i] - a[i - 1]);
//        }
//    }
//    int q = 0;
//    int sum = 0;
//    for (multiset<int>::reverse_iterator i = b.rbegin();i != b.rend();i ++) {
//
//        if (q >= k - 1) {
//            sum += *i + 1;
//        } else q ++;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

/*
int main()
{
    ll n, k;
    scanf("%lld %lld",&n,&k);
    string str;
    cin >> str;
    string ss = str;
    reverse(ss.begin(),ss.end());
    str += ss;
    printf("%c\n",str[(k - 1) % str.size()]);
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        ll p;
        scanf("%lld",&p);
        ll a = sqrt((p - 1) / 3);
        if (3 * a * a + 3 * a + 1 == p) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/

/*
struct PP
{
    string name;
    int a;
    int b;
    int n;
} p[1010];

int cmp(PP a,PP b)
{
    if(a.a == b.a)
    {
        if (a.b == b.b)
        {
            return a.name < b.name;
        }
        return a.b > b.b;
    }
    return a.a > b.a;
}

int main()
{
    int T;
    scanf("%d",&T);
    map<int,int> k;
    while (T --)
    {
        int n;
        scanf("%d",&n);
        for (int i = 0;i < n;i ++)
        {
            cin >> p[i].name;
            scanf("%d %d", &(p + i) -> a, &(p + i) -> b);
            (p + i) -> n = i;
        }
        sort(p,p + n,cmp);
        
        for (int i = 0;i < n;i ++)
        {
            k[(p + i) -> n] = i + 1;
        }
        int f = 1;
        for (map<int,int>::iterator i = k.begin();i != k.end();i ++)
        {
            if (f) f = 0;
            else printf(" ");
            printf("%d",i -> second);
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
    string a;
    cin >> a;
    for (int i = 0;a[i] != '\0';i ++) printf("%d", 1 - (a[i] - '0'));
    return 0;
}
*/

/*
int q(double a, double b)
{
    int k = a * b;
    if (k == a * b)return k;
    else return k + 1;
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        double n,k;
        scanf("%lf %lf",&n,&k);
        int j = q(n,0.1);
        int y = q(n,0.2);
        int t = q(n,0.3);
        
        
        
        if (k <= j) printf("jin\n");
        else if (k <= j + y) printf("yin\n");
        else if (k <= j + y + t) printf("tong\n");
        else printf("tie\n");
    }
    return 0;
}
*/

/*
int main()
{
    int x;
    scanf("%d",&x);
    ll f[50] = {0};
    f[1] = 1;
    for (int i = 2;i <= x;i ++)
    {
        for (int j = 1;j < i;j ++)
        {
            f[i] += f[j] * (i - j);
        }
    }
    printf("%lld",f[x]);
    return 0;
}
*/

/*
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    if (a > b)
    {
        double t = a;
        a = b;
        b = t;
    }
    a /= 2;
    b /= 2;
    double k = sqrt(a * a + b * b);
    printf("%.4lf\n",(b - a * b / k) / (k / a + 1));
    return 0;
}
*/


/*
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x * 2 > max(y,z)) printf("clever duxing201606\n");
    else printf("forever loney\n");
    return 0;
}*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[1010];
    int dp[1000010] = {0};
    for (int i = 0;i < n;i ++) scanf("%d", a + i);
    int sum = 0;
    for (int i = 0;i < n;i ++) sum += a[i];
    for (int i = 0;i < n;i ++)
    {
        for (int j = sum / 2;j >= 0;j --)
        {
            if (j - a[i] >= 0) dp[j] = max(dp[j],dp[j - a[i]] + a[i]);
        }
    }
    printf("%d\n",sum - dp[sum / 2] * 2);
    
    return 0;
}
*/


/*int main()
{
    int a;
    int n,m;
    scanf("%d",&a);
    scanf("%d %d",&n,&m);
    char dir[100010] = {0};
    char op[100010] = {0};
    char g[200][200] = {0};
    queue<pair<int,int> > dots;
    dots.push(make_pair(1, 1));
    dots.push(make_pair(2, 1));
    g[1][1] = 1;
    g[2][1] = 1;
    int tm;
    char dr;
    for (int i = 0;i < n;i ++)
    {
        int opt;
        scanf("%d",&opt);
        if (opt == 1)
        {
            // 1
            scanf("%d %c",&tm, &dr);
            dir[tm] = dr;
            op[tm] = 1;
        } else {
            // 2
            scanf("%d", &tm);
            op[tm] = 2;
        }
    }
    pair<int,int> next;
    
    const char R = 0;
    const char L = 1;
    const char U = 2;
    const char D = 3;
    
    char d = R, shouldDel = 1;
    
    
    pair<int,int> last;
    pair<int,int> current;
    int x,y;
    
    for (int i = 1;i <= m;i ++)
    {
        shouldDel = 1;
        if (op[i] == 1)
        {
            // change direction
            switch (dir[i])
            {
                case 'L':
                    if (d != R) d = L;
                    break;
                case 'U':
                    if (d != D) d = U;
                    break;
                case 'R':
                    if (d != L) d = R;
                    break;
                case 'D':
                    if (d != U) d = D;
                    break;
            }
        } else if (op[i] == 2) shouldDel = 0;
        
        if (shouldDel) {
            last = dots.front();
            g[last.first][last.second] = 0;
            dots.pop();
            //printf("%d %d\n",last.first,last.second);
        }
        
        current = dots.back();
        x = current.first;
        y = current.second;
        // TODO : Add next with "d"
        switch (d)
        {
            case L:
                if (x - 1 < 1 || g[x - 1][y]) goto die;
                next = make_pair(x - 1, y);
                break;
            case U:
                if (y - 1 < 1 || g[x][y - 1]) goto die;
                next = make_pair(x, y - 1);
                break;
            case R:
                if (x + 1 > a || g[x + 1][y]) goto die;
                next = make_pair(x + 1, y);
                break;
            case D:
                if (y + 1 > a || g[x][y + 1]) goto die;
                next = make_pair(x, y + 1);
                break;
        }
        dots.push(next);
        g[next.first][next.second] = 1;
    }
    goto win;
    die:
    if (shouldDel) g[last.first][last.second] = 1;
    win:
    for (int i = 1;i <= a;i ++)
    {
        for (int j = 1;j <= a;j ++)
        {
            if (g[j][i]) printf("o");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}
*/

//struct drug
//{
//    char tag;
//    int m1;
//    int m2;
//    int m3;
//};
//
//int cmp(drug a, drug b)
//{
//    if (a.m2 == b.m1) return a.m1 < b.m1;
//    return a.m2 > b.m1;
//}
//
//int main()
//{
//    drug d[] = {
//        {'A',13,15,20},
//        {'B',10,20,18},
//        {'C',20,16,15},
//        {'D',8,10,6},
//        {'E',9,14,13},
//        {'F',19,20,14},
//        {'G',11,16,12},
//        {'H',16,9,18},
//        {'I',15,12,7},
//        {'J',13,7,9}
//    };
////    drug d[] =
////    {
////        {'A',1,2,3},
////        {'B',2,3,4},
////        {'C',3,4,5}
////    };
//    sort(d,d + (sizeof d / sizeof(drug)),cmp);
//    for (int i = 0;i < sizeof d / sizeof(drug);i ++)
//    {
//        drug *dd = d + i;
//        printf("%c\t%d\t%d\t%d\n",dd -> tag,dd -> m1,dd -> m2,dd -> m3);
//    }
//
//    return 0;
//}


/*
vector<double> cash;

int l;

double f(int i, double j)
{
    if (i == l)
    {
        return 0;
    } else if (cash[i] > j) return f(i + 1, j);
    else {
        return max(f(i + 1, j), f(i + 1, j - cash[i]) + cash[i]);
    }
}

int main()
{
    double q;
    int n;
    char t;
    double p;
    int ok = 1;
    double a,b,c;
    while (~scanf("%lf %d",&q,&n))
    {
        if (n == 0) break;
        cash.clear();
        while (n --)
        {
            int m;
            scanf("%d",&m);
            a = b = c = 0;
            ok = 1;
            while (m --)
            {
                scanf(" %c:%lf", &t, &p);
                if (t == 'A') a += p;
                else if (t == 'B') b += p;
                else if (t == 'C') c += p;
                else ok = 0;
            }
            if (ok && a <= 600 && b <= 600 && c <= 600 && a + b + c <= 1000) cash.push_back(a + b + c);
        }
        l = (int) cash.size();
        //for (int i = 0;i < l;i ++) printf("%f ",cash[i]);
        //printf("\n");
        printf("%.2f\n",f(0,q));
    }
    return 0;
}

*/

//
//int main()
//{
//    int T;
//    scanf("%d",&T);
//    int k = 1;
//    while (T --)
//    {
//        string url;
//        cin >> url;
//        ulong l = url.size();
//        string protocal = "", host = "", port = "", path = "";
//        /*int mode = 0;
//        int f = 0;
//        for (int i = 0;url[i] != '\0';i ++)
//        {
//
//            if (url[i] == ':')
//            {
//                if (i + 2 < l && url[i + 1] == '/' && url[i + 2] == '/' && !f)
//                {
//                    mode = 1;
//                    i = i + 2;
//                    f = 1;
//                    continue;
//                } else if (mode == 1) {
//                    mode = 2;
//                    continue;
//                }
//            }
//            if (url[i] == '/')
//            {
//                if (mode == 1 || mode == 2)
//                {
//                    mode = 3;
//                    continue;
//                }
//            }
//            if (mode == 0) protocal += url[i];
//            else if (mode == 1) host += url[i];
//            else if (mode == 2) port += url[i];
//            else if (mode == 3) path += url[i];
//        }*/
//        ulong pl_i = url.find("://");
//        protocal = url.substr(0, pl_i);
//        ulong pt_i = url.find(":", pl_i + 3);
//        ulong pth_i = url.find("/", pl_i + 3);
//        //cout << pl_i << " " << pt_i << " " << pth_i << endl;
//        if (pt_i != string::npos && pth_i != string::npos && pth_i > pt_i) port = url.substr(pt_i + 1, pth_i - pt_i - 1);
//        if (pt_i != string::npos && pth_i == string::npos) port = url.substr(pt_i + 1,l - pt_i);
//
//
//        if (pt_i != string::npos) host = url.substr(pl_i + 3, pt_i - pl_i - 3);
//        if (pt_i == string::npos && pth_i != string::npos) host = url.substr(pl_i + 3, pth_i - pl_i - 3);
//        if (pt_i == string::npos && pth_i == string::npos) host = url.substr(pl_i + 3, l - pl_i - 3);
//
//        if (pth_i != string::npos) path = url.substr(pth_i + 1);
//
//
//        if (port == "") port = "default";
//        if (path == "") path = "default";
//        cout << "URL #" << k << endl;
//        cout << "Protocol = " << protocal << endl;
//        cout << "Host     = " << host << endl;
//        cout << "Port     = " << port << endl;
//        cout << "Path     = " << path << endl << endl;
//
//
//        k ++;
//    }
//    return 0;
//}
//

/*
int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        int k = 0;
        int a,b,c;
        while (n --)
        {
            scanf("%d %d %d",&a,&b,&c);
            if (a + b + c >= 2) k ++;
        }
        printf("%d\n",k);
    }
    return 0;
}
*/

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    char arr[1000][1000];
//    return 0;
//}


/*
char mp[15][15];
int n,m;

int dir[][2] = {
    {-1,0},
    {1,0},
    {0,-1},
    {0,1}
};

bool dfs(int x,int y)
{
    if (mp[y][x] == 'T') return true;
    mp[y][x] = '*';
    bool result = false;
    for (int i = 0;i < 4;i ++)
    {
        int cx = x + dir[i][1],cy = y + dir[i][0];
        if (cx >= m || cy >= n || cx < 0 || cy < 0) continue;
        if (mp[cy][cx] != '*')
        {
            result = dfs(cx,cy);
            if (result) break;
        }
    }
    return result;
}

int main()
{
    while (~scanf("%d %d",&n,&m))
    {
        pair<int,int> start;
        for (int i = 0;i < n;i ++)
        {
            scanf(" ");
            for (int j = 0;j < m;j ++)
            {
                scanf("%c",&mp[i][j]);
                if (mp[i][j] == 'S') {
                    start.first = i; // y
                    start.second = j; // x
                }
            }
        }
        if (dfs(start.second,start.first)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/

/*
struct stu
{
    string id;
    int de;
    int ca;
};

int main()
{
    int n,l,h;
    scanf("%d %d %d",&n,&l,&h);
    vector<stu> c1,c2,c3;
    
    while (n --)
    {
        stu s;
        cin >> s.id;
        scanf("%d %d",&s.de, &s.ca);
        
    }
    return 0;
}
*/

/*int main()
{
    
    int T;
    scanf("%d",&T);
    int a[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946};
    multiset<int> k;
    int t = sizeof(a) / sizeof(int);
    for (int i = 0;i < t;i ++) k.insert(a[i]);
    while (T --)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        int f = 1;
        multiset<int>::iterator p = k.upper_bound(n);
        for (multiset<int>::iterator i = k.lower_bound(m);i != p;i ++)
        {
            if (f) f = 0;
            else printf(" ");
            printf("%d",*i);
        }
        printf("\n");
    }
    
    return 0;
}*/


/*
int isZhi(int n)
{
    if (n == 1) return 0;
    for (int i = 2;i <= sqrt(n);i ++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int sum = 0;
        int c = 0;
        for (int i = n;i <= m;i ++)
        {
            if (isZhi(i))
            {
                sum += i;
                c ++;
            }
        }
        printf("count=%d,sum=%d\n",c,sum);
    }
    return 0;
}
*/

/*int main()
{
    int L,n;
    while (~scanf("%d %d",&L,&n))
    {
        int dis[110];
        int cut[110];
        for (int i = 0;i < n;i ++)
        {
            scanf("%d %d",dis + i, cut + i);
        }
        int m = -1;
        int sum = 0;
        for (int i = 0;i <= L;i ++)
        {
            sum = 0;
            for (int j = 0;j < n;j ++)
            {
                sum += cut[j] * abs(dis[j] - i);
            }
            if (i == 0) m = sum;
            else m = min(m, sum);
        }
        printf("%d\n",m);
    }
    
    return 0;
}*/

/*
char a[15][15];
int n;

const int dir[][2] = {{-1,0}, {1,0}, {0,1}, {0,-1}};

void mk(int i, int j)
{
    int c = 'A';
    int q = c;
    if (a[i][j] == '.')
    {
        for (int p = 0;p < 4;p ++)
        {
            q = c;
            for (int k = 0;k < 4;k ++)
            {
                int y = dir[k][1];
                int x = dir[k][0];
                if (i + y >= 0 && i + y < n && j + x >= 0 && j + x < n)
                {
                    for (;a[i + y][j + x] != '.' && a[i + y][j + x] == c;c ++);
                }
            }
            if (q == c) break;
        }
        a[i][j] = c;
    }
    
}

int main()
{
    while (~scanf("%d",&n))
    {
        for (int i = 0;i < n;i ++)
        {
            scanf(" ");
            for (int j = 0;j < n;j ++)
            {
                scanf("%c",&a[i][j]);
            }
        }
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < n;j ++)
            {
                mk(i, j);
            }
        }
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < n;j ++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int bin(int *arr, int n, int num)
{
    printf("[");
    for (int i = 0;i < n;i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");
     
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == num) {
            //printf("--%d\n",mid);
            return 1;
        } else if (arr[mid] < num)
        {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    int nums[1010];
    while (~scanf("%d",&n))
    {
        set<int,greater<int> > arr;
        int a;
        for (int i = 0;i < n;i ++) {
            scanf("%d",&a);
            arr.insert(a);
        }
        n = (int) arr.size();
        int k = 0;
        for (set<int, greater<int> >::iterator i = arr.begin();i != arr.end();i ++,k ++) nums[k] = *i;
        for (int d = 0;d < n - 3;d ++)
        {
            for (int c = d + 1;c < n - 2;c ++)
            {
                for (int b = c + 1;b < n - 1;b ++)
                {
                    printf(">>%d %d %d => %d\n",nums[d],nums[c],nums[b],nums[d] - nums[c] - nums[b]);
                    if (bin(nums + b + 1, n - b - 1, nums[d] - nums[c] - nums[b]))
                    {
                        printf("%d\n",nums[d]);
                        //goto ok;
                    }
                }
            }
        }
        printf("no solution\n");
        ok:
        continue;
    }
    return 0;
}
*/

/*
void swap(double *a, double *b)
{
    int *ta = (int*) a, *tb = (int*) b;
    *ta ^= *tb;
    *tb ^= *ta;
    *ta ^= *tb;
    *(ta + 1) ^= *(tb + 1);
    *(tb + 1) ^= *(ta + 1);
    *(ta + 1) ^= *(tb + 1);
}

int main()
{
    double a = 1833.22;
    double b = 32334.55;
    printf("%lf %lf\n",a,b);
    swap(&a, &b);
    printf("%lf %lf\n",a,b);
    return 0;
}
*/

/*
int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        // Test
//        for (int i = 0;i < n;i ++)
//        {
//            for (int j = 0;j < i;j ++)
//            {
//                printf(" ");
//            }
//            for (int j = 0;j < n - i;j ++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
        
        int sum = (n + 1) * n / 2;
        
        int k = n / 3;
        if ((n % 2 && !(k % 2)) || (!(n % 2) && k % 2)) k --;
        //printf(">>k = %d\n", k);
        int h = (n - k) / 2 + 1;
        //printf(">>h = %d\n", h);
        int min = sum - ((h + 2 * k - 1) * h - (k + h - 1));
        int x = min;
        while (x <= min)
        {
            min = x;
            k += 2;
            h = (n - k) / 2 + 1;
            //printf(">>k = %d\n>>h = %d\n", k, h);
            x = sum - ((h + 2 * k - 1) * h - (k + h - 1));
        }
        printf("%d\n",min);
        
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        int c = 0;
        double C = 0;
        int fd = 0;
        for (int a = 1;a <= sqrt(n);a ++)
        {
            for (int b = a;b <= sqrt(n);b ++)
            {
                C = sqrt(n - a * a - b * b);
                if (C >= b && (c = C) == C)
                {
                    fd = 1;
                    printf("%d %d %d\n",a, b, c);
                }
            }
        }
        if (!fd) printf("No Solution\n");
    }
    return 0;
}
*/

/*
int isRun(int y)
{
    return (y % 100 != 0 && y % 4 == 0) || y % 400 == 0;
}

int main()
{
    int y,m,d,dd;
    int ms[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    while (~scanf("%d %d %d %d",&y,&m,&d,&dd))
    {
        if (isRun(y)) ms[1] = 29;
        else ms[1] = 28;
        
        for (int i = 0;i < dd;i ++)
        {
            d ++;
            if (d > ms[m - 1])
            {
                m ++;
                d = 1;
                if (m > 12)
                {
                    y ++;
                    m = 1;
                    if (isRun(y)) ms[1] = 29;
                    else ms[1] = 28;
                }
            }
        }
        printf("%d-%02d-%02d\n",y,m,d);
    }
    return 0;
}
*/

/*
int main()
{
    ll a = 1;
    ll b, c;
    char ok;
    while (1)
    {
        char n[10] = {0};
        ok = 1;;
        b = a * a;
        while (b != 0)
        {
            n[b % 10] ++;
            b /= 10;
        }
        c = a * a * a;
        while (c != 0)
        {
            n[c % 10] ++;
            c /= 10;
        }
        for (int i = 0;i < 10;i ++)
        {
            if (n[i] != 1) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            printf("%lld",a);
            break;
        }
        a ++;
        //if (a == 100000) break;
    }
    return 0;
}
*/

/*
// A 2 3 4 5 6 7 8 9 10 J Q K
int dfs(int n, int sum)
{
    if (n == 13)
    {
        if (sum == 13)
        {
            return 1;
        }
        return 0;
    }
    int s = 0;
    s += dfs(n + 1,sum + 0);
    s += dfs(n + 1,sum + 1);
    s += dfs(n + 1,sum + 2);
    s += dfs(n + 1,sum + 3);
    s += dfs(n + 1,sum + 4);
    return s;
}

int main()
{
    cout << dfs(0,0) << endl;
    return 0;
}
*/

/*
int main()
{
    //   B      B     ED      B
    // A   C  C   A  A   C  C   A
    //   ED     DE     B      D
    //
    // 1234 //
    // 1243
    // 1324
    // 1342
    // 1423
    // 1432
    // 2134
    // 2143
    // 2314
    // 2341 //
    // 2413
    // 2431
    // 3124
    // 3142
    // 3241
    // 3214
    // 3412 //
    // 3421
    // 4123 //
    // 4132
    // 4213
    // 4231
    // 4312
    // 4321
    
    // 123 //
    // 132
    // 213
    // 231 //
    // 312 //
    // 321
    
    
    //        A12/12             A5/5             A5/5
    //  (-----------------  -  ---------) / 2 + ---------
    //   A3/3*A4/4*A5/5*12     A2/2*A2/2        A2/2*A2/2
    //

    return 0;
}
*/

/*
int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        int sum = n;
        int lt;
        while (n >= 3)
        {
            lt = n % 3;
            n /= 3;
            sum += n;
            n += lt;
        }
        printf("%d\n",sum);
    }
    return 0;
}
*/

/*
int main()
{
    int sum = 0;
    string str;
    for (int i = 10000;i <= 99999;i ++)
    {
        str = to_string(i);
        for (int j = 0;str[j] != '\0';j ++)
        {
            if (str[j] == '4')
            {
                goto ed;
            }
        }
        sum ++;
        ed:
        continue;
    }
    cout << sum << endl;
    return 0;
}
*/

/*
int main()
{
    double x[3];
    double y[3];
    
    for (int i = 0;i < 3;i ++)
    {
        scanf("%lf %lf",x + i,y + i);
    }
    double b1 = (y[0] + y[1]) / 2 + (x[0] * x[0] - x[1] * x[1]) / 2 / (y[0] - y[1]);
    double b2 = (y[0] + y[2]) / 2 + (x[0] * x[0] - x[2] * x[2]) / 2 / (y[0] - y[2]);
    double k1 = (x[1] - x[0]) / (y[0] - y[1]);
    double k2 = (x[2] - x[0]) / (y[0] - y[2]);
    double x0 = (b2 - b1) / (k1 - k2);
    double y0 = k1 * x0 + b1;
    printf("%.3lf %.3lf\n",x0,y0);
    return 0;
}
*/

/*
int main()
{
    string str;
    cin >> str;
    int n = str[str.size() - 1] - '0';
    if (n % 2 == 0) printf("1\n");
    else printf("-1\n");
    return 0;
}
*/

/*
int main()
{
    ll t1,t2;
    while (~scanf("%lld %lld",&t1,&t2))
    {
        ll time = 0;
        ll n1 = (t1 + 59) / 60;
        ll e1 = n1 * 60 - 59 + 49;
        if (t1 <= e1)
        {
            time += e1 - t1 + 1;
        }
        //cout << n1 << " " << e1 << " " << time;
        ll n2 = (t2 + 59) / 60;
        ll s2 = n2 * 60 - 59;
        //cout << endl << n2 << " " << s2 << endl;
        ll time2 = t2 - s2 + 1;
        if (time2 > 50) time2 = 50;
        time += time2 + (n2 - 1 - n1) * 50;
        printf("%lld\n",time);
    }
    return 0;
}
*/

//int main()
//{
//    string str;
//    cin >> str;
//    for (itn i = 0;str[i] != 0;i ++) if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
//    //cout << str;
//    ulong k = 0;
//    int sum = 0;
//    while (k != string::npos)
//    {
//        k = str.find("iloveyou",k + 1);
//        cout << ">>" << k << endl;
//        sum = (sum + 1) % 20010905;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

/*
int main()
{
    itn n;
    scanf("%d",&n);
    int c = 0;
    for (int i = 2;i <= sqrt(n);i ++)
    {
        while (n % i == 0) {
            c ++;
            n /= i;
        }
    }
    if (n > 1) c ++;
    if (c % 2 == 0) printf("Johnson\n");
    else printf("Nancy\n");
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    double s = 0,sum = 0;
    while (n --)
    {
        char t;
        double src,
            ps, ps_r,
            zh, zh_r,
            mo, mo_r;
        scanf("%hhd %lf %lf %lf %lf %lf %lf %lf",&t,&src,
              &ps,&ps_r,
              &zh,&zh_r,
              &mo,&mo_r);
        if (t == 2) continue;
        s += src;
        int ss = (ps * ps_r + zh * zh_r + mo * mo_r) + 0.5;
        sum += ss * src;
    }
    printf("%.2lf\n",sum / s);
    return 0;
}
*/

/*
vector<int> aa,bb,cc;

int n;
int n2;
int c = 0;

void pt(int k, char c) {for (int i = 0;i < k;i ++) printf("%c",c);}

void prt(int l)
{
    int k = n - (l - 1) / 2;
    pt(k,'.');
}

void dis()
{
    int p;
    c ++;
    pt(3 * (2 * n + 1) + 4,'.');
    for (itn i = n;i >= 0;i --)
    {
        printf("\n");
        printf(".");
        if (aa.size() <= i) {
            prt(1);
            printf("|");
            prt(1);
        } else {
            p = aa[i];
            prt(p);
            pt(p,'*');
            prt(p);
        }
        printf(".");
        if (bb.size() <= i) {
            prt(1);
            printf("|");
            prt(1);
        } else {
            p = bb[i];
            prt(p);
            pt(p,'*');
            prt(p);
        }
        printf(".");
        if (cc.size() <= i) {
            prt(1);
            printf("|");
            prt(1);
        } else {
            p = cc[i];
            prt(p);
            pt(p,'*');
            prt(p);
        }
        printf(".");
    }
    printf("\n");
    if (c < n2) {
        pt(3 * (2 * n + 1) + 4,'-');
        printf("\n");
    }
    
}

void move(char a, char b)
{
    if (a == 'a' && b == 'b')
    {
        bb.push_back(*(aa.end() - 1));
        aa.erase(aa.end() - 1);
    } else if (a == 'b' && b == 'a')
    {
        aa.push_back(*(bb.end() - 1));
        bb.erase(bb.end() - 1);
    } else if (a == 'a' && b == 'c')
    {
        cc.push_back(*(aa.end() - 1));
        aa.erase(aa.end() - 1);
    } else if (a == 'c' && b == 'a')
    {
        aa.push_back(*(cc.end() - 1));
        cc.erase(cc.end() - 1);
    } else if (a == 'b' && b == 'c')
    {
        cc.push_back(*(bb.end() - 1));
        bb.erase(bb.end() - 1);
    } else if (a == 'c' && b == 'b')
    {
        bb.push_back(*(cc.end() - 1));
        cc.erase(cc.end() - 1);
    }
    dis();
}

void han(int n, char a, char b, char c)
{
    if (n == 1)
    {
        move(a,c);
        return;
    }
    han(n - 1,a,c,b);
    move(a,c);
    han(n - 1,b,a,c);
}

int main()
{
    
    scanf("%d",&n);
    n2 = pow(2,n);
    for (int i = n;i >= 1;i --)
    {
        aa.push_back(i * 2 + 1);
    }
    dis();
    if (!(n % 2)) han(n,'a','b','c');
    else han(n,'a','c','b');
    
    return 0;
}
*/

/*
int main()
{
    for (int i = 0;i <= 49 - 4;i ++)
    {
        for (int j = i + 2;j <= 49 - 2;j ++)
        {
            int sum = 0;
            for (int k = 1;k < 50;k ++)
            {
                
                if (i == k - 2 || j == k - 2) sum += k * (k - 1);
                else if (!(i == k - 1 || j == k - 1)) sum += k;
            }
            if (sum == 2015) printf("i = %d, j = %d\n",i + 1, j + 1);
        }
    }
    return 0;
}
*/

/*
int main()
{
    int w,m,n;
    while (~scanf("%d %d %d",&w,&m,&n))
    {
        if (m < n) {
            int t = m;
            m = n;
            n = t;
        }
        // m > n
        int k_m = (m - 1) / w + 1;
        int k_n = (n - 1) / w + 1;
        // cout << k_m << " " << k_n << endl;
        int k = k_m - k_n;
        int step = k;
        
        int dis = m - (k_m - 1) * w;
        if ((k_n + k_m) % 2) dis = w - dis + 1;
        int p = (k_n - 1) * w + dis;
        
        step += abs(p - n);
        printf("%d\n",step);
    }
    return 0;
}
*/

/*
void prt(int n, char c) {for (itn i = 0;i < n;i ++) printf("%c",c);}

int main()
{
    int m,n;
    while (~scanf("%d %d",&m, &n))
    {
        for (int i = 0;i < n / 2;i ++)
        {
            prt(i,'.');
            int k = n / 2;
            k = m + k * 2;
            int p = k - i * 2 - m * 2;
            if (p >= 0)
            {
                prt(m, '*');
                prt(p, '.');
                prt(m, '*');
            } else prt(k - i * 2, '*');
            prt(i,'.');
            printf("\n");
        }
        for (int i = n / 2;i >= 0;i --)
        {
            prt(i,'.');
            int k = n / 2;
            k = m + k * 2;
            int p = k - i * 2 - m * 2;
            if (p >= 0)
            {
                prt(m, '*');
                prt(p, '.');
                prt(m, '*');
            } else prt(k - i * 2, '*');
            prt(i,'.');
            printf("\n");
        }
    }
    return 0;
}
*/

/*int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    int ok = 1;
    do {
        ok = 1;
        for (itn i = 1;i < 5;i ++)
        {
            if (!(arr[i] > arr[i - 1] && arr[i + 5] > arr[i + 4] && arr[i + 5] > arr[i]))
            {
                ok = 0;
                break;
            }
        }
        if (!(arr[5] > arr[0])) ok = 0;
        if (ok){
            sum ++;
            for (itn i = 0;i < 5;i ++) cout << arr[i] << " ";
            cout << endl;
            for (int i = 5;i < 10;i ++) cout << arr[i] << " ";
            cout << endl << endl;
        }
    } while (next_permutation(arr,arr + 10));
    cout << sum << endl;
    return 0;
}
*/

//int main()
//{
//    //int a[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//    int a[16] = {1,2,15,16,12,14,3,5,13,7,10,4,8,11,6,9};
//    int c = 0;
//    do
//    {
//        int sum = 0;
//        for (itn i = 0;i < 4;i ++)
//        {
//            int s = 0;
//            for (int j = 0;j < 4;j ++)
//            {
//                s += a[4 * i + j];
//            }
//            if (i == 0) sum = s;
//            else if (sum != s) goto err;
//        }
//        c ++;
//        for (itn i = 0;i < 16;i ++)
//        {
//            cout << a[i] << " ";
//            if ((i + 1) % 4 == 0) cout << endl;
//        }
//        cout << endl;
//        err:
//        continue;
//    } while (next_permutation(a + 1, a + 16));
//    cout << c << endl;
//    return 0;
//}

//struct Dot{int x;int y;};
//
//void dfs(char a[110][110], int n)
//{
//    if (n == 2) return;
//    a[0][0] ++;
//    cout << (int) a[0][0] << endl;
//    dfs(a,n + 1);
//}
//
//int main()
//{
//    char a[110][110] = {0};
//    dfs(a,0);
//    cout << (int) a[0][0] << endl;
//    int n;
//    scanf("%d",&n);
//
//    Dot start;
//    Dot end;
//    for (int i = 0;i < n;i ++)
//    {
//        scanf(" ");
//        for (int j = 0;j < n;j ++)
//        {
//            scanf("%c",&a[i][j]);
//            if (a[i][j] == 'A') {
//                start.x = j;
//                start.y = i;
//            } else if (a[i][j] == 'B')
//            {
//                end.x = j;
//                end.y = i;
//            }
//        }
//    }
//
//    return 0;
//}

/*
int main()
{
    string n;
    int t;
    cin >> n;
    scanf("%d",&t);
    string m = "";
    for (int p = 0;p < t;p ++)
    {
        m = "";
        int k = 0;
        char last = '\0';
        for (int i = 0;n[i] != '\0';i ++)
        {
            if (last == n[i]) {
                k ++;
            }
            else if (last != '\0')
            {
                m += (char) (k + 1 + '0');
                m += last;
                k = 0;
            }
            last = n[i];
        }
        m += (char) (k + 1 + '0');
        m += last;
        n = m;
    }
    cout << n << endl;
    return 0;
}
*/

/*
int ok(int a, int b) {return abs(a - b) != 1;}

int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int c = 0;
    do {
        if (ok(a[0],a[1]) && ok(a[2],a[1]) && ok(a[3],a[4]) && ok(a[4],a[5]) && ok(a[5],a[6]) && ok(a[7],a[8]) && ok(a[8],a[9]) && ok(a[0],a[4]) && ok(a[6],a[2]) && ok(a[5],a[1]) && ok(a[3],a[7]) && ok(a[4],a[8]) && ok(a[0],a[3]) && ok(a[5],a[9]) && ok(a[0],a[5]) && ok(a[4],a[1]) && ok(a[2],a[5]) && ok(a[6],a[1]) && ok(a[3],a[8]) && ok(a[4],a[7]) && ok(a[5],a[8]) && ok(a[4],a[9]) && ok(a[6],a[9])) c ++;
    } while (next_permutation(a, a + 10));
    cout << c << endl;
    return 0;
}
*/

/*
int main()
{
    int n = 100;
    
    int a = 1;
    ll sum = 1;
    for (int i = 0;i < n - 1; i++)
    {
        a = a + i + 2;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}
*/

/*
int main()
{
    double a[] = {1,2,3,4,5,6,7,8,9};
    int c = 0;
    do {
        double k = a[0] + a[1] / a[2] + (a[3] * 100 + a[4] * 10 + a[5]) / (a[6] * 100 + a[7] * 10 + a[8]);
        if (k == 10) c ++;
    } while (next_permutation(a, a + 9));
    cout << c << endl;
    return 0;
}
*/

/*
int main()
{
    ll num = 2;
    ll m = 0;
    while (1)
    {
        ll k = 0;
        while (num != 0)
        {
            k += (num % 10) * (num % 10);
            num /= 10;
        }
        num = k;
        if (m == num) break;
        m = max(num, m);
        
    }
    cout << m << endl;
    return 0;
}*/


///////// 算绩点
/*int main()
{
    double scr, ji;
    double fen = 0, sum = 0;;
    while (~scanf("%lf %lf",&scr, &ji))
    {
        if (scr == 0 && ji == 0) break;
        fen += scr;
        sum += scr * ji;
    }
    cout << sum / fen << endl;
    return 0;
}*/

/*
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int c = 0;
    do {
        if (a[0] < a[1] && a[0] < a[2] && a[1] < a[3] && a[1] < a[4] && a[2] < a[4] && a[2] < a[5] && a[3] < a[6] && a[3] < a[7] && a[4] < a[7] && a[4] < a[8] && a[5] < a[8] && a[5] < a[9]) c ++;
    } while (next_permutation(a, a + 10));
    cout << c << ednl;
    return 0;
}
*/

/*
int main()
{
    ll c = 777;
    string str;
    cin >> str;
    for (itn i = 0;str[i] != 0;i ++)
    {
        if (str[i] == 'v') c *= 2;
        else if (str[i] == 'x') c -= 555;
    }
    cout << c << ednl;
    return 0;
}
*/

/*
void dfs()
{
    
}

int main()
{
    
    return 0;
}
*/

/*int main()
{
    int b = 0;
    while (1)
    {
        double a = 127 * b + 1;
        a /= 97;
        int aa = a;
        if (a == aa) break;
        b ++;
    }
    cout << (127 * b + 1) / 97 + b << ednl;
    return 0;
}*/

//int ch(ll n)
//{
//    int a[10] = {0};
//    while (n != 0)
//    {
//        a[n % 10] ++;
//        n /= 10;
//    }
//    int ok = 1;
//    for (int i = 0;i < 10;i ++)
//    {
//        if (a[i] > 1) {
//            ok = 0;
//            break;
//        }
//    }
//    return ok;
//}
//
//set<int> gt(ll n)
//{
//    set<int> a;
//    while (n != 0)
//    {
//        a.insert(n % 10);
//        n /= 10;
//    }
//    return a;
//}
//
//int main()
//{
//    ll t = 0;
//    ll k = 0;
//    vector<pair<ll, set<int> > > nums;
//    while (1)
//    {
//        k = t * t;
//        if (ch(k)) {
//            nums.push_back(make_pair(k, gt(k)));
//        }
//        if (k > 10000000000) break;
//        t ++;
//    }
//    cout << nums.size() << endl;
//
//
//    for (int i = 0;i < nums.size();i ++)
//    {
//
//    }
//    return 0;
//}


/*int main()
{
    set<int> p;
    int k = 0;
    ll a;
    for (ll i = 4;i <= 10000;i ++)
    {
        k = 0;
        a = i * i;
        k += a % 10;
        a /= 10;
        k += (a % 10) * 10;
        p.insert(k);
    }
    for (auto i = p.begin();i != p.end();i ++) cout << *i << " ";
    cout << endl << p.size() << endl;
    return 0;
}*/

/*
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char e[] = {'R', 'U', 'L', 'D'};

int main()
{
    char a[15][15];
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i ++)
    {
        scanf(" ");
        for (int j = 0;j < n;j ++)
        {
            scanf("%c", &a[i][j]);
        }
    }
    queue<pair<int,int> > dt;
    
    for (int i = 0;i < n;i ++)
    {
        if (a[0][i] == 'U') {
            a[0][i] = 'o';
            dt.push(make_pair(0, i));
        }
    }
    for (int i = 0;i < n;i ++)
    {
        if (a[i][0] == 'L') {
            a[i][0] = 'o';
            dt.push(make_pair(i, 0));
        }
    }
    for (int i = 0;i < n;i ++)
    {
        if (a[n - 1][i] == 'D') {
            a[n - 1][i] = 'o';
            dt.push(make_pair(n - 1, i));
        }
    }
    for (int i = 0;i < n;i ++)
    {
        if (a[i][n - 1] == 'R') {
            a[i][n - 1] = 'o';
            dt.push(make_pair(i, n - 1));
        }
    }
    
    while (!dt.empty())
    {
        pair<int, int> d = dt.front();
        for (int j = 0;j < 4;j ++)
        {
            int x = d.second + dx[j];
            int y = d.first + dy[j];
            if (x >= 0 && y >= 0 && x < n && y < n)
            {
                if (a[y][x] == e[j])
                {
                    a[y][x] = 'o';
                    dt.push(make_pair(y, x));
                }
            }
        }
        dt.pop();
    }
    cout << ednl;
    int c = 0;
    for (int i = 0;i < n; i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            printf("%c",a[i][j]);
            if (a[i][j] == 'o') c ++;
        }
        cout << ednl;
    }
    cout << c << endl;
    return 0;
}
*/

/*
int find_max(string str)
{
    stringstream ss;
    ss << str;
    int m = -1;
    string x;
    while (getline(ss, x, '|'))
    {
        m = max(m, (int) x.size());
    }
    return m;
}

int main()
{
    string str;
    cin >> str;
    stack<int> st;
    for (int i = 0;str[i] != 0;i ++)
    {
        if (str[i] == '(') st.push(i);
        else if (str[i] == ')')
        {
            string t = "";
            int x = find_max(str.substr(st.top() + 1,i - st.top() - 1));
            for (int j = 0;j < x;j ++) t += 'x';
            str = str.substr(0, st.top()) + t + str.substr(i + 1);
            i = st.top() + x - 1;
            st.pop();
            //cout << str << ednl;
        }
    }
    while (!st.empty())
    {
        string t = "";
        int x = find_max(str.substr(st.top() + 1));
        for (int i = 0;i < x;i ++) t += 'x';
        str = str.substr(0, st.top()) + t;
        //cout << str << endl;
        st.pop();
    }
    int x = find_max(str);
    printf("%d\n",x);
    return 0;
}
*/

/*
int main()
{
    string line;
    double sum = 0;
    while (getline(cin, line))
    {
        double zhe = 0;
        double prize = 0;
        stringstream ss;
        ss << line;
        string a,b;
        ss >> a >> prize >> b;
        //cout << prize << " " << b << endl;
        if (b == "半价") zhe = 0.5;
        else zhe = atoi(b.substr(0, (int) b.size() - 1).c_str()) / 100.0;
        if (zhe < 0.1) zhe *= 10;
        //cout << zhe << endl;
        sum += zhe * prize;
    }
    cout << sum << endl;
    return 0;
}
*/

/*
int isRun(int y)
{
    return (y % 100 != 0 && y % 4 == 0) || y % 400 == 0;
}

int ms[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    set<pair<pair<int,int>, int> > years;
    pair<pair<int,int>, int> y1 = make_pair(make_pair(2000 + a, b), c),
    y2 = make_pair(make_pair(2000 + c, a), b),
    y3 = make_pair(make_pair(2000 + c, b), a),
    y4 = make_pair(make_pair(1900 + a, b), c),
    y5 = make_pair(make_pair(1900 + c, a), b),
    y6 = make_pair(make_pair(1900 + c, b), a);
    years.insert(y1);
    years.insert(y2);
    years.insert(y3);
    years.insert(y4);
    years.insert(y5);
    years.insert(y6);
    for (set<pair<pair<int,int>, int> >::iterator i = years.begin();i != years.end();i ++)
    {
        int y = i -> first.first,
        m = i -> first.second,
        d = i -> second;
        if (m < 1 || m > 12 || d <= 0) continue;
        if (y < 1960 || y > 2059) continue;
        if (isRun(y)) ms[2] = 29;
        else ms[2] = 28;
        if (d > ms[m]) continue;
        printf("%d-%02d-%02d\n",y,m,d);
    }
    return 0;
}
*/



/*int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a;
    ll sum = 0;
    int dp[100010] = {1};
    ll c = 0;
    while (n --)
    {
        scanf("%d",&a);
        sum = (sum + a) % k;
        c += dp[sum];
        dp[sum] ++;
    }
    printf("%lld\n",c);
    return 0;
}*/

/*int main()
{
    string str;
    int k = 0;
    while (getline(cin, str))
    {
        for (int i = 0;str[i] != 0;i ++)
        {
            switch(str[i])
            {
                case 'H':
                    k ++;
                    break;
                case '#':
                    k ++;
                    break;
                case '@':
                    k += 2;
                    break;
                case 'T':
                    k ++;
                    break;
            }
        }
    }
    cout << k << endl;
    return 0;
}
*/

/*
int main()
{
    ifstream A("./A.txt");
    ifstream B("./B.txt");
    ifstream C("./C.txt");
    
    set<string> a,b,c;
    
    string t, p;
    while (getline(A,t))
    {
        stringstream ss;
        ss << t;
        while (ss >> p)
        {
            if (p[p.size() - 1] == ',') p = p.substr(0,p.size() - 1);
            a.insert(p);
        }
    }
    while (getline(B,t))
    {
        stringstream ss;
        ss << t;
        while (ss >> p)
        {
            if (p[p.size() - 1] == ',') p = p.substr(0,p.size() - 1);
            b.insert(p);
        }
    }
    while (getline(C,t))
    {
        stringstream ss;
        ss << t;
        while (ss >> p)
        {
            if (p[p.size() - 1] == ',') p = p.substr(0,p.size() - 1);
            c.insert(p);
        }
    }
    set<string> ct;
    for (auto i = a.begin();i != a.end();i ++) {
        if (b.find(*i) != b.end()) ct.insert(*i);
    }
    int con = 0;
    for (auto i = ct.begin();i != ct.end();i ++)
    {
        if (c.find(*i) == c.end()) con ++;
    }
    printf("%d\n",con);
    return 0;
}
*/

/*int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    do {
        if (a[0] != 0 && a[4] != 0 && a[8] != 0)
        {
            int k1 = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
            int k2 = a[4] * 1000 + a[5] * 100 + a[6] * 10 + a[7];
            int k3 = a[8] * 10 + a[9];
            if ((k1 - k2) * k3 == 900) printf("(%d%d%d%d-%d%d%d%d)*%d%d=900\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
        }
    } while (next_permutation(a, a + 10));
    return 0;
}
*/

/*
int main()
{
    char c[26];
    for (int i = 0;i < 26;i ++) c[i] = i + 'A';
    ll n;
    while (~scanf("%lld",&n))
    {
        string str;
        while (n != 0)
        {
            n --;
            str = c[n % 26] + str;
            n /= 26;
        }
        cout << str << endl;
    }
    return 0;
}
*/

/*
int main()
{
    int a[9];
    
    int k[10] = {0};
    vector<int> pos;
    for (int i = 0;i < 9;i ++)
    {
        scanf("%d",&a[i]);
        k[a[i]] ++;
        if (!a[i]) pos.push_back(i);
    }
    vector<int> nums;
    for (int i = 1;i < 10;i ++)
    {
        if (k[i] == 0) nums.push_back(i);
    }
    int b[9] = {0};
    int j = 0;
    do
    {
        j = 0;
        for (vector<int>::iterator i = pos.begin();i != pos.end();i ++, j ++)
        {
            a[*i] = nums[j];
        }
        int t = 0;
        for (int i = 0;i < 3;i ++)
        {
            if (t == 0) t = a[i] + a[i + 3] + a[i + 6];
            else if (t != a[i] + a[i + 3] + a[i + 6]) goto err;
            if (t != a[i * 3] + a[i * 3 + 1] + a[i * 3 + 2]) goto err;
        }
        if (a[0] + a[4] + a[8] != t || a[2] + a[4] + a[6] != t) goto err;
        if (!b[0])
            for (int i = 0;i < 9;i ++)
            {
                b[i] = a[i];
            }
        else goto e;
        err:
        continue;
    } while (next_permutation(nums.begin(), nums.end()));
    if (b[0])
    {
        for (int i = 0;i < 3;i ++)
        {
            for (int j = 0;j < 3;j ++)
            {
                if (j != 0) printf(" ");
                printf("%d",b[i * 3 + j]);
            }
            printf("\n");
        }
    }
    return 0;
    e:
    printf("Too Many\n");
    
    return 0;
}
*/

/*
int main()
{
    string a = "123456789";
    int c = 0;
    do {
        for (int i = 1;i <= 4;i ++)
        {
            ll num1 = atoll(a.substr(0,i).c_str());
            ll num2 = atoll(a.substr(i).c_str());
            ll ji = num1 * num2;
            int k[10] = {0};
            while (ji != 0)
            {
                k[ji % 10] ++;
                ji /= 10;
            }
            int ok = 1;
            for (int i = 1;i <= 9;i ++)
            {
                if (k[i] != 1) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                cout << num1 * num2 << endl;
                c ++;
            }
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << c << endl;
    return 0;
}
*/

/*
int main()
{
    string a = "123456789";
    set<pair<set<int>, vector<set<int> > > > all;
    do {
        
        set<int> d;
        vector<set<int> > b;
        
        d.insert(a[0] - '0');
        d.insert(a[1] - '0');
        d.insert(a[2] - '0');
        
        set<int> tt;
        tt.insert(a[3] - '0');
        tt.insert(a[4] - '0');
        b.push_back(tt);
        
        tt.clear();
        tt.insert(a[5] - '0');
        tt.insert(a[6] - '0');
        b.push_back(tt);
        
        tt.clear();
        tt.insert(a[7] - '0');
        tt.insert(a[8] - '0');
        b.push_back(tt);
        
        int k = *d.begin() + *(++ d.begin()) + *b[0].begin() + *(++ b[0].begin());
        if (k == *d.begin() + *(++ (++ d.begin())) + *b[1].begin() + *(++ b[1].begin()) && k == *(++ d.begin()) + *(++ (++ d.begin())) + *b[2].begin() + *(++ b[2].begin()))
        {
            pair<set<int>, vector<set<int> > > cb = make_pair(d, b);
            all.insert(cb);
        }
        
        
    } while (next_permutation(a.begin(), a.end()));
//    for (auto i = all.begin();i != all.end();i ++)
//    {
//        set<int> d = i -> first;
//        vector<set<int> > b = i -> second;
//        cout << "(";
//        for (auto j = d.begin();j != d.end();j ++)
//        {
//            cout << *j << ", ";
//        }
//        cout << ")\n";
//        for (int j = 0;j < 3;j ++)
//        {
//            for (auto k = b[j].begin();k != b[j].end();k ++)
//            {
//                cout << *k << " ";
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
    cout << all.size() * 8 << endl;
    // C30 + C31 + C32 + C33 = 8
    return 0;
}
*/

/*
int main()
{
    int t;
    while (~scanf("%d",&t))
    {
        int k = t % 9;
        if (k == 0) k = 9;
        char p = 'A' + k - 1;
        cout << p << endl;
    }
    
    return 0;
}
*/

/*
int test(ll n)
{
    int a[10] = {0};
    while (n != 0)
    {
        a[n % 10] ++;
        n /= 10;
    }
    int ok = 1;
    for (int i = 0;i < 10;i ++) if (a[i] != 1) {ok = 0; break;}
    return ok;
}

int main()
{
    
    for (ll i = 31600;i <= 100000;i ++)
    {
        ll x = i * i;
        if (test(x)) cout << x << endl;
    }
    return 0;
}
*/

/*
int main()
{
    int p['Z' + 1];
    for (int i = 0;i < 10;i ++)
    {
        p[i] = i;
    }
    for (int i = 'A';i <= 'Z';i ++)
    {
        p[i] = i - 'A' + 10;
    }
    string str;
    //while (cin >> str)
    {
        str = "MANY";
        int n = (int) str.size();
        ll sum = 0;
        for (int i = n - 1, j = 0;i >= 0;i --, j ++)
        {
            sum += p[str[i]] * pow(36,j);
        }
        cout << sum << endl;
    }
    return 0;
}
*/

/*int s1(vector<int> a)
{
    int s = 0;
    for (auto i = a.begin();i != a.end();i ++) s += *i;
    return s;
}

int s2(vector<int> a)
{
    int s = 0;
    for (auto i = a.begin();i != a.end();i ++) s += (*i) * (*i);
    return s;
}

int s3(vector<int> a)
{
    int s = 0;
    for (auto i = a.begin();i != a.end();i ++) s += (*i) * (*i) * (*i);
    return s;
}

void dfs(vector<int> a, int n, vector<int> k)
{
    if (n == 0) {
        vector<int> left;
        //for (auto i = k.begin();i != k.end();i ++) cout << *i << " ";
        //cout << endl;
        auto i0 = k.begin();
        for (int i = 1;i <= 16;i ++)
        {
            if (*i0 != i) left.push_back(i);
            else i0 ++;
        }
        if (s1(k) == s1(left) && s2(k) == s2(left) && s3(k) == s3(left))
        {
            for (auto i = k.begin();i != k.end();i ++) cout << *i << " ";
            cout << endl;
            cout  << ">>";
            for (auto i = left.begin();i != left.end();i ++) cout << *i << " ";
            cout << endl << endl;
        }
        //cout  << ">>";
        //for (auto i = left.begin();i != left.end();i ++) cout << *i << " ";
        //cout << endl << endl;
        return;
    }
    ll sz = a.size();
    for (ll i = sz - 1;i >= n - 1;i --)
    {
        k.insert(k.begin(), a[i]);
        //k.push_back(a[i]);
        a.erase(a.begin() + i);
        dfs(a,n - 1,k);
        k.erase(k.begin());
    }
}


int main()
{
    vector<int> a;
    for (int i = 1;i <= 16;i ++)
    {
        a.push_back(i);
    }
    vector<int> k;
    for (int i = 1;i <= 8;i ++) dfs(a,i,k);
    return 0;
}
*/

/*
int sum(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int s = 0;
    for (int i = 1;i <= 1000;i ++) s += sum(i);
    cout << s << endl;
    return 0;
}
*/


/*int ms[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int isRun(int y)
{
    return (y % 100 != 0 && y % 4 == 0) || y % 400 == 0;
}

void jd(int y)
{
    if (isRun(y)) ms[2] = 29;
    else ms[2] = 28;
}

int main()
{
    int today_qi = 7;
    int y = 2000, m = 12, d = 31;
    int y_to, m_to, d_to;
    scanf("%d-%d-%d",&y_to,&m_to,&d_to);
    jd(y);
    int c = 0;
    while (y_to != y || m_to != m || d_to != d)
    {
        d --;
        if (d <= 0)
        {
            m --;
            if (m <= 0) {
                y --;
                jd(y);
                m = 12;
            }
            d = ms[m];
        }
        today_qi --;
        if (today_qi == 0) today_qi = 7;
        if (today_qi == 1) c ++;
    }
    cout << c << endl;//5217
    cout << today_qi << ednl;
    return 0;
}
*/

/*
int jd(int a, int b)
{
    return !(abs(a - b) == 1);
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int c = 0;
    do {
        int ok = 1;
        for (int i = 1;i <= 9;i ++)
        {
            if (!jd(a[i - 1], a[i])) {
                ok = 0;
                break;
            }
        }
        if (ok) c ++;
    } while (next_permutation(a, a + 10));
    cout << c << endl;
    return 0;
}
*/

/*
class tim
{
public:
    int h = 0; int m = 0; int s = 0;
    
    tim() { }
    
    tim(int h, int m, int s)
    {
        this -> h = h;
        this -> m = m;
        this -> s = s;
    }
    
    tim sub(tim t)
    {
        t.s = s - t.s;
        t.m = m - t.m;
        t.h = h - t.h;
        if (t.s < 0) {
            t.s += 60;
            t.m --;
        }
        if (t.m < 0)
        {
            t.h --;
            t.m += 60;
        }
        return t;
    }
    
    tim add(tim t)
    {
        t.s = s + t.s;
        t.m = m + t.m;
        t.h = h + t.h;
        if (t.s >= 60) {
            t.s -= 60;
            t.m ++;
        }
        if (t.m >= 60)
        {
            t.h ++;
            t.m -= 60;
        }
        return t;
    }
    
    string toString()
    {
        string str = "";
        if (h < 10) str += '0';
        str += to_string(h);
        str += ':';
        if (m < 10) str += '0';
        str += to_string(m);
        str += ':';
        if (s < 10) str += '0';
        str += to_string(s);
        return str;
    }
};

int main()
{
    
    string line;
    int T;
    scanf("%d",&T);
    //scanf(" ");
    while (T --)
    {
        tim tt[4];
        scanf(" ");
        getline(cin, line);
        stringstream ss;
        ss << line;
        string s;
        for (int i = 0;ss >> s;i ++)
        {
            if (i != 2)
            {
                int t = 0,k = 0;
                for (int j = 0;s[j] != 0;j ++)
                {
                    if (s[j] == ':')
                    {
                        
                        if (k == 0) tt[i].h = t;
                        if (k == 1) tt[i].m = t;
                        t = 0;
                        k ++;
                    } else t = t * 10 + s[j] - '0';
                }
                tt[i].s = t;
            } else
            {
                int t = 0;
                for (int j = 0;s[j] != 0;j ++)
                {
                    if (s[j] >= '0' && s[j] <= '9') t = t * 10 + s[j] - '0';
                }
                tt[1].h += 24 * t;
            }
        }
        //cout << tt[1].sub(tt[0]).toString() << endl;
        //cout << tt[1].add(tt[0]).toString() << ednl;
        
        
        scanf(" ");
        getline(cin, line);
        ss = stringstream(line);
        for (int i = 2;ss >> s;i ++)
        {
            if (i != 4)
            {
                int t = 0,k = 0;
                for (int j = 0;s[j] != 0;j ++)
                {
                    if (s[j] == ':')
                    {
                        
                        if (k == 0) tt[i].h = t;
                        if (k == 1) tt[i].m = t;
                        t = 0;
                        k ++;
                    } else t = t * 10 + s[j] - '0';
                }
                tt[i].s = t;
            } else
            {
                int t = 0;
                for (int j = 0;s[j] != 0;j ++)
                {
                    if (s[j] >= '0' && s[j] <= '9') t = t * 10 + s[j] - '0';
                }
                tt[3].h += 24 * t;
            }
        }
        //cout << tt[0].toString() << endl << tt[1].toString() << endl << tt[2].toString() << endl << tt[3].toString() << endl;
        tim hh = tt[1].add(tt[2]).sub(tt[0].add(tt[3]));
        hh.h /= 2;
        cout << tt[1].sub(tt[0].add(hh)).toString() << endl;
    }
    
    return 0;
}
*/

/*
int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};
char a[1010][1010];
int t;

int bfs(int i, int j)
{
    int v = 1, l = 0;
    stack<pair<int,int> > s;
    s.push(make_pair(i, j));
    a[i][j] = '*';
    while (!s.empty())
    {
        pair<int,int> c = s.top();
        s.pop();
        int ok = 0;
        for (int p = 0;p < 4;p ++)
        {
            int x = c.second + dx[p],
            y = c.first + dy[p];
            if (x >= 0 && y >= 0 && x < t && y < t)
            {
                if (a[y][x] == '#')
                {
                    s.push(make_pair(y, x));
                    a[y][x] = '*';
                    v ++;
                }
                if (a[y][x] == '.') ok = 1;
            }
        }
        if (ok) l ++;
    }
    return l == v;
}

int tj()
{
    int c = 0;
    for (int i = 0;i < t;i ++)
    {
        for (int j = 0;j < t;j ++)
        {
            if (a[i][j] == '#')
            {
                if (bfs(i,j)) c ++;
            }
        }
    }
    return c;
}

int main()
{
    
    scanf("%d",&t);
    for (int i = 0;i < t;i ++)
    {
        scanf(" ");
        for (int j = 0;j < t;j ++)
        {
            scanf("%c", &a[i][j]);
        }
    }
    printf("%d\n", tj());
//    cout << endl;
//    for (int i = 0;i < t;i ++)
//    {
//        for (int j = 0;j < t;j ++)
//        {
//            printf("%c", a[i][j]);
//        }
//        printf("\n");
//    }
    return 0;
}
*/

/*
int ms[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int isRun(int y)
{
    return (y % 100 != 0 && y % 4 == 0) || y % 400 == 0;
}

void jd(int y)
{
    if (isRun(y)) ms[2] = 29;
    else ms[2] = 28;
}

int main()
{
    int y = 2000, m = 1, d = 1;
    int y_to = 2000, m_to = 5, d_to = 4;
    //scanf("%d-%d-%d",&y_to,&m_to,&d_to);
    jd(y);
    int c = 1;
    while (y_to != y || m_to != m || d_to != d)
    {
        d ++;
        if (d > ms[m])
        {
            m ++;
            if (m > 12) {
                y ++;
                jd(y);
                m = 1;
            }
            d = 1;
        }
        c ++;
    }
    cout << c << endl;
    return 0;
}
*/

/*string to_bin(char n)
{
    if (n < 0) n = ~n;
    string str;
    while (n != 0)
    {
        str = ((char) ('0' + n % 2)) + str;
        n /= 2;
    }
    return str;
}

string add(char n, string b)
{
    while (b.size() < 8)
    {
        b.insert(b.begin(), '0');
    }
    if (n < 0)
    {
        for (int i = 0;b[i] != 0;i ++) b[i] = !(b[i] - '0') + '0';
    }
    return b;
}

void prt(char a, char b)
{
    string s1 = add(a, to_bin(a));
    string s2 = add(b, to_bin(b));
    for (int i = 0;s1[i] != 0;i ++)
    {
        if (s1[i] == '0') cout << " ";
        else cout << "1";
    }
    for (int i = 0;s2[i] != 0;i ++)
    {
        if (s2[i] == '0') cout << " ";
        else cout << "1";
    }
    cout << endl;
}

int main()
{
    char a,b;
    while (~scanf("%hhd %hhd",&a,&b))
    {
        prt(a,b);
        for (int i = 0;i < 15;i ++) {scanf("%hhd %hhd",&a,&b); prt(a,b);}
        cout << endl;
    }
    return 0;
}
*/

/*
int main()
{
    ll x,y;
    scanf("%lld %lld",&x, &y);
    
    ll dis = 0;
    if (x >= 0)
    {
        if (y >= -x && y <= x)
        {
            dis = (1 + 2 * x) * x * 2;
            dis -= 2 * x;
            dis += x - y;
        } else
        {
            if (y >= 0)
            {
                dis = (2 * y) * (2 * y - 1);
                dis += x + y;
            } else
            {
                dis += (1 + 2 * -y) * 2 * -y;
                dis += -y - x;
            }
        }
    } else
    {
        if (y >= x + 1 && y <= -x)
        {
            dis = 2 * -x * (-x * 2 - 1);
            dis -= 2 * -x - 1;
            dis += y - (x + 1);
        } else {
            if (y >= 0)
            {
                dis = (2 * y) * (2 * y - 1);
                dis += x + y;
            } else
            {
                dis += (1 + 2 * -y) * 2 * -y;
                dis += -y - x;
            }
        }
    }
    printf("%lld\n",dis);
    return 0;
}
*/

/*int main()
{
    string str;
    while (cin >> str)
    {
        int a['z' + 1] = {0};
        for (int i = 0;str[i] != 0;i ++)
        {
            a[str[i]] ++;
        }
        int ma = -1;
        int mi = 2000;
        for (int i = 'a';i <= 'z';i ++)
        {
            if (a[i] != 0)
            {
                if (a[i] >= ma) ma = a[i];
                if (a[i] <= mi) mi = a[i];
            }
        }
        printf("%d\n",ma - mi);
    }
    return 0;
}
*/

/*
void prt(int n, char c)
{
    for (int i = 0;i < n;i ++) printf("%c",c);
}

int main()
{
    int a;
    while (~scanf("%d",&a))
    {
        int n = a + a * 2 - 4 + a;
        string str;
        int i = 1;
        while (str.size() < n)
        {
            str += to_string(i);
            i ++;
        }
        while (str.size() > n)
        {
            str.erase(str.end() - 1);
        }
        //cout << str << ednl;
        for (i = 0;i < a;i ++)
        {
            prt(a - i - 1,'.');
            if (i == 0)
            {
                printf("%c\n",str[i]);
            } else if(i != a - 1) {
                printf("%c",str[i]);
                prt(2 * i - 1,'.');
                printf("%c\n",str[n - i]);
            } else {
                for (int j = i;j <= n - i;j ++) printf("%c",str[j]);
                printf("\n");
            }
        }
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    while (cin >> str)
    {
        int x = 0;
        for (int i = 0;str[i] != 0;i ++)
        {
            x += str[i] - '0';
        }
        int k;
        while (x / 10 >= 1)
        {
            k = x;
            x = 0;
            while (k != 0)
            {
                x += k % 10;
                k /= 10;
            }
        }
        printf("%d\n", x);
    }
    return 0;
}
*/

/*
double pp(double a) {return a * a;}

int main()
{
    double a,b,c;
    a = sqrt(pp(6.4 - 2.3) + pp(3.1 - 2.5));
    b = sqrt(pp(5.1 - 2.3) + pp(7.2 - 2.5));
    c = sqrt(pp(5.1 - 6.4) + pp(7.2 - 3.1));
    double t = (a + b + c) / 2;
    double s = sqrt(t * (t - a) * (t - b) * (t - c));
    printf("%.3lf",s);
    reutrn 0;
}
*/

/*
int main()
{
    int c = 0;
    for (int x = 1;1;x ++)
    {
        c = 0;
        for (int i = 1;i <= sqrt(x);i ++)
        {
            double K = sqrt(x - i * i);
            int k = K;
            if (k == K && k >= i) c ++;
        }
        if (c == 12)
        {
            printf("%d\n",x);
            break;
        }
    }
    return 0;
}
*/

// 约瑟夫环
//https://blog.csdn.net/qie_wei/article/details/87915174
/*
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int x = 0;
    for (int i = 1;i <= n;i ++) x = (x + k) % i;
    printf("%d\n", x + 1);
    
    return 0;
}
*/

/*
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    set<int> k;
    do {
        if (a[0] > a[1] && a[1] > a[2]) {
            k.insert(a[0] * 100 + a[1] * 10 + a[2]);
        }
    } while (next_permutation(a, a + 10));
    cout << k.size() << endl;
    return 0;
}
*/

/*
int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        double D;
        int k;
        int a = -1,b = -1,c = -1,d = -1;
        for (int A = 0;A <= sqrt(n);A ++)
        {
            for (int B = A;B <= sqrt(n);B ++)
            {
                for (int C = B;C <= sqrt(n);C ++)
                {
                    D = sqrt(n - A * A - B * B - C * C);
                    if (D >= C && D == (k = D))
                    {
                        a = A;
                        b = B;
                        c = C;
                        d = k;
                        goto end;
                    }
                }
            }
        }
        end:
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    int a[10010];
    int k[10010];
    while (~scanf("%d",&n))
    {
        for (int i = 1;i <= n;i ++)
        {
            scanf("%d",a + i);
            k[a[i]] = i;
        }
        int c = 0;
        for (int i = 1;i <= n;i ++)
        {
            if (a[i] != i)
            {
                c ++;
                a[k[i]] = a[i];
                k[a[i]] = k[i];
                a[i] = i;
                
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
*/

/*
int cpd(int *a, int n)
{
    int k = 0;
    for (int i = n - 1, j = 0;i >= 0;i --, j ++)
    {
        k += pow(10,j) * a[i];
    }
    return k;
}

int ok(int k)
{
    int a[10] = {0};
    int ok = 1;
    while (k != 0)
    {
        a[k % 10] ++;
        k /= 10;
    }
    if (a[0] != 0) return 0;
    for (int i = 1;i < 10;i ++)
    {
        if (a[i] != 1) return 0;
    }
    return ok;
}

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int m = 0;
    do {
        int k = 1;
        for (int i = 1;i < 9;i ++)
        {
            //cout << cpd(a, 9) << " >> " << cpd(a, i) << " " << cpd(a + i, 9 - i) << endl;
            k = cpd(a, i) * cpd(a + i, 9 - i);
            if (ok(k) && k >= m) m = k;
        }
    } while (next_permutation(a, a + 9));
    cout << m;
    return 0;
}
*/

//vector<int> nds[100010];
//set<int> cds[100010];
//
//void dfs(int nd)
//{
//    if (nds[nd].size() == 0)
//    {
//        return;
//    }
//    for (vector<int>::iterator i = nds[nd].begin();i != nds[nd].end();i ++)
//    {
//        dfs(*i);
//    }
//}
//
//int main()
//{
//    int n,q;
//    scanf("%d %d",&n,&q);
//    int a,b;
//
//
//
//    for (int i = 0;i < n - 1;i ++)
//    {
//        scanf("%d %d",&a,&b);
//        nds[a].push_back(b);
//        cds[a].insert(b);
//    }
//
//
//
//    int x,y;
//    for (int i = 0;i < q;i ++)
//    {
//        scanf("%d %d",&x,&y);
//    }
//    return 0;
//}
//

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        int m,n;
        scanf("%d %d",&n,&m);
        char r[15][15];
        int k[10] = {0};
        int ok = 1;
        for (int i = 0;i < n;i ++)
        {
            scanf(" ");
            for (int j = 0;j < m;j ++)
            {
                scanf("%c",&r[i][j]);
            }
        }
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < m;j ++)
            {
                if (r[i][j] != '.')
                {
                    if (k[r[i][j] - '0'] != 0) {ok = 0; goto end;}
                    char p = r[i][j];
                    int a = i,b = j;
                    for (;a < n && r[a][j] == r[i][j];a ++);
                    for (;b < m && r[i][b] == r[i][j];b ++);
                    //cout << a - i << " " << b - j << endl;
                    for (int x = i;x < a;x ++)
                    {
                        for (int y = j;y < b;y ++)
                        {
                            if (r[x][y] != p) {ok = 0; goto end;}
                            r[x][y] = '.';
                        }
                    }
                    k[p - '0'] = 1;
                }
            }
        }
        end:
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
    string str = "";
    for (int i = 0;i < n;i ++)
    {
        char k = 'A' + i;
        str = str + k + str;
    }
    cout << str << endl;
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    multiset<int> a;
    int t;
    for (int i = 0;i < n;i ++) {
        scanf("%d", &t);
        a.insert(t);
    }
    int k = 0;
    while (a.size() != 1)
    {
        t = 0;
        t += *a.begin();
        a.erase(a.begin());
        t += *a.begin();
        a.erase(a.begin());
        a.insert(t);
        k += t;
    }
    printf("%d\n", k);
    
    return 0;
}
*/

/*
string getAn(int n)
{
    string str = "";
    for (int i = 1;i <= n;i ++)
    {
        if (i != 1)
        {
            if (i % 2) str += '+';
            else str += '-';
        }
        str += "sin(";
        str += to_string(i);
        
    }
    for (int i = 0;i < n;i ++) str += ")";
    return str;
}

string getSn(int n)
{
    string str = "";
    for (int i = 1;i < n;i ++) str += '(';
    for (int i = n;i >= 1;i --)
    {
        str += getAn(n - i + 1);
        str += '+';
        str += to_string(i);
        if (i != 1) str += ')';
    }
    return str;
}

int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        cout << getSn(n) << endl;
        
    }
    
    return 0;
}
*/

/*
int main()
{
    int h, m;
    scanf("%d %d",&h, &m);
    string nm[60] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    for (int i = 21;i < 60;i ++)
    {
        if (i < 30) nm[i] = nm[20] + " " + nm[i - 20];
        else if (i == 30) nm[i] = "thirty";
        else if (i < 40) nm[i] = nm[30] + " " + nm[i - 30];
        else if (i == 40) nm[i] = "forty";
        else if (i < 50) nm[i] = nm[40] + " " + nm[i - 40];
        else if (i == 50) nm[i] = "fifty";
        else nm[i] = nm[50] + " " + nm[i - 50];
    }
    cout << nm[h] << " ";
    if (m == 0) cout << "o'clock" << endl;
    else cout << nm[m] << endl;
    return 0;
}
*/

/*
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int k = 0;
    int f = 1;
    for (int i = a;i <= b;i ++)
    {
        k = i;
        f = 1;
        printf("%d=",i);
        for (int j = 2;j <= i;j ++)
        {
            
            while (k % j == 0)
            {
                k /= j;
                if (f) f = 0;
                else printf("*");
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int v1,v2,t,s,l;
    scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
    if (v2 > v1)
    {
        if (v2 > v1) cout << 'T' << endl;
        cout << l / v1 << endl;
    } else {
        int dis_r = 0, dis_t = 0;
        int x = -1;
        int i;
        for (i = 1;dis_r < l && dis_t < l;i ++)
        {
            dis_t += v2;
            if (x == -1) dis_r += v1;
            else if (i >= x + s) x = -1;
            //cout << "r" << dis_r << "t" << dis_t << endl;
            //cout << i << " " << x << ednl;
            if (s != 0 && dis_r - dis_t >= t && x == -1) x = i;
        }
        if (dis_t == dis_r) cout << 'D' << endl;
        else if (dis_t < dis_r) cout << 'R' << endl;
        else cout << 'T' << endl;
        cout << i - 1 << endl;
    }
    return 0;
}
*/

/*
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[210][210] = {0};
    char b[210][210] = {0};
    for (int i = 0;i < m;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int d = 0;
    pair<int, int> pos(0, 0);
    // 0 - d, 1 - r, 2 - u, 3 - l;
    for (int i = 0;i < m * n;i ++)
    {
        if (i != 0) printf(" ");
        int x = pos.second,
        y = pos.first;
        printf("%d",a[y][x]);
        b[y][x] = '.';
        switch (d) {
            case 0:
                if (y + 1 >= m || b[y + 1][x] == '.') { d = 1; pos.second ++;}
                else pos.first ++;
                break;
            case 1:
                if (x + 1 >= n || b[y][x + 1] == '.') { d = 2; pos.first --;}
                else pos.second ++;
                break;
            case 2:
                if (y - 1 < 0 || b[y - 1][x] == '.') { d = 3; pos.second --;}
                else pos.first --;
                break;
            case 3:
                if (x - 1 < 0 || b[y][x - 1] == '.') { d = 0; pos.first ++;}
                else pos.second --;
                break;
            default:
                break;
        }
    }
    printf("\n");
    return 0;
}
*/


//int main()
//{
//    int dx1,dy1,dx2,dy2,dx3,dy3,dx4,dy4;
//    scanf("%d %d %d %d", &dx1, &dy1, &dx2, &dy2);
//    scanf("%d %d %d %d", &dx3, &dy3, &dx4, &dy4);
//    int x1 = min(dx1, dx2),
//    y1 = min(dy1, dy2),
//    x2 = max(dx1, dx2),
//    y2 = max(dy1, dy2),
//    x3 = min(dx3, dx4),
//    y3 = min(dy3, dy4),
//    x4 = max(dx3, dx4),
//    y4 = max(dy3, dy4);
//    printf("%d %d | %d %d | %d %d | %d %d",x1,y1,x2,y2,x3,y3,x4,y4);
//
//    return 0;
//}

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int A[50][50];
    vector<vector<int> > B(50), C(50);
    int t;
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            scanf("%d",&t);
            A[i][j] = t;
            B[i].push_back(t);
            C[i].push_back(t);
        }
    }
    int s = 0;
    if (m == 0)
    {
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < n;j ++)
            {
                if (i == j)
                {
                    B[i][j] = 1;
                } else B[i][j] = 0;
            }
        }
    }
    for (int k = 0;k < m - 1;k ++)
    {
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < n;j ++)
            {
                s = 0;
                for (int v = 0;v < n;v ++)
                {
                    s += B[i][v] * A[v][j];
                }
                C[i][j] = s;
            }
        }
        B.swap(C);
    }
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            if (j != 0) printf(" ");
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int t;
    scanf("%d",&t);
    int h = 0,m = 0,s = 0;
    for (int i = 0;i < t;i ++)
    {
        s ++;
        if (s == 60)
        {
            m ++;
            s = 0;
            if (m == 60)
            {
                h ++;
                m = 0;
            }
        }
    }
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d", &n);
    int a[30][30];
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s = 0;
    int f = 1;
    for (int i = 0;i < n;i ++)
    {
        s = 0;
        for (int j = 0;j < n;j ++)
        {
            s += a[j][i];
        }
        if (s > n / 2)
        {
            if (f) f = 0;
            else printf(" ");
            printf("%d",i + 1);
        }
    }
    printf("\n");
    return 0;
}
*/

/*
int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    if (str1.size() != str2.size()) printf("1\n");
    else if (str1 == str2) printf("2\n");
    else {
        for (int i  = 0;str1[i] != 0;i ++) if (str1[i] >= 'a' &&  str1[i] <= 'z') str1[i] -= 32;
        for (int i  = 0;str2[i] != 0;i ++) if (str2[i] >= 'a' &&  str2[i] <= 'z') str2[i] -= 32;
        if (str1 == str2) printf("3\n");
        else printf("4\n");
    }
    return 0;
}
*/

/*
int main()
{
    int N;
    scanf("%d",&N);
    int a[100010];
    int i = 0;
    string str = "";
    
    while (N --)
    {
        scanf(" ");
        string s;
        getline(cin, s);
        str += " " + s;
    }
    stringstream ss(str);
    int id;
    while (ss >> id)
    {
        a[i] = id;
        i ++;
    }
    sort(a, a + i);
    int m = 0,n = 0;
    for (int k = 1;k < i;k ++)
    {
        if (a[k] - a[k - 1] != 1)
        {
            if (a[k] == a[k - 1]) n = a[k];
            else m = a[k] - 1;
        }
    }
    printf("%d %d\n", m, n);
    return 0;
}
*/

/*
int main()
{
    int n;
    while (~scanf("%d",&n))
    {
        int a[500][500] = {0};
        int k = n * 4 + 5;
        int ctr = k / 2;
        for (int i = 0;i <= n;i ++)
        {
            int y = ctr - (i + 1) * 2;
            //cout << ctr << " " << y << endl;
            int start = ctr - i * 2;
            int end = ctr + i * 2 + 1;
            //cout << end << endl;
            for (int j = start;j < end;j ++)
            {
                a[y][j] = 1;
            }
            a[y + 1][start] = 1;
            a[y + 1][end - 1] = 1;
            
            
            a[y + 2][start] = 1;
            a[y + 2][start - 1] = 1;
            
            a[y + 2][end - 1] = 1;
            a[y + 2][end] = 1;
            
            for (int j = y + 2;j < y + 2 + i * 4 + 1;j ++) {
                a[j][start - 2] = 1;
                a[j][end + 1] = 1;
            }
            
            
            y = ctr + (i + 1) * 2;
            for (int j = start;j < end;j ++)
            {
                a[y][j] = 1;
            }
            a[y - 1][start] = 1;
            a[y - 1][end - 1] = 1;
            
            a[y - 2][start] = 1;
            a[y - 2][start - 1] = 1;
            
            a[y - 2][end - 1] = 1;
            a[y - 2][end] = 1;
        }
        
        for (int i = 0;i < k;i ++)
        {
            for (int j = 0;j < k;j ++) if (a[i][j] == 1) printf("$");
            else printf(".");
            printf("\n");
        }
    }
    return 0;
}
*/

/*
int to_int(int a[], int n)
{
    int num = 0;
    for (int i = 0;i < n;i ++)
    {
        num = num * 10 + a[i];
    }
    return num;
}

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int n;
    scanf("%d",&n);
    int k = 0;
    do {
        int A = 0;
        for (int i = 0;i <= 6;i ++)
        {
            A = A * 10 + a[i];
            int B = 0;
            for (int j = i + 1;j <= 7;j ++)
            {
                B = B * 10 + a[j];
                int C = to_int(a + j + 1, 9 - j - 1);
                int c = B / C;
                if (c * C != B) continue;
                if (n == A + c) k ++;
            }
        }
    } while (next_permutation(a, a + 9));
    printf("%d\n", k);
    return 0;
}
*/

//int n,m,k;
//int a[60][60];
//int dp[60][60][20][20] = {0};
//
//int dfs(int x, int y, int kk, int v)
//{
//    //cout << x << ", " << y << endl;
//    if (kk > k) return 0;
//    if (x == m && y == n)
//    {
//        return kk == k;
//    }
//    int sum = 0;
//    if (a[y][x] > v)
//    {
//        // Take
//        int w = a[y][x];
//        if (x == m - 1 && y == n - 1)
//        {
//            sum = (sum + (dp[x + 1][y + 1][kk + 1][w] == 0 ? dp[x + 1][y + 1][kk + 1][w] = dfs(x + 1,y + 1,kk + 1,w) : dp[x + 1][y + 1][kk + 1][w])) % 1000000007;
//        } else {
//            if (x != m - 1)
//            {
//                sum = (sum + (dp[x + 1][y][kk + 1][w] == 0 ? dp[x + 1][y][kk + 1][w] = dfs(x + 1,y,kk + 1,w) : dp[x + 1][y][kk + 1][w])) % 1000000007;
//            }
//            if (y != n - 1)
//            {
//                sum = (sum + (dp[x][y + 1][kk + 1][w] == 0 ? dp[x][y + 1][kk + 1][w] = dfs(x, y + 1,kk + 1,w) : dp[x][y + 1][kk + 1][w])) % 1000000007;
//            }
//        }
//    }
//    // Not Take
//    if (x == m - 1 && y == n - 1)
//    {
//        sum = (sum + (dp[x + 1][y + 1][kk][v] == 0 ? dp[x + 1][y + 1][kk][v] = dfs(x + 1,y + 1,kk,v) : dp[x + 1][y + 1][kk][v])) % 1000000007;
//    } else {
//        if (x != m - 1)
//        {
//            sum = (sum + (dp[x + 1][y][kk][v] == 0 ? dp[x + 1][y][kk][v] = dfs(x + 1,y,kk,v) : dp[x + 1][y][kk][v])) % 1000000007;
//        }
//        if (y != n - 1)
//        {
//            sum = (sum + (dp[x][y + 1][kk][v] == 0 ? dp[x][y + 1][kk][v] = dfs(x,y + 1,kk,v) : dp[x][y + 1][kk][v])) % 1000000007;
//        }
//    }
//    return sum;
//}
//
//int dfs_t(int x, int y, int kk, int v, vector<pair<int,int> > pos)
//{
//    //cout << x << ", " << y << endl;
//    if (x == m && y == n)
//    {
//
//        if (kk == k) {for (auto i = pos.begin();i != pos.end();i ++) cout << "(" << i -> first << ", " << i -> second << ") ";
//            cout << endl;}
//        return kk == k;
//    }
//    int sum = 0;
//    int ttt = 0;
//    if (a[y][x] > v)
//    {
//        // Take
//        ttt = 1;
//        int w = a[y][x];
//        if (x == m - 1 && y == n - 1)
//        {
//            pos.push_back(make_pair(x, y));
//            sum += dfs_t(x + 1,y + 1,kk + 1,w,pos);
//        } else {
//            if (x != m - 1)
//            {
//                pos.push_back(make_pair(x, y));
//                sum += dfs_t(x + 1,y,kk + 1,w,pos);
//            }
//            if (y != n - 1)
//            {
//                if (x != m - 1) pos.erase(pos.end() - 1);
//                pos.push_back(make_pair(x, y));
//                sum += dfs_t(x, y + 1,kk + 1,w,pos);
//            }
//        }
//    }
//    // Not Take
//    if (ttt) pos.erase(pos.end() - 1);
//    if (x == m - 1 && y == n - 1)
//    {
//        sum += dfs_t(x + 1,y + 1,kk,v,pos);
//    } else {
//        if (x != m - 1)
//        {
//            sum += dfs_t(x + 1,y,kk,v,pos);
//        }
//        if (y != n - 1)
//        {
//            sum += dfs_t(x,y + 1,kk,v,pos);
//        }
//    }
//    return sum;
//}
//
//
//int main()
//{
//    scanf("%d %d %d",&n,&m,&k);
//    for (int i = 0;i < n;i ++)
//    {
//        for (int j = 0;j < m;j ++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    //vector<pair<int,int> > p;
//    printf("%d\n",dfs(0,0,0,-1));
//    return 0;
//}

/*
int main()
{
    string a, b;
    cin >> a >> b;
    int c = 0;
    for (int i = 0;a[i] != 0;i ++)
    {
        if (a[i] != b[i])
        {
            c ++;
            if (b[i] == '*') b[i] = 'o';
            else b[i] = '*';
            if (b[i + 1] == '*') b[i + 1] = 'o';
            else b[i + 1] = '*';
        }
    }
    cout << c << endl;
    return 0;
}
*/

/*
int ok(int a[], int n)
{
    for (int i = 0;i < n - 1;i ++)
    {
        if (a[i] != a[i + 1] || a[i] % 2) return 0;
    }
    return 1;
}

int main()
{
    int n;
    int a[110];
    scanf("%d",&n);
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    int c = 0;
    int last,l;
    while (!ok(a,n))
    {
        last = a[n - 1] / 2;
        for (int i = 0;i < n;i ++)
        {
            l = a[i] /= 2;
            a[i] += last;
            last = l;
        }
        for (int i = 0;i < n;i ++) if (a[i] % 2) {
            a[i] ++;
            c ++;
        }
    }
    printf("%d\n",c);
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
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int k = a * b / gcd(a, b);
    printf("%d\n", k * c / gcd(k, c));
    return 0;
}
*/

/*
struct node
{
    int n;
    node *l;
    node *r;
};

node *crt(int n)
{
    node *p = (node*) malloc(sizeof(node));
    p -> n = n;
    p -> l = NULL;
    p -> r = NULL;
    return p;
}

void add(int n, node **root)
{
    if (*root == NULL)
    {
        *root = crt(n);
        return;
    }
    if (n < (*root) -> n) add(n, &((*root) -> l));
    else add(n, &((*root) -> r));
}

struct ps {
    int dps;
    int length;
    int type;
};

void pbl(node *root, int d, int lr, vector<ps> dps)
{
    if (root == NULL) return;
    
    ps p = {d, (int) log10(root -> n) + 1, root -> r != NULL && lr == 0};
    if (dps.size() <= d) dps.push_back(p);
    else dps[d] = p;
    pbl(root -> r,d + 1, 1, dps);
    for (vector<ps>::iterator i = dps.begin();i != dps.end() - 1;i ++)
    {
        if (i -> type && i -> dps != 0) printf("|");
        else printf(".");
        for (int j = 0;j < i -> length + ((i -> dps) != 0) * 2;j ++)
        {
            printf(".");
        }
        
    }
    if (d != 0) printf("|-");
    printf("%d",root -> n);
    if (root -> l != NULL || root -> r != NULL) printf("-|");
    printf("\n");
    dps[d].type = root -> l != NULL && lr;
    pbl(root -> l,d + 1, 0, dps);
}

int main()
{
    int a;
    node *root = NULL;
    while (~scanf("%d",&a))
    {
        add(a, &root);
    }
    vector<ps> dps;
    pbl(root, 0, 1, dps);
    return 0;
}
*/


/*
int main()
{
    int n;
    scanf("%d",&n);
    if (n % 2)
    {
        set<int> k;
        int p;
        for (int i = 1;i <= 9;i += 2)
        {
            p = n;
            p -= i;
            p /= 2;
            if (p >= 1 && p <= 18)
            {
                for (int j = 1;j <= p;j ++)
                {
                    if (j >= 10 || p - j >= 10) continue;
                    k.insert(j * 10000 + (p - j) * 1000 + i * 100 + (p - j) * 10 + j);
                }
            }
        }
        if (k.size() == 0) printf("-1\n");
        else for (set<int>::iterator i = k.begin();i != k.end();i ++)
        {
            printf("%d\n",*i);
        }
    } else {
        set<int> k;
        int p;
        for (int i = 0;i <= 8;i += 2)
        {
            p = n;
            p -= i;
            p /= 2;
            if (p >= 1 && p <= 18)
            {
                for (int j = 1;j <= p;j ++)
                {
                    if (j >= 10 || p - j >= 10) continue;
                    k.insert(j * 10000 + (p - j) * 1000 + i * 100 + (p - j) * 10 + j);
                }
            }
        }
        p = n / 2;
        for (int i = 1;i < 10;i ++)
        {
            for (int j = 0;j < 10;j ++)
            {
                for (int l = 0;l < 10;l ++)
                {
                    if (p == i + j + l) k.insert(i * 100000 + j * 10000 + l * 1000 + l * 100 + j * 10 + i);
                }
            }
        }
        
        
        
        if (k.size() == 0) printf("-1\n");
        else for (set<int>::iterator i = k.begin();i != k.end();i ++)
        {
            printf("%d\n",*i);
        }
    }
    return 0;
}
*/

/*
int x,y;

void turn(int *d, int r)
{
    *d += r;
    if (*d < 0) *d = 3;
    if (*d > 3) *d = 0;
}

void move(int d)
{
    if (d == 0) x --;
    else if (d == 1) y ++;
    else if (d == 2) x ++;
    else if (d == 3) y --;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    char a[110][110];
    for (int i = 0;i < m;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            scanf("%hhd",&a[i][j]);
        }
    }
    int k;
    char s;
    scanf("%d %d %c %d",&x,&y,&s,&k);
    int d = 0;
    switch (s) {
        case 'U':
            d = 0;
            break;
        case 'D':
            d = 2;
            break;
        case 'L':
            d = 3;
            break;
        case 'R':
            d = 1;
            break;
        default:
            break;
    }
    for (int v = 0;v < k;v ++)
    {
        if (a[x][y]) turn(&d, 1);
        else turn(&d, -1);
        a[x][y] = !a[x][y];
        move(d);
    }
    printf("%d %d\n",x,y);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[50010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    int miin = 100000,maax = -1;
    int sum = 0;
    int c = 0;
    for (int j = 0;j < n;j ++)
    {
        miin = 100000;
        maax = -1;
        sum = 0;
        for (int i = j;i < n;i ++)
        {
            sum += a[i];
            if (a[i] <= miin) miin = a[i];
            if (a[i] >= maax) maax = a[i];
            if ((miin + maax) * (maax - miin + 1) / 2 == sum) c ++;
        }
    }
    printf("%d\n",c);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    vector<pair<int,int> > a;
    int t;
    pair<int,int> f;
    for (int i = 0;i < n;i ++) {
        scanf("%d", &t);
        a.push_back(make_pair(abs(t), t / abs(t)));
    }
    f = a[0];
    sort(a.begin(),a.end());
    vector<pair<int, int> >::iterator p = lower_bound(a.begin(), a.end(), f);
    //cout << p -> first << " " << p -> second << endl;
    if (p -> second == 1) {
        int c = 1;
        for (vector<pair<int,int> >::iterator i = p + 1;i != a.end();i ++)
        {
            if (i -> second == -1) c ++;
        }
        if (c == 1) goto end;
        for (vector<pair<int,int> >::iterator i = a.begin();i != p;i ++)
        {
            if (i -> second == 1) c ++;
        }
        end:
        printf("%d\n",c);
    } else {
        int c = 1;
        for (vector<pair<int,int> >::iterator i = a.begin();i != p;i ++)
        {
            if (i -> second == 1) c ++;
        }
        if (c == 1) goto endd;
        for (vector<pair<int,int> >::iterator i = p + 1;i != a.end();i ++)
        {
            if (i -> second == -1) c ++;
        }
        endd:
        printf("%d\n",c);
    }
    return 0;
}
*/

/*
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a * b - a - b);
    return 0;
}
*/

/*
int main()
{
    int n,k,T;
    scanf("%d %d %d",&n,&k,&T);
    int m = 1;
    int a[1000010];
    for (int i = 1;i <= k;i ++)
    {
        a[i - 1] = m;
        m = (m + i) % k;
    }
    ll c = 0;
    int i = 0;
    int v = 0;
    c += a[i];
    for (int x = 1;x < T;x ++)
    {
        i = (i + n) % (k * 2);
        v = i;
        if (v >= k) v = 2 * k - v - 1;
        c += a[v];
    }
    printf("%lld\n",c);
    return 0;
}
*/


//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int a[510][510];
//    for (int i = 0;i < n;i ++)
//    {
//        for (int j = 0;j < m;j ++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    int dp[510][510] = {0};
//    for (int i = 0;i < n;i ++)
//    {
//
//        for (int j = 0;j < m;j ++)
//        {
//
//        }
//    }
//    return 0;
//}

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    fir (int i = 0;i < n;i ++) scanf("%d",a + i);
    int last = a[0];
    int m = last;
    fro (int i = 1;i < n;i ++)
    {
        last = max(last, 0) + a[i];
        m = max(m, last);
    }
    cout << m << endl;
    return 0;
}
*/

/*
int ok(int n)
{
    int t;
    while (n != 0)
    {
        t = n % 10;
        if (t == 2 || t == 0 || t == 1 || t == 9) return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    ll k = 0;
    for (int i = 1;i <= 2019;i ++)
    {
        if (ok(i))
        {
            k += i * i;
        }
    }
    printf("%lld",k);
    return 0;
}
*/

/*
int main()
{
    int a = 1,
    b = 1,
    c = 1;
    int n;
    scanf("%d",&n);
    int t;
    for (int i = 3;i < n;i ++)
    {
        t = c;
        c = (a + b + c) % 10000;
        a = b;
        b = t;
    }
    cout << c << ednl;
    return 0;
}
*/

/*
int com(string a, string b)
{
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

vector<string> bu;
vector<string> a;
int v[100][100];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char dd[] = {'L','D','R','U'};

int n,m;
pair<int, int> ed;

void dfs(int x, int y, string k,int d)
{
    if (x == ed.second && y == ed.first) bu.push_back(k);
    int xx,yy;
    for (int i = 0;i < 4;i ++)
    {
        xx = x + dx[i];
        yy = y + dy[i];
        if (xx >= 0 && xx < m && yy >= 0 && yy < n)
        {
            if (a[yy][xx] == '0' && (v[yy][xx] >= d || v[yy][xx] == -1))
            {
                v[yy][xx] = d;
                string kk = k;
                kk += dd[i];
                dfs(xx,yy,kk,d + 1);
            }
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    mem(v,-1);
    char line[60];
    while (~scanf("%s", line)) a.push_back(line);
    n = (int) a.size();
    m = (int) a[0].size();
    ed.first = (int) a.size() - 1;
    ed.second = (int) a[a.size() - 1].size() - 1;
    cout << ed.first << " " << ed.second << endl;
    string k;
    dfs(0,0,k,0);
    sort(bu.begin(),bu.end(),com);
    cout << *bu.begin() << endl;
    return 0;
}
*/

/*
int com(pair<ll, int> a, pair<ll, int> b)
{
    if (a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

int main()
{
    int a[100010];
    int n;
    scanf("%d",&n);
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    vector<pair<ll, int> > dps;
    int last = 0;
    int d = 1;
    ll sum = 0;
    for (int i = 0;i < n;i ++)
    {
        sum += a[i];
        if (i == 0 || i - last == pow(2,d - 1) || i == n - 1)
        {
            dps.push_back(make_pair(sum, d));
            last = i;
            d ++;
            sum = 0;
        }
    }
    
    sort(dps.begin(),dps.end(),com);
    printf("%d\n",dps.begin() -> second);
    return 0;
}
*/

/*int main()
{
    freopen("in.txt", "r", stdin);
    FILE *f = fopen("aaa.xls", "w");
    int k;
    while (~scanf("%d",&k))
    {
        fprintf(f, "%d",k);
        for (int i = 0;i < 5;i ++)
        {
            scanf("%d",&k);
            fprintf(f, "\t%d",k);
        }
        fprintf(f, "\n");
    }
    return 0;
}
*/

/*int main()
{
    itn n = 2019;
    //scanf("%d",&n);
    string str = "A";
    for (int i = 1;i < n;i ++)
    {
        str[0] ++;
        for (int j = 0;str[j] != 0 && !(str[j] >= 'A' && str[j] <= 'Z');j ++)
        {
            
                if (str[j + 1] != 0)
                {
                    str[j + 1] ++;
                } else str += 'A';
                str[j] = 'A';
            
        }
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
*/

/*
int ok(int n)
{
    int t;
    while (n != 0)
    {
        t = n % 10;
        if (t == 2 || t == 4) return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    set<set<int> > k;
    for (int i = 1;i <= 2019;i ++)
    {
        for (int j = 1;j <= 2019;j ++)
        {
            int v = 2019 - i - j;
            if (v >= 1 && ok(i) && ok(j) && ok(v) && i + j + v == 2019)
            {
                set<int> m;
                m.insert(i);
                m.insert(j);
                m.insert(v);
                if (m.size() == 3) k.insert(m);
            }
            
        }
    }
    cout << k.size() << endl;
    return 0;
}
*/

/*
int ok(int n)
{
    int t;
    while (n != 0)
    {
        t = n % 10;
        if (t == 2 || t == 0 || t == 1 || t == 9) return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    ll k = 0;
    int n = 2019;
    //scanf("%d",&n);
    for (int i = 1;i <= n;i ++)
    {
        if (ok(i))
        {
            k += i;
        }
    }
    printf("%lld\n",k);
    return 0;
}
*/

/*
int main()
{
    int n = 2019,m = 324;
    //scanf("%d %d",&n,&m);
    int t, c = 0;
    while (m != n)
    {
        t = m;
        m = max(m,n);
        n = min(t,n);
        m -= n;
        c ++;
    }
    printf("%d\n",c + 1);
    return 0;
}
*/

/*
int jd(ll n)
{
    if (n == 1) return 0;
    for (ll i = 2;i <= sqrt(n);i ++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n = 2019;
    //scanf("%d",&n);
    int last = 0;
    for (int i = 0, j = 1;i < n;j ++)
    {
        if (jd(j))
        {
            last = j;
            i ++;
        }
    }
    printf("%d\n",last);
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[110][110];
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < m;j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int j = 0;j < m;j ++)
    {
        for (int i = n - 1;i >= 0;i --)
        {
            if (i != n - 1) printf(" ");
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int ok(ll n)
{
    int t;
    while (n != 0)
    {
        t = n % 10;
        if (t == 2 || t == 0 || t == 1 || t == 9) return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    ll k = 0;
    ll n = 2019;
    //scanf("%lld",&n);
    for (ll i = 1;i <= n;i ++)
    {
        if (ok(i))
        {
            k += i * i * i;
        }
    }
    printf("%lld\n",k);
    return 0;
}
*/

/*
int main()
{
    string str = "LANQIAO";
    //cin >> str;
    reverse(str.begin(),str.end());
    ll c = 0;
    for (int i = 0;str[i] != 0;i ++)
    {
        c += (str[i] - 'A' + 1) * pow(26, i);
    }
    cout << c << endl;
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    if (n >= 100) {printf("0.61803399\n"); return 0;}
    double a = 1,b = 1;
    double c;
    for (int i = 2;i <= n;i ++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    //0.61803399
    printf("%.8lf\n", a / b);
    return 0;
}
*/


/*
int main()
{
    set<string> all;
    string str = "0100110001010001";
    for (int i = 0;i < str.size();i ++)
    {
        for (int j = i;j < str.size();j ++)
        {
            all.insert(str.substr(i,j - i + 1));
        }
    }
    printf("%lu\n",all.size());
    return 0;
}
*/

/*
int main()
{
    int c = 0;
    int a[] = {1,2,3,4,5,6,8,9,10,12};
    do {
        int t = a[0] + a[1] + a[2] + a[3];
        if (t == a[0] + a[5] + a[7] + a[9] &&
            t == a[4] + a[1] + a[5] + a[8] &&
            t == a[4] + a[2] + a[6] + a[9] &&
            t == a[3] + a[6] + a[7] + a[8]) c ++;
    } while (next_permutation(a, a + 10));
    printf("%d\n", c / (5 * 2));
    return 0;
}
*/

/*
int isZhi(int n)
{
    if (n == 1) return 0;
    for (int i = 2;i <= sqrt(n);i ++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    vector<int> a;
    int k = 1;
    for (int i = 0;i < 1000;k ++)
    {
        if (isZhi(k)) {a.push_back(k); i ++;}
    }
    // for (auto i = a.begin();i != a.end();i ++) cout << *i << endl;
    int v = 10;
    set<int> all;
    int d;
    for (int k = 0;k < 1000;k ++)
    {
        for (d = 1;d < 1000;d ++)
        {
            int last = a[k];
            all.clear();
            all.insert(last);
            for (int i = k + 1;i < 1000;i ++)
            {
                if (a[i] - last == d)
                {
                    last = a[i];
                    all.insert(last);
                    if (all.size() == v) goto end;
                } else if (a[i] - last > d)
                {
                    break;
                }
            }
        }
        end:
        if (all.size() == v){
            //for (auto i = all.begin();i != all.end();i ++) cout << *i << " ";
            printf("%d\n",d);
            break;
        }
    }
    return 0;
}
*/

/*
int main()
{
    fre("[蓝桥杯2017初赛]承压计算.txt");
    char a[5000];
    double b[5000] = {0};
    int k = 0;
    queue<pair<double,int> > q;
    for (int i = 0;i < 30;i ++)
    {
        for (int j = 0;j < i + 1;j ++)
        {
            scanf(" ");
            scanf("%c",&a[k]);
            if (a[k] >= '0' && a[k] <= '9')
            {
                b[k] += (a[k] - '0');
            }
            if (!q.empty())
            {
                b[k] += q.front().first / 2;
                q.front().second ++;
                
                if (q.front().second == 2)
                {
                    q.pop();
                    if (j != i) {
                        b[k] += q.front().first / 2;
                        q.front().second ++;
                    }
                }
            }
            if (a[k] >= '0' && a[k] <= '9') q.push(make_pair(b[k], 0));
            k ++;
        }
    }
    
    
    set<double> l;
//    int last = 0;
//    int v = 2;
//    for (int i = 0;i < k;i ++)
//    {
//        printf("%4.32lf ",b[i]);
//        if (i == 0) {
//            printf("\n");
//        }
//        if (i - last == v) {
//            printf("\n");
//            v ++;
//            last = i;
//        }
//    }
    
    for (int i = 0;i < 30;i ++)
    {
        l.insert(b[-- k]);
    }
    printf("%.0lf\n", 2086458231 / *l.begin() * *(-- l.end()));
    //72665192664
    
    return 0;
}
*/

/*
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int c = 0;
    set<int> k;
    do {
        k.clear();
        k.insert(a[0] + a[1] + a[2]);
        k.insert(a[3] + a[4] + a[5]);
        k.insert(a[6] + a[7] + a[8]);
        k.insert(a[0] + a[3] + a[6]);
        k.insert(a[1] + a[4] + a[7]);
        k.insert(a[2] + a[5] + a[8]);
        k.insert(a[0] + a[4] + a[8]);
        k.insert(a[2] + a[4] + a[6]);
        if (k.size() == 8) c ++;
    } while (next_permutation(a, a + 9));
    cout << c / 8 << endl;
    // 3120
    return 0;
}
*/

/*
int main()
{
    int a[] = {1,2,3,4,5,7,8,9,10,12,13};
    int t;
    do {
        t = a[0] + a[1] + a[2] + a[3];
        if (t == a[0] + a[10] + a[9] + a[8] &&
            t == 14 + a[10] + a[1] + 6 &&
            t == 14 + a[9] + a[7] + a[6] &&
            t == a[8] + a[7] + a[5] + 11 &&
            t == a[6] + a[5] + a[4] + a[3] &&
            t == a[2] + a[4] + 6 + 11)
        {
            printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
        }
    } while (next_permutation(a, a + 11));
    return 0;
}
*/

/*
//set<ll> all;

//void dfs(ll m, ll n)
//{
//    if (m > n)
//    {
//        return;
//    }
//    if (all.find(m) != all.end()) return;
//    all.insert(m);
//    dfs(m * 3, n);
//    dfs(m * 5, n);
//    dfs(m * 7, n);
//}

int main()
{
    //dfs(1,59084709587505);
    //cout << all.size() - 1 << endl;
    printf("1905");
    return 0;
}
*/

/*
int isZhi(int n)
{
    if (n == 1) return 0;
    for (int i = 2;i <= sqrt(n);i ++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int k[2000];
    int v = 0;
    for (int i = 1;i < 10000;i ++) if (isZhi(i)) k[v ++] = i;
    //for (int i = 0;i < v;i ++) cout << k[i] << " ";
    int mx = -1;
    int t;
    for (int m = 4;m <= n;m += 2)
    {
        for (int i = 0;i < v;i ++)
        {
            t = m - k[i];
            if (isZhi(t))
            {
                if (k[i] >= mx) mx = k[i];
                break;
            }
        }
    }
    cout << mx << endl;
    // 10000 -> 173
    return 0;
}
*/

/*
set<ll> ping;

int isPing(ll n)
{
    return ping.find(n) != ping.end();
}

ll to_num(int *a, int n)
{
    ll k = 0;
    for (int i = 0;i < n;i ++) k = k * 10 + a[i];
    return k;
}

set<set<ll> > all;

void dfs(int *a, int n, set<ll> k)
{
    ll num = 0;
    if (n == 0)
    {
        all.insert(k);
        return;
    }
    for (int i = 0;i < n;i ++)
    {
        num = num * 10 + a[i];
        if (isPing(num)) {
            k.insert(num);
            dfs(a + i + 1,n - i - 1,k);
            k.erase(k.find(num));
        }
        if (a[0] == 0) return;
    }
}

int main()
{
    for (ll i = 0;i < 100000;i ++)
    {
        ping.insert(i * i);
    }
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    do {
        set<ll> k;
        dfs(a, 10, k);
    } while (next_permutation(a, a + 10));
    cout << all.size() << endl;
    // 300
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    while (n --)
    {
        int k;
        scanf("%d",&k);
        int a_s = 0,b_s = 0;
        int a,b;
        while (k --)
        {
            scanf("%d %d",&a,&b);
            a_s += a;
            b_s += b;
        }
        if (a_s > b_s) printf("Alice\n");
        else if (a_s < b_s) printf("Bob\n");
        else printf("All\n");
    }
    return 0;
}
*/

/*
int main()
{
    int k;
    scanf("%d",&k);
    while (k --)
    {
        int n;
        scanf("%d",&n);
        int a[110];
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        int last = a[0];
        int f = a[0];
        for (int i = 1;i < n;i ++)
        {
            last = max(a[i],last + a[i]);
            f = max(f,last);
        }
        if (f < 0) printf("0\n");
        else printf("%d\n",f);
    }
    return 0;
}
*/

//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int a[5010];
//    map<int,set<int> > b;
//
//    for (int i = 0;i < n;i ++) {
//        scanf("%d",a + i);
//        b[a[i]].insert(i);
//    }
//    int c = 0,k;
//    for (int i = 0;i < n - 2;i ++)
//    {
//        for (int j = i + 1;j < n - 1;j ++)
//        {
//            k = m - a[i] - a[j];
//            set<int> l = b[k];
//            int dis = (int) distance(l.upper_bound(j), l.end());
//            c += dis;
//        }
//    }
//    printf("%d\n",c);
//    return 0;
//}


///////////并查集 - 连通图
/*
int main()
{
    int v,e;
    scanf("%d %d",&v,&e);
    int g[100010] = {0};
    vector<set<int> > k(v + 1);
    for (int i = 1;i <= v;i ++) {
        g[i] = i;
        k[i].insert(i);
    }
    int a,b;
    for (int i = 0;i < e;i ++)
    {
        scanf("%d %d",&a,&b);
        //cout << g[a] << ", " << g[b] << endl;
        if (g[a] != g[b])
        {
            set<int> *m = &k[g[b]],
            *n = &k[g[a]];
            
            if (m -> size() <= n -> size())
            {
                for (set<int>::iterator j = m -> begin();j != m -> end();)
                {
                    g[*j] = g[a];
                    n -> insert(*j);
                    m -> erase(j ++);
                }
            } else {
                for (set<int>::iterator j = n -> begin();j != n -> end();)
                {
                    g[*j] = g[b];
                    m -> insert(*j);
                    n -> erase(j ++);
                }
            }
        }
        for (int i = 1;i <= v;i ++) printf("%d ",g[i]);
        cout << endl;
        for (int i = 1;i <= v;i ++)
        {
            printf("%d:",i);
            for (auto j = k[i].begin();j != k[i].end();j ++)
            {
                printf("%d ",*j);
            }
            printf("\n");
        }
    }
    vector<pair<int,int> > p;
    int last = -1;
    for (int i = 1;i <= v;i ++)
    {
        if (k[i].size()) {
            if (last != -1) p.push_back(make_pair(last, *k[i].begin()));
            last = *k[i].begin();
        }
    }
    printf("%lu\n", p.size());
    for (vector<pair<int, int> >::iterator i = p.begin();i != p.end();i ++)
    {
        printf("%d %d\n",i -> first, i -> second);
    }
    return 0;
}
*/

/*
int main()
{
    int p;
    scanf("%d",&p);
    while (p --)
    {
        int n,t;
        int a[1010];
        int maax = -1;
        scanf("%d %d",&n,&t);
        for (int i = 0;i < n;i ++) {
            scanf("%d",a + i);
            if (a[i] >= maax) maax = a[i];
        }
        int s = 0;
        int lt = 1, rt = maax;
        
        //for (double i = miin;i <= maax;i ++)
        int m = 0;
        while (lt <= rt)
        {
            //cout << lt << ", " << rt << endl;
            m = (lt + rt) / 2;
            s = 0;
            for (int j = 0;j < n;j ++) s += ceil(a[j] / (double) m);
            if (s > t)
            {
                lt = m + 1;
            } else {
                rt = m - 1;
            }
        }
        //cout << lt << ", " << rt << endl;
        printf("%d\n",lt);
    }

    return 0;
}
*/

/*
int com(pair<int,int> a, pair<int, int> b)
{
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}
 
int com2(pair<int,int> a, pair<int, int> b)
{
    return a.first < b.first;
}
 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[5010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    vector<pair<int, int> > k;
    for (int i = 0;i < n - 2;i ++)
    {
        for (int j = i + 1;j < n - 1;j ++)
        {
            k.push_back(make_pair(a[i] + a[j],j + 1));
        }
    }
    sort(k.begin(),k.end(),com);
     
    int c = 0;
    for (int i = 2;i < n;i ++)
    {
        pair<int, int> nm = make_pair(m - a[i],i);
        c += upper_bound(k.begin(), k.end(), nm, com2) - lower_bound(k.begin(), k.end(), nm, com);
    }
    printf("%d\n", c);
     
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[5010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    ll ans = 0;
    for (int j = 1;j < n - 1;j ++)
    {
        int k[10010] = {0};
        for (int l = j + 1;l < n;l ++) k[a[l] + 4010] ++;
        for (int i = 0;i < j;i ++)
        {
            
            ans += k[m - a[i] - a[j] + 4010];
        }
    }
    printf("%lld\n",ans);
    return 0;
}
*/

/*
char a[105][105];
int q[105][105] = {0};

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int xa = 0, ya = 0;
int xb = 0, yb = 0;

int s = -1;
int n;

int getSign(int x, int y)
{
    if (a[y][x] == '+') return 1;
    else if (a[y][x] == '-') return -1;
    else return 0;
}

void dfs(int x, int y, int sign, int step)
{
//    for (int i = 0; i< n;i ++)
//    {
//        for (int j = 0;j < n;j ++)
//        {
//            printf("%2d",q[i][j]);
//        }
//        cout << endl;
//    }
//    cout << endl;
    
    if (x == xb && y == yb)
    {
        if (s == -1) s = step;
        else s = min(s, step);
        return;
    }
    int xx,yy,k;
    q[y][x] = step;
    for (int i = 0;i < 4;i ++)
    {
        xx = x + dx[i];
        yy = y + dy[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < n && (q[yy][xx] >= step || q[yy][xx] == -1))
        {
            
            k = getSign(xx, yy) * sign;
            if (k == 0 || k == -1)
            {
                dfs(xx, yy, getSign(xx, yy), step + 1);
            }
        }
    }
    
}

int main()
{
    mem(q,-1);
    scanf("%d",&n);
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            scanf(" %c",&a[i][j]);
            if (a[i][j] == 'A') {xa = j; ya = i;}
            else if (a[i][j] == 'B') {xb = j; yb = i;}
        }
    }
    dfs(xa,ya,0,0);
    printf("%d\n",s);
    return 0;
}
*/

/*
ll gcd(ll a,ll b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int T;
    scanf("%d",&T);
    ll A = 0, B = 1,a,b;
    ll k;
    while (T --)
    {
        scanf("%lld/%lld",&a,&b);
        k = lcm(B, b);
        A *= k / B;
        A += a * k / b;
        B = k;
    }
    k = gcd(A,B);
    A /= k;
    B /= k;
    ll z = A / B;
    A -= B * z;
    if ((A < 0 && B < 0) || (A > 0 && B < 0))  {B = -B; A = -A;}
    if (A == 0) printf("%lld\n",z);
    else if (z != 0) printf("%lld %lld/%lld\n",z,A,B);
    else printf("%lld/%lld\n",A,B);
    return 0;
}
*/

/*
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    set<char> c;
    for (int i = 0;b[i] != 0;i ++)
    {
        c.insert(b[i]);
    }
    for (string::iterator i = a.begin();i != a.end();)
    {
        if (c.find(*i) != c.end())
        {
            a.erase(i);
        } else i ++;
    }
    cout << a << endl;
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    ll sum = 0,k = 0;
    for (int i = 1;i <= n;i ++)
    {
        k = 1;
        for (ll j = 1;j <= i;j ++)
        {
            k *= j;
        }
        sum += k;
    }
    printf("%lld\n",sum);
    
    return 0;
}
*/

/*
int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int h = n / 2.0 + 0.5;
    for (int i = 0;i < h;i ++)
    {
        for (int j = 0;j < n;j ++) printf("%c",c);
        printf("\n");
    }
    return 0;
}
*/

/*
int p[] = {0,1,2,3,7,11,4,9,14,5,6,8,10,12,13};
int c = 0;

void dfs(int n, vector<int> all, vector<int> list)
{
    if (n >= 3)
    {
        if (all[0] + all[1] + all[2] != 33) return;
        if (n >= 6) {
            if (all[3] + all[7] + all[11] != 33) return;
            if (n >= 9)
            {
                if (all[4] + all[9] + all[14] != 33) return;
                if (n >= 11)
                {
                    if (all[3] + all[4] + all[5] + all[6] != 34) return;
                    if (n >= 13)
                    {
                        if (all[7] + all[8] + all[9] + all[10] != 34) return;
                        if (n == 15)
                        {
                            if (all[11] + all[12] + all[13] + all[14] == 34 &&
                                all[0] + all[4] + all[8] + all[12] == 34 &&
                                all[1] + all[5] + all[9] + all[13] == 34 &&
                                all[2] + all[6] + all[10] + all[14] == 34 &&
                                all[2] + all[5] + all[8] + all[11] == 34)
                            {
//                                printf("1 ");
//                                for (int i = 0;i < 15;i ++)
//                                {
//                                    printf("%d ", all[i]);
//                                    if ((i + 2) % 4 == 0) printf("\n");
//                                }
//                                printf("\n");
                                c ++;
                            } else return;
                        }
                    }
                }
            }
        }
    }
    int s = (int) list.size();
    for (int i = 0;i < s;i ++)
    {
        vector<int> next(list);
        all[p[n]] = list[i];
        next.erase(next.begin() + i);
        dfs(n + 1, all, next);
    }

}

int main()
{
    vector<int> k(15);
    vector<int> lt;
    for (int i = 2;i <= 16;i ++)
    {
        lt.push_back(i);
    }
    dfs(0,k,lt);
    printf("%d\n",c);
    // 416
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    for (int t = 1;t <= T;t ++)
    {
        int n;
        scanf("%d",&n);
        int a['z' + 1] = {0};
        string str;
        cin >> str;
        for (int i = 0;str[i] != 0;i ++)
        {
            a[str[i]] ++;
        }
        int ok1 = 0, ok2 = 0;
        if (a['E'] && a['C'] && a['U'] && a['S'] && a['T']) ok1 = 1;
        if (a['e'] && a['c'] && a['u'] && a['s'] && a['t']) ok2 = 1;
        printf("Case %d: ",t);
        if (ok1 && ok2) printf("ECUST and ecust\n");
        else if (ok1) printf("ECUST\n");
        else if (ok2) printf("ecust\n");
        else {
            for (int k = 'A';k <= 'Z';k ++)
            {
                a[k + 32] += a[k];
            }
            if (a['e'] && a['c'] && a['u'] && a['s'] && a['t']) printf("Yes\n");
            else printf("No\n");
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
    for (int t = 1;t <= T;t ++)
    {
        string str;
        cin >> str;
        printf("Case %d: ",t);
        int s = 0;
        for (int i = 0;str[i] != 0;i ++)
        {
            s += str[i] - '0';
        }
        if (s % 3 == 0) printf("Yes\n");
        else printf("No\n");
    }
    reutrn 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    fro (int t = 1;t <= T;t ++)
    {
        ll n;
        scanf("%lld",&n);
        ll s = (1 + n) * n / 2;
        printf("Case %d: %lld\n",t,s);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    for (int t = 1;t <= T;t ++)
    {
        int a[6];
        for (int i = 0;i < 6;i ++) scanf("%d",a + i);
        string str;
        cin >> str;
        int tt = 0;
        for (int i = 0;str[i] != 0;i ++)
        {
            switch (str[i])
            {
                case 'B':
                    tt = a[0];
                    a[0] = a[4];
                    a[4] = a[1];
                    a[1] = a[5];
                    a[5] = tt;
                    break;
                case 'F':
                    tt = a[0];
                    a[0] = a[5];
                    a[5] = a[1];
                    a[1] = a[4];
                    a[4] = tt;
                    break;
                case 'L':
                    tt = a[2];
                    a[2] = a[0];
                    a[0] = a[3];
                    a[3] = a[1];
                    a[1] = tt;
                    break;
                case 'R':
                    tt = a[3];
                    a[3] = a[0];
                    a[0] = a[2];
                    a[2] = a[1];
                    a[1] = tt;
                    break;
            }
        }
        printf("Case %d: %d\n",t,a[0]);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    for (int t = 1;t <= T;t ++)
    {
        int n;
        scanf("%d",&n);
        string str;
        cin >> str;
        int a['z' + 1] = {0};
        for (int i = 0;str[i] != 0;i ++)
        {
            a[str[i]] ++;
        }
        ll m = -1,k;
        for (int i = 'a';i <= 'z';i ++)
        {
            k = 0;
            for (int j = 'a';j <= 'z';j ++)
            {
                k += abs(j - i) * a[j];
            }
            if (m == -1) m = k;
            else m = min(m,k);
        }
        printf("Case %d: %lld\n",t,m);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    fro (int t = 1;t <= T;t ++)
    {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        double m = 0, k;
        int x = 0,y = 0,z = 0;
        int xx,yy,zz;
        while (n --)
        {
            scanf("%d %d %d",&xx,&yy,&zz);
            if (xx < 1 && yy < 1 && zz < 1) continue;
            if (yy % 2) continue;
            if (yy > 2 * xx + 2) continue;
            k = (xx * a + yy / 2.0 * b) / (xx * 12 + yy + zz * 16);
            if (k >= m) {
                m = k;
                x = xx;
                y = yy;
                z = zz;
            }
        }
        printf("Case %d: ",t);
        if (x != 0) {
            printf("C");
            if (x != 1) printf("%d",x);
        }
        if (y != 0) {
            printf("H");
            if (y != 1) printf("%d",y);
        }
        if (z != 0) {
            printf("O");
            if (z != 1) printf("%d",z);
        }
        printf("\n");
    }
    return 0;
}
*/

//////图暴力bfs
/*
struct nd {
    int tgt;
    ll w;
    nd *next;
};

struct pr {
    int to;
    ll w;
    int from;
};

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    nd *g[100010] = {NULL};
    int a,b,c;
    nd *p;
    for (int i = 0;i < n - 1;i ++)
    {
        scanf("%d %d %d",&a,&b,&c);
        p = (nd*) malloc(sizeof(nd));
        p -> next = g[a];
        p -> w = c;
        p -> tgt = b;
        g[a] = p;
        
        p = (nd*) malloc(sizeof(nd));
        p -> next = g[b];
        p -> w = c;
        p -> tgt = a;
        g[b] = p;
    }
    nd *root;
    pr r,d;
    for (int i = 0;i < m;i ++)
    {
        queue<pr> k;
        scanf("%d %d",&a,&b);
        if (a == b) {printf("0\n");continue;}
        r.to = a;
        r.from = 0;
        r.w = 0;
        k.push(r);
        while (!k.empty())
        {
            d = k.front();
            root = g[d.to];
            while (root != NULL)
            {
                if (root -> tgt != d.from)
                {
                    r.to = root -> tgt;
                    r.w = d.w + root -> w;
                    r.from = d.to;
                    k.push(r);
                    if (k.back().to == b) goto kkk;
                }
                root = root -> next;
            }
            k.pop();
        }
        kkk:
        printf("%lld\n",k.back().w);
    }
    return 0;
}
*/


/*
int isZhi(ll n)
{
    if (n == 1) return 0;
    for (ll i = 2;i <= sqrt(n);i ++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int T;
    scanf("%d",&T);
    ll n,p;
    for (int t = 1;t <= T;t ++)
    {
        scanf("%lld",&n);
        p = sqrt(n);
        for (ll i = p;i < n;i ++)
        {
            if (isZhi(i))
            {
                printf("Case %d: %lld\n",t,n / i + i);
                break;
            }
        }
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

struct Pr {
    int a;
    int b;
    int k;
};

int main()
{
    int T;
    scanf("%d",&T);
    int a[1010], n, v, p = 0;
    Pr g[500010];
    for (int t = 1;t <= T;t ++)
    {
        p = 0;
        int k[1010] = {0};
        scanf("%d",&n);
        for (int i = 0;i < n;i ++) scanf("%d",a + i);
        for (int i = 0;i < n - 1;i ++)
        {
            for (int j = i + 1;j < n;j ++)
            {
                v = gcd(a[i],a[j]);
                k[i] = max(k[i], v);
                k[j] = max(k[j], v);
                g[p].a = i;
                g[p].b = j;
                g[p ++].k = v;
            }
        }
        ll c = 0;
        for (int i = 0;i < p;i ++)
        {
            if (g[i].k >= k[g[i].a] && g[i].k >= k[g[i].b])
            {
                c ++;
            }
        }
        printf("Case %d: %lld\n",t,c);
    }
    return 0;
}
*/


/*
int main()
{
    int T;
    scanf("%d",&T);
    string str;
    int k[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int sum,v;
    char a[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int ok = 1;
    while (T --)
    {
        cin >> str;
        sum = 0;
        for (int i = 0;i < 17;i ++)
        {
            sum += (str[i] - '0') * k[i];
        }
        v = sum % 11;
        if (a[v] != str[17]) {
            cout << str << endl;
            ok = 0;
        }
    }
    if (ok) printf("All passed\n");
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    set<int> a[55];
    int m,t;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&m);
        while (m --)
        {
            scanf("%d",&t);
            a[i].insert(t);
        }
    }
    scanf("%d",&m);
    int u,v;
    while (m --)
    {
        scanf("%d %d",&u,&v);
        set<int> aa = a[u - 1],bb = a[v - 1];
        double s = 0;
        if (aa.size() <= bb.size())
        {
            for (set<int>::iterator i = aa.begin();i != aa.end();i ++)
            {
                if (bb.find(*i) != bb.end()) s ++;
            }
        } else {
            for (set<int>::iterator i = bb.begin();i != bb.end();i ++)
            {
                if (aa.find(*i) != aa.end()) s ++;
            }
        }
        double k = s / (aa.size() - s + bb.size()) * 100;
        printf("%.2lf%%\n",k);
    }
    return 0;
}
*/

/*
#define debug

struct Node {
    int n;
    Node *left;
    Node *right;
};

#ifdef debug
struct ps {
    int dps;
    int length;
    int type;
};

void pbl(Node *root, int d, int lr, vector<ps> dps)
{
    if (root == NULL) return;
    
    ps p = {d, (int) log10(root -> n) + 1, root -> right != NULL && lr == 0};
    if (dps.size() <= d) dps.push_back(p);
    else dps[d] = p;
    pbl(root -> right,d + 1, 1, dps);
    for (vector<ps>::iterator i = dps.begin();i != dps.end() - 1;i ++)
    {
        if (i -> type && i -> dps != 0) printf("|");
        else printf(".");
        for (int j = 0;j < i -> length + ((i -> dps) != 0) * 2;j ++)
        {
            printf(".");
        }
        
    }
    if (d != 0) printf("|-");
    printf("%d",root -> n);
    if (root -> left != NULL || root -> right != NULL) printf("-|");
    printf("\n");
    dps[d].type = root -> left != NULL && lr;
    pbl(root -> left,d + 1, 0, dps);
}
#endif

void add(int *a, int *b, int n, Node *nd)
{
    int k = b[n - 1];
    nd -> n = k;
    int p = -1;
    if (a[n - 1] == k) p = n - 1;
    else if (a[0] == k) p = 0;
    else if (a[n / 2] == k) p = n / 2;
    if (p == -1)
    {
        for (int i = 0;i < n;i ++) if (a[i] == k) p = i;
    }
    if (p > 0) {
        Node *lt = (Node*) malloc(sizeof(Node));
        nd -> left = lt;
        lt -> left = NULL;
        lt -> right = NULL;
        add(a,b,p,lt);
    }
    if (n - p > 1) {
        Node *rt = (Node*) malloc(sizeof(Node));
        nd -> right = rt;
        rt -> left = NULL;
        rt -> right = NULL;
        add(a + p + 1,b + p,n - p - 1,rt);
    }
}

void levelTraversal(Node *root)
{
    if (root == NULL) return; // 如果root是空的直接return掉
    queue<Node*> childs; // 创建节点队列
    childs.push(root); // 先把root节点加入套餐
    int f = 1;
    while (childs.size() != 0) // 队列空了就结束
    {
        Node *current = childs.front(); // 取出队列前端的节点
        if (f) f = 0;
        else printf(" ");
        printf("%d",current -> n); // 提取数据
        if (current -> left != NULL) childs.push(current -> left); // 如果不是空的，就加入套餐
        if (current -> right != NULL) childs.push(current -> right); // 同上
        if (current != root) free(current);
        childs.pop(); // 去掉队列前端的节点
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[35],b[35];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    for (int i = 0;i < n;i ++) scanf("%d",b + i);
    Node node = {-1,NULL,NULL};
    add(b,a,n,&node);
#ifdef debug
    vector<ps> dps;
    pbl(&node, 0, 1, dps);
#endif
    levelTraversal(&node);
    printf("\n");
    return 0;
}
*/

/*int cmp(pair<double, int> a, pair<double, int> b)
{
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    int n;
    scanf("%d",&n);
    int vis[10010];
    set<int> g[10010];
    int nh_ple[10010] = {0};
    int sh_ple[10010] = {0};
    mem(vis,-1);
    int id,k,n_house,s_house,m;
    int k_id[10];
    for (int t = 0;t < n;t ++)
    {
        scanf("%d %d %d %d", &id, k_id, k_id + 1, &k);
        for (int i = 0;i < k;i ++) scanf("%d", k_id + i + 2);
        scanf("%d %d", &n_house, &s_house);
        m = id;
        for (int i = 0;i < k + 2;i ++)
        {
            if (k_id[i] != -1) {
                if (m < 0) m = k_id[i];
                else m = min(m, k_id[i]);
            }
        }
        if (m == -1) continue;
        k_id[k + 2] = id;
        for (int i = 0;i < k + 3;i ++)
        {
            if (k_id[i] != -1)
            {
                if (vis[k_id[i]] == -1) vis[k_id[i]] = m;
                else {
                    int k = vis[k_id[i]];
                    if (k < m)
                    {
                        for (set<int>::iterator j = g[m].begin();j != g[m].end();)
                        {
                            vis[*j] = k;
                            g[k].insert(*j);
                            g[m].erase(j ++);
                        }
                        nh_ple[k] += nh_ple[m];
                        sh_ple[k] += sh_ple[m];
                        nh_ple[m] = 0;
                        sh_ple[m] = 0;
                        m = k;
                    } else if (k > m) {
                        for (set<int>::iterator j = g[k].begin();j != g[k].end();)
                        {
                            vis[k_id[i]] = m;
                            g[m].insert(*j);
                            g[k].erase(j ++);
                        }
                        nh_ple[m] += nh_ple[k];
                        sh_ple[m] += sh_ple[k];
                        nh_ple[k] = 0;
                        sh_ple[k] = 0;
                    }
                }
                g[m].insert(k_id[i]);
            }
        }
        nh_ple[m] += n_house;
        sh_ple[m] += s_house;
    }
    vector<pair<double,int> > arr;
    for (int i = 0;i < 10010;i ++)
    {
        if (nh_ple[i] != 0)
        {
            arr.push_back(make_pair(sh_ple[i] / (double) g[i].size(), i));
        }
    }
    sort(arr.begin(),arr.end(),cmp);
    printf("%lu\n",arr.size());
    for (vector<pair<double,int> >::iterator i = arr.begin();i != arr.end();i ++)
    {
        printf("%04d %lu %.3lf %.3lf\n",i -> second,g[i -> second].size(),nh_ple[i -> second] / (double) g[i -> second].size(),i -> first);
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    getline(cin,str);
    int m = 0, v;
    for (int i = 0;str[i] != '\0';i ++)
    {
        v = 0;
        for (int j = i, k = 2 * i - j;str[j] != 0 && (k = 2 * i - j) >= 0;j ++)
        {
            if (str[j] == str[k]) v += 2;
            else break;
        }
        if (v - 1 > m) m = v - 1;
        v = 0;
        for (int j = i + 1, k = 2 * i - (j - 1);str[j] != 0 && (k = 2 * i - (j - 1)) >= 0;j ++)
        {
            if (str[j] == str[k]) v += 2;
            else break;
        }
        if (v > m) m = v;
    }
    printf("%d\n", m);
    return 0;
}
*/

/*
int a[65][130][1300];
int m,n,l,T;

int dx[] = {1,0,-1,0,0,0};
int dy[] = {0,-1,0,1,0,0};
int dz[] = {0,0,0,0,1,-1};

int v = 0;

struct pt {
    int x,y,z;
};

void bfs(int x, int y, int z)
{
    if (!a[z][y][x]) return;
    int xx,yy,zz;
    queue<pt> sk;
    pt p = {x,y,z};
    a[z][y][x] = 0;
    sk.push(p);
    while (!sk.empty())
    {
        x = sk.front().x;
        y = sk.front().y;
        z = sk.front().z;
        
        for (int i = 0;i < 6;i ++)
        {
            xx = x + dx[i];
            yy = y + dy[i];
            zz = z + dz[i];
            if (xx >= 0 && yy >= 0 && zz >= 0 && xx < m && yy < n && zz < l)
            {
                if (a[zz][yy][xx]) {
                    p.x = xx;
                    p.y = yy;
                    p.z = zz;
                    sk.push(p);
                    a[zz][yy][xx] = 0;
                }
            }
        }
        sk.pop();
        v ++;
    }
}

int main()
{
    scanf("%d %d %d %d",&n,&m,&l,&T);
    for (int t = 0;t < l;t ++)
    {
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < m;j ++)
            {
                scanf("%d",&a[t][i][j]);
            }
        }
    }
    int V = 0;
    for (int t = 0;t < l;t ++)
    {
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < m;j ++)
            {
                v = 0;
                bfs(j,i,t);
                if (v >= T) V += v;
            }
        }
    }
    printf("%d\n",V);
    reutrn 0;
}
*/

///图 最短路
/*
struct Node {
    int n;
    int w;
    Node *next;
};

struct pp {
    int id;
    int miin;
    int s;
};

int toInt(char *a)
{
    int sum = 0;
    for (int i = 0;a[i] != 0;i ++)
    {
        sum = sum * 10 + a[i] - '0';
    }
    return sum;
}

int cmp(pp a, pp b)
{
    if (a.miin == b.miin)
    {
        if (a.s == b.s) return a.id < b.id;
        return a.s < b.s;
    }
    return a.miin > b.miin;
}

int main()
{
    int v,vg,e,d_s;
    scanf("%d %d %d %d",&v,&vg,&e,&d_s);
    Node *g[1020] = {NULL}; // 1 - 1000; 1001 - 1010
    char a[5], b[5];
    int w;
    int aa, bb;
    Node *nd;
    for (int i = 0;i < e;i ++)
    {
        scanf("%s %s %d", a, b, &w);
        if (*a == 'G') aa = toInt(a + 1) + 1000;
        else aa = toInt(a);
        if (*b == 'G') bb = toInt(b + 1) + 1000;
        else bb = toInt(b);
        
        nd = (Node*) malloc(sizeof(Node));
        nd -> w = w;
        nd -> n = bb;
        nd -> next = g[aa];
        g[aa] = nd;
        
        nd = (Node*) malloc(sizeof(Node));
        nd -> w = w;
        nd -> n = aa;
        nd -> next = g[bb];
        g[bb] = nd;
    }
    int dis[10010];
    int t_min,sum;
    vector<pp> vct;
    pp p;
    for (int i = 1001;i < 1015;i ++)
    {
        mem(dis, -1);
        if (g[i] == NULL) continue;
        queue<int> q;
        q.push(i);
        dis[i] = 0;
        int k,t,tw;
        while (!q.empty())
        {
            k = q.front();
            nd = g[k];
            while (nd != NULL)
            {
                t = dis[nd -> n]; // target
                tw = dis[k] + nd -> w; // there + weight to target
                if (t == -1 || t > tw)
                {
                    dis[nd -> n] = tw;
                    q.push(nd -> n);
                }
                nd = nd -> next;
            }
            q.pop();
        }
        t_min = -1;
        sum = 0;
        for (int i = 1;i <= v;i ++)
        {
            if (dis[i] > d_s) {
                t_min = -1;
                break;
            }
            sum += dis[i];
            if (t_min == -1) t_min = dis[i];
            else t_min = min(dis[i], t_min);
        }
        if (t_min != -1)
        {
            p.id = i;
            p.miin = t_min;
            p.s = sum;
            vct.push_back(p);
        }
    }
    if (vct.size() == 0) printf("No Solution\n");
    else {
        sort(vct.begin(), vct.end(), cmp);
        vector<pp>::iterator bg = vct.begin();
        double o = bg -> s / (double) v;
        printf("G%d\n%d.0 %.1lf\n",bg -> id - 1000,bg -> miin,o + 0.005);
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    cin >> str;
    int c = 0;
    int w = (int) str.size();
    for (int i = 0;str[i] != 0;i ++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            if (str[i] == '2') c ++;
        }
    }
    double k = c;
    if (str[0] == '-') {
        k *= 1.5;
        w --;
    }
    if ((str[str.size() - 1] - '0') % 2 == 0) k *= 2;
    k *= 100;
    k /= w;
    printf("%.2lf%%\n",k);
    
    return 0;
}
*/

/*
int main()
{
    int h,m;
    scanf("%d:%d", &h, &m);
    if ((h >= 0 && h < 12) || (h == 12 && m == 0)) printf("Only %02d:%02d.  Too early to Dang.",h,m);
    else {
        int k = h - 12;
        if (m != 0) k ++;
        for (int i = 0;i < k;i ++)
        {
            printf("Dang");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int an, bn;
    scanf("%d %d", &an, &bn);
    int n;
    scanf("%d", &n);
    int a, b, ah, bh, ai = 0, bi = 0;
    int ok = 0;
    while (n --)
    {
        scanf("%d %d %d %d", &a, &ah, &b, &bh);
        if (ok) continue;
        if (ah == a + b && ah == bh) {continue;}
        if (ah == a + b) ai ++;
        if (bh == a + b) bi ++;
        if (ai > an) {printf("A\n%d\n", bi); ok = 1;}
        if (bi > bn) {printf("B\n%d\n", ai); ok = 1;}
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int k,id;
    int a[100000] = {0};
    while (n --)
    {
        scanf("%d",&k);
        set<int> v;
        while (k --)
        {
            scanf("%d",&id);
            v.insert(id);
        }
        if (v.size() <= 1) continue;
        for (set<int>::iterator i = v.begin();i != v.end();i ++)
        {
            a[*i] ++;
        }
    }
    scanf("%d",&n);
    int b[100000] = {0};
    int f = 1;
    while (n --)
    {
        scanf("%d",&id);
        if (b[id] == 0)
        {
            if (a[id] == 0) {
                if (f) f = 0;
                else printf(" ");
                printf("%05d",id);
            }
        }
        b[id] ++;
    }
    if (!f) printf("\n");
    else printf("No one is handsome\n");
    return 0;
}
*/

/*int main()
{
    int n;
    scanf("%d",&n);
    int j = 0, o = 0, k;
    while (n --)
    {
        scanf("%d",&k);
        if (k % 2) j ++;
        else o ++;
    }
    printf("%d %d\n", j, o);
    return 0;
}
*/

/*
int main()
{
    string str;
    cin >> str;
    int a[200] = {0};
    for (int i = 0;str[i] != 0;i ++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        a[str[i]] ++;
    }
    while (a['G'] != 0 || a['P'] != 0 || a['L'] != 0 || a['T'] != 0)
    {
        if (a['G'] != 0) {printf("G"); a['G'] --;}
        if (a['P'] != 0) {printf("P"); a['P'] --;}
        if (a['L'] != 0) {printf("L"); a['L'] --;}
        if (a['T'] != 0) {printf("T"); a['T'] --;}
    }
    printf("\n");
    return 0;
}
*/

/*int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",(n + 2) % 7 == 0 ? 7 : (n + 2) % 7);
    return 0;
}
*/

/*#define debug
 
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};
 
struct Node *crt(int data)
{
    struct Node *n = (struct Node*) malloc(sizeof(struct Node));
    n -> left = NULL;
    n -> right = NULL;
    n -> data = data;
    return n;
}
 
void pre_in_add(int *pr, int l, int *in, struct Node **n)
{
    int data = pr[0];
    *n = crt(data);
    int i = 0;
    for (;i < l;i ++) if (in[i] == data) break;
    if (i > 0) pre_in_add(pr + 1, i, in, &((*n) -> left));
    if (i + 1 < l) pre_in_add(pr + 1 + i, l - 1 - i, in + i + 1, &((*n) -> right));
}

#ifdef debug
struct ps {
    int dps;
    int length;
    int type;
};
 
void pbl(Node *root, int d, int lr, vector<ps> dps)
{
    if (root == NULL) return;
    
    ps p = {d, (int) log10(root -> data) + 1, root -> right != NULL && lr == 0};
    if (dps.size() <= d) dps.push_back(p);
    else dps[d] = p;
    pbl(root -> right,d + 1, 1, dps);
    for (vector<ps>::iterator i = dps.begin();i != dps.end() - 1;i ++)
    {
        if (i -> type && i -> dps != 0) printf("|");
        else printf(".");
        for (int j = 0;j < i -> length + ((i -> dps) != 0) * 2;j ++)
        {
            printf(".");
        }
        
    }
    if (d != 0) printf("|-");
    printf("%d",root -> data);
    if (root -> left != NULL || root -> right != NULL) printf("-|");
    printf("\n");
    dps[d].type = root -> left != NULL && lr;
    pbl(root -> left,d + 1, 0, dps);
}
#endif

void levelTraversal(Node *root)
{
    if (root == NULL) return; // 如果root是空的直接return掉
    queue<Node*> childs; // 创建节点队列
    childs.push(root); // 先把root节点加入套餐
    int f = 1;
    while (childs.size() != 0) // 队列空了就结束
    {
        Node *current = childs.front(); // 取出队列前端的节点
        if (f) f = 0;
        else printf(" ");
        printf("%d",current -> data); // 提取数据
        if (current -> right != NULL) childs.push(current -> right); // 如果不是空的，就加入套餐
        if (current -> left != NULL) childs.push(current -> left); // 同上
        if (current != root) free(current);
        childs.pop(); // 去掉队列前端的节点
    }
}
 
int main()
{
    int n;
    scanf("%d",&n);
    int *pr = (int*) malloc(sizeof(int) * n);
    int *in = (int*) malloc(sizeof(int) * n);
    for (int i = 0;i < n;i ++) scanf("%d", i + in);
    for (int i = 0;i < n;i ++) scanf("%d", i + pr);
    struct Node *root = NULL;
    pre_in_add(pr, n, in, &root);
#ifdef debug
    vector<ps> dps;
    pbl(root, 0, 1, dps);
#endif
    levelTraversal(root);
    printf("\n");
    return 0;
}
*/


/*
int n,m;
char a[55][55];

int dp[55][55] = {0};

int dfs(int x,int y)
{
    if (x == m - 1 && y == n - 1) return 1;
    int v = 0;
    int xx,yy;
    if (a[y][x] == 'R')
    {
        xx = x + 1;
        yy = y;
        if (xx < m) v = (v + (dp[xx][yy] == 0 ? dp[xx][yy]  = dfs(xx,yy) : dp[xx][yy])) % 1000000007;
    } else if (a[y][x] == 'D')
    {
        xx = x;
        yy = y + 1;
        if (yy < n) v = (v + (dp[xx][yy] == 0 ? dp[xx][yy]  = dfs(xx,yy) : dp[xx][yy])) % 1000000007;
    } else if (a[y][x] == 'B')
    {
        xx = x + 1;
        yy = y;
        if (xx < m) v = (v + (dp[xx][yy] == 0 ? dp[xx][yy]  = dfs(xx,yy) : dp[xx][yy])) % 1000000007;
        xx = x;
        yy = y + 1;
        if (yy < n) v = (v + (dp[xx][yy] == 0 ? dp[xx][yy]  = dfs(xx,yy) : dp[xx][yy])) % 1000000007;
    }
    return v;
}

int main()
{
    scanf("%d %d",&n,&m);
    for (int i = 0;i < n;i ++)
    {
        scanf(" ");
        for (int j = 0;j < m;j ++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    
    printf("%d\n",dfs(0,0));
    return 0;
}
*/

///埃氏筛
/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100010];
    int k[100010] = {0};
    for (int i = 1;i <= n;i ++)
    {
        a[i] = i;
    }
    for (int i = 2;i < n;i ++)
    {
        if (k[i] == 0)
        {
            for (int j = i + i;j <= n;j += i)
            {
                if (a[j] == j) {
                    a[j] /= i;
                    k[j] ++;
                }
            }
        } else {
            for (int j = i + i;j <= n;j += i)
            {
                k[j] ++;
            }
        }
    }
    int v[100010] = {0};
    for (int i = 1;i <= n;i ++)
    {
        v[k[i]] ++;
    }
    while (m --)
    {
        scanf("%d",&n);
        printf("%d\n",v[n]);
    }
    return 0;
}
*/

/*
int a[1000010];

int main()
{
    int T;
    scanf("%d",&T);
    int n,m,p;
    int x,y,v;
    int ub, re;
    while (T --)
    {
        mem(a,0);
        scanf("%d %d %d",&n,&m,&p);
        ub = 0;
        re = 0;
        while (p --)
        {
            scanf("%d %d %d",&x,&y,&v);
            if (re) continue;
            if (x < 0 || y < 0) ub = 1;
            ll pt = x * m + y;
            if (pt >= 0 && pt < m * n)
            {
                a[pt] = v;
            } else re = 1;
        }
        if (re) printf("Runtime error\n");
        else {
            int k = 0;
            for (int i = 0;i < n;i ++)
            {
                for (int j = 0;j < m;j ++)
                {
                    if (j != 0) printf(" ");
                    printf("%d",a[k ++]);
                }
                printf("\n");
            }
            if (ub) printf("Undefined Behaviour\n");
            else printf("Accepted\n");
        }
    }
    return 0;
}
*/

/*int main()
{
    int n;
    scanf("%d",&n);
    int a[100010];
    int b[100010];
    a[0] = -1;
    int s = 0;
    for (int i = 1;i <= n;i ++) {
        scanf("%d",a + i);
        if (a[i] != -1) {
            s ++;
            b[a[i]] = i;
        }
    }
    printf("The size of the tree is %d\n", s);
    if (s != 0)
    {
        printf("Node %d is the root node of the tree\n",a[1]);
        int l,r;
        for (int j = 1;j <= s;j ++)
        {
            int i = b[j];
            l = (i * 2) <= n ? a[i * 2] : -1;
            r = (i * 2 + 1) <= n ? a[i * 2 + 1] : -1;
            printf("The father of node %d is %d, the left child is %d, and the right child is %d\n",a[i],a[i / 2],l,r);
        }
    }
    return 0;
}*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    string str;
    cin >> str;
    ll a[100010] = {0};
    ll s = 0;
    int last = -1;
    for (int i = 0;i < n;i ++)
    {
        if (str[i] == '1')
        {
            if (last != -1) a[s ++] = i - last;
            last = i;
        }
    }
    ll sum = 0;
    ll p = 1000000007;
    for (ll i = 0;i < s;i ++)
    {
        sum = (sum + (a[i] * (((s - i) * (i + 1)) % p)) % p) % p;
    }
    printf("%lld\n",sum);
    return 0;
}
*/

/*
map<pair<char,char>,int> d;

vector<ll> dp[65]['C' + 1]['C' + 1]['C' + 1];

vector<ll> Hanoi(int n, char a, char b, char c)
{
    vector<ll> arr(6);
    vector<ll> x;
    if (n == 1)
        arr[d[make_pair(a, c)]] ++;
    else {
        x = dp[n - 1][a][c][b].size() == 0 ? dp[n - 1][a][c][b] = Hanoi(n - 1, a, c, b) : dp[n - 1][a][c][b];
        for (int i = 0;i < 6;i ++) arr[i] += x[i];
        arr[d[make_pair(a, c)]] ++;
        x = dp[n - 1][b][a][c].size() == 0 ? dp[n - 1][b][a][c] = Hanoi(n - 1, b, a, c) : dp[n - 1][b][a][c];
        for (int i = 0;i < 6;i ++) arr[i] += x[i];
    }
    return arr;
}

int main()
{
    pair<char,char> a[] = {make_pair('A', 'B'),make_pair('A', 'C'),make_pair('B', 'A'),make_pair('B', 'C'),make_pair('C', 'A'),make_pair('C', 'B')};
    for (int i = 0;i < 6;i ++)
    {
        d[a[i]] = i;
    }
    printf("#include<stdio.h>\n");
    printf("int main() {\nint n;\nscanf(\"%%d\",&n);\n");
    for (int n = 1;n <= 60;n ++)
    {
        if (n != 1) printf("else ");
        printf("if (n == %d)\n{\n",n);
        
        vector<ll> k = Hanoi(n, 'A', 'B', 'C');
        ll s = 0;
        for (int i = 0;i < 6;i ++)
        {
            printf("\tprintf(\"%c->%c:%lld\\n\");\n",(a + i) -> first, (a + i) -> second,k[i]);
            s += k[i];
        }
        printf("\tprintf(\"SUM:%lld\\n\");\n",s);
        
        printf("} ");
    }
    printf("\nreturn 0;\n}\n");
    return 0;
}
*/

/*
int g[10010] = {0};
int cmp(pair<int,int> a,pair<int,int> b)
{
    if (a.first == b.first) {
        if (g[a.second] == g[b.second]) return a.second < b.second;
        return g[a.second] > g[b.second];
    }
    return a.first > b.first;
}

int main()
{
    int n;
    scanf("%d",&n);
    pair<int,int> mon[10010];
    int k;
    int ni,pi;
    int sum;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&k);
        sum = 0;
        while (k --)
        {
            scanf("%d %d",&ni,&pi);
            sum += pi;
            mon[ni].first += pi;
            g[ni] ++;
        }
        mon[i + 1].second = i + 1;
        mon[i + 1].first -= sum;
    }
    sort(mon + 1, mon + n + 1, cmp);
    for (int i = 1;i <= n;i ++) printf("%d %.2lf\n",mon[i].second, mon[i].first / 100.0);
    return 0;
}
*/

/*
int main()
{
    int n,m,c;
    scanf("%d %d %d",&n,&m,&c);
    int u,uu,v,vv,k,b[105];
    struct Node {
        int n;
        Node *nxt;
    } *g[105] = {NULL}, *g_b[105] = {NULL}, *node;
    for (int i = 1;i <= n;i ++) {
        b[i] = i;
        g_b[i] = (Node*) malloc(sizeof(Node));
        g_b[i] -> nxt = NULL;
        g_b[i] -> n = i;
    }
    
    for (int i = 0;i < m;i ++)
    {
        scanf("%d %d %d",&u,&v,&k);
        if (k == -1)
        {
            node = (Node*) malloc(sizeof(Node));
            node -> nxt = g[u];
            node -> n = v;
            g[u] = node;
            
            node = (Node*) malloc(sizeof(Node));
            node -> nxt = g[v];
            node -> n = u;
            g[v] = node;
        } else {
            uu = b[u];
            vv = b[v];
            if (uu == vv) continue;
            node = g_b[uu];
            while (node != NULL)
            {
                b[node -> n] = vv;
                if (node -> nxt != NULL) node = node -> nxt;
                else break;
            }
            node -> nxt = g_b[vv];
            g_b[vv] = g_b[uu];
            g_b[uu] = NULL;
            
            // ------
//            for (int i = 1;i <= n;i ++) {
//                printf("%d ",b[i]);
//            }
//            printf("\n");
//            for (int i = 1;i <= n;i ++)
//            {
//                printf("%d: ",i);
//                Node *node = g_b[i];
//                while (node != NULL)
//                {
//                    printf("%d ",node -> n);
//                    node = node -> nxt;
//                }
//                printf("\n");
//            }
//            printf("\n");
        }
    }
    for (int i = 0;i < c;i ++)
    {
        scanf("%d %d",&u,&v);
        node = g[u];
        int di = 0;
        while (node != NULL)
        {
            if (node -> n == v) {di = 1; break;}
            node = node -> nxt;
        }
        int you = b[v] == b[u];
        if (you && di) printf("OK but...\n");
        else if (!you && di) printf("No way\n");
        else if (you && !di) printf("No problem\n");
        else if (!you && !di) printf("OK\n");
    }
    return 0;
}
*/

/*
int main()
{
    int a = 0,b = 0;
    string A,B;
    cin >> A;
    getline(cin, B);
    int oka = 1,
    okb = 1;
    for (int i = 0;A[i] != 0;i ++)
    {
        if (A[i] >= '0' && A[i] <= '9') {
            a = a * 10 + A[i] - '0';
            if (a > 1000) {
                oka = 0;
                break;
            }
        }
        else {
            oka = 0;
            break;
        }
    }
    for (int i = 1;B[i] != 0;i ++)
    {
        if (B[i] >= '0' && B[i] <= '9') {
            b = b * 10 + B[i] - '0';
            if (b > 1000) {
                okb = 0;
                break;
            }
        }
        else {
            okb = 0;
            break;
        }
    }
    if (oka && okb && a && b) printf("%d + %d = %d\n",a,b,a + b);
    else {
        if (oka && a) printf("%d",a);
        else printf("?");
        printf(" + ");
        if (okb && b) printf("%d",b);
        else printf("?");
        printf(" = ?\n");
    }
    return 0;
}
*/

/*int main()
{
    string str = "I Love GPLT";
    for (int i = 0;str[i] != 0;i ++) printf("%c\n",str[i]);
    return 0;
}*/

/*int isZhi(uint n)
{
    if (n == 1) return 0;
    for (uint i = 2;i * i <= n;i ++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    while (n --)
    {
        uint a;
        scanf("%u",&a);
        if (isZhi(a)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}*/

/*
int main()
{
    int h;
    scanf("%d",&h);
    printf("%.1lf\n",(h - 100) * 0.9 * 2);
    return 0;
}
*/

/*
int main()
{
    list<pair<int,string>> k;
    int n;
    scanf("%d",&n);
    int m;
    string name;
    while (n --)
    {
        cin >> m >> name;
        k.push_back(make_pair(m, name));
    }
    list<pair<int,string> >::iterator bg = k.begin();
    list<pair<int,string> >::reverse_iterator i = k.rbegin();
    while (!k.empty())
    {
        
        if (i -> first ^ bg -> first)
        {
            cout << bg -> second << " " << i -> second << endl;
            k.erase((++ i).base());
            k.erase(bg);
            i = k.rbegin();
            bg = k.begin();
        } else i ++;
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    double o,c;
    int sign = 1;
    while (n --)
    {
        scanf("%d %d",&a,&b);
        o = (a - 100) * 0.9 * 2;
        c = fabs(b - o);
        sign = (b - o) / c;
        o *= 0.1;
        if (c < o) printf("You are wan mei!\n");
        else if (sign < 0) printf("You are tai shou le!\n");
        else printf("You are tai pang le!\n");
    }
    return 0;
}
*/

/*
int main()
{
    string str;
    cin >> str;
    int a[10] = {0};
    set<int> l;
    for (int i = 0;str[i] != 0;i ++)
    {
        l.insert(str[i] - '0');
    }
    int j = 0;
    printf("int[] arr = new int[]{");
    for (set<int>::reverse_iterator i = l.rbegin();i != l.rend();i ++, j ++) {
        a[*i] = j;
        if (j != 0) printf(",");
        printf("%d",*i);
    }
    printf("};\nint[] index = new int[]{");
    for (int i = 0;str[i] != 0;i ++)
    {
        if (i != 0) printf(",");
        printf("%d",a[str[i] - '0']);
    }
    printf("};\n");
    return 0;
}
*/


/*int main()
{
    int t;
    scanf("%d",&t);
    while (t --)
    {
        int n;
        scanf("%d",&n);
        ll a = 2, b = 1;
        for (int i = 1;i < n;i ++)
        {
            ll t = a;
            a = a + b;
            b = t;
        }
        if (n == 0) printf("1\n");
        else printf("%lld\n",a + b);
    }
    return 0;
}*/

/*
int main()
{
    string s,str = "";
    while (getline(cin,s))
    {
        str += s;
    }
    int ok = 1;
    s = "";
    for (int i = 0;str[i] != 0;i ++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') s += str[i];
        else {
            if (str[i] == ')')
            {
                if (*s.rbegin() == '(') s.erase(s.end() - 1);
                else {
                    ok = 0;
                    break;
                }
            }
            if (str[i] == ']')
            {
                if (*s.rbegin() == '[') s.erase(s.end() - 1);
                else {
                    ok = 0;
                    break;
                }
            }
            if (str[i] == '}')
            {
                if (*s.rbegin() == '{') s.erase(s.end() - 1);
                else {
                    ok = 0;
                    break;
                }
            }
        }
    }
    if (ok && s.empty()) printf("Yes\n");
    else printf("No\n");
    return 0;
}*/


/*
int main()
{
    string str;
    int a[11] = {0};
    cin >> str;
    int c = 1;
    for (int i = 0;str[i] != 0;i ++)
    {
        if (str[i] >= '0' && str[i] <= '9') a[str[i] - '0'] ++;
        else if (str[i] == '+') c ++;
    }
    string sum;
    ull jin = 0;
    
    for (int i = 9;i >= 0;i --)
    {
        if (a[i + 1] < 0)
        {
            if (a[i] + a[i + 1] >= 0)
            {
                jin += i * -a[i + 1];
                sum += (char) (jin % 10 + '0');
                jin /= 10;
            } else {
                jin += i * a[i];
            }
            a[i] += a[i + 1];
        }
        while (a[i] > 0)
        {
            if (a[i] >= c) {
                jin += i * c;
                sum += (char) (jin % 10 + '0');
                jin /= 10;
            }
            else jin += i * a[i];
            a[i] -= c;
        }
    }
    while (jin != 0)
    {
        sum += (char) (jin % 10 + '0');
        jin /= 10;
    }
    for (string::reverse_iterator i = sum.rbegin();i != sum.rend();i ++)
    {
        printf("%c",*i);
    }
    printf("\n");
    
    return 0;
}
*/

//逆元 快速幂https://ac.nowcoder.com/acm/contest/3005/C
/*
const ull mod = 998244353;

ull quickpow(ull a, ull b)
{
    ull ans = 1;
    while (b)
    {
        if (b & 1)
            ans = a * ans % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    ull a[200010];
    ull max = 0;
    ull ji = 1;
    queue<int> z_p;
    for (int i = 0;i < n;i ++)
    {
        scanf("%llu",a + i);
        if (a[i] == 0 || a[i] == mod) {
            z_p.push(i);
            a[i] = 1;
        }
        if (i < k)
        {
            ji = (ji * a[i]) % mod;
            if (i + 1 == k)
            {
                if (z_p.empty())
                {
                    if (ji > max) max = ji;
                }
            }
        } else {
            ji = (ji * quickpow(a[i - k], mod - 2)) % mod;
            ji = (ji * a[i]) % mod;
            if (!z_p.empty() && i - k >= z_p.front()) z_p.pop();
            if (z_p.empty())
            {
                if (ji > max) max = ji;
            }
        }
    }
    printf("%llu\n",max);
    return 0;
}
*/

/*
int main()
{
    int n;
    char k;
    scanf("%d %c",&n,&k);
    scanf(" ");
    string str;
    getline(cin,str);
    long v = str.size();
    for (int i = 0;i < n - v;i ++)
    {
        printf("%c",k);
    }
    if (n - v < 0)
    {
        cout << str.substr(v - n,n) << endl;
    } else cout << str << endl;
    return 0;
}
*/


// xor前缀和https://ac.nowcoder.com/acm/contest/3005/D
/*int main()
{
    int n;
    scanf("%d",&n);
    int in;
    int f = 0;
    map<int,ll> dp;
    dp[f] ++;
    ll ans = 0;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&in);
        f ^= in;
        ans += dp[f]; // x ^ 0 = x相当于减法，减去前面和相等的那段区间，保留了中间那段0的区间
        dp[f] ++;
    }
    printf("%lld\n",ans);
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int u,v;
    int g[510][510] = {0};
    for (int i = 0;i < m;i ++)
    {
        scanf("%d %d",&u,&v);
        g[u][v] = 1;
        g[v][u] = 1;
    }
    int k,d;
    scanf("%d",&k);
    int nn = n;
    while (k --)
    {
        scanf("%d",&d);
        int ok = 0;
        int vis[510] = {0};
        vector<int> nds;
        for (int i = 0;i < n;i ++)
        {
            if (g[d][i])
            {
                g[i][d] = 0;
                g[d][i] = 0;
                nds.push_back(i);
            }
        }
        int v = 0;
        for (vector<int>::iterator i = nds.begin();i != nds.end();i ++, v ++)
        {
            queue<int> q;
            q.push(*i);
            vis[*i] ++;
            while (!q.empty())
            {
                int tp = q.front();
                for (int a = 0;a < n;a ++)
                {
                    if (g[tp][a] && vis[a] == v)
                    {
                        vis[a] ++;
                        q.push(a);
                    }
                }
                q.pop();
            }
            for (vector<int>::iterator j = nds.begin();j != nds.end();j ++)
            {
                if (vis[*j] == v) {
                    ok = 1;
                    goto okk;
                }
            }
        }
        okk:
        if (ok) printf("Red Alert: ");
        printf("City %d is lost",d);
        if (ok) printf("!\n");
        else printf(".\n");
        nn --;
    }
    if (!nn) printf("Game Over.\n");
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    string s1,s2;
    cin >> s1 >> s2;
    int miin = min(n,m);
    int c = 0;
    for (int i = 0;i < miin;i ++)
    {
        if (s1[i] != s2[i]) c ++;
    }
    printf("%d\n",c + max(n,m) - miin);
    return 0;
}
*/

/*
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[15];
    int b[15];
    for (int i = 0;i < n;i ++) {
        scanf("%d",a + i);
        b[i] = a[i];
    }
    sort(b,b + n,greater<int>());
    
    if (a[8] >= m * 0.8 || a[8] >= b[2])
    {
        printf("Yes\n");
    } else printf("No\n");
    return 0;
}
*/

/*
int main()
{
    ll n,r;
    scanf("%lld %lld",&n,&r);
    int i,j;
    scanf("%d %d",&i,&j);
    int miin = min(i,j);
    int maax = max(i,j);
    double rr = 2 * r * r;
    double l = sqrt((1 - cos(2 * pi / n)) * rr);
    int k = min(maax - miin, miin + (int) n - maax);
    printf("%f\n",k * l);
    return 0;
}
*/

/*
int main()
{
    ll n;
    scanf("%lld",&n);
    if (n % 2) printf("Bob\n");
    else {
        double k = log2(n);
        ll v = k;
        if (pow(2,v) == n) printf("Alice\n");
        else printf("Bob\n");
    }
    return 0;
}
*/

//int main()
//{
//    int T;
//    scanf("%d",&T);
//    double t,a,b,c,tt1,tt2;
//    double k = 1 / 3.0;
//    while (T --)
//    {
//        scanf("%lf %lf",&a,&b);
//        t = 0;
//        start:
//        if (a >= 0)
//        {
//            if (b >= a) {
//                printf("%.9f\n",t + b - a);
//                continue;
//            }
//            else {
//                c = pow(a, k);
//                if (a - 1 <= c)
//                {
//                    printf("%.9f\n",t + a - b);
//                    continue;
//                }
//                if (c < b)
//                {
//                    tt1 = b - c + 1;
//                    tt2 = a - b;
//                    if (tt1 <= tt2) {
//                        printf("%.9f\n",tt1 + t);
//                        continue;
//                    } else {
//                        printf("%.9f\n",tt2 + t);
//                        continue;
//                    }
//                }
//                a = c;
//                t ++;
//                goto start;
//            }
//        } else {
//            if (b <= a) {
//                printf("%.9f\n",t + a - b);
//                continue;
//            }
//            else {
//                a = -a;
//                c = pow(a, k);
//                a = -a;
//                c = -c;
//                if (a + 1 >= c)
//                {
//                    printf("%.9f\n",t + b - a);
//                    continue;
//                }
//                if (c > b)
//                {
//                    tt1 = c - b + 1;
//                    tt2 = b - 1;
//                    if (tt1 <= tt2) {
//                        printf("%.9f\n",tt1 + t);
//                        continue;
//                    } else {
//                        printf("%.9f\n",tt2 + t);
//                        continue;
//                    }
//                }
//                a = c;
//                t ++;
//                goto start;
//            }
//        }
//    }
//    return 0;
//}


/*set<string> hans;

void add(string str)
{
    if (str.find("=") == string::npos)
    {
        string all = "";
        vector<string> paras;
        for (int i = 0;str[i] != 0;i ++)
        {
            if (all != "")
            {
                for (;str[i] != 0 && str[i] == ' ';i ++);
                while (str[i] != 0 && str[i] != ')')
                {
                    string p = "";
                    for (;str[i] != 0 && str[i] != ')' && str[i] != ',' && str[i] != ' ';i ++)
                    {
                        p += str[i];
                    }
                    paras.push_back(p);
                    for (;str[i] != 0 && str[i] == ' ';i ++);
                    for (;str[i] != 0 && str[i] != ',' && str[i] != ')';i ++);
                    if (str[i] == ',') {
                        i ++;
                        for (;str[i] != 0 && str[i] == ' ';i ++);
                    }
                }
                break;
            }
            if (str[i] == '(')
            {
                //printf("1\n");
                int j = i - 1;
                if (j >= 0 && str[j] == ' ') for (;j >= 0 && str[j] == ' ';j --);
                //cout << j << endl;
                string name = "";
                for (;j >= 0 && str[j] != ' ';j --)
                {
                    name = str[j] + name;
                }
                //cout << j << endl;
                if (j >= 0 && str[j] == ' ') for (;j >= 0 && str[j] == ' ';j --);
                //cout << j << endl;
                if (j == 0 && str[j] == ' ') return;
                //printf("2\n");
                string lei = "";

                for (;j >= 0;j --)
                {
                    lei = str[j] + lei;
                }
                stringstream s(lei);
                string k;
                lei = "";
                int f = 1;
                while (s >> k)
                {
                    if (f) f = 0;
                    else lei += ' ';
                    lei += k;
                }
                if (lei == "") return;
                all = lei + " " + name;
            }
        }
        all += '(';
        for (int i = 0;i < paras.size();i ++)
        {
            if (i != 0) all += ",";
            all += paras[i];
        }
        all += ')';
        //cout << all << endl;
        hans.insert(all);
    }
}

int main()
{

    string line;
    int ch_start = 0, un_start = 0, str_start = 0;
    string dk;
    while (getline(cin,line))
    {
        for (int i = 0;line[i] != 0;i ++)
        {
            if (!un_start && !str_start && !ch_start && line[i] == '/' && line[i + 1] == '/')
            {
                goto end;
            }
            if (!un_start)
            {
                if (line[i] == '"') str_start = !str_start;
                if (line[i] == '\'') ch_start = !ch_start;
            }
            if (!str_start && !ch_start)
            {
                if (!un_start && line[i] == '/' && line[i + 1] == '*') {
                    un_start = 1;
                    line.erase(line.begin() + i);
                    line.erase(line.begin() + i);
                    i --;
                } else
                if (un_start && line[i] == '*' && line[i + 1] == '/') {
                    un_start = 0;
                    line.erase(line.begin() + i);
                    line.erase(line.begin() + i);
                    i --;
                } else
                if (un_start)
                {
                    line.erase(line.begin() + i);
                    i --;
                }
            }
            if (!ch_start && !str_start && !un_start)
            {
                if (line[i] == '{') dk += '{';
                if (line[i] == '}') dk.erase(dk.end() - 1);
                if (line[i] == '(')
                {
                    if (dk.empty())
                    {
                        add(line);
                    }
                }
            }
        }
        end:
        continue;
    }
    for (set<string>::iterator i = hans.begin();i != hans.end();i ++)
    {
        cout << *i << endl;
    }

    return 0;
}
*/

/*
int main()
{
    string str;
    getline(cin,str);
    int i = -1;
    while ((i = (int) str.find("6666666666",i + 1)) != string::npos)
    {
        int t = 0;
        for (int j = i;str[j] == '6';j ++,t ++);
        str.replace(i, t, "27");
    }
    i = -1;
    while ((i = (int) str.find("6666",i + 1)) != string::npos)
    {
        int t = 0;
        for (int j = i;str[j] == '6';j ++,t ++);
        str.replace(i, t, "9");
    }
    cout << str << endl;
    return 0;
}
*/

//int main()
//{
//    int T;
//    scanf("%d",&T);
//    scanf(" ");
//    while (T --)
//    {
//        string str;
//        getline(cin,str);
//        int s = str.size() - 2;
//        if (s - 2>= 0)
//        {
//            if (str[s] == 'g' && str[s - 1] == 'n' && str[s - 2] == 'o')
//            {
//                stringstream ss(str);
//                vector<string> vs;
//                string p;
//                while (ss >> p)
//                {
//                    vs.push_back(p);
//                }
//                for (int i = 0;i < vs.size() - 3;i ++)
//                {
//                    cout << vs[i] << " ";
//                }
//                printf("qiao ben zhong.");
//                printf("\n");
//                continue;
//            }
//        }
//        printf("Skipped\n");
//    }
//    return 0;
//}

/*
int main()
{
    int all = 0;
    for (int c = 3;c <= 13;c ++)
    {
        for (int a = 1;a < c;a ++)
        {
            int b = c - a;
            if (a != b)
            {
                for (int f = 6;f <= 12;f ++)
                {
                    if (f == a || f == b || f == c) continue;
                    for (int d = 2;d < f;d ++)
                    {
                        if (d == a || d == b || d == c || f % d) continue;
                        int e = f / d;
                        if (e == a || e == b || e == c) continue;
                        if (e != d && e != f)
                        {
                            int k[7];
                            int j = 0;
                            for (int i = 1;i <= 13;i ++)
                            {
                                if (i != a && i != b && i != c && i != d && i != e && i != f)
                                {
                                    k[j ++] = i;
                                }
                            }
                            do {
                                if (k[0] - k[1] == k[2])
                                {
                                    if (k[3] % k[4] == 0 && k[3] / k[4] == k[5])
                                    {
                                        printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n\n",a,b,c,k[0],k[1],k[2],d,e,f,k[3],k[4],k[5]);
                                        all ++;
                                    }
                                }
                            } while (next_permutation(k, k + 7));
                            
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",all);
    return 0;
}
*/

/*
int main()
{
    for (int n = 2;n <= 200;n ++)
    {
        int a = ((200 + 2 * n) / (n + 1) - n) / 2;
        if ((2 * a + n) * (n + 1) == 200 + 2 * n)
        {
            printf("%d %d\n",a,n);
        }
    }
    return 0;
}
*/

/*
int all = 0;

int g[15][15];

void dfs(vector<int> a, int n, vector<int> k)
{
    if (n == 0) {
        int vis[15] = {0};
        for (auto i = k.begin();i != k.end();i ++)
        {
            vis[*i] = 1;
        }
        queue<int> q;
        q.push(*k.begin());
        while (!q.empty())
        {
            for (int i = 1;i <= 13;i ++)
            {
                if (g[i][q.front()] && vis[i] == 1)
                {
                    q.push(i);
                    vis[i] = 2;
                }
            }
            q.pop();
        }
        int ok = 1;
        for (auto i = k.begin();i != k.end();i ++)
        {
            if (vis[*i] != 2) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            all ++;
        }
        return;
    }
    ll sz = a.size();
    for (ll i = sz - 1;i >= n - 1;i --)
    {
        k.insert(k.begin(), a[i]);
        a.erase(a.begin() + i);
        dfs(a,n - 1,k);
        k.erase(k.begin());
    }
}

int main()
{
    vector<int> k;
    for (int i = 1;i <= 13;i ++) k.push_back(i);
    for (int i = 1;i < 4;i ++)
    {
        g[i][i + 1] = 1;
        g[i + 4][i + 5] = 1;
        g[i + 8][i + 9] = 1;
        
        g[i+ 1][i] = 1;
        g[i + 5][i + 4] = 1;
        g[i + 9][i + 8] = 1;
        
        g[i][i + 4] = 1;
        g[i + 4][i] = 1;
        g[i + 4][i + 8] = 1;
        g[i + 8][i + 4] = 1;
    }
    g[4][8] = 1;
    g[8][4] = 1;
    g[8][12] = 1;
    g[12][8] = 1;
    
    dfs(k,5,vector<int>());
    cout << all << endl;
    return 0;
}
*/

/*
int cb(int a,int b)
{
    return a * 10 + b;
}

int main()
{
    set<int> a,b;
    a.insert(2);
    a.insert(3);
    a.insert(5);
    a.insert(8);
    
    b.insert(1);
    b.insert(4);
    b.insert(6);
    b.insert(7);
    
    set<set<pair<int,int> > > all;
    
    int c[] = {1,2,3,4,5,6,7,8};
    do {
        if (a.find(c[0]) != a.end() && b.find(c[1]) != b.end() &&
            a.find(c[2]) != a.end() && b.find(c[3]) != b.end() &&
            a.find(c[4]) != a.end() && b.find(c[5]) != b.end() &&
            a.find(c[6]) != a.end() && b.find(c[7]) != b.end())
        {
            if (cb(c[0],c[1]) * cb(c[0],c[1]) + cb(c[2],c[3]) * cb(c[2],c[3]) + cb(c[4],c[5]) * cb(c[4],c[5]) + cb(c[6],c[7]) * cb(c[6],c[7]) == cb(c[1],c[0]) * cb(c[1],c[0]) + cb(c[3],c[2]) * cb(c[3],c[2]) + cb(c[5],c[4]) * cb(c[5],c[4]) + cb(c[7],c[6]) * cb(c[7],c[6]))
            {
                set<pair<int,int> > k;
                for (int i = 0;i < 7;i += 2)
                {
                    k.insert(make_pair(min(c[i], c[i + 1]),max(c[i], c[i + 1])));
                }
                all.insert(k);
            }
        }
    } while (next_permutation(c, c + 8));
    cout << all.size() << endl;
    return 0;
}
*/

/*
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int vx[25];
int vy[25];

int cx[25] = {0};
int cy[25] = {0};

int a[25][25] = {0};

int n;

vector<int> line;

void dfs(int x, int y, vector<int> l)
{
    if (line.size() != 0) return;
    if (x == n - 1 && y == n - 1)
    {
//        for (auto i = l.begin();i != l.end();i ++)
//        {
//            if (i != l.begin()) printf(" ");
//            printf("%d",*i);
//        }
//        printf("\n");
        int xok = 0,yok = 0;
        for (int i = 0;i < n;i ++)
        {
            if (cx[i] == vx[i]) xok ++;
            if (cy[i] == vy[i]) yok ++;
        }
        if (xok == n && yok == n) line = l;
        return;
    }
    a[y][x] = 1;
//    for (int i = 0;i < n;i ++)
//    {
//        for (int j = 0;j < n;j ++)
//        {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
    for (int i = 0;i < 4;i ++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < n && a[yy][xx] == 0)
        {
            if (cx[xx] + 1 > vx[xx]) continue;
            if (cy[yy] + 1 > vy[yy]) continue;
            cx[xx] ++;
            cy[yy] ++;
            l.push_back(yy * n + xx);
            dfs(xx,yy,l);
            cx[xx] --;
            cy[yy] --;
            l.erase(l.end() - 1);
        }
    }
    a[y][x] = 0;
}

int main()
{
    scanf("%d",&n);
    for (int i = 0;i < n;i ++) scanf("%d",vx + i);
    for (int i = 0;i < n;i ++) scanf("%d",vy + i);
    cx[0] ++;
    cy[0] ++;
    dfs(0,0,vector<int>());
    printf("0");
    for (auto i = line.begin();i != line.end();i ++)
    {
        printf(" ");
        printf("%d",*i);
    }
    printf("\n");
    return 0;
}
*/



/*
int main()
{
    int a[3];
    scanf("%d %d %d",a,a + 1,a + 2);
    sort(a,a+3);
    if (a[0] + a[1] > a[2])
    {
        double x = (a[0] + a[1] - a[2]) / 2.0;
        double b[] = {x,a[0] - x,a[1] - x};
        sort(b,b+3);
        if (b[0] > 0)
        {
            printf("Yes\n");
            printf("%.2f %.2f %.2f\n",b[0],b[1],b[2]);
        }
        else printf("No\n");
    } else printf("wtnl\n");
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    while (T --)
    {
        scanf("%d",&n);
        string str;
        cin >> str;
        int d = 0;
        stack<char> s;
        for (int i = 0;i < n;i ++)
        {
            if (str[i] == '(')
                s.push('(');
            if (str[i] == ')')
            {
                if (s.empty())
                {
                    d ++;
                } else s.pop();
            }
        }
        printf("%lu\n",d + s.size());
    }
    return 0;
}
*/

/*
int main()
{
    int n,m,h;
    scanf("%d %d %d",&n,&m,&h);
    int x,y;
    ll z;
    int mod = 1000000007;
    int sum = 0;
    for (int i = 0;i < h;i ++)
    {
        scanf("%d %d %lld",&x,&y,&z);
        sum = (sum + z * (y * n + (1 + n) * n / 2 + x * m + (1 + m) * m / 2 - x - y) % mod) % mod;
    }
    printf("%d\n",sum);
    return 0;
}
*/

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[100010],b[100010];
//    for (int i = 0;i < n;i ++) scanf("%d",a + i);
//    for (int i = 0;i < n;i ++) scanf("%d",b + i);
//    sort(a,a + n);
//    sort(b,b + n);
//    do {
//        for (int i = 0;i < n;i ++) printf("%d",a[i]);
//        printf("\n");
//    } while (next_permutation(a, a + n));
//    return 0;
//}

/*
int main()
{
    int a[100010];
    int b[100010];
    int c[100010];
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++) scanf("%d",a + i);
    for(int i = 0;i < n;i ++) scanf("%d",b + i);
    sort(a,a + n,greater<int>());
    sort(b,b + n,greater<int>());

    for(int i = 0,j = k - 1;i < k;i ++, j --) {
        c[i] = a[i] + b[j];
    }
    sort(c,c + k);
    printf("%d\n",c[0]);
    return 0;
}*/


/*int main()
{
    //fre("/Users/jackli/oj/1013/cases/6.in");
    int n;
    scanf("%d",&n);
    int a[1000010];
    int b[1000010];
    for (int i = 0;i < n;i ++) scanf("%d",a + i);
    for (int i = 0;i < n;i ++) scanf("%d",b + i);
    sort(a,a + n);
    sort(b,b + n);
    ll ans = 1;
    for (int i = 0,j = 0;i < n;i ++)
    {
        for (;j < n && b[i] >= a[j];j ++);
        ans = ans * (j - i) % 1000000007;
    }
    printf("%lld\n",ans);
    return 0;
}*/

//int g[1000010] = {0};
//char vis[1000010] = {0};
//char vis1[1000010] = {0};
//
//int dp[1000010] = {0};
//
//int start = -1,value;
//
//int dfs(int x,int k)
//{
//    vis[x] = 1;
//    //cout << x << " ";
//
//    vis1[x] = k;
//    if (vis1[g[x]]) {
//        if (x != g[x]) start = g[x];
//        value = vis1[x] - vis1[g[x]] + 1;
//        dp[x] = value;
//        vis1[x] = 0;
//        return 1;
//    }
//    int a = dp[g[x]];
//    if (a == 0) {
//        a = dfs(g[x], k + 1);
//        if (start != -1)
//        {
//            dp[x] = value;
//            if (x == start) start = -1;
//        } else dp[g[x]] = a;
//    }
//    vis1[x] = 0;
//    return a + 1;
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//
//    char t[1000010] = {0};
//    int in;
//    for (int i = 1;i <= n;i ++)
//    {
//        scanf("%d",&in);
//        g[i] = in;
//        t[in] = 1;
//    }
//    int maax = 0;
//    for (int i = 1;i <= n;i ++)
//    {
//        if (t[i] == 0)
//        {
//            maax = max(dfs(i,1),maax);
//            for (int j = 1;j <= n;j ++) printf("%d ",vis[j]);
//            printf("\n");
//            for (int j = 1;j <= n;j ++) printf("%d ",dp[j]);
//            printf("\n");
//        }
//    }
//    // 环
//    for (int i = 1;i <= n;i ++)
//    {
//        if (vis[i] == 0)
//        {
//            queue<int> q;
//            q.push(i);
//            int f,m = 0;
//            while (!q.empty())
//            {
//                f = q.front();
//                vis[f] = 1;
//                m ++;
//                if (!vis[g[f]]) q.push(g[f]);
//                q.pop();
//            }
//            maax = max(m,maax);
//            for (int j = 1;j <= n;j ++) printf("%d ",vis[j]);
//            printf("\n");
//        }
//    }
//    printf("%d\n",maax);
//    return 0;
//}
//

/*int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    struct Node {
        int n;
        int l;
        int t;
        Node *nxt;
    } *g[510] = {NULL};
    int v1,v2,s,l,t;
    Node *node;
    int dis[510];
    int tm[510];
    mem(dis,-1);
    mem(tm,-1);
    for (int i = 0;i < m;i ++)
    {
        scanf("%d %d %d %d %d",&v1,&v2,&s,&l,&t);
        node = (Node*) malloc(sizeof(Node));
        node -> nxt = g[v1];
        node -> n = v2;
        node -> l = l;
        node -> t = t;
        g[v1] = node;
        if (!s)
        {
            node = (Node*) malloc(sizeof(Node));
            node -> nxt = g[v2];
            node -> n = v1;
            node -> l = l;
            node -> t = t;
            g[v2] = node;
        }
    }
    int e;
    scanf("%d %d",&s,&e);
    queue<int> q;
    dis[s] = 0;
    tm[s] = 0;
    vector<int> lu_dis[510];
    vector<int> lu_tm[510];
    int cr;
    int ft;
    
    q.push(s);
    while (!q.empty())
    {
        ft = q.front();
        node = g[ft];
        if (lu_dis[ft].size() == 0 || *(lu_dis[ft].end() - 1) != ft) lu_dis[ft].push_back(ft);
        while (node != NULL)
        {
            t = dis[node -> n];
            cr = dis[ft] + node -> l;
            if (t == -1 || t > cr || (t == cr && lu_dis[node -> n].size() > lu_dis[ft].size()))
            {
                dis[node -> n] = cr;
                q.push(node -> n);
                lu_dis[node -> n] = lu_dis[ft];
            }
            node = node -> nxt;
        }
        q.pop();
    }
    int dd = dis[e];
    mem(dis,-1);
    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {
        ft = q.front();
        node = g[ft];
        if (lu_tm[ft].size() == 0 || *(lu_tm[ft].end() - 1) != ft) lu_tm[ft].push_back(ft);
        while (node != NULL)
        {
            t = tm[node -> n];
            cr = tm[ft] + node -> t;
            if (t == -1 || t > cr || (t == cr && dis[node -> n] > dis[ft] + node -> l))
            {
                tm[node -> n] = cr;
                dis[node -> n] = dis[ft] + node -> l;
                q.push(node -> n);
                lu_tm[node -> n] = lu_tm[ft];
            }
            node = node -> nxt;
        }
        q.pop();
    }
    if (lu_dis[e] == lu_tm[e])
    {
        printf("Time = %d; Distance = %d: ",tm[e],dd);
        int f = 1;
        for (auto i = lu_tm[e].begin();i != lu_tm[e].end();i ++)
        {
            if (f) f = 0;
            else printf(" => ");
            printf("%d",*i);
        }
        printf("\n");
    } else {
        printf("Time = %d: ",tm[e]);
        int f = 1;
        for (auto i = lu_tm[e].begin();i != lu_tm[e].end();i ++)
        {
            if (f) f = 0;
            else printf(" => ");
            printf("%d",*i);
        }
        printf("\n");
        printf("Distance = %d: ",dd);
        f = 1;
        for (auto i = lu_dis[e].begin();i != lu_dis[e].end();i ++)
        {
            if (f) f = 0;
            else printf(" => ");
            printf("%d",*i);
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    struct Node {
        int n;
        Node *nxt;
    } *g[10010] = {NULL};
    int u,v;
    Node *node;
    for (int i = 0;i < m;i ++)
    {
        scanf("%d %d",&u,&v);
        node = (Node*) malloc(sizeof(Node));
        node -> nxt = g[u];
        node -> n = v;
        g[u] = node;
        
        node = (Node*) malloc(sizeof(Node));
        node -> nxt = g[v];
        node -> n = u;
        g[v] = node;
    }
    int c;
    int vis[10010];
    for (int i = 0;i < k;i ++)
    {
        scanf("%d",&c);
        mem(vis,-1);
        vis[c] = 0;
        queue<int> q;
        int f,t,cr;
        q.push(c);
        while (!q.empty())
        {
            f = q.front();
            node = g[f];
            while (node != NULL)
            {
                t = vis[node -> n];
                cr = vis[f] + 1;
                if (t == -1 || cr < t)
                {
                    vis[node -> n] = cr;
                    q.push(node -> n);
                }
                node = node -> nxt;
            }
            q.pop();
        }
        int mx = 0,mx_i = 0;
        for (int i = 1;i <= n;i ++)
        {
            if (vis[i] > mx)
            {
                mx = vis[i];
                mx_i = i;
            }
        }
        printf("%d\n",mx_i);
    }
    return 0;
}
*/

/*
int main()
{
    int a,b,s;
    int T;
    scanf("%d",&T);
    while (T --)
    {
        scanf("%d %d",&a,&b);
        s = a + b;
        if (s == 1) printf("2\n");
        else printf("1\n");
        
    }
    
    return 0;
}
*/

/*
int main()
{
    int T,n;
    scanf("%d",&T);
    string str;
    while (T --)
    {
        scanf("%d",&n);
        cin >> str;
        double m = 0.5,t = 0.5;
        double m_h = 0,t_h = 0;
        for (int i = 0;i < n;i ++)
        {
            if (str[i] == 'H')
            {
                m_h += m /= 2;
                t_h += t /= 2;
                t += 0.5;
            } else if (str[i] == 'M')
            {
                m_h += m /= 2;
                t_h += t /= 2;
                m += 0.5;
            }
        }
        //printf("%lf\n%lf",t_h,m_h);
        if (fabs(m_h - t_h) <= 1e-15) printf("HM\n");
        else if (m_h > t_h) printf("M\n");
        else if (m_h < t_h) printf("H\n");
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int n,m;
    ll a[100010];
    ll b[100010];
    int f = 1;
    while (T --)
    {
        scanf("%d %d",&n,&m);
        for (int i = 0;i < n;i ++) scanf("%lld",a + i);
        for (int i = 0;i < m;i ++) scanf("%lld",b + i);
        ll last = a[0];
        ll sum1 = a[0];
        for (int i = 1;i < n;i ++)
        {
            last = max(a[i] + last,a[i]);
            sum1 = max(last,sum1);
        }
        last = b[0];
        ll sum2 = b[0];
        for (int i = 1;i < m;i ++)
        {
            last = max(b[i] + last,b[i]);
            sum2 = max(last,sum2);
        }
        if (f) f = 0;
        else printf("\n");
        printf("%lld",sum1 + sum2);
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
    int k = 1;
    double a;
    int ok = 0;
    while (T --)
    {
        scanf("%d",&n);
        k = 1;
        for (int i = 2;i <= n;i ++)
        {
            a = i;
            ok = 1;
            while ((a = pow(i,a)) <= n)
            {
                k ++;
                ok = 0;
                printf("%lf\n",a);
            }
            if (ok) break;
        }
        printf("%d\n",k);
    }
    return 0;
}
*/

//ll gcd(ll a,ll b)
//{
//    if (a % b == 0) return b;
//    return gcd(b, a % b);
//}
//
//int main()
//{
//    int T;
//    scanf("%d",&T);
//    ll k,n;
//    while (T --)
//    {
//        scanf("%lld",&k);
//        ll v = -1;
//        for (ll i = 2;i * i <= k;i ++)
//        {
//            n = 0;
//            while (k % i == 0)
//            {
//                k /= i;
//                n ++;
//            }
//            if (n == 0) continue;
//            if (v == 1) break;
//            if (v == -1) v = n;
//            else v = gcd(v,n);
//        }
//        if (v == -1) v = 1;
//        printf("%lld\n",v);
//    }
//    return 0;
//}

/*int main()
{
    int n;
    char c1,c2;
    scanf("%d %c %c",&n,&c1,&c2);
    char a[100][100] = {0};
    a[n / 2][n / 2] = c1;
    for (int i = n / 2 - 1,v = 0;i >= 0;i --,v ++)
    {
        char c = (v % 2) ? c1 : c2;
        for (int j = n / 2 - v - 1;j <= n / 2 + v + 1;j ++) {
            a[i][j] = c;
            a[n / 2 + v + 1][j] = c;
        }
        for (int j = i + 1;j < n / 2 + v + 1;j ++) {
            a[j][n / 2 - v - 1] = c;
            a[j][n / 2 + v + 1] = c;
        }
    }
    if (n != 1) {
        a[0][0] = ' ';
        a[0][n - 1] = ' ';
        a[n - 1][0] = ' ';
        a[n - 1][n - 1] = ' ';
    }
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
char a[110][110];
char p[5][5];
int m,n;

int dx[] = {-1,-1,1,1,1,-1,0,0}; // 8个方向
int dy[] = {-1,0,0,-1,1,1,-1,1}; // 8个方向

int chk(int x,int y)
{
    if (a[y][x] == '#') return 0; // 如果玩家在墙上，直接0
    int xx,yy; // 玩家四周的坐标
    for (int i = 0;i < 8;i ++)
    {
        xx = x + dx[i]; // 玩家周围坐标的x
        yy = y + dy[i]; // 玩家周围坐标的y
        if (xx >= 0 && xx < m && yy >= 0 && yy < n) // 如果玩家周围一圈在地图内
        {
            if (a[yy][xx] != p[1 + dy[i]][1 + dx[i]]) return 0; // 直接判断和我们要的一不一样即可
        } else {
            if (p[1 + dy[i]][1 + dx[i]] != '*') return 0; // 在墙外也判一下
        }
    }
    return 1; // 没问题当然true
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        // 各种输入
        scanf("%d %d",&n,&m);
        for (int i = 0;i < n;i ++)
        {
            scanf(" ");
            for (int j = 0;j < m;j ++)
            {
                scanf("%c",&a[i][j]);
            }
        }
        for (int i = 0;i < 3;i ++)
        {
            scanf(" ");
            for (int j = 0;j < 3;j ++)
            {
                scanf("%c",&p[i][j]);
            }
        }
        // 定义开始判断的x轴的start和end，y轴的start和end
        int xs = 1,ys = 1,xe = m - 1,ye = n - 1; // 由于没有*的时候玩家不可能在边缘出现，所以他们一定是从1（数组从0开始）开始走，到边界处-1，注意这边的end是不包括的，还是左闭右开区间。
//        / 例如：
//         *     #..#..#
//         *     #....#.
//         *     ###...#
//         *     #......
//         * 玩家可能的活动范围只有中间的：
//         *      ...#.
//         *      ##...
//         * x轴也就是[1,5]
//         * y轴是[1,2]
//         /
        
        // 如果是*，那么就得从边界开始了
        if (p[0][1] == '*') ys --;
        if (p[1][0] == '*') xs --;
        if (p[2][1] == '*') ye ++;
        if (p[1][2] == '*') xe ++;
        // 当然边界的话循环的时候可以只判断边界，由于这题数据不是很大，所以后面直接硬核模拟整个也没问题
        
        int cnt = 0; // 计数
        for (int i = ys;i < ye;i ++)
        {
            for (int j = xs;j < xe;j ++)
            {
                if (chk(j, i)) cnt ++; // 检查
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        char c;int n;
        scanf(" %c%d",&c,&n);
        string str;
        while (n != 0)
        {
            str = (char) (n % 2 + '0') + str;
            n /= 2;
        }
        while (str.size() != 7) str = '0' + str;
        if (c == '+')
        {
            cout << '0' + str << endl;
            string f;
            for (int i = 0;i < 7;i ++) f += (char) ('0' + 1 - str[i] + '0');
            cout << '0' + f << endl;
            cout << '0' + str << endl;
        } else {
            cout << '1' + str << endl; // 先输出原码
            string f;
            for (int i = 0;i < 7;i ++) f += (char) ('0' + 1 - str[i] + '0');
            cout << (f = '1' + f) << endl; // 反码，同时也把符号位加上，方便之后的补码计算
            int j = 1; // 进位，由于补吗要加1，所以从个位开始，就有进位了
            int i = 7; // 设置index到个位
            
            while (j) // 只要j还有进位，那就一直加
            {
                if (i == -1) { // 特殊判断-0，这个时候就不要在往前搞了，直接跳出
                    f[0] = '0';
                    break;
                }
                f[i] ++; // '0' + 1 = '1'; '1' + 1 = '2';
                j --; // 进位剪掉
                if (f[i] == '2') { // 溢出来了
                    j ++; // 进位
                    f[i] = '0'; // 置0
                }
                i --; // index前移
            }
            cout << f << endl; // 输出
        }
    }
    return 0;
}
*/

/// 任何一个正整数一定能分解成若干个不重复且不相邻的斐波那契数之和+贪心
/// https://www.zhihu.com/question/68360587?sort=created
/*int main()
{
    ll a[] = {1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903,2971215073,4807526976,7778742049,12586269025,20365011074,32951280099,53316291173,86267571272,139583862445,225851433717,365435296162,591286729879,956722026041,1548008755920,2504730781961,4052739537881,6557470319842,10610209857723,17167680177565,27777890035288,44945570212853,72723460248141,117669030460994,190392490709135,308061521170129,498454011879264,806515533049393,1304969544928657,2111485077978050,3416454622906707,5527939700884757,8944394323791464,14472334024676221,23416728348467685,37889062373143906,61305790721611591,99194853094755497,160500643816367088,259695496911122585,420196140727489673,679891637638612258,1100087778366101931,1779979416004714189,2880067194370816120,4660046610375530309,7540113804746346429};
    int T;
    scanf("%d",&T);
    ll n,k;
    ll v;
    while (T --)
    {
        scanf("%lld %lld",&n,&k);
        if (k > n) {
            printf("No\n");
            continue;
        }
        while (k --)
        {
            v = *(upper_bound(a, a + 91, n) - 1);
            n -= v;
            if (n == 0) break;
        }
        if (n == 0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/

/*
ll a[100010];
ll b[100010];
int k[100010];

ll v;
int n,m;

void update(ll i)
{
    ll c1 = 0, c2 = 0;
    i /= 2;
    ll h = 0;
    if (i * 2 <= n && k[i * 2]) c1 = a[i * 2];
    if (i * 2 + 1 <= n && k[i * 2 + 1]) c2 = a[i * 2 + 1];
    a[i] = c1 + c2 + 1;
    h = b[i];
    b[i] = a[i] * (a[i] - 1) / 2;
    while (k[i])
    {
        i /= 2;
        //printf(">>%d\n",i);
        c1 = c2 = 0;
        if (i * 2 <= n && k[i * 2]) c1 = a[i * 2];
        if (i * 2 + 1 <= n && k[i * 2 + 1]) c2 = a[i * 2 + 1];
        a[i] = c1 + c2 + 1;
        h = b[i];
        b[i] = a[i] * (a[i] - 1) / 2;
        //printf("%d %d\n",h,b[i]);
    }
    v -= h;
    v += b[i];
}

void add(ll i)
{
    v -= b[i];
    update(i);
}

void remove(ll i)
{
    v += b[i];
    update(i);
}

int main()
{
    int T;
    scanf("%d",&T);
    ll t;
    while (T --)
    {
        scanf("%d %d",&n,&m);
        mem(k,-1);
        k[0] = 0;
        k[1] = 0;
        for (int i = n;i >= 1;i --)
        {
            t = i * 2 + 1;
            if (t > n) t = 0;
            else t = a[t];
            a[i] = t;
            t = i * 2;
            if (t > n) t = 0;
            else t = a[t];
            a[i] += t + 1;
            b[i] = a[i] * (a[i] - 1) / 2;
        }
        v = b[1];
        //printf("%lld %lld\n",a[1],b[1]);
        for (int i = 0;i < m;i ++)
        {
            scanf("%lld",&t);
            k[t] = !k[t];
            if (k[t]) add(t);
            else remove(t);
            printf("%lld\n",v);
        }
    }
    return 0;
} */

/*
int r[100010];
int x[100010];
int y[100010];

//判断重叠
int cf(int a, int b)
{
    if (((x[b] - r[b] >= x[a] - r[a] && x[b] - r[b] <= x[a] + r[a]) || (x[b] + r[b] >= x[a] - r[a] && x[b] + r[b] <= x[a] + r[a])) && ((y[b] - r[b] >= y[a] - r[a] && y[b] - r[b] <= y[a] + r[a]) || (y[b] + r[b] >= y[a] - r[a] && y[b] + r[b] <= y[a] + r[a])))
    {
        return 1;
    }
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    if (((x[b] - r[b] >= x[a] - r[a] && x[b] - r[b] <= x[a] + r[a]) || (x[b] + r[b] >= x[a] - r[a] && x[b] + r[b] <= x[a] + r[a])) && ((y[b] - r[b] >= y[a] - r[a] && y[b] - r[b] <= y[a] + r[a]) || (y[b] + r[b] >= y[a] - r[a] && y[b] + r[b] <= y[a] + r[a])))
    {
        return 1;
    }
    return 0;
}

// 计算
int ck(int a, int b)
{
    if (cf(a,b))
    {
        return 0;
    }
    int mix = -1;
    //直接暴力x
    for (int i = x[a] - r[a];i <= x[a] + r[a];i ++)
    {
        for (int j = x[b] - r[b];j <= x[b] + r[b];j ++)
        {
            if (mix == -1) mix = abs(i - j);
            else mix = min(mix,abs(i - j));
            if (mix == 0) goto x_done;
        }
    }
    x_done:
    //暴力y
    int miy = -1;
    for (int i = y[a] - r[a];i <= y[a] + r[a];i ++)
    {
        for (int j = y[b] - r[b];j <= y[b] + r[b];j ++)
        {
            if (miy == -1) miy = abs(i - j);
            else miy = min(miy,abs(i - j));
            if (miy == 0) goto y_done;
        }
    }
    y_done:
    return mix + miy;
}

int main()
{
    int T;
    scanf("%d",&T);
    int n,m;
    int op;
    int a,b,c,d;
    while (T --)
    {
        scanf("%d %d",&n,&m);
        for (int i = 1;i <= n;i ++)
        {
            scanf("%d %d %d",x + i,y + i,r + i);
        }
        for (int v = 0;v < m;v ++)
        {
            scanf("%d",&op);
            if (op == 1)
            {
                scanf("%d %d %d %d",&a,&b,&c,&d);
                x[a] = b;
                y[a] = c;
                r[a] = d;
            } else {
                scanf("%d %d",&a,&b);
                int miin = -1;
                for (int i = a;i <= b - 1;i ++)
                {
                    for (int j = i + 1;j <= b;j ++)
                    {
                        if (miin == -1) miin = ck(i,j);
                        else miin = min(miin,ck(i,j));
                        if (miin == 0) goto ok;
                    }
                }
                ok:
                printf("%d\n",miin);
            }
        }
    }
    return 0;
}
*/

/*
int a[1010];
int idx = 1;

void ck(int i)
{
    int p = i / 2;
    if (p == 0) return;
    if (a[i] < a[p]) {
        a[i] ^= a[p];
        a[p] ^= a[i];
        a[i] ^= a[p];
    }
    ck(p);
}

void it(int num)
{
    a[idx] = num;
    ck(idx ++);
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int in;
    for (int i = 0;i < n;i ++) {
        scanf("%d",&in);
        it(in);
    }
    scanf(" ");
    string str;
    while (m --)
    {
        getline(cin,str);
        int n1 = 0,n2 = 0;
        int f = 1;
        int f1 = 1;
        int f2 = 1;
        for (int i = 0;str[i] != 0;i ++)
        {
            if (str[i] == '-') {
                if (f) f1 = -1;
                else f2 = -1;
            } else if (str[i] >= '0' && str[i] <= '9')
            {
                if (f) n1 = n1 * 10 + str[i] - '0';
                else n2 = n2 * 10 + str[i] - '0';
            } else {
                f = 0;
            }
        }
        n1 *= f1;
        n2 *= f2;
        //printf(">%d %d\n",n1,n2);
        if (str.find("root") != string::npos)
        {
            if (n1 == a[1]) printf("T");
            else printf("F");
            printf("\n");
        } else if (str.find("siblings") != string::npos)
        {
            int ok = 0;
            for (int i = 2;i <= n;i ++)
            {
                if (a[i] == n1)
                {
                    if (i % 2)
                    {
                        if (a[i - 1] == n2) ok = 1;
                    } else {
                        if (i + 1 <= n && a[i + 1] == n2) ok = 1;
                    }
                    if (ok) break;
                }
            }
            if (ok) printf("T\n");
            else printf("F\n");
        } else if (str.find("child") != string::npos)
        {
            int ok = 0;
            for (int i = 1;i <= n;i ++)
            {
                if (a[i] == n1)
                {
                    int p = i / 2;
                    if (p >= 1 && a[p] == n2) ok = 1;
                    if (ok) break;
                }
            }
            if (ok) printf("T\n");
            else printf("F\n");
        } else if (str.find("parent") != string::npos)
        {
            int ok = 0;
            for (int i = 1;i <= n;i ++)
            {
                if (a[i] == n2)
                {
                    int p = i / 2;
                    if (p >= 1 && a[p] == n1) ok = 1;
                    if (ok) break;
                }
            }
            if (ok) printf("T\n");
            else printf("F\n");
        }
         
    }
    
    return 0;
}
*/

/*
int main()
{
    const int mod = 998244353;
    int n;
    scanf("%d",&n);
    int x,y;
    set<int> pp;
    set<int> pet;
    ll v = 0;
    int k,m;
    set<int>::iterator up,upp;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d %d",&x,&y);
        if (x == 0)
        {
            if (pp.size() == 0) pet.insert(y);
            else {
                up = pp.upper_bound(y); // 找一个> y的元素
                upp = up;
                if (upp == pp.end()) -- upp; // 如果找到的是end，那就得--，以免炸了
                m = *upp; // 取出题意中的那个b
                if (up != pp.begin()) -- up; // 如果找到的不是end，那就--，获得<= y的一个元素
                k = *(up); // 取出题意中的a
                if (y - k <= m - y)
                {
                    v = (v + abs(k - y)) % mod;
                    pp.erase(up);
                } else {
                    v = (v + abs(m - y)) % mod;
                    pp.erase(upp);
                }
            }
        } else {
            if (pet.size() == 0) pp.insert(y);
            else {
                up = pet.upper_bound(y);
                upp = up;
                if (upp == pet.end()) -- upp;
                m = *upp;
                if (up != pet.begin()) -- up;
                k = *(up);
                if (y - k <= m - y)
                {
                    v = (v + abs(k - y)) % mod;
                    pet.erase(up);
                } else {
                    v = (v + abs(m - y)) % mod;
                    pet.erase(upp);
                }
            }
        }
//        for (auto i = pp.begin();i != pp.end();i ++) printf("%d ",*i);
//        printf("\n");
//        for (auto i = pet.begin();i != pet.end();i ++) printf("%d ",*i);
//        printf("\n");
    }
    printf("%lld\n",v);
    return 0;
}
*/

/*
int main()
{
    ll n;
    scanf("%lld",&n);
    ll v;
    ll m;
    set<ll> p;
    for (int i = 2;i * i <= n;i ++)
    {
        if (n % i) continue;
        v = n / i;
        m = 1 + i * (v - 1);
        p.insert((1 + m) * v / 2);
        m = 1 + v * (i - 1);
        p.insert((1 + m) * i / 2);
    }
    p.insert((1 + n) * n / 2);
    printf("1");
    for (set<ll>::iterator i = p.begin();i != p.end();i ++)
    {
        printf(" %lld",*i);
    }
    printf("\n");
    return 0;
}
*/

/*ull k1,k2;
int x[100001],y[100001];
ull value[100001];

ull creat()
{
    ull k3 = k1, k4 = k2;
    k1 = k4;
    k3 ^= k3 << 23;
    k2 = k3 ^ k4 ^ (k3 >> 17) ^ (k4 >> 26);
    return k2 + k4;
}

int main()
{
    int T;
    int n,m;
    scanf("%d",&T);
    while (T --)
    {
        scanf("%d%d%lld%lld",&n,&m,&k1,&k2);
        ull maax = 0;
        map<pair<int,int>,map<ull,ull> > k;
        map<pair<int,int>,map<ull,ull> > v;
        ull t;
        pair<int,int> p;
        for (int i = 0;i < m;i ++)
        {
            x[i] = creat() % n + 1;
            y[i] = creat() % n + 1;
            p = make_pair(min(x[i], y[i]),max(x[i], y[i]));
            value[i] = creat();
            if ((t = ++ k[p][value[i]]) != 1) maax = mx(v[p][value[i]] = sqrt(pow(value[i],t)),maax);
            else maax = mx(v[p][value[i]] = value[i],maax);
        }
        printf("%llu\n",maax);
    }
    return 0;
}
*/

/*
string str;
string a['Z' + 1];
int n;

int cal(char a1, char a2, char a3, char b1, char b2, char b3)
{
    if (a1 == b1 && a2 == b2 && a3 == b3) return 0;
    if (a2 == b1 && a3 == b2) return 2;
    if (a3 == b1) return 3;
    return 4;
}

map<string,int> dp[100000];

int dfs(int i,string vct)
{
    string p = a[str[i + 1]];
    sort(p.begin(),p.end());
    if (i == n - 2) {
        int miin = 100;
        do {
            miin = min(cal(vct[0],vct[1],vct[2],p[0],p[1],p[2]),miin);
        } while (next_permutation(p.begin(), p.end()));
        return miin;
    }
    int v = -1;
    do {
        if (v == -1) v = cal(vct[0],vct[1],vct[2],p[0],p[1],p[2]) + (dp[i + 1][vct] == 0 ? (dp[i + 1][p] = dfs(i + 1,p)) : dp[i + 1][vct]);
        else v = min(cal(vct[0],vct[1],vct[2],p[0],p[1],p[2]) + (dp[i + 1][vct] == 0 ? (dp[i + 1][p] = dfs(i + 1,p)) : dp[i + 1][vct]),v);
    } while (next_permutation(p.begin(), p.end()));
    return v;
}

int main()
{
    cin >> str;
    n = (int) str.size();
    int all = n;
    a['Y'] = "QQQ";
    a['V'] = "QQW";
    a['G'] = "QQE";
    a['C'] = "WWW";
    a['X'] = "QWW";
    a['Z'] = "EWW";
    a['T'] = "EEE";
    a['F'] = "QEE";
    a['D'] = "WEE";
    a['B'] = "QWE";
    string p = a[str[0]];
    sort(p.begin(),p.end());
    int miin = -1;
    do {
        if (miin == -1) miin = dfs(0,p);
        else miin = min(miin,dfs(0,p));
    } while (next_permutation(p.begin(), p.end()));
    printf("%d\n",all + miin + 4);
    return 0;
}
*/

/*
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int main()
{
    int n,m,k;
    while (~scanf("%d %d %d",&n,&m,&k))
    {
        int a[110][110] = {0};
        int x,y;
        for (int i = 0;i < k;i ++)
        {
            scanf("%d %d",&x,&y);
            a[y][x] = 1;
        }
        pair<int,int> f;
        int xx,yy;
        int count = 0;
        int maax = 0;
        for (int i = 1;i <= m;i ++)
        {
            for (int j = 1;j <= n;j ++)
            {
                if (a[i][j] == 1)
                {
                    queue<pair<int,int> > q;
                    q.push(make_pair(j,i));
                    a[i][j] = 0;
                    count = 1;
                    while (!q.empty())
                    {
                        f = q.front();
                        for (int k = 0;k < 4;k ++)
                        {
                            xx = dx[k] + f.first;
                            yy = dy[k] + f.second;
                            if (xx >= 1 && yy >= 1 && xx <= n && yy <= m)
                            {
                                if (a[yy][xx]){
                                    q.push(make_pair(xx, yy));
                                    count ++;
                                    a[yy][xx] = 0;
                                }
                            }
                        }
                        q.pop();
                    }
                    maax = max(maax, count);
                }
            }
        }
        printf("%d\n",maax);
    }
    return 0;
}
*/

/*
const int mod = 1000000007;

ll f(int k)
{
    ll a = 1;
    while (k != 0)
    {
        a *= k % 10;
        k /= 10;
    }
    return a;
}

int main()
{
    int T;
    scanf("%d",&T);
    int a,b;
    ll t;
    ll s;
    while (T --)
    {
        s = 1;
        scanf("%d %d",&a,&b);
        for (int i = a;i <= b;i ++)
        {
            t = f(i);
            if (t == 0) {
                s = 0;
                break;
            }
            s = (s * t) % mod;
            if (s == 0) break;
        }
        printf("%lld\n",s);
    }
    return 0;
}
*/

/*
int main()
{
    int T;
    scanf("%d",&T);
    int x,y,z,s,k;
    while (T --)
    {
        scanf("%d %d %d",&x,&y,&z);
        s = x + y;
        k = s - z;
        if (k < 0) {
            printf("-1\n");
            continue;
        }
        if (k == 0)
        {
            if (s + 1 <= 2000000000) printf("%d\n",s + 1);
            else printf("-1\n");
        } else {
            if (k > x && k > z) printf("%d\n",k);
            else printf("-1\n");
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
    while (T --)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char c[100010];
        int vis[100010] = {0};
        int stp[100010];
        int in;
        int r[100010] = {0};
        for (int i = 0;i < n;i ++)
        {
            scanf(" ");
            for (int j = 0;j < m;j ++)
            {
                scanf("%c",c + i * m + j);
            }
        }
        for (int i = 0;i < n;i ++)
        {
            for (int j = 0;j < m;j ++)
            {
                scanf("%d",&in);
                stp[i * m + j] = in;
                switch (c[i * m + j])
                {
                    case 'r':
                        if (j + in < m) r[i * m + j + in] ++;
                        break;
                    case 'l':
                        if (j - in >= 0) r[i * m + j - in] ++;
                        break;
                    case 'u':
                        if (i - in >= 0) r[(i - in) * m + j] ++;
                        break;
                    case 'd':
                        if (i + in < n) r[(i + in) * m + j] ++;
                        break;
                }
            }
        }
        int ok = 0;
        int s = 0;
        for (int i = 0;i < m * n;i ++)
        {
            if (r[i] == 0) {
                ok ++;
                s = i;
            }
            if (ok >= 2) break;
            //printf("%d ",r[i]);
        }
        if (ok <= 1) {
            int x = s % m,y = s / m;
            int o = 1;
            while (o)
            {
                if (vis[x + y * m]) break;
                vis[x + y * m] = 1;
                in = stp[x + y * m];
                switch (c[y * m + x])
                {
                    case 'r':
                        if (x + in < m) x += in;
                        else o = 0;
                        break;
                    case 'l':
                        if (x - in >= 0) x -= in;
                        else o = 0;
                        break;
                    case 'u':
                        if (y - in >= 0) y -= in;
                        else o = 0;
                        break;
                    case 'd':
                        if (y + in < n) y += in;
                        else o = 0;
                        break;
                }
            }
            int ok2 = 1;
            for (int i = 0;i < n * m;i ++)
            {
                if (!vis[i])
                {
                    ok2 = 0;
                    break;
                }
            }
            if (ok2) printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
    return 0;
}
*/

/*int main()
{
    int T;
    scanf("%d",&T);
    int n,k;
    char str[2000010];
    while (T --)
    {
        scanf("%d %d",&n,&k);
        scanf("%s",str);
        
        int l = 1,r = n;
        int m;
        int c = 0;
        while (l < r)
        {
            m = (l + r) / 2;
            c = 0;
            for (int i = 0;i < n;i += m,c ++)
            {
                while (i < n && str[i] == '0') i ++;
                if (i >= n) break;
            }
            if (c <= k) r = m;
            else l = m + 1;
        }
        printf("%d\n",l);
    }
    return 0;
}
*/

/*int main()
{
    int T;
    scanf("%d",&T);
    string str;
    while (T --)
    {
        cin >> str;
        ll l = str.size();
        ll c = l * (l + 1) / 2;
        ll l0 = 0;
        ll l8 = 0;
        ll c6 = 0;
        ll c9 = 0;
        for (int i = 0;i < l;i ++)
        {
            if (str[i] == '6') c6 ++;
            else if (str[i] == '9') c9 ++;
            else if (str[i] == '0') l0 ++;
            else if (str[i] == '8') l8 ++;
        }
        c = c - c6 * c9 - l0 * (l0 + 1) / 2 - l8 * (l8 + 1) / 2;
        if (l0 != 0 || l8 != 0) c ++;
        else if (c6 * c9 != 0) c ++;
        printf("%lld\n",c);
    }
    return 0;
}
*/

/*
int main()
{
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    double v[10010];
    for (int i = 0;i < n;i ++)
    {
        int in,maax = -1,miin = 1000000;
        double sum = 0;
        for (int j = 0;j < k;j ++) {
            scanf("%d",&in);
            if (maax == -1) maax = in;
            else maax = max(maax,in);
            miin = min(miin,in);
            sum += in;
        }
        sum -= (maax + miin);
        v[i] = sum / (k - 2);
    }
    sort(v,v + n);
    int f = 1;
    while (m --)
    {
        if (f) f = 0;
        else printf(" ");
        printf("%.3f",v[n - m - 1]);
    }
    printf("\n");
    return 0;
}
*/


///////kmp
/*
string str;
string p;
ulong n;
ulong m;

int ok = 0;

void make(int *n)
{
    n[0] = 0;
    n[1] = 0;
    for (int i = 1,k = 0;i < m;i ++)
    {
        if (p[i] == p[k])
        {
            n[i + 1] = ++ k;
        } else {
            n[i + 1] = (k = n[k]);
        }
        //printf("%d=%d %d=%d\n",i,n[i],k,n[k]);
    }
}

void kmp()
{

    int nxt[1000010];

    make(nxt);
//    for (int i = 0;i < m + 1;i ++)
//    {
//        printf("%d ",nxt[i]);
//    }
//    printf("\n");
    //int f = 0;
    for (int i = 0,j = 0;i < n;)
    {
//        cout << i << " " << j << endl;
        if (str[i] == p[j]) {
            j ++;
            i ++;
            if (j == m) {
                //printf("Found: %lu\n",i - m);
                ok ++;
                //f = 1;
                j = nxt[j];
            }
        }
        else {
            if (j == 0) i ++;
            j = nxt[j];
        }
        
    }
    //if (!f) printf("Not Found!\n");
}

int main()
{
    getline(cin,str);
    getline(cin,p);
    n = str.size();
    m = p.size();
    kmp();
    printf("%d\n",ok);
    return 0;
}
*/

/*
int str[1000010],p[10010];
int n;
int m;

void make(int *n)
{
    n[0] = 0;
    n[1] = 0;
    for (int i = 1,k = 0;i < m;i ++)
    {
        if (p[i] == p[k])
        {
            n[i + 1] = ++ k;
        } else {
            n[i + 1] = (k = n[k]);
        }
    }
}

int kmp()
{
    int nxt[10010];
    int ok = -1;
    make(nxt);
//    for (int i = 0;i < m + 1;i ++)
//    {
//        printf("%d ",nxt[i]);
//    }
//    printf("\n");
    //int f = 0;
    for (int i = 0,j = 0;i < n;i ++)
    {
//        cout << i << " " << j << endl;
        if (str[i] == p[j]) {
            j ++;
            if (j == m) {
                ok = i - m + 2;
                break;
                //f = 1;
                //j = nxt[j];
            }
        }
        else {
            j = nxt[j];
            if (str[i] == p[j]) j ++;
            else j = 0;
        }
        
    }
    return ok;
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        scanf("%d %d",&n,&m);
        for (int i = 0;i < n;i ++) scanf("%d",str + i);
        for (int i = 0;i < m;i ++) scanf("%d",p + i);
        printf("%d\n",kmp());
    }
    return 0;
}
*/

/*int main()
{
    char str[1000010];
    scanf("%s",str);
    string k = "";
    int s = 0;
    int c = 0;
    for (int i = 1,j = 0;str[i];i ++)
    {
        if (str[j] != str[i]) {
            j = 0;
            s = 0;
            c = 0;
            k = "";
            if (str[j] == str[i]) i --;
        } else {
            s = i - j;
            if (j < s) k += str[i];
            j ++;
            c ++;
            if (c == s) c = 0;
        }
    }
    if (c != 0 || s != k.size() || k == "") printf("-1\n"); // 没找到
    else cout << k << endl; // 输出最小周期的子串
    return 0;
}*/


/*int cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first * b.second > a.second * b.first;
}

int main()
{
    int n;
    scanf("%d",&n);
    pair<int,int> a[100010];
    itn in;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&in);
        (a + i) -> first = in;
        scanf("%d",&in);
        (a + i) -> second = in;
    }
    sort(a,a + n,cmp);
    ll all = 0;
    ll cnt = 0;
    for (int i = 0;i < n;i ++)
    {
        cnt += a[i].second;
        all += a[i].first * cnt;
    }
    printf("%lld\n",all);
    return 0;
}*/

/*struct z {
    int c,m,e,id;
} a[310];

int sum(z k)
{
    return k.c + k.m + k.e;
}

int cmp(z a,z b)
{
    if (sum(a) == sum(b)) {
        if (a.c == b.c) return a.id < b.id;
        return a.c > b.c;
    }
    return sum(a) > sum(b);
}

int main()
{
    int n;
    scanf("%d",&n);
    z *t;
    for (int i = 1;i <= n;i ++)
    {
        t = a + i;
        scanf("%d %d %d",&t -> c,&t -> m,&t -> e);
        t -> id = i;
    }
    sort(a + 1,a + n + 1,cmp);
    for (int i = 1;i <= 5;i ++)
    {
        printf("%d %d\n",a[i].id,sum(a[i]));
    }
    return 0;
}
*/


/*int main()
{
    string str;
    getline(cin,str);
    ll c = 0;
    for (int i = 0;str[i];i ++)
    {
        if (str[i] != ' ' && str[i] != '\n') c ++;
    }
    printf("%lld\n",c);
    return 0;
}*/


//int main()
//{
//    itn n;
//    scanf("%d",&n);
//    int a[1000010];
//    int l[1000010],r[1000010];
//    int ok[1000010] = {0};
//    for (int i = 1;i <= n;i ++)
//    {
//        scanf("%d",a + i);
//    }
//    for (int i = 1;i <= n;i ++)
//    {
//        scanf("%d %d",l + i,r + i);
//        if (l[i] == -1 && r[i] == -1) ok[i] = 1;
//    }
//
//    return 0;
//}

/*
int main()
{
    int n,m;
    ll p1,s1,s2;
    ll a[100010];
    scanf("%d",&n);
    for (int i = 1;i <= n;i ++)
    {
        scanf("%lld",a + i);
    }
    scanf("%d %lld %lld %lld",&m,&p1,&s1,&s2);
    a[p1] += s1;
    ll t1 = 0,t2 = 0;
    for (int i = 1;i < m;i ++)
    {
        t1 += a[i] * (m - i);
    }
    for (int i = m + 1;i <= n;i ++)
    {
        t2 += a[i] * (i - m);
    }
    cout << t1 << " " << t2 << endl;
    if (s2 == 0) printf("1");
    else if (t1 >= t2) {
        ll miin = t1 - t2;
        int idx = m;
        ll v;
        for (int i = m;i <= n;i ++)
        {
            if ((v = abs(s2 * (i - m) + t2 - t1)) < miin)
            {
                miin = v;
                idx = i;
            }
        }
        printf("%d",idx);
    } else {
        ll miin = t2 - t1;
        int idx = m;
        ll v;
        for (int i = m;i >= 1;i --)
        {
            if ((v = abs(s2 * (m - i) + t1 - t2)) <= miin)
            {
                miin = v;
                idx = i;
            }
        }
        printf("%d",idx);
    }
        
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[100010];
    ll c = 0;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",a + i);
        if (i == 0) c = a[i];
        else if (a[i] > a[i - 1]) c += a[i] - a[i - 1];
    }
    printf("%lld\n",c);
    return 0;
}
*/

/*int n;
int a[110];
int dp[50010] = {0};

void dfs(int x)
{
    if (x >= 25000) return;
    int s;
    for (int i = 0;i < n;i ++)
    {
        s = x + a[i];
        if (dp[s]) continue;
        if (x != 0) dp[s] = 1;
        dfs(s);
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T --)
    {
        mem(dp,0);
        scanf("%d",&n);
        for (int i = 0;i < n;i ++)
        {
            scanf("%d",a + i);
        }
        dfs(0);
        int c = 0;
        for (int i = 0;i < n;i ++)
        {
            if (!dp[a[i]]) c ++;
        }
        printf("%d\n",c);
    }
    return 0;
}
*/

/*int a[1000010],lll[1000010],rrr[1000010];
int cd[1000010];

int check(int l,int r)
{
    if (l == -1 && r == -1) return 1;
    return l != -1 && r != -1 && a[l] == a[r] && check(lll[l],rrr[r]) && check(lll[r], rrr[l]);
}

int sz(int x)
{
    int s = 1;
    if (lll[x] != -1) s += sz(lll[x]);
    if (rrr[x] != -1) s += sz(rrr[x]);
    cd[x] = s;
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 1;i <= n;i ++)
    {
        scanf("%d",a + i);
    }
    for (int i = 1;i <= n;i ++)
    {
        scanf("%d %d",lll + i,rrr + i);
    }
    sz(1);
    int maax = -1;
    for (int i = 1;i <= n;i ++)
    {
        if (check(lll[i], rrr[i])) maax = max(maax,cd[i]);
    }
    printf("%d\n",maax);
    return 0;
}
*/

//int a[510];
//int nn = 0;
//int d[40000010] = {0};
//
//void dfs(int s)
//{
//    if (s == nn)
//    {
//
//
//        return;
//    }
//    for (int i = s;i <= nn;i ++)
//    {
//
//    }
//}
//
//int main()
//{
//    itn n,m;
//    scanf("%d%d",&n,&m);
//    set<int> arr;
//    int in;
//
//    for (int i = 0;i < n;i ++)
//    {
//        scanf("%d",&in);
//        d[in] ++;
//        arr.insert(in);
//    }
//
//    for (auto i = arr.begin();i != arr.end();i ++)
//    {
//        a[nn ++] = *i;
//    }
//
//
//
//
//    return 0;
//}

//int dx[] = {0,1,0,-1,0,0,0};
//int dy[] = {0,0,1,0,-1,0,0};
//int dz[] = {1,0,0,0,0,-1,0};
//
//typedef pair<pair<int,int>,int> pos;
//
//pos getPair(int x,int y,int z)
//{
//    return make_pair(make_pair(x, y), z);
//}
//
//void getPos(pos p,int &x,int &y,int &z)
//{
//    x = p.first.first;
//    y = p.first.second;
//    z = p.second;
//}
//
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//
//    map<pair<pos,int>,int> a;
//    int x,y,z,v;
//    struct lk {
//        pair<pos,int> n;
//        lk *nxt;
//    } *g[1010] = {NULL};
//    lk *l;
//    pair<pos,int> in[1010];
//    for (int i = 1;i <= n;i ++)
//    {
//        scanf("%d%d%d%d",&x,&y,&z,&v);
//        in[i] = make_pair(getPair(x, y, z),v);
//        a[in[i]] = i;
//        l = (lk*) malloc(sizeof(lk));
//        l -> nxt = g[i];
//        l -> n = in[i];
//        g[i] = l;
//    }
//    int xx,yy,zz,d,t;
//    lk **s;
//    for (int i = 1;i <= n;i ++)
//    {
//        getPos(in[i].first, x, y, z);
//        t = a[in[i]];
//        if (g[t] == NULL) continue;
//        for (int j = 1;j <= n;j ++)
//        {
//            if (i == j) continue;
//
//
////            printf("/////////////////////////////\n");
////            for (int i = 1;i <= n;i ++) {
////                l = g[i];
////                if (l != NULL)
////                {
////                    printf("%d,%d: ",i,a[in[i]]);
////                    while (l != NULL)
////                    {
////                        getPos(l -> n.first, x, y, z);
////                        printf(" <%d %d %d %d>,",x,y,z,l -> n.second);
////                        l = l -> nxt;
////                    }
////                    printf("\n");
////                }
////            }
//
//            getPos(in[j].first, xx, yy, zz);
//            d = abs(xx - x) + abs(yy - y) + abs(zz - z);
//            printf("--%d %d %d-%d\n",xx,yy,zz,a[in[j]]);
//            printf("--%d %d %d-%d\n",x,y,z,t);
//            if ((d == 0 || d == 1))
//            {
//                if (abs(in[i].second - in[j].second) <= m)
//                {
//                    s = g + a[in[j]];
//                    l = *s;
//                    if (l != NULL)
//                    {
//                        while (l != NULL)
//                        {
//                            a[l -> n] = t;
//                            if (l -> nxt == NULL) break;
//                            l = l -> nxt;
//                        }
//                        printf("%d\n",t);
//                        l -> nxt = g[t];
//                        g[t] = *s;
//                        *s = NULL;
//                    }
//
//                }
//            }
//        }
//
////        for (auto i = a.begin();i != a.end();i ++)
////        {
////            printf(">>%d %d %d %d\n",i -> first.first.first.first,i -> first.first.first.second,i -> first.first.second,i -> second);
////        }
//    }
//
//    for (int i = 1;i <= n;i ++) {
//
//        l = g[i];
//        if (l != NULL)
//        {
//            printf("%d: ",i);
//            while (l != NULL)
//            {
//                getPos(l -> n.first, x, y, z);
//                printf(" <%d %d %d %d>,",x,y,z,l -> n.second);
//                l = l -> nxt;
//            }
//            printf("\n");
//        }
//    }
//
//    set<int> all;
//    for (auto i = a.begin();i != a.end();i ++)
//    {
//        printf("<%d %d %d %d\n",i -> first.first.first.first,i -> first.first.first.second,i -> first.first.second,i -> second);
//        all.insert(i -> second);
//    }
//
//
//    printf("%lu\n",all.size());
//
//    return 0;
//}

/*
int main()
{
    int n;
    scanf("%d",&n);
    set<int> a;
    int in;
    set<int>::iterator k;
    while (n --)
    {
        scanf("%d",&in);
        k = a.upper_bound(in);
        if (k != a.end()) a.erase(k);
        a.insert(in);
    }
    printf("%lu\n",a.size());
    return 0;
}
*/

/*int father[100010];
int mother[100010];
int sex[100010];

int mode;
int ok = 0;

set<int> parents;

void upper(int id, int dps)
{
    if (dps == 5 || ok) return;
    
    if (mode) parents.insert(id);
    else {
        ok = parents.find(id) != parents.end();
        if (ok) return;
    }
    if (father[id] != -1) upper(father[id], dps + 1);
    if (mother[id] != -1) upper(mother[id], dps + 1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int id,m,f;
    char s;
    mem(father,-1);
    mem(mother,-1);
    for (int i = 0;i < n;i ++)
    {
        scanf("%d %c %d %d",&id,&s,&f,&m);
        if (s == 'M') s = 1;
        else s = 0;
        sex[f] = 1;
        sex[m] = 0;
        sex[id] = s;
        father[id] = f;
        mother[id] = m;
    }
    int t;
    scanf("%d",&t);
    int id2;
    while (t --)
    {
        scanf("%d %d",&id,&id2);
        if (sex[id] == sex[id2]) {
            printf("Never Mind\n");
            continue;
        }
        parents.clear();
        mode = 1;
        ok = 0;
        upper(id, 0);
        mode = 0;
        upper(id2, 0);
        if (ok) printf("No\n");
        else printf("Yes\n");
    }
    
    return 0;
}
*/

/*
int a[1100000] = {0};

inline void insert(int in)
{
    int i = 1;
    int v = 0;
    while (a[i] != 0) {
        v = in < a[i];
        i *= 2;
        i += v;
    }
    a[i] = in;
}

int main()
{
    int n;
    scanf("%d",&n);
    int in = 0;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&in);
        insert(in);
    }
    int ok = 1,k = 1;
    for (int i = 0;i < n;i ++)
    {
        while (a[k] == 0)
        {
            k ++;
            ok = 0;
        }
        if (i != 0) printf(" ");
        printf("%d",a[k ++]);
    }
    printf("\n");
    if (ok) printf("YES\n");
    else printf("NO\n");
    return 0;
}
*/

//inline int a2n(char a[3])
//{
//    return (a[0] - 'A' + 1) * 26 * 26 + (a[1] - 'A' + 1) * 26 + a[2] - 'A' + 1;
//}
//
//inline char *n2a(int n,char *a)
//{
//    int i = 2;
//    while (n != 0)
//    {
//        a[i --] = n % 26 + 'A' - 1;
//        n /= 26;
//    }
//    return a;
//}
//
//struct Node {
//    int n;
//    int w;
//    Node *nxt;
//} *g[20000] = {NULL};
//
//int main()
//{
//    int n,k;
//    char s_i[4],e_i[4];
//    int s,e;
//    char in[4],in2[4];
//    int e_in,t,t2;
//
//    int em[20000];
//    scanf("%d %d %s %s",&n,&k,s_i,e_i);
//    s = a2n(s_i);
//    e = a2n(e_i);
//    for (int i = 0;i < n - 1;i ++)
//    {
//        scanf("%s %d",in,&e_in);
//        em[a2n(in)] = e_in;
//    }
//
//    Node *node;
//    for (int i = 0;i < k;i ++)
//    {
//        scanf("%s %s %d",in,in2,&e_in);
//        t = a2n(in);
//        t2 = a2n(in2);
//        node = (Node*) malloc(sizeof(Node));
//        node -> n = t2;
//        node -> w = e_in;
//        node -> nxt = g[t];
//        g[t] = node;
//
//        node = (Node*) malloc(sizeof(Node));
//        node -> n = t;
//        node -> w = e_in;
//        node -> nxt = g[t2];
//        g[t2] = node;
//    }
//    #define debug
//    queue<int> q;
//    q.push(s);
//    int dis[20000];
//    int ems[20000] = {0};
//    vector<int> path[20000];
//    int paths[20000] = {0};
//    mem(dis,-1);
//    mem(paths,0);
//    dis[s] = 0;
//    paths[s] = 1;
//    path[s].push_back(s);
//    int tg,cr,apd;
//    while (!q.empty())
//    {
//        cr = q.front();
//        printf("%s ",n2a(cr,in));
//        node = g[cr];
//        while (node != NULL)
//        {
//            tg = node -> n;
//            apd = dis[cr] + node -> w;
//            if (dis[tg] == -1 || apd < dis[tg])
//            {
//                paths[tg] = paths[cr];
//                path[tg] = path[cr];
//                path[tg].push_back(tg);
//                dis[tg] = apd;
//                ems[tg] = ems[cr] + em[tg];
//                q.push(tg);
//            } else if (apd == dis[tg]) {
//
//
//                #ifdef debug
//                    for (int i = 0;i < 20000;i ++)
//                    {
//                        if (dis[i] != -1) {
//                            printf("%s: ",n2a(i, in));
//                            printf("%d, %d, %d\n",dis[i],paths[i],ems[i]);
//                        }
//                    }
//                printf("///\n");
//                #endif
//
//                if (path[cr].size() + 1 > path[tg].size())
//                {
//                    path[tg] = path[cr];
//                    path[tg].push_back(tg);
//                    ems[tg] = ems[cr] + em[tg];
////                    paths[tg] = paths[cr];
//                    q.push(tg);
//                } else if (path[cr].size() + 1 == path[tg].size())
//                {
//                    if (ems[cr] + em[tg] > ems[tg])
//                    {
//                        path[tg] = path[cr];
//                        path[tg].push_back(tg);
//                        ems[tg] = ems[cr] + em[tg];
////                        paths[tg] = paths[cr];
//                        q.push(tg);
//                    }
//                }
//            }
//            node = node -> nxt;
//        }
//        q.pop();
//    }
//#ifdef debug
//    for (int i = 0;i < 20000;i ++)
//    {
//        if (dis[i] != -1) {
//            printf("%s: ",n2a(i, in));
//            printf("%d, %d, %d\n",dis[i],paths[i],ems[i]);
//        }
//    }
//#endif
//    int f = 1;
//    for (auto i = path[e].begin();i != path[e].end();i ++)
//    {
//        if (f) f = 0;
//        else printf("->");
//        printf("%s",n2a(*i,in));
//    }
//    printf("\n%d %d %d\n",paths[e],dis[e],ems[e]);
//    return 0;
//}

/*
int main()
{
    string str;
    cin >> str;
    string m1 = "XiaoQiao";
    string m2 = "XiaoHuiHui";
    int a = 0,b = 0;
    
    for (int i = 0;str[i];i ++)
    {
        if (str[i] == m1[a]) a ++;
        if (str[i] == m2[b]) b ++;
    }
    
    if (a == m1.size() && b == m2.size()) printf("Happy\n");
    else printf("emm\n");
    retunr 0;
}
*/

/*int main()
{
    int n;
    scanf("%d",&n);
    ll x,y,a[100010];
    for (int i = 0;i < n;i ++)
    {
        scanf("%lld %lld",&x,&y);
        a[i] = y * (x - y) * (x - y);
    }
    sort(a,a + n);
    ll sum = 0;
    for (int i = 1;i < n;i ++)
    {
        sum += a[i] - a[i - 1];
    }
    printf("%lld\n",sum);
    return 0;
}
*/

/*
ll a,b;

inline double y1(double x)
{
    return -x / 2 + a / 4.0;
}

inline double y2(double x)
{
    return -3 * x + b;
}

inline ll finf(double x,double y)
{
    ll z = 0;
    for (ll i = floor(x);i <= ceil(x);i ++)
    {
        for (ll j = floor(y);j <= ceil(y);j ++)
        {
            if (j <= y1(i) && j <= y2(i))
            {
                z = max(z,i + j);
            }
        }
    }
    return z;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t --)
    {
        scanf("%lld %lld",&a,&b);
        double x = (4 * b - a) / 10.0,
        y = (3 * a - 2 * b) / 10.0;
        ll z = 0;
        if (x >= 0 && y >= 0)
        {
//            printf("%f %f\n",x,y);
            z = finf(x,y);
        } else if (x < 0 && y >= 0)
        {
            z = b;
        } else if (x >= 0 && y < 0)
        {
            z = floor(a / 2.0);
        }
        
        printf("%lld\n",z);
    }
    return 0;
}
*/

//int main()
//{
//    int a[1000] = {0};
//    a[1] = -1; //后手
//    a[2] = 1; //先手
//    printf("XiaoQiao\n");
//    fir (int i = 2;i <= 100;i ++)
//    {
//        int aa = i / 2;
//        int bb = i - aa;
//        if (a[aa] != a[bb]) {
//            a[i] = 1;
//            printf("XiaoHuiHui\n");
//        } else {
//            if (a[aa] == 1)
//            {
//                printf("XiaoQiao\n");
//                a[i] = -1;
//            } else if (a[aa] == -1)
//            {
//                printf("XiaoHuiHui\n");
//                a[i] = 1;
//            }
//        }
//
//    }
//    reutnr 0;
//}

/*
const long long mod = 1e9+7;

ll a[100010] = {0};

long long func(int x) {
    if (x == 1 || x == 0){
        return 1;
    }
    return (x * (a[x - 1] == 0 ? (a[x - 1] = func(x - 1)) : a[x - 1]) + (x - 1) * (a[x - 2] == 0 ? (a[x - 2] = func(x - 2)) : a[x - 2])) % mod;
}

int n;

int main() {
    cin>>n;
    cout << func(n);
    return 0;
}
*/

/*
int  main()
{
    ll k;
    scanf("%lld",&k);
    if (k % 2) printf("-1\n");
    else printf("1\n");
    return 0;
}
*/

//ll s2l(char *a,int l)
//{
//    ll d = 1;
//    ll s = 0;
//    for (int i = 0;i < l;i ++)
//    {
//        s += (a[l - i - 1] - '0') * d;
//        d *= 10;
//    }
//    return s;
//}
//
//int main()
//{
//    int T;
//    scanf("%d",&T);
//    char n[20];
//    ll sum = 0;
//    ll l,m,r,rs;
//    int s;
//    while (T --)
//    {
//        sum = 0;
//        scanf("%s",n);
//        s = (int) strlen(n);
//        for (int i = 0;i < s - 2;i ++)
//        {
//            l = s2l(n, i);
//            m = s2l(n + i, 3);
//            r = s2l(n + i + 3,s - i - 3);
//            printf("%lld %lld %lld\n",l,m,r);
//            if (i == 0)
//            {
//                if (s2l(n, 3) < 520) continue;
//            }
//            printf("++r %.0lf\n",pow(10,s - i - 3));
//            rs = pow(10,s - i - 3);
//            if (m > 520) {
//                sum += (1 + l) * rs;
//            } else {
//                sum += l * rs;
//                if (m == 520)
//                {
//                    sum += r + 1;
//                }
//            }
//        }
//        printf("%lld\n",sum);
//    }
//    return 0;
//}

/*
int main()
{
    int T;
    scanf("%d",&T);
    ll c;
    ll s;
    int a;
    while (T --)
    {
        scanf("%lld",&c);
        int nok = 1;
        ll x = c * c;
        for (ll i = c - 1;i >= 1;i --)
        {
            s = x - i * i;
            a = sqrt(s);
            if (a * a == s) {
                nok = 0;
//                printf("%d %d %d\n",a,i,c);
                break;
            }
        }
        if (nok) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
*/

/*
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int m = min(x,y);
    if (m % 2) {
        printf("ii\n");
    } else {
        if ((x + y) % 2) printf("ii\n");
        else printf("gg\n");
    }
    return 0;
}
*/

/*
int main()
{
    int n,k;
    int arr[100010];
    ll sum[100010];
    scanf("%d %d",&n,&k);
    for (int i = 0;i < n;i ++) scanf("%d",arr + i);
    sort(arr,arr + n,greater<int>());
    sum[1] = arr[0];
    sum[0] = 0;
    for (int i = 2;i <= n;i ++)
    {
        sum[i] = sum[i - 1] + arr[i - 1];
    }
//    for (int i = 0;i <= n;i ++)
//        printf("%lld ",sum[i]);
    ll maax = 0;
    int a,b;
    for (int i = 0;i < k;i ++)
    {
        scanf("%d %d",&a,&b);
//        printf("%lld\n",sum[b] - sum[a - 1]);
        maax = max(maax,sum[b] - sum[a - 1]);
    }
    printf("%lld\n",maax);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    double x1,x2,x3,y1,y2,y3;
    double s[100010];
    int a[100010];
    double A,B,C;
    int p = 0;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d %lf %lf %lf %lf %lf %lf",a + i,&x1,&y1,&x2,&y2,&x3,&y3);
        if (i == 0) p = a[i];
        A = y1 - y2;
        B = x1 - x2;
        C = B * y1 - A * x1;
        s[i] = fabs(A * x3 - B * y3 + C);
    }
    sort(a,a + n);
    sort(s,s + n);
//
//    for (int i = 0;i < n;i ++)
//    {
//        printf("%d %lf\n",a[i],s[i]);
//    }
    
    for (int i = 0;i < n;i ++)
    {
        if (a[i] == p)
        {
            printf("%.0f\n",s[i]);
            break;
        }
    }
    return 0;
}
*/

/*
int main()
{
    int n,L,t;
    scanf("%d%d%d",&n,&L,&t);
    int s = 0;
    int p,d;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d %d",&p,&d);
        if (d == 1)
        {
            if (p + t < L) s ++;
        } else if (d == 2)
        {
            if (p - t > 0) s ++;
        }
    }
    printf("%d\n",s + 1);
    
    return 0;
}
*/

/*
int a[110][110];
int d[110][110] = {0};

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int xe,ye;

int n,m;

void dfs(int x,int y,int dps)
{
    if ((x == xe - 1 && y == ye - 1) || (d[y][x] != -1 && d[y][x] <= dps))
    {
        if (d[y][x] > dps || d[y][x] == -1) d[y][x] = dps;
        return;
    }
    d[y][x] = dps;
    for (int i = 0;i < 4;i ++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && yy >= 0 && xx < m && yy < n && a[yy][xx] != 1)
        {
            dfs(xx,yy,dps + 1);
        }
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    scanf("%d %d",&ye,&xe);
    mem(d,-1);
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < m;j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    dfs(0, 0, 0);
    printf("%d\n",d[ye - 1][xe - 1]);
    return 0;
}
*/

/*
int n;
set<int> a;


inline bool jd(int y)
{
    a.clear();
    if (y < 1000) a.insert(0);
    while (y != 0)
    {
        a.insert(y % 10);
        y /= 10;
    }
    return a.size() == n;
}

int main()
{
    int y;
    scanf("%d %d",&y,&n);
    int i = 0;
    for (;!jd(y);y ++,i ++);
    printf("%d %04d\n",i,y);
    return 0;
}
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    int tag[1010] = {0};
    int k,in;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d",&k);
        for (int j = 0;j < k;j ++)
        {
            scanf("%d",&in);
            tag[in] ++;
        }
    }
    int maax = -1,maax_tag = 0;
    for (int i = 1;i <= 1000;i ++)
    {
        if (tag[i] >= maax)
        {
            maax = tag[i];
            maax_tag = i;
        }
    }
    printf("%d %d\n",maax_tag,maax);
    return 0;
}
*/

/*
int main()
{
    cio
    string s;
    string p2 = "",p14 = "";
    int i = 0;
    while (cin >> s)
    {
        if (s == ".") break;
        i ++;
        if (i == 2) p2 = s;
        else if (i == 14) p14 = s;
    }
    if (p2 == "") cout << "Momo... No one is for you ...\n";
    else if (p2 != "" && p14 == "") cout << p2 << " is the only one for you...\n";
    else if (p2 != "" && p14 != "") cout << p2 << " and " << p14 << " are inviting you to dinner...\n";
    return 0;
}
*/


//int main()
//{
//    int n,r;
//    scanf("%d %d",&n,&r);
//    double x[110];
//    double y[110];
//    for (int i = 1;i <= n;i ++)
//    {
//        scanf("%lf %lf",x + i,y + i);
//    }
//    double xm = (x[1] + x[2]) / 2,
//        ym = (y[1] + y[2]) / 2;
//    double x0 = xm + sqrt((r * r - (x[1] - xm) * (x[1] - xm) - (y[1] - ym) * (y[1] - ym)) / ((x[1] - x[2]) * (x[1] - x[2]) / ((y[2] - y[1]) * (y[2] - y[1])) + 1)),
//    y0 = (x[1] - x[2]) * (x0 - (x[1] + x[2]) / 2) / (y[2] - y[1]) + (y[1] + y[2]) / 2;
//    double x0_ = xm - sqrt((r * r - (x[1] - xm) * (x[1] - xm) - (y[1] - ym) * (y[1] - ym)) / ((x[1] - x[2]) * (x[1] - x[2]) / ((y[2] - y[1]) * (y[2] - y[1])) + 1)),
//    y0_ = (x[1] - x[2]) * (x0_ - (x[1] + x[2]) / 2) / (y[2] - y[1]) + (y[1] + y[2]) / 2;
//
//
//    printf("%f %f %f %f",x0,y0,x0_,y0_);
//    return 0;
//}

/*
int main()
{
    int n;
    scanf("%d",&n);
    string str;
    getchar();
    cio
    getline(cin, str);
    char a[1110][1110] = {0};
    ulong s = str.size();
    int i = 0;
    int v = 0;
    for (i = 0;v < s;i ++)
    {
        for (int j = 0;j < n && v < s;j ++,v ++)
        {
            a[j][i] = str[v];
        }
    }
//    if (s < n) n = s;
    for (int k = 0;k < n;k ++)
    {
        for (int j = 0;j < i;j ++)
        {
            if (a[k][i - j - 1] == 0) printf(" ");
            else printf("%c",a[k][i - j - 1]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*(int main()
{
    int n;
    scanf("%d",&n);
    char in;
    double a;
    while (n --)
    {
        scanf(" %c %lf",&in,&a);
        if (in == 'M') in = 1;
        else in = 0;
        if (in) printf("%.2f\n",a / 1.09);
        else printf("%.2f\n",a * 1.09);
    }
    
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
    sort(a,a + n);
    int mid = n / 2;
    int l = 0,
    r = 0;
    for (int i = 0;i < mid;i ++)
    {
        l += a[i];
    }
    for (int i = mid;i < n;i ++)
    {
        r += a[i];
    }
    printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d\n",n - mid,mid,r - l);
    return 0;
}
*/

/*
int n;
char a[110][110];
int vis[110][110] = {0};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void dfs_h(int x,int y,char c)
{
    vis[y][x] = 1;
    for (int i = 0;i < 4;i ++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && xx < n && y >= 0 && y < n && a[yy][xx] == c && !vis[yy][xx])
        {
            dfs_h(xx, yy, c);
        }
    }
}

int jd_c(char a,char b)
{
    if (a == b) return 1;
    if (a == 'R' && b == 'G') return 1;
    if (b == 'R' && a == 'G') return 1;
    return 0;
}

void dfs_c(int x,int y,char c)
{
    vis[y][x] = 0;
    for (int i = 0;i < 4;i ++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && xx < n && y >= 0 && y < n && jd_c(a[yy][xx], c) && vis[yy][xx])
        {
            dfs_c(xx, yy, c);
        }
    }
}

int main()
{
    scanf("%d",&n);
    for (int i = 0;i < n;i ++)
    {
        scanf(" ");
        for (int j = 0;j < n;j ++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    int sum_h = 0;
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            if (vis[i][j] == 0)
            {
                sum_h ++;
                dfs_h(j, i, a[i][j]);
            }
        }
    }
    int sum_c = 0;
    for (int i = 0;i < n;i ++)
    {
        for (int j = 0;j < n;j ++)
        {
            if (vis[i][j] == 1)
            {
                sum_c ++;
                dfs_c(j, i, a[i][j]);
            }
        }
    }
    printf("%d %d\n",sum_h,sum_c);
    return 0;
}
*/

/*
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[1000010] = {0};
    int i1,i2;
    for (int i = 0;i < n;i ++)
    {
        scanf("%d %d",&i1,&i2);
        a[i2] = i1;
    }
    ll sum = 0;
    
    for (int i = 0;i <= k * 2;i ++)
    {
        if (i <= 1000000) sum += a[i];
        else break;
    }
    ll maax = sum;
    for (int i = k + 1;i <= 1000000;i ++)
    {
        if (i - k - 1 >= 0) sum -= a[i - k - 1];
        if (i + k <= 1000000) sum += a[i + k];
        if (sum > maax) {
            maax = sum;
        }
    }
    printf("%lld\n",maax);
    return 0;
}
*/

////深搜
/*
struct Node {
    int to;
    int id;
    Node *nxt;
} *g[50010] = {NULL};

int vis[50010] = {0};
vector<int> ans;

int dfs(int k)
{
    vis[k] = 1;
    int d = 0;
    Node *node = g[k];
    int to;
    while (node != NULL)
    {
        to = node -> to;
        if (vis[to])
        {
            node = node -> nxt;
            continue;
        }
        if (!dfs(to))
        {
            d ++;
            ans.push_back(node -> id);
        }
        node = node -> nxt;
    }
    return d % 2;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int u,v;
    Node *node;
    for (int i = 1;i <= m;i ++)
    {
        scanf("%d %d",&u,&v);
        node = (Node*) malloc(sizeof(Node));
        node -> to = v;
        node -> id = i;
        node -> nxt = g[u];
        g[u] = node;
        
        node = (Node*) malloc(sizeof(Node));
        node -> to = u;
        node -> id = i;
        node -> nxt = g[v];
        g[v] = node;
    }
    
    for (int i = 1;i <= n;i ++)
    {
        if (!vis[i])
        {
            if (!dfs(i)) {
                printf("-1");
                return 0;
            }
        }
    }
    printf("%lu\n",ans.size());
    sort(ans.begin(),ans.end());
    for (auto i = ans.begin();i != ans.end();i ++)
    {
        printf("%d\n",*i);
    }
    return 0;
}
*/


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


/*
ll p[200010];
pair<ll,ll> a[200010];
void pl(int l,int r,int k){
    p[l]+=k;
    p[r+1]-=k;
    return;
}

int cmp(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return a.first > b.first;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int u,v;
    vector<pair<int,int>> k;
    for (int i = 0;i < m;i ++) {
        scanf("%d%d",&u,&v);
        k.push_back(make_pair(u,v));
        pl(u,v,1);
    }
    
    for (int i = 1;i <= n;i ++) {
        a[i].first = p[i] + a[i - 1].first;
        a[i].second = i;
    }
    
    sort(a + 1, a + n,cmp);
    ll b[200010];
    for (int i = 1;i <= n;i ++) {
        b[a[i].second] = n - i + 1;
    }
    ll s[200010];
    s[1] = b[1];
    
    for (int i = 2;i <= n;i ++) {
        s[i] = s[i - 1] + b[i];
    }
    ll x = 0;
    for (auto i : k) {
        x += s[i.second] - s[i.first - 1];
    }
    printf("%lld\n",x);
    return 0;
}
*/

//int main()
//{
//    int T;
//    scanf("%d",&T);
//    int a,b,n;
//    while (T --) {
//        scanf("%d%d%d",&n,&a,&b);
//        for (int i = 0;i < n - 2;i ++)
//        {
//
//        }
//    }
//    return 0;
//}


/*
int main()
{
    string str;
    cin >> str;
    int hasD = 0;
    double a = 0,t;
    ll u = 0,v = 0;
    for (int i = 0;str[i];i ++) {
        if (str[i] == '+') {
//            printf("%lld %lld\n",u,v);
            if (hasD) {
                t = (1 + v) / 2.0;
                t *= u;
                a += t;
            } else {
                a += u;
            }
            u = 0;
            v = 0;
            hasD = 0;
        } else if (str[i] == 'd') {
            hasD = 1;
        } else {
            if (!hasD) {
                u *= 10;
                u += str[i] ^ 48;
            } else {
                v *= 10;
                v += str[i] ^ 48;
            }
        }
    }
    if (hasD) {
        t = (1 + v) / 2.0;
        t *= u;
        a += t;
    } else {
        a += u;
    }
    if (a == ceil(a)) printf("%.0f\n",a);
    else printf("%.1f\n",a);

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
    int T;
    scanf("%d",&T);
    int n,a,b;
    while (T --) {
        scanf("%d%d%d",&n,&a,&b);
//        n -= 2;
        n /= gcd(a,b);
        if (n % 2) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/

/*
int main()
{
    int n,m,x;
    scanf("%d%d%d",&n,&m,&x);
    int c[20];
    int k[20][20];
    for (int i = 0;i < n;i ++) {
        scanf("%d",c + i);
        for (int j = 0;j < m;j ++) {
            scanf("%d",&k[i][j]);
        }
    }
    int u = 1 << n;
    int y,ss[100];
    ll mm;
    ll kk;
    
        kk = -1;
        for (int j = 0;j < u;j ++) {
            y = j;
            mem(ss,0);
            mm = 0;
            for (int v = 0;v < n;v ++) {
                if (y & 1)
                {
                    for (int i = 0;i < m;i ++)
                        ss[i] += k[v][i];
                    mm += c[v];
                }
                if (y != 0) y >>= 1;
            }
            int ok = 1;
            for (int i = 0;i < m;i ++) {
                if (ss[i] < x) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                if (kk == -1) kk = mm;
                kk = min(kk,mm);
            }
        }
        printf("%lld\n",kk);
    return 0;
}
*/

/*
int n;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

vector<string> a(20);

int w,h,k;

int ok = 0;

void dfs(int d)
{
    if (ok || d >= k) return;
    int xx,yy,x,y;
    for (x = 0;x < w;x ++) {
        for (y = 0;y < h;y ++) {
            if (a[y][x] == 'R')
            {
                for (int j = 0;j < 4;j ++) {
                    xx = x;
                    yy = y;
                    do {
                        xx += dx[j];
                        yy += dy[j];
                    } while (xx >= 0 && xx < w && yy >= 0 && yy < h && a[yy][xx] != 'X' && a[yy][xx] != 'R');
                    xx -= dx[j];
                    yy -= dy[j];
                    if (a[yy][xx] == 'D') {
                        ok = 1;
                        return;
                    }
                    swap(a[yy][xx],a[y][x]);
                    dfs(d + 1);
                    swap(a[yy][xx],a[y][x]);
                }
            }
        }
    }
}

int main()
{
    scanf("%d%d%d",&w,&h,&k);
    char in;
    for (int i = 0;i < h;i ++) {
        scanf(" ");
        for (int j = 0;j < w;j ++) {
            scanf("%c",&in);
            a[i] += in;
        }
    }
    dfs(0);
    if (ok) printf("YES\n");
    else printf("NO\n");
    return 0;
}
*/

/*
class Cal {
protected:
    double a,b;
public:
    
    Cal(double a,double b):a(a),b(b)
    {}
    
    double add()
    {
        return a + b;
    }
    
    double sub()
    {
        return a - b;
    }
};

class Senior : public Cal {
public:
    double multy()
    {
        return a * b;
    }
    
    double div()
    {
        return a / b;
    }
};

int main()
{
    double a,b;
    cin >> a >> b;
    Senior *s = (Senior*) new Cal(a,b);
    cout << s -> add() << endl;
    cout << s -> sub() << endl;
    cout << s -> multy() << endl;
    cout << s -> div() << endl;
    delete s;
    return 0;
}
*/
