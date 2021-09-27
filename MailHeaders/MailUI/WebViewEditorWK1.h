//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebViewEditor.h"

#import "DOMEventListener-Protocol.h"

@class ComposeBackEndWK1, DOMHTMLAnchorElement, EditingMessageWebView, NSDictionary, NSString;

@interface WebViewEditorWK1 : WebViewEditor <DOMEventListener>
{
    BOOL _finalSpellCheckingIsInProgress;
    NSDictionary *_infoForRichnessTest;
    BOOL _isDeletingAllEncompassingSelection;
    BOOL _ignoreExtraneousUndo;
    EditingMessageWebView *_webView;
    DOMHTMLAnchorElement *_linkWhoseTextIsBeingEdited;
}

@property(nonatomic) BOOL ignoreExtraneousUndo; // @synthesize ignoreExtraneousUndo=_ignoreExtraneousUndo;
@property(nonatomic) BOOL isDeletingAllEncompassingSelection; // @synthesize isDeletingAllEncompassingSelection=_isDeletingAllEncompassingSelection;
@property(retain, nonatomic) DOMHTMLAnchorElement *linkWhoseTextIsBeingEdited; // @synthesize linkWhoseTextIsBeingEdited=_linkWhoseTextIsBeingEdited;
@property(retain, nonatomic) EditingMessageWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)_changeDocumentBackgroundColorToColor:(id)arg1;
- (void)webView:(id)arg1 didWriteSelectionToPasteboard:(id)arg2;
- (BOOL)_insertNewline:(id)arg1;
- (BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)webViewDidChangeSelection:(id)arg1;
- (void)replaceOldSignatureWithNewSignature:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (void)_setWebViewPreferencesToAllowRichText:(BOOL)arg1;
- (void)_removeAllFormatting;
- (void)_doOrUndoEditingInSignatureWithInfo:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)prepareToGoAway;
- (id)editingHistoryDataWithObfuscation:(BOOL)arg1;
- (void)pasteAsMarkup;
- (void)_replaceSelectionWithFragment:(id)arg1;
- (void)_addAttachments:(id)arg1;
- (void)_redisplayChangedAttachment:(id)arg1;
- (void)viewAttachments:(id)arg1 inLine:(BOOL)arg2;
- (id)selectedAttachmentNode;
- (id)attachmentForEvent:(id)arg1;
- (void)replaceRiskyAttachmentsWithLinks;
- (void)removeAttachmentsLeavingPlaceholder:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAttachment:(id)arg1;
- (void)webView:(id)arg1 willRemoveMailAttachment:(id)arg2;
- (void)webView:(id)arg1 didAddMailAttachment:(id)arg2;
- (void)webViewWillInsertContentsOfWebpage:(id)arg1;
- (BOOL)webViewShouldReplaceSelectionWithContentsOfWebpage:(id)arg1;
- (void)webViewMainDocumentBaseURIDidChange:(id)arg1;
- (id)webView:(id)arg1 shouldReplaceSelectionWithWebArchive:(id)arg2 givenAction:(long long)arg3;
- (id)_validRangeFromSelection:(id)arg1;
- (BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (void)appendAttributedString:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (void)appendMessageBody:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (void)appendFragment:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (void)_checkRichnessForEditedRange:(id)arg1;
- (void)_changeComposeModeInViewTo:(long long)arg1;
- (BOOL)webView:(id)arg1 canInsertFromPasteboard:(id)arg2 forDrag:(BOOL)arg3;
- (void)setFloat:(id)arg1 ofNode:(id)arg2 inView:(id)arg3 undoTitle:(id)arg4;
- (void)_setFloat:(id)arg1 ofNode:(id)arg2 inView:(id)arg3 undoTitle:(id)arg4;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)_insertListInWebViewWithNumbers:(BOOL)arg1 undoTitle:(id)arg2;
- (BOOL)selectionIsInList;
- (void)_changeIndentation:(long long)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (long long)_webViewSpellCheckerDocumentTag;
- (void)setFinalSpellCheckingIsInProgress:(BOOL)arg1;
- (BOOL)finalSpellCheckingIsInProgress;
- (void)_finalSpellCheckCompleted:(id)arg1;
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)_document;
- (void)setUp;
- (void)earlySetUp;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) ComposeBackEndWK1 *composeBackEnd; // @dynamic composeBackEnd;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

