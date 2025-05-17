// calculate the sum of digits of a number
#include<iostream>
using namespace std;
int sumOfDigits(int num){
    int digitSum = 0;
    while (num > 0){
        int lastdigit = num % 10;
        num /= 10;
        digitSum += lastdigit;
    }
    return digitSum;
}
 int main(){
    cout << "sum = " << sumOfDigits(1234);
    return 0;
 }