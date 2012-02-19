//
//  YRDropdownView.h
//  YRDropdownViewExample
//
//  Created by Eli Perkins on 1/27/12.
//  Copyright (c) 2012 One Mighty Roar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

extern NSInteger const kTagDropdownView;

@interface YRDropdownView : UIView
{
    NSString *titleText;
    NSString *detailText;
    UILabel *titleLabel;
    UILabel *detailLabel;
    UIImage *backgroundImage;
    UIImageView *backgroundImageView;
    UIImage *accessoryImage;
    UIImageView *accessoryImageView;
    UIColor *titleLabelColor;
    UIColor *detailLabelColor;
    SEL onTouch;
    NSDate *showStarted;
    BOOL shouldAnimate;
}

@property (copy) NSString *titleText;
@property (copy) NSString *detailText;
@property (assign) UIImage *accessoryImage;
@property (assign) float minHeight;
@property (retain) UIColor *titleLabelColor;
@property (retain) UIColor *detailLabelColor;
@property (nonatomic, assign) UIImage *backgroundImage;
@property (nonatomic, assign) SEL onTouch;
@property (assign) BOOL shouldAnimate;

#pragma mark - View methods

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                              animated:(BOOL)animated;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                              animated:(BOOL)animated;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                       backgroundImage:(UIImage *)backgroundImage
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                       backgroundImage:(UIImage *)backgroundImage
                       titleLabelColor:(UIColor *)titleLabelColor
                      detailLabelColor:(UIColor *)detailLabelColor
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (BOOL)hideDropdownInView:(UIView *)view;
+ (BOOL)hideDropdownInView:(UIView *)view animated:(BOOL)animated;

#pragma mark -
- (void)show:(BOOL)animated;
- (void)hide:(BOOL)animated;

@end
