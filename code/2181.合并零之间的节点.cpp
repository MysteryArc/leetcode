/*
 * @lc app=leetcode.cn id=2181 lang=cpp
 *
 * [2181] 合并零之间的节点
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* now = head;
        while(now->next->next!=nullptr)
        {
            if(now->next->val != 0)
            {
                now->val += now->next->val;
                now->next = now->next->next;
            }
            else
            {
                now->next = now->next->next;
                now = now->next;
            }
        }
        now->next = nullptr;
        return head;
    }
};
// @lc code=end

