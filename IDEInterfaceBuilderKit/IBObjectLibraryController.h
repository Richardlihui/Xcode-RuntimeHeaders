/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDELibraryController.h"

#import "IBObjectContainerArchivingDelegate-Protocol.h"

@class DVTNotificationToken, DVTPerformanceMetric, IBMutableIdentityDictionary, IBObjectLibraryTemplateController, IBTargetRuntime, NSString;

@interface IBObjectLibraryController : IDELibraryController <IBObjectContainerArchivingDelegate>
{
    IBMutableIdentityDictionary *templateControllers;
    IBObjectLibraryTemplateController *userAssetTemplateController;
    IBTargetRuntime *targetRuntime;
    NSString *currentDragMarker;
    DVTPerformanceMetric *objectLibraryLoadingPerformanceMetric;
    DVTNotificationToken *documentDidAddDraggedObjectsToken;
}

+ (id)defaultTargetRuntime;
+ (Class)minimumTargetRuntimeClass;
@property(copy) NSString *currentDragMarker; // @synthesize currentDragMarker;
@property(retain) DVTPerformanceMetric *objectLibraryLoadingPerformanceMetric; // @synthesize objectLibraryLoadingPerformanceMetric;
@property(retain, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime;
- (void).cxx_destruct;
- (void)libraryDidLoad;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (BOOL)isApplicableDocument:(id)arg1;
- (BOOL)isApplicableTargetRuntime:(id)arg1;
- (void)loadAvailableLibraryTemplateControllers;
- (void)removeLibraryTemplateControllers;
- (void)userDidEditAsset:(id)arg1;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (id)constructTemplateImageForDraggedObjects:(id)arg1;
- (id)defaultLabelForObjectTemplate:(id)arg1;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)temporaryDocument;
- (BOOL)depositAssets:(id)arg1;
- (id)activeWorkspaceTabController;
- (void)documentDidAddDraggedObjects:(id)arg1;
- (id)readableAssetPasteboardTypes;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (id)viewBackedDragImageOfAsset:(id)arg1;
- (id)bitmapDragImageOfAsset:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 identifierMapTable:(id *)arg3;
- (id)objectContainerFromTemplate:(id)arg1 forInsertionIntoPasteboard:(id)arg2;
- (void)putObjectContainer:(id)arg1 onPasteboard:(id)arg2;
- (void)objectContainerClass:(Class)arg1 didCreateObjectContainerWithCoder:(id)arg2;
- (void)objectContainerClass:(Class)arg1 willCreateObjectContainerWithCoder:(id)arg2;
- (void)objectContainer:(id)arg1 didCreateDataRepresentationWithCoder:(id)arg2 context:(id)arg3;
- (void)objectContainer:(id)arg1 willCreateDataRepresentationWithCoder:(id)arg2 context:(id)arg3;
- (id)searchStringsForAsset:(id)arg1;
- (id)loadAssetsFromTemplateController:(id)arg1;
- (void)prepareLibraryObjectTemplateForAssetCreation:(id)arg1 fromController:(id)arg2;
- (id)createAssetForTemplate:(id)arg1 inNamespace:(id)arg2;
- (id)createDetailedDescriptionFromTemplate:(id)arg1;
- (id)createImageFromObjectTemplate:(id)arg1;
- (id)libraryObjectTemplatesFromNibContent:(id)arg1 fromController:(id)arg2;
- (BOOL)shouldIncludeLibraryObjectTemplate:(id)arg1 fromController:(id)arg2;
- (id)userAssetTemplateController;
- (id)objectPasteboardType;
- (id)createUserAssetTemplateController;
- (id)allObjectLibraryTemplateExtensions;
- (id)templateControllerForExtension:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

