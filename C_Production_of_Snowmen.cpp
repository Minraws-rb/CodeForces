#include<iostream>
using namespace std;

int main(){
    int t;
    int a[20], b[20], c[20];
    int n;
    int count;
    cin>>t;
    for(int x = 0; x<t; x++){
        bool checker;
        cin>>n;
        for(int i = 0; i <n; i++){
            cin>> a[i];
        }
        cout<<"\n";
        for(int i = 0; i <n; i++){
            cin>> b[i];
        }
        for(int i = 0; i <n; i++){
            cin>> c[i];
        }
        count = 0;
        for(int i=0;i<n;i++){
            a[i+n]= a[i];
            for(int j=0;j<n;j++){
                b[j+n]= b[j];
                for(int k = 0; k<n; k++){
                    c[k+n]= c[k];
                    checker = true;
                    for(int p = 0; p<n; p++){
                        checker = checker && (a[i+p]<b[j+p]&&b[j+p]<c[k+p]);
                    }
                    if(checker){
                        count = count +1;
                    }
                       
                    }
    
                }
            }
                    cout<< count;

        }

    }
