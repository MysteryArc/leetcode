/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */
#include <iostream>
#include <math.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *lsum = new ListNode;
        lsum->next = nullptr;
        ListNode *head = lsum;
        int c = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            ListNode *r = new ListNode;
            r->val += c;
            c = 0;
            if(l1 != nullptr)
            {
                r->val += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr)
            {
                r->val += l2->val;
                l2 = l2->next;
            }
            if(r->val >= 10)
            {
                r->val -= 10;
                c = 1;
            }
            head->next = r;
            head = head->next;
        }
        if(c == 1)
        {
            ListNode *r = new ListNode;
            r->next = nullptr;
            r->val = 1;
            head->next = r;
        }
        return lsum->next;
    }
};
// @lc code=end
