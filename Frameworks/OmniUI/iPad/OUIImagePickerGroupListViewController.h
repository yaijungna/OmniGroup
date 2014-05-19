// Copyright 2010-2014 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <UIKit/UITableViewController.h>

@class ALAssetsGroup;
@protocol OUIImagePickerGroupListViewControllerDelegate;

@interface OUIImagePickerGroupListViewController : UITableViewController

@property (nonatomic, weak) id<OUIImagePickerGroupListViewControllerDelegate> delegate;

+ (instancetype)imagePickerGroupListViewController;

@end

@protocol OUIImagePickerGroupListViewControllerDelegate <NSObject>

@optional
- (void)imagePickerGroupListViewController:(OUIImagePickerGroupListViewController *)controller didSelectAssetsGroup:(ALAssetsGroup *)group;

@end