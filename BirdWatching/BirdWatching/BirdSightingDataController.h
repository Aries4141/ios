//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Thean Siew Soon on 4/30/13.
//  Copyright (c) 2013 Thean Siew Soon. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

-(NSUInteger)countOfList;
-(BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
-(void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
