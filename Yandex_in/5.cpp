//
//  main.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 19.01.2023.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 1) {
            return s;
        }
        
        string max_pal = "";
        string now;
        int i = 0;
        int j;
        
        while (i < s.size() - 2) {
            j = 1;
            
            if (s[i] == s[i+1]) {
                now = &"" [ s[i]] + s[i+1];
                while (i - j >= 0 && i + j <= s.size()) {
                    if (s[i - j] == s[i + 1 + j]) {
                        now = s[i - j] + now + s[i + 1 + j];
                    } else {
                        break;
                    }
                    j++;
                }
            } else {
                now = s[i];
                while (i - j >= 0 && i + j - 1 <= s.size()) {
                    if (s[i - j] == s[i + j]) {
                        now = s[i - j] + now + s[i + j];
                    } else {
                        break;
                    }
                    j++;
                }
            }
            
            if (max_pal.size() < now.size()) {
                max_pal = now;
            }
            
            i++;
        }
        
        
        return max_pal;
    }
};
