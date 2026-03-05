/*the question is that i an array i have to find the maximum sum a subarray possibly
can have.*/

#include <iostream>
#include <vector> // std library for the vectors
using namespace std;
//int findMaxSum(vector<int>& vec);
int kadane(vector<int>& vec);

int main()
{
    vector<int> vec {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // example input vector maxsum = 4, -1, 2, 1
    //cout <<     findMaxSum(vec);
    cout << kadane(vec);

return 0;
}
// this is brute force technique with time complexity O(N²).
/*int findMaxSum(vector<int>& vec)
{
    int cSum {};
    for(int st {}; st < vec.size(); st++)
    {
        int newSum {};
        for(int end {st}; end < vec.size();end++ )
        {
            newSum += vec[end];
            cSum = max(newSum, cSum);
        }

    }
    return cSum;
}*/

/*now this is kadane technique:-
1. we run a single loop with the index increasin and we add the data to the 
current sum and compare it with the max sum and then max sum contains the the bigger number.
2. now whenev the current sum takes a negative value the cuurent sum resets to 0. and the last variable
in the sum along with the onw before hand are excluded and the subarray starts with an index of the next
variable. the time complexity will be O(n)*/
int kadane(vector<int>& vec){
    int cSum {};
    int mSum {INT_MIN};
    for(int i {}; i<vec.size();i++){
        cSum += vec[i];
        mSum = max(cSum, mSum);
        if(cSum < 0){
            cSum = 0;
        }
    }
    return mSum;
}  