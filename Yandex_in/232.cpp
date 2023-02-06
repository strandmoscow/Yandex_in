//
//  232.cpp
//  Yandex_in
//
//  Created by Андрей Стрельченко on 27.01.2023.
//

#include <stdio.h>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int a;
        while (s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        
        a = s1.top();
        s1.pop();
        
        while (s2.size() != 1) {
            s1.push(s2.top());
            s2.pop();
        }
        
        return a;
    }
    
    int peek() {
        int a;
        while (s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        
        a = s1.top();
        
        while (s2.size() != 1) {
            s1.push(s2.top());
            s2.pop();
        }
        
        return a;
    }
    
    bool empty() {
        if (s1.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};

