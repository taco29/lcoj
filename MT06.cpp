#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for(int i = 0; i < a; i++)
#define FORR for(int j = 0; j < b; j++)
using namespace std;

bool check(int c){
    if(c == 1){
        return true;
    }
    if(c == 0){
        return true;
    }
    int g = sqrt(c);
    if(g * g == c){
        return true;
    }
    return false;
}

int main(){
    f();
    int a, b;
    cin >> a >> b;
    int c[a][b];
    FOR{
       FORR{
            cin >> c[i][j];
        }
    }
	set<int> s;
    FOR{
       FORR{
            if(check(c[i][j])){
                s.insert(c[i][j]);
            }
        }
    }
    for(set<int>::iterator i = s.begin(); i != s.end(); ++i){
        cout << *i << " ";
    }
    return 0;
}
