//
//  ScriptRunner.h
//  SelfTesting
//
//  Created by Matt Gallagher on 9/10/08.
//  Copyright 2008 Matt Gallagher. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScriptRunner : NSObject
{
	NSMutableArray *scriptCommands;
	float scriptRunnerInterCommandDelay;
}

- (void)runCommandStep:(NSData*)command;

@end
