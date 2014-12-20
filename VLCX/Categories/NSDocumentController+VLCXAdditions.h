//
//  VXAudioDocument.h
//  VLCX
//
//  Created by Guilherme Rambo on 17/12/14.
//  Copyright (c) 2014 Guilherme Rambo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSDocumentController (VLCXAdditions)

+ (NSDictionary *)documentInfoForExtension:(NSString *)pathExtension;
+ (NSString *)documentTypeNameForExtension:(NSString *)pathExtension;
+ (Class)documentClassForExtension:(NSString *)pathExtension;
+ (NSArray *)subtitlesFileTypes;

@end
