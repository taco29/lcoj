//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

int main(){
    f();
    int n;
    cin >> n;
    bool check[n + 1];
    for(int i = 2; i <= n; i++){
        check[i] = true;
    }
    for(int i = 2; i <= n; i++){
        if(check[i]){
            for(int j = 2 * i; j <= n; j+=i){
                check[j] = false;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(check[i] == true){
            cout << i << " ";
        }
    }
    return 0;
}
