#include<iostream>
#include<vector>
using namespace std;
//Pairs
// void explainPair() {
//     pair<int,int> p = {1,3};
//     cout<<p.first<<" "<<p.second;//1 3

//     cout<<"\n";

//     pair<int ,pair<int,int>> p1 = {1,{3,4}};
//     cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second; //1 3 4

//     cout<<"\n";

//     pair<int ,int > arr[] = {{1,2},{3,4},{5,6}};
//     cout<<arr[1].second; //4
// }

//ExplainVectors 
void explainVector() {
    vector<int> v; //-> { } -> empty vector
    v.push_back(1); // { } -> {1}
    v.emplace_back(2); // {1} -> {1,2}
    //emplace_back faster than push_back
    
    vector<pair<int,int>>vec;
    vec.push_back({1,2}); //isko push(as a pair) krne ke liye  curly brackets daalne padte but
    vec.emplace_back(3,4); //on the other hand emplace_back automatically understands and without using
                           //curcly braces it add them as a pair
    vector<int> v(5,100); // {100,100,100,100,100}

    vector<int> vec1(5); //{0,0,0,0,0}

    vector<int> v1(5,20); //{20,20,20,20,20}
    vector<int> v2(v1); //same as v1 
    
    
}
int main() {

    // explainPair();
    return 0;
}