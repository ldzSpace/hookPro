//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDMRegionChooseViewDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDMRegionChooseView, JDStoreNetwork, NSArray, NSString, NewRefreshTableHeaderView, UILabel, UITableView;

@interface JDMNewCinemaListView : UIView <UITableViewDelegate, UITableViewDataSource, JDMRegionChooseViewDelegate, NewRefreshTableHeaderViewDelegate>
{
    JDStoreNetwork *m_network;
    double contentOffetY;
    UIView *m_topView;
    UITableView *m_tableView;
    NewRefreshTableHeaderView *m_refreshView;
    NSArray *m_dataArray;
    NSArray *m_dataBannerArray;
    UILabel *m_nearBtn;
    UILabel *m_priceBtn;
    UILabel *m_allBtn;
    JDMRegionChooseView *m_regionChooseView;
    NSString *m_regionCode;
    long long m_index;
    UIView *m_shuaxinView;
    NSString *m_jumpCinemaId;
    UIView *_m_focusRedLine;
}

@property(retain, nonatomic) UIView *m_focusRedLine; // @synthesize m_focusRedLine=_m_focusRedLine;
@property(retain, nonatomic) NSString *m_jumpCinemaId; // @synthesize m_jumpCinemaId;
@property(retain, nonatomic) UIView *m_shuaxinView; // @synthesize m_shuaxinView;
@property(nonatomic) long long m_index; // @synthesize m_index;
@property(retain, nonatomic) NSString *m_regionCode; // @synthesize m_regionCode;
@property(retain, nonatomic) JDMRegionChooseView *m_regionChooseView; // @synthesize m_regionChooseView;
@property(retain, nonatomic) UILabel *m_allBtn; // @synthesize m_allBtn;
@property(retain, nonatomic) UILabel *m_priceBtn; // @synthesize m_priceBtn;
@property(retain, nonatomic) UILabel *m_nearBtn; // @synthesize m_nearBtn;
@property(retain, nonatomic) NSArray *m_dataBannerArray; // @synthesize m_dataBannerArray;
@property(retain, nonatomic) NSArray *m_dataArray; // @synthesize m_dataArray;
@property(retain, nonatomic) NewRefreshTableHeaderView *m_refreshView; // @synthesize m_refreshView;
@property(retain, nonatomic) UITableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
- (void)finishLoading;
- (void)removeReloadView;
- (void)showReloadView;
- (void)refreshLoading;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)jump2CM;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showTableView;
- (id)filterRegionCinema:(id)arg1;
- (void)fetchData:(long long)arg1;
- (void)fetchDataOut;
- (void)dealloc;
- (void)dismissRegionChooseView:(id)arg1;
- (void)dismissRegionWithoutFetch;
- (void)scrollToTop;
- (void)popupRegionChoiceView;
- (void)resetCityRegions;
- (void)updateCityRegions;
- (void)doTabChange:(long long)arg1;
- (void)cinimaListTypeClick:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
