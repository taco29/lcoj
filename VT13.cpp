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
    long n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        }
    int maxx = a[0] + a[1];
    int b = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] + a[i + 1] >= maxx){
            maxx = a[i] + a[i + 1];
            b = i;
        }
    }
    if(a[n - 1] + a[0] >= maxx){
        cout << a[n - 1] << " " << a[0];
    }else{
        cout << a[b] << " " << a[b + 1];
    }    
    return 0;
}