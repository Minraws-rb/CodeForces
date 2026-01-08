#include<iostream>
using namespace std;

int main(){
    int t, x, n;
    
    cin>>t;
    for(int i = 0; i< t; i++){
        int sum = 0;
     cin>> x;
     cin>> n;
        for(int j = 1; j <= n; j++){
            if(j%2!=0){
                sum = sum + x;
            }
            else {
                sum = sum-x;
            }
        }
         cout<< sum<<"\n";
    }
    return 0;
}