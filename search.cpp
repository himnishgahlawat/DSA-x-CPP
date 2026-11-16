#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key) {
    int start = 0;
    int end = size-1;
    
    while(start<=end) {
        int mid=(start+end)/2;
        if(arr[mid]==key) {
            return mid;
        }
        if(arr[mid] < key) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        
    }
    return -1;
}
int LinerSearch(int arr[],int size,int key) {
    for(int i = 0;i<size;i++) {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int Odd[5]= {4,13,6,18,25};
    int Even[6]= {2,4,13,19,42,10};

    int EvenIndex = BinarySearch(Even,6,19);
    
    cout << "Index of 18 is "<< EvenIndex << endl;

    int OddIndex = BinarySearch(Odd,5,25);

    int Lin=LinerSearch(Even,6,13);

    cout<<"Index of 13 is "<< Lin<<endl;
}