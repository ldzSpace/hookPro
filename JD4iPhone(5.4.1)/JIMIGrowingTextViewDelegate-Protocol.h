//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class JIMIGrowingTextView, NSString;

@protocol JIMIGrowingTextViewDelegate

@optional
- (void)growingTextViewContextChange:(JIMIGrowingTextView *)arg1;
- (_Bool)growingShouldChangeTextInRange:(JIMIGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldReturn:(JIMIGrowingTextView *)arg1;
- (void)growingTextViewDidChangeSelection:(JIMIGrowingTextView *)arg1;
- (void)growingTextView:(JIMIGrowingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(JIMIGrowingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidChange:(JIMIGrowingTextView *)arg1;
- (_Bool)growingTextView:(JIMIGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)growingTextViewDidEndEditing:(JIMIGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(JIMIGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldEndEditing:(JIMIGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(JIMIGrowingTextView *)arg1;
@end
