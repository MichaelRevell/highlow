//
//  main.c
//  First Project
//
//  Created by Michael Revell on 10/2/13.
//  Copyright (c) 2013 Michael Revell. All rights reserved.
//

#include <stdio.h>
#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        int guess = 0;
        int turn = 0;
        int answer = arc4random() % 100 + 1;
        while( guess != answer) {
            NSLog(@"Enter a number between 1 and 100");
            scanf("%i", &guess);
            NSLog(@"You entered: %i", guess);
            if (guess > answer) {
                NSLog(@"You guessed too high!");
            } else if (guess < answer) {
                NSLog(@"You guessed too low!");
            } else {
                NSLog(@"You win");
                break;
            }
            turn++;
        }
    }
    return 0;
}

