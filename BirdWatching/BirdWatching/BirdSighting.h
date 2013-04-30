//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Thean Siew Soon on 4/30/13.
//  Copyright (c) 2013 Thean Siew Soon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;
@end
