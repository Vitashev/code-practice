// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

#include <iostream>
#include <set>

using namespace std;

bool &isTwoSum(int *arr, int &size, int &sum) {
    set<int> seen;
    seen.insert(arr[0]);

    static bool isTwoSum = false;

    for(int i = 1; i < size; i++){
        if(seen.find(sum - arr[i]) != seen.end()){
            isTwoSum = true;
            break;
        }

        seen.insert(arr[i]);
    }

    return isTwoSum;
}

int main (){
   int arr[] = {2, 5, 5, 3, 3, 7, 11, 15};
   int size = sizeof(arr)/sizeof(*arr);
   int sum = 9;

   bool *res = &isTwoSum(arr, size, sum);

   cout<<*res<<endl;

    return 0;
}

