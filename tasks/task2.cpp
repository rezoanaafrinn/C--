#include<iostream>
using namespace std;
int main(){
    int n=5;
    int oddSum=0;
    // print sum of all odd numbers from 1 to n
    for(int i=1; i<=n; i++){
        if(i%2 !=0){
            oddSum += i;
        }
    }
    cout << "odd sum is =" << oddSum << endl;
    return 0;
}