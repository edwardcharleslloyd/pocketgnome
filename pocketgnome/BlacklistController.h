//
//  BlacklistController.h
//  Pocket Gnome
//
//  Created by Josh on 12/13/09.
//  Copyright 2009 Savory Software, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// created a controller for this, as I don't want to implement the exact same versions for Combat and for nodes

@class WoWObject;

@class MobController;
@class PlayersController;

@interface BlacklistController : NSObject {
	
	IBOutlet MobController		*mobController;
	IBOutlet PlayersController	*playersController;
	

	NSMutableDictionary *_blacklist;
	NSMutableDictionary *_attemptList;

}

// reasons to be blacklisted!
enum{
	Reason_None					= 0,
	Reason_NotInLoS				= 1,
	Reason_NodeMadeMeFall		= 2,
	Reason_CantReachObject		= 4,
	
};

- (void)blacklistObject:(WoWObject *)obj withReason:(int)reason;
- (void)blacklistObject: (WoWObject*)obj;
- (BOOL)isBlacklisted: (WoWObject*)obj;
- (void)removeAllUnits;

// sick of putting more dictionaries in bot controller, will just use this
- (int)attemptsForObject:(WoWObject*)obj;
- (void)incrementAttemptForObject:(WoWObject*)obj;
- (void)clearAttemptsForObject:(WoWObject*)obj;
- (void)clearAttempts;

- (void)clearAll;

@end
