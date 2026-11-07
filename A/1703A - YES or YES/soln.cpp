#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(auto &e:a){
        if(e=="YES" or e=="yes" or e=="Yes" or e=="yEs" or e=="yeS" or e=="YEs" or e=="yES" or e=="YeS")
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    return 0;
}