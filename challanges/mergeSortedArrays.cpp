#include <iostream>

using namespace std;

int* mergeSortedArrays(int* ar1, int* ar2, int size1, int size2){
 
    int size = size1 + size2;
    int *ar = new int[size];

    for(unsigned int i = 0, j = 0, k = 0; k < size; k++){
       if((i < size1 && j >= size2) || (ar1[i] < ar2[j])){
                ar[k] = ar1[i];
                i++;
            } else {
                ar[k] = ar2[j];
                j++;
            }
    }

  return  ar;
}



int main (){
    int ar1[] = {0, 3, 4};
    int ar2[] = {4, 5, 30, 31,44};

    int size1 = sizeof(ar1)/sizeof(*ar1);
    int size2 = sizeof(ar2)/sizeof(*ar2);
    int size = size1 + size2;
    int *mergedArray = mergeSortedArrays(ar1, ar2, size1, size2);

    for(int i = 0; i < size; i++){
        cout<<mergedArray[i]<<" ";
    }

    return 0;
}