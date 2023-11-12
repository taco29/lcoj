#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define PI acos(-1)
#define ll long long
using namespace std;

int main(){
    f();
    long n;
    cin >> n;
    while (n-- > 0)
    {
        ll x;
        cin >> x;
        if (x == 1)
            cout << 1 << endl;
        else
        {
            ll s = 0;
            for (int i = 1; i < sqrt(x); i++)
            {
                if (x % i == 0)
                    s += i + x / i;
            }
            if (sqrt(x) == (int)sqrt(x))
                s += (int)sqrt(x);
            cout << s;
            cout << endl;
        }
    }
    return 0;
}
