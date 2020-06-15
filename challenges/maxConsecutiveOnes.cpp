// Given a binary array, find the maximum number of consecutive 1s in this array.

// Example 1:
// Input: [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s.
//     The maximum number of consecutive 1s is 3.
// Note:

// The input array will only contain 0 and 1.
// The length of input array is a positive integer and will not exceed 10,000

#include <iostream>
#include <array>
#include <vector>

using namespace std;

int &maxConsecutiveOnes(int *arr, int &size) {
    static int maxConsecutive = arr[0] > 0 ? 1 : 0;

    if(size == 1){
        return maxConsecutive;
    }

    array<int, 10> cache;
    cache.fill(0);

    int currentIndex = arr[0];
    int currentCount = 1;
    cache[currentIndex] = currentCount;
 
    for(unsigned int i = 1; i < size; i++) {

        if(arr[i] == currentIndex){
            currentCount++;

            if(currentIndex > 0 && i == size-1 && currentCount > maxConsecutive && currentCount > cache[currentIndex]) {
                maxConsecutive = currentCount;
            }
        } else {
            if(currentIndex > 0 && currentCount > maxConsecutive && currentCount > cache[currentIndex]) {
                cache[currentIndex] = currentCount;
                maxConsecutive = currentCount;
            }
            currentIndex = arr[i];
            currentCount = currentIndex > 0 ? 1 : 0;
             if(i == size-1 && currentCount > maxConsecutive){
               maxConsecutive = currentCount;
             }
        }
    }

    return maxConsecutive;
}

int main () {
    // int arr[] = {1,1,0,1,1,1};
    // int arr[] = {1,1,0,1};
    // int arr[] = {0,0};
    int arr[] = {0,1};
    int size = sizeof(arr)/sizeof(int);

    int *maxConsecutive = &maxConsecutiveOnes(arr, size);

    cout<<*maxConsecutive<<"*maxConsecutive"<<endl;

    return 0;
}