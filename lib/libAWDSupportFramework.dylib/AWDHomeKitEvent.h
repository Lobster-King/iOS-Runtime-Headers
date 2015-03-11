/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDHomeKitEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    unsigned int _eventType;
    NSString *_guid;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int eventType;
@property(retain) NSString * guid;
@property BOOL hasEventType;
@property(readonly) BOOL hasGuid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (id)guid;
- (BOOL)hasEventType;
- (BOOL)hasGuid;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end