// https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, X=0, i=0;
    cin >> n;
    cin.ignore();
    vector<string> a(n);
    while(i<n){
        getline(cin, a[i]);
        ++i;
    }
    for(auto& inst : a){
        if(inst == "++X" || inst == "X++")
            ++X;
        else if(inst == "--X" || inst == "X--")
            --X;
    }
    cout << X;
    return 0;
}