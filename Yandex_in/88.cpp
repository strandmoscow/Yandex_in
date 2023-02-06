//
//  88.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 31.01.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k;
        
        while (i < m and j < n) {
            if (nums1[i + j] > nums2[j]) {
                for (k = m + j - 1; k > i + j - 1; k--)
                    nums1[k+1] = nums1[k];
                nums1[i + j] = nums2[j];
                j++;
            } else {
                i++;
            }
        }
        
        while (j < n) {
            nums1[m + j] = nums2[j];
            j++;
        }
    }
};
