/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //flag用以标记重复数
        int flag = 0;
        int N = nums.size();
        for(int i = 1;i < N;i++){
            if(nums[i] == nums[i - 1]){
                //若有相同，则重复数增加
                flag++;
            }
            else{
                //不相同，则按照顺序将其堆至数组前端
                nums[i - flag] = nums[i];
            }
        }

        return N - flag;
    }
};
// @lc code=end

