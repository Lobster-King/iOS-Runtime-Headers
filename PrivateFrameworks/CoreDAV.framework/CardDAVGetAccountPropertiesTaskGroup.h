/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSString;



@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup 
{
    NSSet *_addressBookHomes;
    NSString *_directoryGatewayPath;
}

@property(readonly) NSString *directoryGatewayPath;
@property(readonly) NSSet *addressBookHomes;


- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (id)directoryGatewayPath;
- (id)addressBookHomes;
- (id)description;
- (void)dealloc;

@end