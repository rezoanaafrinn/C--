#include <iostream>
using namespace std;

int main(){
    int nums[]={5,6,9,10,-12,24};
    int size = 6;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    int smallest_index;
    int largest_index;

    for(int i=0; i<size; i++){
        // if(nums[i] < smallest){
        //     smallest = nums[i];
        // }
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);

        if(smallest == nums[i] ){
            smallest_index = i;
        }

        if(largest == nums[i]){
            largest_index = i;
        }

    }
    cout << "Smallest number =" << smallest << endl;
    cout << "Smallest Index =" << smallest_index << endl;
    cout << "Largest number =" << largest << endl;
    cout << "Largest Index =" << largest_index << endl;

    
    return 0;
}