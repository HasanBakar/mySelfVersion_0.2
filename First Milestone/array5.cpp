#include<iostream>
using namespace std;
int main(){
    int numbers [5] = {1,2,3,4,5}; // declaration and initialization
    for(int element: numbers){
        cout<<element<<endl;
    }
    return 0;
}