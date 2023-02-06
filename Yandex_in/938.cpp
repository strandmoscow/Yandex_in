//
//  938.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 29.01.2023.
//

#include <stdio.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int interval (int val, int low, int high) {
        if (val <= high && val >= low) {
            return val;
        } else {
            return 0;
        }
    }

    int tree(TreeNode* tr, int low, int high, int* pointer) {
        if (tr) {
            *pointer = *pointer + interval(tree(tr -> left, low, high, pointer), low, high);
            *pointer = *pointer + interval(tree(tr -> right, low, high, pointer), low, high);
            return tr -> val;
        } else {
            return 0;
        }
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum;
        int* pointer = &sum;
        sum += interval(tree(root, low, high, pointer), low, high);
        return sum;
    }
};
