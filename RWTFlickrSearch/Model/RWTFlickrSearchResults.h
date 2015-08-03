//
//  RWTFlickrSearchResults.h
//  RWTFlickrSearch
//
//  Created by zx on 8/3/15.
//  Copyright (c) 2015 Colin Eberhardt. All rights reserved.
//

@import Foundation;

@interface RWTFlickrSearchResults : NSObject

@property (strong, nonatomic) NSString *searchString;
@property (strong, nonatomic) NSArray *photos;
@property (nonatomic) NSUInteger totalResults;

@end
