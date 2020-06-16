// Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written.

// Do the above modifications to the input array in place, do not return anything from your function.

 

// Example 1:

// Input: [1,0,2,3,0,4,5,0]
// Output: null
// Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
// Example 2:

// Input: [1,2,3]
// Output: null
// Explanation: After calling your function, the input array is modified to: [1,2,3]

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

using namespace std;

void duplicateZeros(vector<int>& arr){
    // stack<int> stack;
    deque<int> deque;
    bool isPrevZero;

    if(arr.size() > 1) {
        isPrevZero = arr[0] == 0 ? true : false;
        deque.push_back(arr[1]);

        for(int i = 1; i < arr.size(); i++){
            if(i+1 < arr.size()){
                deque.push_back(arr[i+1]);
            }

            if(isPrevZero){
                arr[i] = 0;
                isPrevZero = false;
            } else {
                arr[i] = deque.front();
                deque.pop_front();
                isPrevZero = arr[i] == 0;
            }
        }
    }

    // int counter = 0;

    // for(int i = 0; i < arr.size();i++){

    //      if (arr[i] == 0 && counter != 0){
    //        arr[i] = 0;
    //        counter--;
    //     } else if(deque.size() > 0 && arr[i] == 0){
    //         counter+=2;
           
    //         arr[i] = deque.back();
    //         deque.pop_back();
    //     }  else if (arr[i] == 0){
    //         counter++;
    //     } else if(arr[i] != 0 && counter != 0) {
    //         deque.push_front(arr[i]);
    //         arr[i] = 0;
    //         counter--;
    //     } else if (arr[i] != 0 && counter == 0 && deque.size() > 0) {
    //         deque.push_front(arr[i]);
    //         arr[i] = deque.back();
    //         deque.pop_back();
    //     }
    // }

    // deque<int> notNullDeque;



    // for(int i = 0; i < arr.size();){
    //     if(arr[i] == 0){
    //         nullStack.push(arr[i]);
    //         i++;
    //     } 

    //    if (arr[i] != 0 && nullStack.size() != 0) {
    //         while(nullStack.size() != 0){
    //             notNullDeque.push_front(arr[i]);
    //             // cout<<notNullDeque.front()<<"notNullDeque.push_front(arr[i])"<<endl;
    //             arr[i] = 0;
    //             nullStack.pop();
    //             i++;

    //             if(nullStack.size() != 0) {

    //             }

    //             if(i == arr.size()-1) {
    //                 break;
    //             }
    //         }


    //     } else if(arr[i] != 0 && nullStack.size() == 0 && notNullDeque.size() != 0) {
    //         notNullDeque.push_front(arr[i]);
    //     //  cout<<notNullDeque.back()<<"2notNullDeque.push_front(arr[i])"<<endl;
    //         while(notNullDeque.size() != 0){
    //             arr[i] = notNullDeque.back();
    //             if(arr[i] == 0 ){
    //                nullStack.push(arr[i]);
    //             } else {
    //                 i++;
    //             }
    //             // cout<<notNullDeque.size()<<"size"<<endl;
    //             notNullDeque.pop_back();
                
                
    //             if(i == arr.size()-1) {
    //                 break;
    //             }
    //         }

    //     }  else {
    //         i++;
    //     }

    // }
}

int main() {

    vector<int> arr = {0,1,7,6,0,2,0,7};

    //[1,0,0,2,3,0,0,4]

    duplicateZeros(arr);

    // for(auto &it: arr){
    //     cout<<it<<"it1"<<endl;
    // }

    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<"it1"<<endl;
    }

    return 0;
}