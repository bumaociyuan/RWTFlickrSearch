//
//  RWTSearchResultsItemViewModel.h
//  RWTFlickrSearch
//
//  Created by zx on 8/3/15.
//  Copyright (c) 2015 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTFlickrPhoto.h"
#import "RWTViewModelServices.h"

@interface RWTSearchResultsItemViewModel : NSObject

- (instancetype) initWithPhoto:(RWTFlickrPhoto *)photo services:(id<RWTViewModelServices>)services;

@property (nonatomic) BOOL isVisible;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSNumber *favorites;
@property (strong, nonatomic) NSNumber *comments;

@end