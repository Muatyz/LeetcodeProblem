/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int N = nums.size();
        int i;
        int flag = 0;//记录探针激活数
        
        //如果数组里面未含有元素，直接返回0值结束运算
        if(N == 0){
            return 0;
        }
        for(i = 0;i < N;i++){
            if(nums[i] == val){
                //数量符合，激活一次探针
                flag ++;
            }
            else{
                //将元素按照顺序堆至数组头部
                nums[i - flag] = nums[i];
            }
        }

        return N - flag;
    }
};
// @lc code=end

