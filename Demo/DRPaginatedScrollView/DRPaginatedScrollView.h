//
//  DRPaginatedScrollView.h
//  Proday
//
//  Created by David Román Aguirre on 24/12/13.
//  Copyright (c) 2013 David Román Aguirre. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DRPaginatedScrollView : UIScrollView {
    NSInteger previousPage;
}

@property (readonly, nonatomic) NSInteger currentPage;
@property (readonly, nonatomic) NSInteger numberOfPages;

@property (nonatomic) NSTimeInterval jumpDurationPerPage;
@property (readonly, nonatomic, getter = isJumping) BOOL jumping;

@property (copy, nonatomic) void (^actionWhenTappedBlock)(DRPaginatedScrollView *);

- (NSInteger)lastPage;
- (void)addPageWithHandler:(void (^)(UIView * pageView))handler;
- (void)jumpToPage:(NSInteger)page bounce:(CGFloat)bounce completion:(void (^)(void))completion;

@end
