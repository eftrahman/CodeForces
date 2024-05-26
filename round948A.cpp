#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==m){
            cout<<"Yes"<<endl;
        }
        else if(n>m){
            int d;
            d=n-m;
            if(d%2==0){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
