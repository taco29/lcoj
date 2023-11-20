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
    long n;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxx = a[1];
    int index = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= maxx){
            maxx = a[i];
            index = i;
        }
    }
    cout << index;
    return 0;
}