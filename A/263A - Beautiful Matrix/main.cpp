// https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int moves;
    vector<int> index = {0,0};
    vector<int> row(5,0);
    vector<vector<int>> a(5, row);
    for(auto &row : a){
        for(auto &e : row){
            cin >> e;
            cout << " ";
        }
    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(!a[i][j])
                continue;
            else{
                index={i,j};
            }
        }
    }
    
        
    if(index==vector<int>{0,0} || index==vector<int>{0,4} || index==vector<int>{4,0} || index==vector<int>{4,4} )
        moves = 4;
    else if(index==vector<int>{2,1} || index==vector<int>{2,3} || index==vector<int>{1,2} || index==vector<int>{3,2} )
        moves = 1;
    else if(index==vector<int>{1,1} || index==vector<int>{1,3} || index==vector<int>{3,1} || index==vector<int>{3,3} || index==vector<int>{2,0} || index==vector<int>{2,4} || index==vector<int>{0,2} || index==vector<int>{4,2} )
        moves = 2;
    else if(index==vector<int>{2,2})
        moves = 0;
    else
        moves = 3;
        
    cout << '\n' << moves;
    
    return 0;
}