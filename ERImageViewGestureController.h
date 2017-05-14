//
//  ERImageViewGestureController.h
//  PhotoBlend
//
//  Created by Mahmudul Hasan on 5/9/17.
//  Copyright © 2017 Mahmudul Hasan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ERImageViewGestureController : UIImageView<UIGestureRecognizerDelegate> {

@protected
UIPinchGestureRecognizer *_pinchRecogniser;
UIRotationGestureRecognizer *_rotateRecogniser;
UIPanGestureRecognizer *_panRecogniser;
UITapGestureRecognizer *_tapRecogniser;
}


- (void) reset;
- (void) resetWithAnimation:(BOOL)animation;
- (void) resetWithAnimation:(BOOL)animation praspectToView:(UIView *)view;

- (void) removeAllGesture;

@end
