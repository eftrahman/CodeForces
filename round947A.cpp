#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int s=0;
        int b=0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                sum++;
                s=1;
            }
            if(s==1){
                if(a[i]>a[0]){
                    b=1;
                }
            }
        }
        if(b==1||sum>1){
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
}
