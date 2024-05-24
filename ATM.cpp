#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    float Y;
    scanf("%d %f",&X,&Y);
    if(X%5==0&&Y>(X+0.5)){
        printf("%.2f",Y-X-0.5);
    }
    else{
        printf("%.2f",Y);
    }
    return 0;
}
