# 📊 LeetCode Problem: Find a Corresponding Node of a Binary Tree in a Clone of That Tree

## 🧩 Problem Statement

Given two binary trees **original and cloned** and given a reference to a node **target** in the original tree.
The cloned tree is a **copy of the original tree**.
Return a reference to the same node in the **cloned tree**.

> **Note**:
> - You are not allowed to change any of the two trees or the **target node** and the answer must be a **reference to a node in the cloned tree**.


## 🧠 Approach

We perform a **Pre order Traversal** of the tree, and for each node, we:
- Recursively check if  **if(cloned->val==target->val) ans = cloned** 
- If yes then we return **return ans**
- ans is the reference to the **target in cloned tree**


## ✅ Example Walkthrough

### Example 1

<img src = "https://assets.leetcode.com/uploads/2020/02/21/e1.png">

##### Input: tree = [7,4,3,null,null,6,19], target = 3
##### Output: 3

> **Explanation:**
> In all examples the original and cloned trees are shown. The target node is a green node from the original tree. The answer is the yellow node from the cloned tree.

### Example 2

<img src = "https://assets.leetcode.com/uploads/2020/02/21/e3.png">

##### Input: tree = [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4
##### Output: 4

## 🛠️ Constraints

- Constraints:

> - The number of nodes in the tree is in the **range [1, 104].**
> - The values of the **nodes of the tree are unique.**
> - target node is a node from the original tree and is **not null.**
