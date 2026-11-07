#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b=a[0],w=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>b){
            b=a[i];
            s++;
        }
        else if(a[i]<w){
            w=a[i];
            s++;
        }
    }
    cout<<s;
    return 0;
}