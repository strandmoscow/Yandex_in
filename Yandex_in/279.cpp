//
//  279.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 26.01.2023.
//

#include <stdio.h>
#include <cmath>

class Solution {
public:
    int numSquares(int n) {
        printf("n%i\n", n);
        if (n == 0) {
            return 0;
        }

        if (n == 1) {
            return 1;
        }
        
        if (n == 7) {
            return 4;
        }

        int a = 4;
        int b;
        
        int i = floor(sqrt(n));
        while (i > 0) {
            b = numSquares(n - i*i)+1;
            if (a > b) {
                a = b;
            }
            i--;
        }
        printf("%i\n", a);
        return a;
    }
};


