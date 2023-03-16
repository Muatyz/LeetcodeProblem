/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }

        if(list1 -> val <= list2 -> val){
            list1 -> next = mergeTwoLists(list1 -> next,list2);
            return list1;
        }
        else{
            list2 -> next = mergeTwoLists(list1,list2 -> next);
            return list2;
        }
    }
};

//使用迭代递归的思想来解决问题。
//有时候不需要自己面面俱到地把所有条件都写出来，
//使用迭代思路，将每一步的动作写好，剩下的交给计算机完成即可。
// @lc code=end

