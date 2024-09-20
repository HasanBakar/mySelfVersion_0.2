#include<iostream>
using namespace std;
int main(){
    int numbers [5] = {1,2,3,4,5}; // declaration and initialization
    int n = sizeof(numbers)/sizeof(numbers[0]);
    int i= 0;
    while (i<n)
    {
        cout<<numbers[i]<<endl;
        i++;
    }
    
}