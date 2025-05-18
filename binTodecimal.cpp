#include<iostream>
using namespace std;

int binTodeci(int binNum){
    int ans = 0;
    int pow =1;
    while(binNum>0){
        int rem = binNum % 10;
        binNum /= 10;
        ans += rem * pow;
        pow *=2;
    }
    return ans;
}
int main(){
    int binNum = 101010;
        cout << binTodeci(binNum) << endl;
    
    return 0;
}