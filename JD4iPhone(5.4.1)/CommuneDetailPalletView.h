//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface CommuneDetailPalletView : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    CDUnknownBlockType _publishComment;
}

@property(copy, nonatomic) CDUnknownBlockType publishComment; // @synthesize publishComment=_publishComment;
- (void).cxx_destruct;
- (void)setFieldStatus:(id)arg1;
- (void)setFieldText:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
