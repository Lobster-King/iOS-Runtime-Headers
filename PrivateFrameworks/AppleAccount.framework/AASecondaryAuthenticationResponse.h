/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASecondaryAuthenticationResponse : AAResponse {
    NSData *_buddyML;
    NSString *_secondFactorToken;
}

@property (nonatomic, readonly) NSData *buddyML;
@property (nonatomic, readonly) NSString *secondFactorToken;

- (void).cxx_destruct;
- (id)buddyML;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)secondFactorToken;

@end
