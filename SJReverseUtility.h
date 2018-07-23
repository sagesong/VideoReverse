//
//  SJReverseUtility.h
//  playback
//
//  Created by Lightning on 2018/7/12.
//  Copyright © 2018年 hello. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

typedef void(^ReverseCallBack)(AVAssetWriterStatus status, float progress, NSError *error);

@interface SJReverseUtility : NSObject

- (instancetype)initWithAsset:(AVAsset *)asset outputPath:(NSString *)path;

- (void)startProcessing;

- (void)cancelProcessing;

@property (nonatomic, copy) ReverseCallBack callBack;

@property (nonatomic, assign) CMTimeRange timeRange;

@end
