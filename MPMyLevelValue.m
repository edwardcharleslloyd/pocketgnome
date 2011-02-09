//
//  MPMyLevelValue.m
//  TaskParser
//
//  Created by Coding Monkey on 9/4/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "MPMyLevelValue.h"
#import "PatherController.h"


@implementation MPMyLevelValue


- (NSInteger) value {
	
	return [[patherController playerData] level]; 
}



+ (MPMyLevelValue *) initWithPather:(PatherController*)controller {
	
	return  [[[MPMyLevelValue alloc] initWithPather:controller] autorelease];
}
@end