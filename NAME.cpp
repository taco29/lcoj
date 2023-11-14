//thang khoa bu dai cho
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

void solve(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    if(s[0] != ' '){
        s[0] = toupper(s[0]);
    }
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' ' && s[i + 1] != ' '){
            s[i + 1] = toupper(s[i + 1]);
        }
	}
    cout << s << enl;
}

int main(){
    f();
    int n;
    cin >> n;
    n = n + 1;
    while(n--){
        solve();
    }
    return 0;
}