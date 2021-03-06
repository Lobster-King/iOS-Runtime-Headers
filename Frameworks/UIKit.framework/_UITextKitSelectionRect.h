/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextKitSelectionRect : UITextSelectionRect {
    BOOL _containsEnd;
    BOOL _containsStart;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rect;
    BOOL _vertical;
}

@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL containsStart;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rect;
@property (getter=isVertical, nonatomic) BOOL vertical;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;

- (BOOL)containsEnd;
- (BOOL)containsStart;
- (id)description;
- (BOOL)isVertical;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(BOOL)arg1;
- (void)setContainsStart:(BOOL)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (void)setVertical:(BOOL)arg1;
- (int)writingDirection;

@end
