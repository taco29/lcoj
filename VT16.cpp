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
    int n, count = 0;
    vector<int> num;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        num.push_back(n);
    }
    for(int i = 0; i < num.size(); i++){
        if(num[i] < 0){
            cout << num[i] << " ";
            count++;
        }
    }
    if(count == 0){
        cout<< "NOT FOUND";
    }
    return 0;
}