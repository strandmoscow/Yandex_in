//
//  350.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 02.02.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        int i = nums1.size() - 1, j;
        
        while (i >= 0) {
            j = nums2.size() - 1;
            while (j >= 0) {
                if (nums1[i] == nums2[j]) {
                    ret.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j);
                    break;
                }
                j--;
            }
            i--;
        }
        
        
        return ret;
    }
};
