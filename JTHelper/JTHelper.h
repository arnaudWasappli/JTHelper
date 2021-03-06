#ifndef _JTHELPER_
#define _JTHELPER_

	#import "NSString+JTHelper.h"
	#import "UIBarButtonItem+JTHelper.h"
	#import "UIButton+JTHelper.h"
	#import "UIColor+JTHelper.h"
	#import "UIImage+JTHelper.h"
	#import "UIImageView+JTHelper.h"
	#import "UILabel+JTHelper.h"
	#import "UITextField+JTHelper.h"
	#import "UIView+MotionEffect.h"

	#define CGRectMakePosition(x, y) CGRectMake(x, y, 0, 0)
	#define CGRectMakeWithPosition(position) CGRectMake(position.x, position.y, 0, 0)

	#define CGRectMakeSize(width, height) CGRectMake(0, 0, width, height)
	#define CGRectMakeWithSize(size) CGRectMake(0, 0, size.width, size.height)

	#define CGRectSetX(frame, x) frame = CGRectMake(x, frame.origin.y, frame.size.width, frame.size.height)
	#define CGRectSetY(frame, y) frame = CGRectMake(frame.origin.x, y, frame.size.width, frame.size.height)
	#define CGRectSetXY(frame, x, y) frame = CGRectMake(x, y, frame.size.width, frame.size.height)
	#define CGRectSetWidth(frame, width) frame = CGRectMake(frame.origin.x, frame.origin.y, width, frame.size.height)
	#define CGRectSetHeight(frame, height) frame = CGRectMake(frame.origin.x, frame.origin.y, frame.size.width, height)
	#define CGRectSetWidthHeight(frame, width, height) frame = CGRectMake(frame.origin.x, frame.origin.y, width, height)
	#define CGRectSetXWidth(frame, x, width) frame = CGRectMake(x, frame.origin.y, width, frame.size.height)
	#define CGRectSetXHeight(frame, x, height) frame = CGRectMake(x, frame.origin.y, frame.size.width, height)
	#define CGRectSetYWidth(frame, y, width) frame = CGRectMake(frame.origin.x, y, width, frame.size.height)
    #define CGRectSetYHeight(frame, y, height) frame = CGRectMake(frame.origin.x, y, frame.size.width, height)

    #define CGRectSetPosition(frame, x, y) frame = CGRectMake(x, y, frame.origin.y, width, frame.size.height)
	#define CGRectSetSize(frame, size) frame = CGRectMake(frame.origin.x, frame.origin.y, size.width, size.height)

	#define CGRectGetFrameCenter(frame) CGPointMake(frame.size.width / 2., frame.size.height / 2.)

	#define NSLogFrame(frame) NSLog(@"%@", NSStringFromCGRect(frame))
	#define NSLogPoint(point) NSLog(@"%@", NSStringFromCGPoint(point))
	#define NSLogSize(size) NSLog(@"%@", NSStringFromCGSize(size))

	#define appDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)

	#define STATUSBAR_HEIGHT 20.
	#define NAVBAR_HEIGHT 44.
	#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
	#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

#endif