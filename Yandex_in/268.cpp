//
//  268.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 02.02.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = -1;
        bool key = true;
        
        while (key) {
            i++;
            key = false;
            for (int j : nums) {
                if (j == i) {
                    key = true;
                    break;
                }
            }
        }
        
        return i;
    }
};
