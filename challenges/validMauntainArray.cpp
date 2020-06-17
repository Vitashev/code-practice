// Given an array A of integers, return true if and only if it is a valid mountain array.

// Recall that A is a mountain array if and only if:

// A.length >= 3
// There exists some i with 0 < i < A.length - 1 such that:
// A[0] < A[1] < ... A[i-1] < A[i]
// A[i] > A[i+1] > ... > A[A.length - 1]


 

// Example 1:

// Input: [2,1]
// Output: false
// Example 2:

// Input: [3,5,5]
// Output: false
// Example 3:

// Input: [0,3,2,1]
// Output: true
 

// Note:

// 0 <= A.length <= 10000
// 0 <= A[i] <= 10000 

#include <iostream>
#include <vector>

using namespace std;

 bool validMountainArray(vector<int>& A) {
       if(A.size() < 3){
            return false;
        }
        
        int stopIIndex = -1;
        int stopJIndex = -1;

        for(int i = 1, j = A.size()-2; i < A.size();){
           
            if(i == j && A[i] > A[i-1] && A[j] > A[j+1]){
                return true;
            } else {
                return false;
            }

            if(i > j && A[i] != A[j]) {
                return true;
            } else {
                return false;
            }

            if(A[i] == A[i-1] || A[j] == A[j+1]) {
                return false;
            }
            
            if(A[j] > A[j+1]) {
                j--;
            } else {
                stopJIndex = j;
            }
            
            if(A[i] > A[i-1]) {
                i++;
            } else {
                stopIIndex = i;
            }
            
            if(stopIIndex != -1 && stopJIndex != -1 && stopIIndex < stopJIndex) {
                return false;
            }

        }

        return true;
    }

int main() {

    vector<int> A = {0,3,2,1};

    cout<<validMountainArray(A)<<"test"<<endl;

    return 0;
}