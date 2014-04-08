//
//  MagicalRecord+Options.h
//  Magical Record
//
//  Created by Saul Mora on 3/6/12.
//  Copyright (c) 2012 Magical Panda Software LLC. All rights reserved.
//

#import "MagicalRecord.h"

typedef NS_ENUM(NSInteger, MagicalRecordLogLevel)
{
    MagicalRecordLogLevelOff        = 0,
    MagicalRecordLogLevelFatal      = 1 << 0,
    MagicalRecordLogLevelError      = 1 << 1,
    MagicalRecordLogLevelWarn       = 1 << 2,
    MagicalRecordLogLevelInfo       = 1 << 3,
    MagicalRecordLogLevelVerbose    = 1 << 4,
};

@interface MagicalRecord (Options)

/**
 *  Returns the current logging level.
 *
 *  @return the current logging level
 */
+ (MagicalRecordLogLevel) logLevel;

/**
 *  Sets the desired logging level.
 *
 *  @param level MagicalRecordLogLevel value
 */
+ (void) setLogLevel:(MagicalRecordLogLevel)level;

@end
