/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    //该取中函数是取大者，
    int Mid(int min,int max){
        //e.g. [0,1,2,3]->2;
        //     [0,1,2,3,4]->2;
        //     [1,2,3,4,5]->3;
        //     [0,1]->0;
        int N = min + max;
        if(min == max - 1){
            return min;
        }
        if(N % 2 == 0){
            return N/2;
        }
        else{
            return (N + 1)/2;
        }
    }

    int searchInsert(vector<int>& nums, int target) {
        int max = nums.size();
        int min = 0;
        int mid = Mid(min,max);
        while(nums[mid] != target && min < max - 1){
            //非常离谱的是如果写作mid = Mid(mid,max)或者mid = Mid(min,mid)速度反而会超时
            //而老老实实一步步写步骤并不会超时
            if(nums[mid] < target){
                min = mid;
                mid = Mid(min,max);
            }
            else if(nums[mid] > target){
                max = mid;
                mid = Mid(min,max);
            }
            else if(nums[mid] == target){
                return mid;
            }
        }

        if(nums[mid] < target){
            mid++;
        }

        return mid;
    }
};
// @lc code=end

