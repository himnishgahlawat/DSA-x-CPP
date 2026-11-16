#include<bits/stdc++.h>
using namespace std;

void maxmin(int arr[],int n) {
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i =0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min) {
            min=arr[i];
        }

    }
    cout<<"Max element : "<<max<<endl;
    cout<<"Min element : "<<min<<endl;
}
void evenodd(int arr[],int n) {
    int even= 0;
    int odd=0;
    for(int i = 0;i<n;i++) {
        if(arr[i]%2==0) {
            even++;
        }
        if(arr[i]%2!=0) {
            odd++;
        }
    }
    cout<<"Num of even nums : "<<even<<endl;
    cout<<"Num of odd nums : "<<odd<<endl;
}

void occur(int arr[],int n,int val) {
    int count =0;
    for(int i = 0;i<n;i++) {
        if(arr[i]==val) {
            count++;
        }
    }
    cout<<"Num of occurences : "<<count<<endl;
}

void firstoccur(int arr[],int n,int val) {
    // int x =0;
    for(int i =0;i<n;i++) {
        if(arr[i]==val) {
            cout<<"First occurence at : "<<i<<endl;
            return;
        }
        
    }
    cout<<"Element not found"<<endl;
}

void lastOccur(int arr[],int n,int val) {
    int last=-1;
    for(int i =0;i<n;i++) {
        if(arr[i]==val) {
            last = i;
        }
    }
    cout<<"Last occurence at : "<<last<<endl;
}

void Alloccur(int arr[],int n,int val) {
    cout<<"This num occured at : ";
    for(int i =0;i<n;i++) {
        if(arr[i]==val) {
            cout<<i<<" ";
        }
    }
}


void zeroatlast(int arr1[],int n1) {
    int j=0;
    for(int i = 0;i<n1;i++) {
        if(arr1[i]!=0) {
            swap(arr1[i],arr1[j]);
            j++;
        }
    }
    cout<<"Array : ";
    for(int i =0;i<n1;i++) {
        cout<<arr1[i]<<" ";
    }
}
// void rotate(int arr[],int k,int n) {
//     for(int i= k;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     for(int i= 0;i<k;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// void Bubblesort(int arr[],int n) {
//     for(int i =0;i<n-1;i++) {
//         for(int j =1;j<n-i;j++) {
//             if(arr[j]<arr[j-1]) {
//                 swap(arr[j],arr[j-1]);
//             }
//         }
//     }
// }
// int BinarySearch(int arr[],int n,int key) {
//     int s=0;
//     int e=n-1;
//     while(s<=e) {
//         int mid = (s+e)/2;
//         if(key==arr[mid]) {
//             return mid;
//         }
//         else if(key<arr[mid]) {
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//     }
//     return -1;
// }
int main() {
    // int n;
    // cin>>n;
    
    // int arr[100];
    // cout<<"The array : ";
    // for(int i= 0;i<n;i++) {
    //     cin>>arr[i];
    // }
    // for(int i= 0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // Bubblesort(arr,n);
    // cout<<"BUbble sorted arr : ";
    // for(int i = 0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // int key;
    // cout<<"Key : ";
    // cin>>key;
    // int res = BinarySearch(arr,n,key);
    // if(res!=-1) {
    //     cout<<"Element found at index : "<<res;
    // }
    // else{
    //     cout<<"not found";
    // }

    // int arr[] = {1,-5,58,6,9,7,20};
    // rotate(arr,2,7);

    int arr[]={1,2,4,3,2,2};
    int n =size(arr);
    maxmin(arr,n);

    evenodd(arr,n);

    int val;
    cin>>val;
    occur(arr,n,val);

    firstoccur(arr,n,val);
    lastOccur(arr,n,val);
    Alloccur(arr,n,val);
    cout<<"\n";
    int arr1[]={1,0,5,0,3,2,0};
    int n1 =size(arr1);
    zeroatlast(arr1,n1);
    return 0;
}