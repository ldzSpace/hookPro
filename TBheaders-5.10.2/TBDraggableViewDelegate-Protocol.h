//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBDraggableView;

@protocol TBDraggableViewDelegate <NSObject>
- (void)draggableViewLongTouched:(TBDraggableView *)arg1;
- (void)draggableViewNeedsAlignment:(TBDraggableView *)arg1;
- (void)draggableViewTouched:(TBDraggableView *)arg1;
- (void)draggableViewReleased:(TBDraggableView *)arg1;
- (void)draggableView:(TBDraggableView *)arg1 didMoveToPoint:(struct CGPoint)arg2;
- (void)draggableViewHold:(TBDraggableView *)arg1;
@end
