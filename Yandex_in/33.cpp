//
//  33.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 31.01.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            } else {
                return -1;
            }
        }
        
        int i = 0;
        
        if (nums[0] >= target) {
            do {
                if (nums[i] == target) {
                    return i;
                }
                i++;
            } while (nums[i] <= nums[i+1]);
        } else {
            do {
                if (nums[nums.size() - i - 1] == target) {
                    return i;
                }
                i++;
            } while (nums[nums.size() - i - 2] <= nums[nums.size() - i - 1]);
        }
        
        return -1;
    }
};
