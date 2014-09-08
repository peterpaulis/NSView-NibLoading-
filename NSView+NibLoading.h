//
//  NSView+NibLoading.h
//  Fontstand
//
//  Created by Peter Paulis on 08/09/14.
//  Copyright (c) 2014 min60 s.r.o. - Peter Paulis. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSView (NibLoading)

+ (NSView *)loadWithNibNamed:(NSString *)nibNamed owner:(id)owner class:(Class)loadClass;

@end
