#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // sorting array:
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int f,s=89099,t=89099;
    f = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]!=f){
            s = arr[i];
            break;
        }
    }
    if(s!=89099){
        for(int i=0;i<5;i++){
            if(arr[i]!=s&&arr[i]<s){
                t = arr[i];
                break;
            }
        }
    }
    if(t!=89099){
        cout<<"The third higest number is "<<t;
    }
    else{
        cout<<"Third largest number does not exists.";
    }
}