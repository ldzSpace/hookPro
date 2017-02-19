//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class BrowseHistoryModel, BrowseHistoryOnOffModel, JDButton, JDImageView, UIButton, UILabel, UITableView, UIView;

@interface BrowseHistoryCell : UITableViewCell
{
    BrowseHistoryModel *_productModel;
    JDButton *_checkButton;
    id <BrowseHistoryCellDelegate> _delegate;
    UITableView *_tableView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    JDImageView *_wareImageView;
    JDImageView *_wareImageViewNoGoods;
    UILabel *_deprecatedGoodsLabel;
    UIView *_addToCarView;
    UIButton *_similarBtn;
    BrowseHistoryOnOffModel *_onOffModel;
}

@property(retain, nonatomic) BrowseHistoryOnOffModel *onOffModel; // @synthesize onOffModel=_onOffModel;
@property(retain, nonatomic) UIButton *similarBtn; // @synthesize similarBtn=_similarBtn;
@property(retain, nonatomic) UIView *addToCarView; // @synthesize addToCarView=_addToCarView;
@property(retain, nonatomic) UILabel *deprecatedGoodsLabel; // @synthesize deprecatedGoodsLabel=_deprecatedGoodsLabel;
@property(retain, nonatomic) JDImageView *wareImageViewNoGoods; // @synthesize wareImageViewNoGoods=_wareImageViewNoGoods;
@property(retain, nonatomic) JDImageView *wareImageView; // @synthesize wareImageView=_wareImageView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <BrowseHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JDButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) BrowseHistoryModel *productModel; // @synthesize productModel=_productModel;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (id)_attributedPrice:(id)arg1 color:(id)arg2;
- (id)_color:(id)arg1 isPrice:(_Bool)arg2;
- (void)_updateSimilarBtnState:(id)arg1;
- (void)_updateCartViewState:(id)arg1;
- (void)_updateImageViewState:(id)arg1;
- (void)_configCartViewAndSimilarBtn;
- (void)_configPriceLabel;
- (void)_configTitleLabel;
- (void)_configImageView;
- (void)fillData:(id)arg1 onOffModel:(id)arg2;
- (void)clickSimilarBtn;
- (void)addCartAction;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
