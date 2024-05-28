#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int p,q;
        p=a-c;
        q=b-d;
        if((p<0&&q>0)||(p>0&&q<0)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

    }
}
