#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout<< "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(37);
    vec.push_back(40);
    cout<< "size after push back= " << vec.size() << endl;
    vec.pop_back();
    cout<< "size after pop back= " << vec.size() << endl;
    cout<< "capacity = " << vec.capacity() << endl;
    for(int i : vec){
        cout << i << endl;
    }
    return 0;
}