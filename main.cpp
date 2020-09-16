//
//  main.cpp
//  staircase
//  Finds the floor value of input x, without casting or roundinge
//
//  Created by Fion Lin on 2020-09-12.
//  Copyright © 2020 Fion Lin. All rights reserved.
//

#include <iostream>

int main();
    
int main() {
    double x{};
    
    std::cout << "Enter value of x: ";
    std::cin >> x;

    // This local variable should hold the result of stair( x )
    int stair{};
    int floored{};
    if (x>=0) { //Checks if it's positive
        for(int i=0; i<=x; ++i) { //finds the floor of x
            floored = i;
        } //End of for loop
    } //End of If-positive
    else { //negatives
        for(int i=0; i>x; --i) {
            floored = i;
        } //End of for loop
        floored -= 1;
    } //End of else - negative
    stair = floored;

    std::cout << "The value of stair(x) is: ";
    std::cout << stair;
    std::cout << std::endl;
    
  return 0;
}
