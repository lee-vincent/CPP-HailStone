//
//  main.cpp
//  hailStone
//
//  Created by Vincent Lee on 4/22/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include <iostream>

//Function Prototype
int hailStone(int num);

int main() {
    
    std::cout << hailStone(3) << std::endl;

    return 0;
}


int hailStone(int num) {
    int steps = 0;
    
    while(num != 1) {
        
        if(num % 2 == 0) {
            num /= 2;
        } else {
            num = (num * 3) + 1;
        }
        
        steps++;
        
    }
    
    
    return steps;

}