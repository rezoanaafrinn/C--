#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,5,6,8,12};
    int size = 6;
    int target = 5;

    cout << linearSearch(arr,size,target) << endl;
    return 0;
}