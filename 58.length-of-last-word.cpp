/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    //N是s的size
    int find_first_letter(string s,int N){
        for(int i = N - 1;i >= 0;i--){
            if(s[i] != ' '){
                return i;
            }
        }

        return -1;
    }

    //start是指定的开始搜索的位置
    int find_first_space(string s,int start){
        for(int i = start;i >= 0;i--){
            if(s[i] == ' '){
                return i + 1;
            }
        }

        return 0;
    }

    int lengthOfLastWord(string s) {
        int N = s.size();
        int start_with_letter = find_first_letter(s,N);
        int end_with_space = find_first_space(s,start_with_letter - 1);
                
        return start_with_letter - end_with_space + 1;
    };
};
// @lc code=end

