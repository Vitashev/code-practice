#include <iostream>
using namespace std;

void reverse(string &str){
    for (int i = 0, j = str.length()-1; i < j; i++, j--){
        char temp = str[i];

        str[i] = str[j];
        str[j] = temp;
    }
}

int main () {

    string str = "bla bla vvvvv";

    reverse(str);

    cout << "Value of pvalue : " << str << endl;

    return 0;
}