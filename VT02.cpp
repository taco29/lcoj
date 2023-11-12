//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < n; i++)
#define FORR for (int j = 0; j < m; j++)
using namespace std;

void solve(){

}

int main(){
    f();
    long n;
    cin >> n;
    vector<int> a(n);
    FOR{
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int maxx = a[n-1];
    for(int i = n - 2; i >= 0; i--){
        if(a[i] < maxx){
            cout << a[i];
            break;
        }
    }
    cout << "NOT FOUND";
    return 0;
}