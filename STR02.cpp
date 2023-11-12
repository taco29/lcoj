#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < a; i++)
#define FORR for (int j = 0; j < b; j++)
using namespace std;

void solve(string s){
    getline(cin, s);
        int i = 0;
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        if (s[0] != ' ')
        {
            s[0] = toupper(s[0]);
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ')
            {
                s[i + 1] = toupper(s[i + 1]);
            }
        }
        cout << s << endl;
}

int main()
{
    f();
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        solve(s);
    }
    return 0;
}
