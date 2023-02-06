//
//  415.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 27.01.2023.
//

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int a;
        int b;
        int i = 0;
        string sum;
        int plus_10 = 0;
        
        while (num1.size() - i - 1 > 0 && num2.size() - i - 1 > 0) {
            sum == to_string((int(num1[num1.size() - i - 1]) + int(num2[num2.size() - i - 1])) % 10 + plus_10) + sum;
            
            if (int(num1[num1.size() - i - 1]) + int(num2[num2.size() - i - 1]) > 9) {
                plus_10 = 1;
            } else {
                plus_10 = 0;
            }
            i++;
        }
        
        return sum;
    }
};
