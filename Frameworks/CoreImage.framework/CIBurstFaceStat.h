/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSMutableArray;

@interface CIBurstFaceStat : NSObject <NSCopying> {
    boolleftEyeOpen;
    boolrightEyeOpen;
    boolsmiling;
    boolfoundByFaceCore;
    boolhasLeftEye;
    boolhasRightEye;
    boolleftEyePleasant;
    boolrightEyePleasant;
    boolmouthPleasant;
    boolhasRollAngle;
    boolhasYawAngle;
    boolsmallFace;
    bool_isSyncedWithImage;
    float normalizedSigma;
    int faceId;
    int hwFaceId;
    int framesSinceLast;
    float focusScore;
    float normalizedFocusScore;
    float faceScore;
    float leftEyeBlinkScore;
    float rightEyeBlinkScore;
    float smileScore;
    int FCRLeftEyeFeaturesOffset;
    int FCRRightEyeFeaturesOffset;
    int FCRSmileFeaturesOffset;
    int FCRBlinkFeaturesSize;
    int FCRSmileFeaturesSize;
    float faceHOGTime;
    float faceCropTime;
    float faceScoreTime;
    float normalizedSmileScore;
    float rollAngle;
    float yawAngle;
    NSMutableArray *FCRSmileAndBlinkFeatures;
    NSMutableArray *faceHOG;
    double timestamp;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } faceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } normalizedFaceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } leftEyeRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } rightEyeRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _hwFaceRect;
}

@property bool leftEyeOpen;
@property bool rightEyeOpen;
@property bool smiling;
@property float leftEyeBlinkScore;
@property float rightEyeBlinkScore;
@property float smileScore;
@property bool hasLeftEye;
@property bool hasRightEye;
@property bool foundByFaceCore;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceRect;
@property int faceId;
@property int framesSinceLast;
@property float focusScore;
@property float faceScore;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftEyeRect;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightEyeRect;
@property int FCRLeftEyeFeaturesOffset;
@property int FCRRightEyeFeaturesOffset;
@property int FCRSmileFeaturesOffset;
@property int FCRBlinkFeaturesSize;
@property int FCRSmileFeaturesSize;
@property NSMutableArray * FCRSmileAndBlinkFeatures;
@property float faceHOGTime;
@property float faceCropTime;
@property float faceScoreTime;
@property NSMutableArray * faceHOG;
@property float normalizedSmileScore;
@property bool leftEyePleasant;
@property bool rightEyePleasant;
@property bool mouthPleasant;
@property int hwFaceId;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hwFaceRect;
@property float normalizedFocusScore;
@property float normalizedSigma;
@property bool hasRollAngle;
@property bool hasYawAngle;
@property float rollAngle;
@property float yawAngle;
@property double timestamp;
@property bool isSyncedWithImage;
@property bool smallFace;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)dealloc;
- (void)setMouthPleasant:(bool)arg1;
- (void)setRightEyePleasant:(bool)arg1;
- (void)setLeftEyePleasant:(bool)arg1;
- (void)setNormalizedSmileScore:(float)arg1;
- (void)setFaceHOG:(id)arg1;
- (void)setFaceScoreTime:(float)arg1;
- (float)faceScoreTime;
- (void)setFaceCropTime:(float)arg1;
- (float)faceCropTime;
- (void)setFaceHOGTime:(float)arg1;
- (float)faceHOGTime;
- (void)setFCRSmileAndBlinkFeatures:(id)arg1;
- (void)setFCRSmileFeaturesSize:(int)arg1;
- (void)setFCRBlinkFeaturesSize:(int)arg1;
- (void)setFCRSmileFeaturesOffset:(int)arg1;
- (void)setFCRRightEyeFeaturesOffset:(int)arg1;
- (void)setFCRLeftEyeFeaturesOffset:(int)arg1;
- (void)setFaceScore:(float)arg1;
- (id)initWithFaceStat:(id)arg1;
- (id)FCRSmileAndBlinkFeatures;
- (id)faceHOG;
- (bool)mouthPleasant;
- (bool)rightEyePleasant;
- (bool)leftEyePleasant;
- (float)normalizedSmileScore;
- (float)faceScore;
- (float)normalizedSigma;
- (void)setIsSyncedWithImage:(bool)arg1;
- (void)setYawAngle:(float)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setRollAngle:(float)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (void)setNormalizedSigma:(float)arg1;
- (void)setNormalizedFocusScore:(float)arg1;
- (void)setFocusScore:(float)arg1;
- (bool)foundByFaceCore;
- (void)setRightEyeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEyeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSmallFace:(bool)arg1;
- (void)setSmileScore:(float)arg1;
- (void)setRightEyeBlinkScore:(float)arg1;
- (void)setLeftEyeBlinkScore:(float)arg1;
- (void)setRightEyeOpen:(bool)arg1;
- (void)setLeftEyeOpen:(bool)arg1;
- (void)setHasRightEye:(bool)arg1;
- (void)setHasLeftEye:(bool)arg1;
- (void)setFoundByFaceCore:(bool)arg1;
- (void)setNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSyncedWithImage;
- (void)setHwFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hwFaceRect;
- (int)hwFaceId;
- (void)setHwFaceId:(int)arg1;
- (void)setFramesSinceLast:(int)arg1;
- (int)framesSinceLast;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceId:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (float)normalizedFocusScore;
- (void)setSmiling:(bool)arg1;
- (int)FCRSmileFeaturesSize;
- (int)FCRBlinkFeaturesSize;
- (int)FCRSmileFeaturesOffset;
- (int)FCRRightEyeFeaturesOffset;
- (int)FCRLeftEyeFeaturesOffset;
- (bool)smallFace;
- (bool)smiling;
- (bool)rightEyeOpen;
- (bool)leftEyeOpen;
- (float)focusScore;
- (float)smileScore;
- (float)rightEyeBlinkScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeRect;
- (bool)hasRightEye;
- (float)leftEyeBlinkScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeRect;
- (bool)hasLeftEye;
- (float)yawAngle;
- (bool)hasYawAngle;
- (float)rollAngle;
- (bool)hasRollAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;
- (int)faceId;

@end
