// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    cout << " ";
    cin >> k;
    vector<int> a(n,0);
    for(auto &e: a){
        cin >> e;
        cout << " ";
    }
    int sc = a[k-1];
    int v=0;
    for(auto &e : a){
        if(e!=0 && e>=sc)
            v++;
    }
    cout << '\n' << v;
    return 0;
}