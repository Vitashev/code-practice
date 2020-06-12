#include <iostream>
using namespace std;

int *mergeSortedArrays(int ar1[], int ar2[]){
    int len1 = sizeof(ar1)/sizeof(ar1[0]);
    int len2 = sizeof(ar2)/sizeof(ar2[0]);
    int size =  len1 + len2;
    int *ar = new int[size];

    for(unsigned int i = 0, j = 0, k = 0; i < len1 || j < len2; k++){
        if(ar1[i] < ar1[j]){
           ar[k] = ar1[i];
           i++;
        } else {
           ar[k] = ar1[j];
          j++;
        }

    }



  return  ar;
}



int main (){
    int ar1[] = {0,3,4,31};
    int ar2[] = {4,5,30};



    cout<<"hello ";
    return 0;
}