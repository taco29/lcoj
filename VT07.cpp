//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 1; i <=11; i++)
#define enl "\n"
using namespace std;

int main(){
    f();
    long a[1000];
    FOR{
        cin >> a[i];
        }
    bool check = false;
    for(int i = 1; i <= 10; i++){
        if(a[i] == a[11]){
            cout << i << " ";
            check = true;
        }
    }
    if(check == false){
        cout << "-1";
    }
    return 0;
}
