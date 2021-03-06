/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal : NSObject  {
    long long _faceID;
    bool_hasRollAngle;
    double _rollAngle;
    bool_hasYawAngle;
    double _yawAngle;
    bool_hasLeftEyeClosedConfidence;
    int _leftEyeClosedConfidence;
    bool_hasRightEyeClosedConfidence;
    int _rightEyeClosedConfidence;
    bool_hasSmileConfidence;
    int _smileConfidence;
    bool_hasLeftEyeBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _leftEyeBounds;
    bool_hasRightEyeBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rightEyeBounds;
}

@property long long faceID;
@property bool hasRollAngle;
@property double rollAngle;
@property bool hasYawAngle;
@property double yawAngle;
@property bool hasLeftEyeClosedConfidence;
@property int leftEyeClosedConfidence;
@property bool hasRightEyeClosedConfidence;
@property int rightEyeClosedConfidence;
@property bool hasSmileConfidence;
@property int smileConfidence;
@property bool hasLeftEyeBounds;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftEyeBounds;
@property bool hasRightEyeBounds;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightEyeBounds;


- (void)setYawAngle:(double)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setRollAngle:(double)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (double)yawAngle;
- (bool)hasYawAngle;
- (double)rollAngle;
- (bool)hasRollAngle;
- (void)setRightEyeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeBounds;
- (void)setHasRightEyeBounds:(bool)arg1;
- (bool)hasRightEyeBounds;
- (void)setLeftEyeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeBounds;
- (void)setHasLeftEyeBounds:(bool)arg1;
- (bool)hasLeftEyeBounds;
- (void)setSmileConfidence:(int)arg1;
- (int)smileConfidence;
- (void)setHasSmileConfidence:(bool)arg1;
- (bool)hasSmileConfidence;
- (void)setRightEyeClosedConfidence:(int)arg1;
- (int)rightEyeClosedConfidence;
- (void)setHasRightEyeClosedConfidence:(bool)arg1;
- (bool)hasRightEyeClosedConfidence;
- (void)setLeftEyeClosedConfidence:(int)arg1;
- (int)leftEyeClosedConfidence;
- (void)setHasLeftEyeClosedConfidence:(bool)arg1;
- (bool)hasLeftEyeClosedConfidence;
- (void)setFaceID:(long long)arg1;
- (long long)faceID;

@end
