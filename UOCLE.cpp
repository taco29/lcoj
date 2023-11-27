//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

int main() {
    f();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 1; i <= n; i++){
            if(n % i == 0 && i % 2 != 0){
                a.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        if(!a.empty()){
            sort(a.begin(), a.end());
            cout<<a[a.size()-1]<<enl;
        }
    }
    return 0;
}
//!solve