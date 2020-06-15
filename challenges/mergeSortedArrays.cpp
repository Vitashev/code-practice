#include <iostream>
#include <vector>

using namespace std;

void normalizeArr(vector<int> &ar1){
    for(unsigned int i = ar1.size() - 1; i > 0; i--){
       if(ar1[i] == 0){
            ar1[i] = (int)NULL;
       } else {
           break;
       }
    }

}

vector<int> mergeSortedArrays(vector<int>& a1, vector<int>& a2, int size1, int size2){
    // normalizeArr(a1);

    vector<int> ar;

    for(unsigned int i = 0, j = 0, k = 0; k < a1.size(); k++){
            cout<<(size2 == 0)<<"size2 == 0"<<endl;
            cout<<a1[i]<<"a1[i]"<<endl;
            cout<<a2[j]<<"a2[j]"<<endl;
       if(size2 == 0 || (i < size1 && j >= size2) || (i < size1 && a1[i] < a2[j])){
           cout<<"if"<<endl;
            ar.push_back(a1[i]);
            i++;
       } else {
           cout<<"else"<<endl;
            ar.push_back(a2[j]);

            j++;
       }
    }

  return  ar;
}



int main (){

//     [1,2,3,0,0,0]
// 3
// [2,5,6]
// 3

// [2,0]
// 1
// [1]
// 1
    vector<int> ar1 = {2,0};
    vector<int> ar2 = {1};

    int size1 = ar1.size();
    int size2 = ar2.size();
    // int size = size1 + size2;
    vector<int> mergedArray = mergeSortedArrays(ar1, ar2, 1, 1);

    for(int i = 0; i < mergedArray.size(); i++){
        cout<<mergedArray[i]<<" ";
    }

    return 0;
}