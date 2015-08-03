//
//  RWTFlickrSearchViewModel.h
//  RWTFlickrSearch
//
//  Created by zx on 8/3/15.
//  Copyright (c) 2015 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTViewModelServices.h"
#import "RWTFlickrSearchResults.h"

@interface RWTFlickrSearchViewModel : NSObject

@property (strong, nonatomic) RACCommand *executeSearch;
@property (strong, nonatomic) NSString *searchText;
@property (strong, nonatomic) NSString *title;

- (instancetype)initWithServices:(id<RWTViewModelServices>)services;

@end
