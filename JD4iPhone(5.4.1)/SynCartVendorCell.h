//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SynCartVendorViewDelegate.h"

@class JDVendorModel, NSString, ShopCartViewModel, SynCartVendorView;

@interface SynCartVendorCell : UITableViewCell <SynCartVendorViewDelegate>
{
    JDVendorModel *_itemData;
    ShopCartViewModel *_viewModel;
    id <SynCartVendorCellDelegate> _delegate;
    SynCartVendorView *_vendorView;
}

+ (int)heightForItemData:(id)arg1;
@property(retain, nonatomic) SynCartVendorView *vendorView; // @synthesize vendorView=_vendorView;
@property(nonatomic) __weak id <SynCartVendorCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShopCartViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) JDVendorModel *itemData; // @synthesize itemData=_itemData;
- (void).cxx_destruct;
- (void)vendorCellDidCheckedWithParamater:(id)arg1;
- (void)vendorCellRedirectToCoudanPage:(id)arg1;
- (void)vendorCellRedirectToCouponPage:(id)arg1;
- (void)vendorCellRedirectToShopHome:(id)arg1;
- (void)setEditing:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
