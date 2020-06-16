// Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

 

// Example 1:

// Input: [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Example 2:

// Input: [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 

// Note:

// 1 <= A.length <= 10000
// -10000 <= A[i] <= 10000
// A is sorted in non-decreasing order.
#include <iostream>
#include <vector>
#include <list>
#include <math.h>

using namespace std;

list<int> getSqrSortedArray(vector<int> & A){
    list<int> list;

    if(A.size() == 1){
        list.push_back(ceil(pow(A[0], 2)));
        return list;
    }

    bool stop = false;

    int i = 0, j = A.size() - 1;

    while(!stop){
        int compareA = abs(A[i]);
        int compareB = abs(A[j]);
        if(compareA <= compareB) {
            list.push_front(ceil(pow(A[j], 2)));
            j--;
            if(i == j){
              list.push_front(ceil(pow(A[i], 2)));
              stop = true;
            }
        } else {
            list.push_front(ceil(pow(A[i], 2)));
            i++;
            if(i == j){
              list.push_front(ceil(pow(A[j], 2)));
              stop = true;
            }
        }
    }

    return list;
}

int main() {
    vector<int> nums = {-7,-3,2,3,11};


    list<int> sqrSortedArray = getSqrSortedArray(nums);

    for(auto &num: sqrSortedArray){
        cout<<num<<" "<<endl;
    }

    return 0;
}