/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiUIView.h"
#import "TiUtils.h"
#import <AssetsLibrary/AssetsLibrary.h>

@interface ComOxgcpAssetpickerAlbumView : TiUIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *tableView;
    NSMutableArray *groups;
}

@end
