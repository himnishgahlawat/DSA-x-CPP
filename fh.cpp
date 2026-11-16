#include<iostream>
using namespace std;
class Queue{
    int arr[10000];
    int first = 0;
    int last = 0;
    public:
    void push(int element) {
        arr[last] = element;
        last++;

    }
    void pop() {
        first++;

    }
    int front() {
        return arr[first];
    }
};

int main() {
    Queue q1;
}