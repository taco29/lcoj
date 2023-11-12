#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < a; i++)
#define FORR for (int j = 0; j < b; j++)
using namespace std;

int main(){
    f();
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    while(n--){
        char a;
        int count = 0;
        cin >> a;
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
            if(tolower(a) == s[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}