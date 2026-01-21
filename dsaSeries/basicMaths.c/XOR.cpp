#include <iostream>
#include <vector>
using namespace std;
int duplicateNumbersXOR(vector<int> &nums){
    int ans{},sum{};
    for(int i : nums){
        if(sum^nums[i] == 0){
            ans ^= nums[i];
        }
        sum ^= nums[i];
    }
    return sum;;
}
int main(){
    // read a vector
    vector<int> nums {1,2,2,4,4};

    cout << duplicateNumbersXOR(nums);

    return 0;
}