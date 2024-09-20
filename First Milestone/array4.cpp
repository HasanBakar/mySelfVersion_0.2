#include<iostream>
using namespace std;
int main(){
    int numbers [9] = {1,2,3,4,5,6,7,8,9}; // declaration and initialization
    int n = sizeof(numbers)/sizeof(numbers[0]);
    int i= 0;
    do {
        cout << numbers[i] << std:: endl;
        i++;
    } while(i<n);
}