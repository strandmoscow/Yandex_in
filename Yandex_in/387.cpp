//
//  387.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 02.02.2023.
//

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        if (s.size() == 1) {
            return 0;
        }

        int i = 0;
        int j;
        int povt = -1;
        int size = int(s.size());
        
        while (i < size - 1) {
            if (s[i] != '&') {
                j = i + 1;
                povt = 0;
                while (j < size) {
                    if (s[i] == s[j]) {
                        s[j] = '&';
                        povt++;
                    }
                    j++;
                }
            }
            if (povt == 0) {
                return i;
            }
            i++;
        }
        
        return -1;
    }
};
