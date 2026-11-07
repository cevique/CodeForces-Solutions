//https://codeforces.com/problemset/problem/231/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t=0, sept=0;
    vector<int> row(3,0);
    vector<vector<int>> grid(n, row);
    for(auto &row : grid){
        for(auto &e : row){
            cin >> e;
            sept += (e!=0);
            cout << " ";
        }
        t += sept>1;
        sept=0;
    }
    cout << "\r" << t;
    return 0;
}