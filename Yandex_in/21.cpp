//
//  21.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 19.01.2023.
//

#include <stdio.h>

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if (list1 == NULL) {
            return list2;
        } else if (list2 == NULL) {
            return list1;
        }
        
        if (list1 -> val <= list2 -> val) {
            list1 -> next = mergeTwoLists(list1 -> next, list2);
            return list1;
        } else {
            list2 -> next = mergeTwoLists(list1, list2 -> next);
            return list2;
        }
    }
};
