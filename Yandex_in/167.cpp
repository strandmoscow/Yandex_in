//
//  167.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 27.01.2023.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=1, j=2;
        while (i < numbers.size()) {
            while (j < numbers.size()) {
                if (numbers[i] + numbers[j] > target) {
                    break;
                }
                if (numbers[i] + numbers[j] == target) {
                    return {i, j};
                }
                j++;
            }
            i++;
            j = i+1;
        }
        return 0;
    }
};
