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
    string s;
    getline(cin,s);
    stringstream ss(s);
    string a;
    vector<string> v;
    while(ss >> a){
        v.push_back(a);
    }
    cout<<v.size();   
    return 0;
}