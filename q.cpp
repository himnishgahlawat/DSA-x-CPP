#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int min  =arr[0];
//     int minN = arr[1];
//     for(int i = 0 ;i<n;i++){
//         if(min>arr[i]) {
//             minN=min;
//             min  = arr[i];
//         }
//         else if(minN!=min && minN>arr[i]) {
//             minN = arr[i];
//         }
//     }
//     cout<<"min element : "<<min<<endl;
//     cout << "2nd min ele : "<<minN<<endl;
// }

int main() {
    // int arr[] = {10, 30, 40, 50};
    // int n = size(arr);

    // int sum = 0;

    // cout<<" The array  : ";
    // for(int i =  0 ;i<size(arr);i++) {
    //     cout<<arr[i]<<" ";
    //     sum = sum+arr[i];
    // }
    // cout<<"\n";
    // cout<<"The sum : "<<sum<<endl;

    // //INSERTION CODE
    // int key = 20;
    // int pos = 1;
    // for(int i = n;i>pos;i--) {
    //     arr[i]=arr[i-1];
    // }
    // arr[pos] = key;
    // n++;
    // cout<<"The Array after insertion : ";
    // for(int i = 0 ;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";

    // //DELETION CODE
    // int arr1[] = {10,20,30,40,50};
    // int posi=1;
    // int n1=size(arr1);
    // for(int i = posi;i<n1-1;i++)  {
    //     arr[i]=arr[i+1];
    // }
    // n1--;
    // cout<<"The Array after deletion : ";
    // for(int i = 0;i<n1;i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";

    // //REVERSE
    // int start=0;
    // int end=n1-1;
    // while(start<end) {
    //     swap(arr1[start],arr1[end]);
    //     start++;
    //     end--;
    // }
    // cout<<"Reversed Array : ";
    // for(int i=0;i<n;i++) {
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<"\n";

    // //LINEAR SEARCH
    // int val=20;
    // int index;
    // for(int i = 0;i<n;i++) {
    //     if(arr1[i]==val) {
    //         index = i;
    //     }
    // }
    // cout<<"After linear search 20 found at index : "<<index<<endl;

    // //BINARY SEARCH
    // int arra[]= {1,2,3,4,5,6};
    // int arrsize=size(arra);
    // int s= 0;
    // int e=arrsize-1;
    // int key1 = 3;
    // while(s<=e) {
    //     int mid=(s+e)/2;
    //     if(arra[mid]==key1) {
    //         cout<<"Element found at index : "<<mid<<endl;
    //         return 0;
    //     }
    //     else if(arra[mid]<key1) {
    //         s=mid+1;
    //     }
    //     else {
    //         e=mid-1;
    //     }
    // }
    // cout<<"Element not found"<<endl;

    //BUBBLE SORT
    int arra1[]={2,5,1,4,9,13};
    int n2=size(arra1);
    for(int i = 0;i<n2-1;i++) {
        for(int j=0;j<n2-i-1;j++) {
            if(arra1[j]>arra1[j+1]){
                swap(arra1[j],arra1[j+1]);
            }
        }
    }
    cout<<"Bubble sorted array : ";
    for(int i = 0;i<n2;i++) {
        cout<<arra1[i]<<" ";
    }
    cout<<"\n";
    //SELECTION SORT
    int arr[]={5,3,8,1,4};
    int n = size(arr);
    for(int i = 0 ;i<n-1;i++) {
        int min = i;
        for(int j= i;j<n;j++) {
            if(arr[j]<arr[min]) {
                swap(arr[j],arr[min]);
            }
        }
    }
    cout<<"Selection sorted arr : ";
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    //INSERTION SORT
    int arr1[] = {5,3,8,1,4};
    int n1=size(arr1);
    for(int i = 0;i<n;i++) {
        int j=i;
        while(j>0 && arr1[j-1]>arr1[j]) {
            swap(arr1[j-1],arr1[j]);
            j--;
        }
    }
    cout<<"Array after INSERTION SORT : ";
    for(int  i = 0;i<n;i++) {
        cout<<arr1[i]<<" ";
    }

    

}