#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    
    //LEFT SKEWES TRIANGLE
    for (int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    //REVERSE LEFT SKEWED PYRAMID
    for (int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    //RIGHT SKEWED PYRAMID && PYRAMID
    for(int i=1;i<=n;i++){
        int s;
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
     cout<<endl;
    
    for(int i=1;i<=n;i++){
        int s;
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
     cout<<endl;
     
    int num=1;
     for (int i=0;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
    
    


    return 0;
}
