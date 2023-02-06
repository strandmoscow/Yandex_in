//
//  26.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 27.01.2023.
//

#include <stdio.h>

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = nums.size() - 1;
        
        do {
            if (nums[i] == nums[i-1]) {
                nums.erase(nums.begin() + i + 1);
            }
            i--;
        } while (i > 0);

        return int(nums.size());
    }
};
