#
# @lc app=leetcode.cn id=965 lang=python3
#
# [965] 单值二叉树
#

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
import collections
import queue
from typing import Collection

class Solution:
    def isUnivalTree(self, root: TreeNode) -> bool:
        q = collections.deque()
        n = root.val
        while len(q) != 0 or root != None :
            while root != None :
                if(root.val != n):
                    return False
                q.append(root)
                root = root.left
            if len(q) != 0 :
                root = q.pop()
                root = root.right
        return True

# @lc code=end

