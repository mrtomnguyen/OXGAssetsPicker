/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiUIView.h"
#import "TiButtonUtil.h"
#import "TiUIButton.h"
#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <QuartzCore/QuartzCore.h>
#import <ImageIO/ImageIO.h>
#import <CoreLocation/CoreLocation.h>

@interface ComOxgcpAssetspickerPhotoView : TiUIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *tableView;
    NSMutableArray *assets;
    
    int selectedPhotoCount;
    
    BOOL multiple;
    NSString *groupName;
    NSString *filter;
    UIColor *backgroundColor;
    NSArray *selectedPhotos;
    NSString *sort;
    int limit;
}

@end
