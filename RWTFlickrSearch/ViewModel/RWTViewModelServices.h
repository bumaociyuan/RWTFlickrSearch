//
//  RWTViewModelServices.h
//  RWTFlickrSearch
//
//  Created by zx on 8/3/15.
//  Copyright (c) 2015 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTFlickrSearch.h"

@protocol RWTViewModelServices <NSObject>

- (id<RWTFlickrSearch>) getFlickrSearchService;
- (void)pushViewModel:(id)viewModel;

@end
