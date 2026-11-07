#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main(){
    
    int n, t;
    string a;
    
    cin >> n;
    cout << " ";
    cin >> t;
    
    cout << '\n';
    
    cin >> a;
    
    while(t){
        for(int i=0; i<n-1; i++){
            if(a[i]=='B' && a[i+1]=='G'){
                swap(a[i],a[i+1]);
                i++;
            }
        }
        t--;
    }
    
    cout << '\n' << a;
        
    return 0;
}