/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;



@interface PLPhoto : MLPhoto <PLConnectionObjectInteraction>
{
    NSUInteger _changeFlags;
    NSInteger _primaryKey;
    NSString *_title;
    short _width;
    short _height;
    BOOL _userRating;
    BOOL _flagged;
    BOOL _orientation;
    BOOL _type;
    NSInteger _thumbnailIndex;
    double _latitude;
    double _longitude;
    double _captureTime;
    NSString *_directory;
    NSString *_filename;
    double _duration;
    double _recordModDate;
    NSInteger _hdrType;
    unsigned int _didSetDuration : 1;
}

@property NSInteger HDRType;

+ (id)photoWithValuesFromDictionary:(id)arg1;
+ (NSInteger)createTablesForConnection:(id)arg1;
+ (Class)classFromStepData:(struct sqlite3_stmt { }*)arg1;
+ (id)pathForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)photoWithDefaultValues;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;

- (id)filename;
- (void)setHeight:(short)arg1;
- (NSInteger)primaryKey;
- (void)setFilename:(id)arg1;
- (NSInteger)saveAuxToConnection:(id)arg1 insert:(BOOL)arg2;
- (NSUInteger)changeFlags;
- (BOOL)flagged;
- (void)setFlagged:(BOOL)arg1;
- (NSInteger)thumbnailIndex;
- (void)_setPrimaryKey:(NSInteger)arg1;
- (id)initWithStepData:(struct sqlite3_stmt { }*)arg1;
- (void)updateWithAuxStepData:(struct sqlite3_stmt { }*)arg1;
- (id)dataForFormat:(NSInteger)arg1 width:(NSInteger*)arg2 height:(NSInteger*)arg3 bytesPerRow:(NSInteger*)arg4 dataWidth:(NSInteger*)arg5 dataHeight:(NSInteger*)arg6 imageDataOffset:(NSInteger*)arg7;
- (id)_createImageForFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (double)recordModDate;
- (id)databaseValuesAsDictionary;
- (void)assignDatabaseValuesFromDictionary:(id)arg1;
- (void)clearChangeFlags;
- (id)pathToLargeThumbnail;
- (NSInteger)saveToConnection:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
- (void)setDirectory:(id)arg1;
- (id)pathForMetadataDirectory;
- (void)setRecordModDate:(double)arg1;
- (void)setThumbnailIndex:(NSInteger)arg1;
- (void)setRecordModDate;
- (NSInteger)HDRType;
- (void)setHDRType:(NSInteger)arg1;
- (short)height;
- (NSInteger)type;
- (void)setOrientation:(NSInteger)arg1;
- (BOOL)isEditable;
- (short)width;
- (void)setWidth:(short)arg1;
- (id)title;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setType:(NSInteger)arg1;
- (id)description;
- (void)setDuration:(double)arg1;
- (double)duration;
- (id)init;
- (NSInteger)orientation;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)setUserRating:(BOOL)arg1;
- (BOOL)userRating;
- (id)directory;
- (id)imageSourceTypeHint;
- (id)pathForFullSizeImage;
- (id)pathForLowResolutionFile;
- (NSInteger)imageID;
- (void)setDurationInMilliseconds:(double)arg1;
- (double)durationInMilliseconds;
- (NSInteger)photoType;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (id)pathForImageFormat:(NSInteger)arg1;
- (double)captureTime;
- (void)setCaptureTime:(double)arg1;
- (BOOL)allowsRotation;
- (id)pathForOriginalFile;
- (BOOL)hasFullSizeImageData;
- (id)fullSizeImagePath;
- (id)fileExtensions;
- (id)pathForVideoFile;
- (id)fileExtension;
- (id)pathForVideoPreviewFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;

@end