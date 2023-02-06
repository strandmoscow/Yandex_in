//
//  85.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 06.02.2023.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    int rec_area(int x_ul, int y_ul, int x_abs, int y_abs, vector<vector<char>>& matrix) {
        int x = 0;
        int x_rect_size = 0;
        
        do {
            if (matrix[x + x_ul][y_ul] == '0') {
                break;
            }
            x_rect_size++;
            x++;
        } while (x_ul + x < x_abs);
        
        int y = 0;
        bool ones_check = true;
        
        do {
            for (x = 0; x < x_rect_size; x++)
                if (matrix[x + x_ul][y_ul + y] == '0')
                    ones_check = false;

            y++;
        } while (ones_check && y_ul + y < y_abs);
        
        return x * y;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int max = 0;
        int x_abs = int(matrix.size()) - 1;
        int y_abs = int(matrix[0].size()) - 1;
        int rect = 0;
        
        for (int x = 0; x <= x_abs; x++) {
            for (int y = 0; y <= y_abs; y++) {
                if (matrix[x][y] == '1') {
                    rect = rec_area(x, y, x_abs, y_abs, matrix);
                    if (rect > max) {
                        max = rect;
                    }
                }
            }
        }
        
        return max;
    }
};
