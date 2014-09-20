/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSLaunchdUtilities : NSObject  {
}

+ (int)pidForLabel:(id)arg1;
+ (bool)createJobWithLabel:(id)arg1 bundleIdentifier:(id)arg2 path:(id)arg3 containerPath:(id)arg4 arguments:(id)arg5 environment:(id)arg6 standardOutputPath:(id)arg7 standardErrorPath:(id)arg8 machServices:(id)arg9 threadPriority:(long long)arg10 waitForDebugger:(bool)arg11 denyCreatingOtherJobs:(bool)arg12 runAtLoad:(bool)arg13 disableASLR:(bool)arg14 systemApp:(bool)arg15;
+ (void)deleteAllJobsWithLabelPrefix:(id)arg1;
+ (void)deleteJobWithLabel:(id)arg1;
+ (unsigned long long)lastExitReasonForLabel:(id)arg1;
+ (id)currentJobLabel;
+ (id)labelForPID:(int)arg1;
+ (bool)startJobWithLabel:(id)arg1;
+ (bool)stopJobWithLabel:(id)arg1;
+ (id)allJobLabels;


@end
