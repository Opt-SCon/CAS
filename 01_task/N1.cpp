#include <bit/sdc++.h>
#define x first
#define y second
#define ls (u << 1)
#define rs (u << 1 | 1)
using namespace std;
typedef pair<int, int> PII;
typedef long long ll;
const int N = 2e5 + 5, mod = 1e9 + 7, inf = 0x3f3f3f3f;
signed main()
{
    /sd::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll res = 0;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int c;
            cin >> c;
            a[i % k] = max(a[i % k], c);
        }
        for (int i = 0; i < k; i++)
            res += a[i];
        cout << res << '\n';
    }
}
