//
//  42.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 05.02.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;


//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int vol = 0;
//        bool abovefloor = true;
//        bool mb_water;
//        int pre_vol = 0;
//
//        while (abovefloor) {
//            abovefloor = false;
//            mb_water = false;
//
//            for (int x = 0; x < height.size(); x++) {
//                if (height[x] > 0) {
//                    abovefloor = true;
//                    if (mb_water) {
//                        vol += pre_vol;
//                    }
//
//                    mb_water = true;
//                    pre_vol = 0;
//                    height[x]--;
//                } else {
//                    pre_vol++;
//                }
//            }
//        }
//
//
//        return vol;
//    }
//};

class Solution {
public:
    int trap(vector<int>& height) {
        int vol = 0;
        int max_abs = 0;
        int max_abs_x = 0;
        int max_left = 0;
        int max_left_x = 0;
        int max_right;
        int max_right_x = int(height.size()) - 1;
        
        for (int x = 0; x < height.size(); x++) {
            if (height[x] > max_abs) {
                max_abs = height[x];
                max_abs_x = x;
            }
        }
        
        for (int x = 0; x < max_abs_x; x++) {
            if (height[x] > max_left) {
                max_left = height[x];
            } else {
                vol += max_left - height[x];
            }
        }
        
        for (int x = height.size(); x > max_abs_x; x--) {
            if (height[x] > max_right) {
                max_right = height[x];
            } else {
                vol += max_right - height[x];
            }
        }
        
        
        return vol;
    }
};
