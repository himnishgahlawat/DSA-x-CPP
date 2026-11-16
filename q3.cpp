#include<iostream>
#include<string>
using namespace std;

void rotate(int arr[],int n,int r){
    for(int i = r;i<n;i++) {
        cout<<arr[i]<<" ";

    }
    for(int i = 0;i<r;i++) {
        cout<<arr[i]<<" ";
    }
}
void bs(int arr[],int n){
    int swaps=0;
    for(int i = 0;i<n-1;i++) {
        for(int j = 1;j<n-i;j++) {
            if(arr[j]<arr[j-1]) {
                swap(arr[j],arr[j-1]);
                swaps++;
            }
        }
    }
    cout<<"The array of bs : ";
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"Num of swapss: "<<swaps;
}
int main() {
    int n=5;
    int arr[n]= {3,4,2,6,5};
    // int r;
    // cin>>r;
    // rotate(arr,n,r);

    // int num = 123456;
    // string s= to_string(num);
    // int k = 2;
    // for(int i = k;i<s.size();i++) {
    //     cout<<s[i];
    // }
    // for(int i = 0;i<k;i++) {
    //     cout<<s[i];
    // }
    // cout<<endl;
    bs(arr,n);
}