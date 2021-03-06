/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphicsContainer : NSObject {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mContainerTransform;
    MFPGraphicsState *mParentGraphicsState;
}

- (id).cxx_construct;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })containerTransform;
- (void)dealloc;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)parentGraphicsState;

@end
