#include<iostream>
using namespace std;
// void insertionsort(int arr[],int n) {
//     for(int i =0;i<n;i++) {
//         for(int j =i;j>0;j--) {
//             if(arr[j-1]>arr[j]) {
//                 swap(arr[j-1],arr[j]);
//             }
//         }
//     }
// }
// void secondlargest(int arr[],int n) {
//     int max = arr[0];
//     int max2=arr[1];
//     for(int i = 0;i<n;i++) {
//         if(max<arr[i]) {
//             max2 = max;
//             max=arr[i];
//         }
//         else if(max2<arr[i] && max2!=max) {
//             max2=arr[i];
//         }
//     }
//     cout<<"largest elemnt : " <<max<<endl;
//     cout<<"2nd largest element : "<<max2<<endl;
// }

// void deletion(int arr[],int n,int val) {
//     for(int i = 0;i<n;i++) {
//         if(arr[i]==val) {
//             for(int j = i;j<n-1;j++) {
//                 arr[j]=arr[j+1];
//             }
//             n--;
//             i--;
//         }
//     }
//     cout<<"Array after deletion : ";
//     for(int i = 0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// void freq(int arr[],int n) {
//     int n2=0;
//     int n3=0;
//     int n5=0;
//     for(int i =0;i<n;i++) {
//         if(arr[i]==2) {
//             n2++;
//         }
//         if(arr[i]==3){
//             n3++;
//         }
//         if(arr[i]==5) {
//             n5++;
//         }
//     }
//     cout<<"Occurences of 2 : "<<n2<<endl;
//     cout<<"Occurences of 3 : "<<n3<<endl;
//     cout<<"Occurences of 5 : "<<n5<<endl;
// }

void rot(int arr[],int n,int k) {
    for(int i = k;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<k;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++) {
    //     cin>>arr[i];
    // }
    // insertionsort(arr,n);
    // cout<<"The sorted arr : ";
    // for(int i = 0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }
    // secondlargest(arr,n);

    // int arr[] = {5, 2, 5, 8, 5, 10};
    // int n = 6;
    // int val= 5;
    // deletion(arr,n,val);
    // int arr[] = {2, 3, 2, 5, 3, 2};
    // int n=size(arr);
    // freq(arr,n);
}