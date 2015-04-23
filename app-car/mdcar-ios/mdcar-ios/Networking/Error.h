//
//  Error.h
//  mdcar-ios
//
//  Created by Don Dinh on 4/23/15.
//  Copyright (c) 2015 asnet. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface Error : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSNumber *code;

@end
