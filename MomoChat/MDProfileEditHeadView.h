//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "GMGridViewSortingDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class GMGridView, MDProfileEditHeadViewStrategy, NSArray, NSData, NSString, UILabel;

@interface MDProfileEditHeadView : UIView <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, GMGridViewDataSource, GMGridViewActionDelegate, GMGridViewSortingDelegate, UIScrollViewDelegate>
{
    NSArray *gridDataList;
    long long selectedIndex;
    NSString *currentSendVideoId;
    long long gifItemCount;
    long long gifItemMaxCount;
    id <MDProfileEditHeadViewDelegate> _delegate;
    MDProfileEditHeadViewStrategy *_viewStrategy;
    GMGridView *_gridView;
    UILabel *_hintTipLabel;
    NSData *_addButtonImgData;
}

@property(retain, nonatomic) NSData *addButtonImgData; // @synthesize addButtonImgData=_addButtonImgData;
@property(retain, nonatomic) UILabel *hintTipLabel; // @synthesize hintTipLabel=_hintTipLabel;
@property(retain, nonatomic) GMGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) MDProfileEditHeadViewStrategy *viewStrategy; // @synthesize viewStrategy=_viewStrategy;
@property(nonatomic) __weak id <MDProfileEditHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long gifItemMaxCount; // @synthesize gifItemMaxCount;
@property(nonatomic) long long gifItemCount; // @synthesize gifItemCount;
@property(copy, nonatomic) NSString *currentSendVideoId; // @synthesize currentSendVideoId;
@property(retain, nonatomic) NSArray *gridDataList; // @synthesize gridDataList;
- (void).cxx_destruct;
- (id)addButtonViewWithRect:(struct CGRect)arg1;
- (id)picItemWithModel:(id)arg1 Frame:(struct CGRect)arg2;
- (long long)itemMaxTotalCount;
- (long long)itemMaxCountPerRow;
- (double)itemMargin;
- (struct CGSize)itemSize;
- (void)GMGridView:(id)arg1 didEndMovingCell:(id)arg2;
- (void)GMGridView:(id)arg1 didStartMovingCell:(id)arg2;
- (_Bool)GMGridView:(id)arg1 canMoveItemAtIndex:(long long)arg2;
- (void)GMGridView:(id)arg1 exchangeItemAtIndex:(long long)arg2 withItemAtIndex:(long long)arg3;
- (void)GMGridView:(id)arg1 moveItemAtIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (double)caculateGridViewHeightWithItemCount:(long long)arg1;
- (void)refreshGifItemCount;
- (void)updateViewWithList:(id)arg1 strategy:(id)arg2;
- (void)updateViewWithList:(id)arg1;
- (void)addNewPicFromPhoto;
- (void)addObservers;
- (void)dealloc;
- (id)init;
- (void)showMaxVideoAlert;
- (void)showVideoPositonNotAviableAlert;
- (_Bool)isSelectedGifItem:(long long)arg1;
- (_Bool)isPositonAviableForVideo:(long long)arg1;
- (_Bool)isGifFull;
- (_Bool)editViewCanTakeVideo;
- (void)sendProfileViedoSucess:(id)arg1;
- (void)didTakeVideo;
- (void)tvTakeVideo;
- (void)checkIfShowHeadImageFullAlert;
- (_Bool)isHeadImageFull;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)tpTakePhoto;
- (void)tpPickImageWithSourceType:(long long)arg1;
- (void)tpPickImage;
- (void)tPDeletePhoto;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showVipAlert;
- (_Bool)editViewCanHandleTapItemInPos:(long long)arg1;
- (void)changeToNewArray:(id)arg1;
- (void)addOrReplacePhotoAtSelectedIndexWithPhotoData:(id)arg1;
- (void)changePhoto:(unsigned long long)arg1 NewIndex:(unsigned long long)arg2;
- (void)uMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)handleActionWithTitle:(id)arg1;
- (void)handleAddPictureActionSheet:(id)arg1 ClickedButtonAtIndex:(long long)arg2;
- (void)handleReplaceOrDeleteActionSheet:(id)arg1 ClickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)existDoActionSheet:(id)arg1;
- (void)addDoActionSheet:(id)arg1;
- (void)uAddNewPhotos;
- (void)uDidTapOnItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
