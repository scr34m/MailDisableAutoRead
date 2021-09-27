//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCFileWrapper.h>

@class NSData, NSProgress, NSURL;

@interface MCArchiveFileWrapper : MCFileWrapper
{
    MCFileWrapper *_realFileWrapper;
    NSData *_archiveData;
    long long _archiveType;
    NSURL *_compressedFileURL;
    unsigned long long _approximateSize;
    NSProgress *_overallProgress;
    NSProgress *_fileProgress;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;
@property(retain, nonatomic) NSProgress *fileProgress; // @synthesize fileProgress=_fileProgress;
@property(retain, nonatomic) NSProgress *overallProgress; // @synthesize overallProgress=_overallProgress;
@property(nonatomic) unsigned long long approximateSize; // @synthesize approximateSize=_approximateSize;
@property(readonly, nonatomic) NSURL *compressedFileURL; // @synthesize compressedFileURL=_compressedFileURL;
@property(readonly, nonatomic) long long archiveType; // @synthesize archiveType=_archiveType;
@property(readonly, nonatomic) NSData *archiveData; // @synthesize archiveData=_archiveData;
- (void).cxx_destruct;
- (void)getCompressedData:(id *)arg1 compressedFileURL:(id *)arg2 archiveType:(long long *)arg3;
- (id)preferredFilename;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)keyForFileWrapper:(id)arg1;
- (id)fileWrappers;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (BOOL)isSymbolicLink;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)_temporaryDirectoryURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 compressionLevel:(long long)arg2 error:(id *)arg3;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initWithData:(id)arg1 archiveType:(long long)arg2;
@property(readonly, nonatomic) MCFileWrapper *realFileWrapper;

@end

