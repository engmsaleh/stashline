//
//  TrackView.h
//  FinanceLine
//
//  Created by Tristan Hume on 2013-06-18.
//  Copyright (c) 2013 Tristan Hume. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TrackViewDelegate <NSObject>
- (CGFloat) startMonth;
- (CGFloat) monthSize;
- (NSUInteger) maxMonth;
- (void) setStartMonth: (CGFloat)start;
- (void) setMonthSize: (CGFloat)scale;
- (void) setVelocity: (CGFloat)vel;
@end

@interface TrackView : UIView

@property (nonatomic, weak) id<TrackViewDelegate> delegate;

- (void)drawMonth:(NSUInteger)month atX:(CGFloat)x andScale:(CGFloat)scale withContext:(CGContextRef)context;
- (void)drawMonths:(CGContextRef)context;

@end
