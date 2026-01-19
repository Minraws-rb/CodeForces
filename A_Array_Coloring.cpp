#include<iostream>
using namespace std;

int main(){
    int t;
    int arr[20];
    int color[20];
    int temp;
    int temp2;
    int n;
    string result;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        for(int j =0; j<n; j++){
            cin>>arr[j];
            if(j%2 == 0){
                color[j] = 0;
            }
            else{
                color[j] = 1;
            }
        }
        for(int k = 0; k<n; k++){
            for(int l = k+1; l<n; l++){
                if(arr[l]<arr[k]){
                    temp = arr[l];
                    arr[l] = arr[k];
                    arr[k] = temp;

                    temp2 = color[l];
                    color[l] = color[k];
                    color[k] = temp2;
                }
            }
        }
        for(int m = 0; m< n-1 ; m++){
            if (color[m]!= color[m+1]){
                result = "YES";
            }
            else{
                result = "NO";
                break;
            }
        }
        cout<<result;
        cout<<"\n";
    }
}