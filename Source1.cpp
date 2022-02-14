#define _CRT_SECURE_NO_WARNINGS

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <climits>

using namespace std;

typedef long long int64;
typedef pair <int, int> pii;
typedef pair <int, pii> piii;

int n, p;
string s;

void tester(int x) {
    if (x == n) return;
    for (int j = (int)s[x] + 1; j < (int)'a' + p; ++j) {
        if (x >= 1) if (j == s[x - 1]) continue;
        if (x >= 2) if (j == s[x - 2]) continue;
        s[x] = (char)j;
        tester(x + 1);
        cout << s;
        exit(0);
    }
    s[x] = 'a' - (char)1;
}


int main()
{
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    scanf("%d%d", &n, &p);
    cin >> s;
    for (int i = n - 1; i >= 0; --i) {
        tester(i);
    }
    printf("NO");
    return 0;
}