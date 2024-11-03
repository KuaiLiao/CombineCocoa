//
//  CombineCocoa.h
//  CombineCocoa
//
//  Created by Joan Disho on 25/09/2019.
//  Copyright © 2020 Combine Community. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<CombineCocoa/ObjcDelegateProxy.h>)
#import <CombineCocoa/ObjcDelegateProxy.h>
#else
#import "ObjcDelegateProxy.h"
#endif

FOUNDATION_EXPORT double CombineCocoaVersionNumber;
FOUNDATION_EXPORT const unsigned char CombineCocoaVersionString[];
