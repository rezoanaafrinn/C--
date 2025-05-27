#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    if(ch >=65 && ch <= 90){
        cout << "Uppercase letter" << endl;
    }else{
        cout << "Lowercase letter" << endl;
}
    cout << "End of program" << endl;
    return 0;   
}