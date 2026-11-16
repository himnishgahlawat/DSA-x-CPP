//Sorting 
//SELECTION SORTING
#include<iostream>
using namespace std;
//BUBBLE SORTING
void InsertionSort(int arr[],int n) {
    for(int i = 0;i<=n-1;i++) {
        // int j=i;
        for(int j = i;j>0;j--) {
            if(arr[j-1]>arr[j]) {
                swap(arr[j-1],arr[j]);

            }
        }
        // while(j>0 && arr[j-1]>arr[j]) {
        //     swap(arr[j-1],arr[j]);
        //     j--;
        // }
        
    }
}

//SELECTION SORTING 
void SelectionSort(int arr[],int n) {
    for (int i =0;i<=n-2;i++) {
        int minindex=i;
        for(int j=i;j<=n-1;j++) {
            if(arr[j]<arr[minindex]) {
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
//BUBBLE SORTIGN 
void BubbleSort(int arr[],int n) {
    for(int i =n-1;i>=1;i--) {
        int didswap=0;
        for(int j = 0;j<=i-1;j++) {
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                didswap=1;
            }
        }
        if(didswap==0) {
            break;
        }
        cout<<"runs\n";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"The array : ";
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    // BubbleSort(arr,n);
    InsertionSort(arr,n);
    // SelectionSort(arr, n);  
    cout<<"\nSorted array : ";  
    for(int x = 0;x<n;x++) {
        cout<<arr[x]<<" ";
    }
    return 0;

}