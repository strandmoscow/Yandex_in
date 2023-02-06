//
//  986.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 29.01.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> out_list;

        for (vector<int> first : firstList) {
            
            for (vector<int> second : secondList) {
                if (first[0] >= second[0] && first[0] <= second[1]) {
                    if (first[1] < second[1]) {
                        out_list.push_back({first[0], first[1]});
                    } else {
                        out_list.push_back({first[0], second[1]});
                    }
                } else if (first[0] <= second[0] && first[1] >= second[0]) {
                    if (first[1] < second[1]) {
                        out_list.push_back({second[0], first[1]});
                    } else {
                        out_list.push_back({second[0], second[1]});
                    }
                }
            }
        }
        
        return out_list;
    }
};
