/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_containerScopedUserID;
    NSURL *_publicCloudDBURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicShareServiceURL;
}

@property (nonatomic, copy) NSString *containerScopedUserID;
@property (nonatomic, copy) NSURL *publicCloudDBURL;
@property (nonatomic, copy) NSURL *publicDeviceServiceURL;
@property (nonatomic, copy) NSURL *publicShareServiceURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)containerScopedUserID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)publicCloudDBURL;
- (id)publicDeviceServiceURL;
- (id)publicShareServiceURL;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setPublicCloudDBURL:(id)arg1;
- (void)setPublicDeviceServiceURL:(id)arg1;
- (void)setPublicShareServiceURL:(id)arg1;

@end