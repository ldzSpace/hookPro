//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MarketRequestDelegate-Protocol.h"
#import "TMSearchResponseUpdations-Protocol.h"

@class MarketShoppingCartPriceRequest, NSString, NewSearchSiftViewModel, SearchToolModel, TMItemSearchFilter;
@protocol SearchToolViewModelDelegate><TMCUniformSearchProtocol;

@interface SearchToolViewModel : NSObject <MarketRequestDelegate, TMSearchResponseUpdations>
{
    MarketShoppingCartPriceRequest *_request;	// 8 = 0x8
    TMItemSearchFilter *_filter;	// 16 = 0x10
    id <SearchToolViewModelDelegate><TMCUniformSearchProtocol> _vmDelegate;	// 24 = 0x18
    SearchToolModel *_model;	// 32 = 0x20
}

@property(retain, nonatomic) SearchToolModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SearchToolViewModelDelegate><TMCUniformSearchProtocol> vmDelegate; // @synthesize vmDelegate=_vmDelegate;
@property(readonly, nonatomic) TMItemSearchFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)marketShoppingCartPriceRequestFailed:(id)arg1;
- (void)marketShoppingCartPriceRequestSuccess:(id)arg1;
- (void)sendShoppingCartPriceRequest;
- (void)updateWithShopsSearchResponseFailed:(id)arg1 forRequest:(id)arg2;
- (void)updateWithShopsSearchResponse:(id)arg1 forRequest:(id)arg2;
- (void)updateWithItemsSearchResponseFailed:(id)arg1 forRequest:(id)arg2;
- (void)updateWithItemsSearchResponse:(id)arg1 forRequest:(id)arg2;
- (void)updateWithNavhotSelected:(id)arg1;
- (void)updateWithNewKeyword;
- (void)updateWithShopsSearchMode;
- (void)updateWithItemsSearchMode;
- (void)searchWithNewQuery:(id)arg1 spos:(id)arg2;
- (void)selectPriceRangeWithStarPrice:(long long)arg1 endPrice:(long long)arg2;
- (void)selectPresentStyle:(long long)arg1;
- (void)selectShopsSearchMode;
- (void)selectSortMode:(long long)arg1;
- (void)refreshWithParam:(id)arg1;
- (void)clickedToRefreshWithParam:(id)arg1;
- (void)clickedToSelectAddress:(id)arg1;
- (void)clickRegionModuleViewBtn:(id)arg1 atIndex:(long long)arg2 selected:(_Bool)arg3;
- (void)clickedToDeleteNavHot:(id)arg1;
- (void)addressRegionClickedForLoginSuccess;
- (void)forceLoadFirstPage;
@property(readonly, nonatomic) __weak NewSearchSiftViewModel *siftViewModel;
- (id)initWithFilter:(id)arg1 vmDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
