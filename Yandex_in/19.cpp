//
//  19.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 19.01.2023.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head -> next == nullptr) {
            head = nullptr;
        }
        
        int length = 1;
        int i = 1;
        ListNode* pointer = head;
        
        while (pointer -> next != nullptr) {
            length++;
            pointer = pointer -> next;
        }
        
        pointer = head;
        
        while (i != length - n - 1 && pointer -> next != nullptr) {
            i++;
            pointer = pointer -> next;
        }
        pointer -> next = pointer -> next -> next;
        
        return head;
    }
};
