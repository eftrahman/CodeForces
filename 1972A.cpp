#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int e=0;

        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(b[i]<a[i-e]){
                e=e+1;
            }

        }
        cout<<e<<endl;
    }
}
