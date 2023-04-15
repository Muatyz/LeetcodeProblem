/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ////My Own Solution;
        // int N = digits.size();
        // int i = N - 1;
        // int carry = 1;
        // while(carry != 0){
        //     int num = (digits[i] + carry) % 10;
        //     carry = (digits[i] + carry) / 10;
        //     digits[i] = num;
        //     if(i == 0 && carry > 0){
        //         digits.insert(digits.begin(),carry);
        //         break;
        //     }
        //     i--;
        // }

        // return digits;
        
        //这道题由于是只加了1，所以引起的carry值最多也就是1
        //所以如果有进位，直接看他是不是9就可以了。
        //要在开头插入1的条件应该是在进位的前面全部数字都是9
        //否则就会被某一数位直接吸收，也就是digits[i]++
        for(int i = digits.size() - 1;i >= 0;i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
// @lc code=end

