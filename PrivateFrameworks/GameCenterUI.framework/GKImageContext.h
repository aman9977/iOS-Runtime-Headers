/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageContext : NSObject {
    struct CGContext { } *_CGContext;
    float _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property (nonatomic, readonly) struct CGContext { }*CGContext;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) float scale;
@property (nonatomic) struct CGSize { float x1; float x2; } size;

+ (id)drawWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
+ (id)imageFromRawPixelsAtURL:(id)arg1;

- (struct CGContext { }*)CGContext;
- (void)dealloc;
- (id)image;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 options:(unsigned int)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 options:(unsigned int)arg3 data:(void*)arg4;
- (float)scale;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)writeRawPixelsToURL:(id)arg1 error:(id*)arg2;

@end