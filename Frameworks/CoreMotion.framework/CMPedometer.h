/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometer : NSObject {
    CMPedometerProxy *_pedometerProxy;
}

@property (nonatomic, readonly) CMPedometerProxy *pedometerProxy;

+ (BOOL)isDistanceAvailable;
+ (BOOL)isFloorCountingAvailable;
+ (BOOL)isPaceEstimationAvailable;
+ (BOOL)isStepCountingAvailable;

- (void)dealloc;
- (id)init;
- (id)pedometerProxy;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)queryPedometerDataSinceRecord:(int)arg1 withHandler:(id /* block */)arg2;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopPedometerUpdates;

@end