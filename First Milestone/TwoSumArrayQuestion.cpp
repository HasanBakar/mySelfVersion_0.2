#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

/*
................................................................................................

#include <iostream>: Includes the input-output stream library to use std::cout and std::cin for console I/O.
#include <vector>: Includes the vector library to use the std::vector container, which is a dynamic array.
#include <unordered_map>: Includes the unordered_map library, which provides a hash table-based key-value pair data structure for efficient lookups.
using namespace std;: Makes all standard library symbols accessible without the std:: prefix (e.g., you can write cout instead of std::cout).

...................................................................................................


 */

class twoSum{
public:
    vector<int> findTwoSum(vector<int> & nums, int target){
        unordered_map<int, int> indicateNums;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(indicateNums.find(complement) != indicateNums.end()){
                return {indicateNums[complement], i};
            }
            indicateNums[nums[i]] = i;
        }
        return {};
    }
};



int main(){
    
    twoSum solver;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solver.findTwoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}