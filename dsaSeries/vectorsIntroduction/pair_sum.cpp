#include <iostream>
#include <vector>
using namespace std;

/*vector<int> pairSum(vector<int> nums, int target){
    //brute force
    vector<int> ans;
    for(int i {}; i < (nums.size()); i++){
        for(int j{i+1};j < nums.size(); j++ ){
            if(nums[i] +nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}*/

//this approach will fail if the array is not sorted.
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int *p1 {&nums[0]};
    int *p2 {&nums[nums.size()-1]};
    while(p1 < p2){ //the time complexity is O(n)
            if(*p1 + *p2 <target)
                {p1++;}
            else if(*p1 +*p2 > target)
                {p2--;}
            else{
                ans.push_back(*p1);
                ans.push_back(*p2);
            }
            p1++;
            p2--;
    }
    return ans;
}


int main(){
    vector<int> nums {1,2,3,4,5,6,7,8,9};
    int target {11};



    for(int i : pairSum(nums, target)){
        cout << i << ", ";
    }

    return 0;
}