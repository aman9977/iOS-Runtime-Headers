/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKHybridStrategist : NSObject <GKStrategist> {
    struct GKCHybridStrategist { struct vector<id<GKGameModel>, std::__1::allocator<id<GKGameModel> > > { id *x_1_1_1; id x_1_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_1_1_3; void*x_1_1_4; BOOL x_1_1_5; out void*x_1_1_6; void*x_1_1_7; const void*x_1_1_8; short x_1_1_9; short x_1_1_10; void*x_1_1_11; double x_1_1_12; void*x_1_1_13; void*x_1_1_14; void*x_1_1_15; int x_1_1_16; const void*x_1_1_17; void*x_1_1_18; void*x_1_1_19; short x_1_1_20; void*x_1_1_21; const out in void*x_1_1_22; void*x_1_1_23; int x_1_1_24; double x_1_1_25; void*x_1_1_26; void*x_1_1_27; void*x_1_1_28; void*x_1_1_29; void*x_1_1_30; void*x_1_1_31; void*x_1_1_32; void*x_1_1_33; out double x_1_1_34; void*x_1_1_35; long x_1_1_36; void*x_1_1_37; void*x_1_1_38; char *x_1_1_39; void*x_1_1_40; void*x_1_1_41; short x_1_1_42; void*x_1_1_43; double x_1_1_44; SEL x_1_1_45; SEL x_1_1_46; void*x_1_1_47; void*x_1_1_48; void*x_1_1_49; SEL x_1_1_50; SEL x_1_1_51; void*x_1_1_52; long x_1_1_53; long x_1_1_54; out BOOL x_1_1_55; void*x_1_1_56; void*x_1_1_57; out const void*x_1_1_58; int x_1_1_59; double x_1_1_60; void*x_1_1_61; void*x_1_1_62; void*x_1_1_63; void*x_1_1_64; void*x_1_1_65; void*x_1_1_66; void*x_1_1_67; void*x_1_1_68; out double x_1_1_69; void*x_1_1_70; long x_1_1_71; void*x_1_1_72; void*x_1_1_73; void*x_1_1_74; void*x_1_1_75; void*x_1_1_76; void*x_1_1_77; id *x_1_1_78; } x1; struct vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > > { struct vector<int, std::__1::allocator<int> > {} *x_2_1_1; struct vector<int, std::__1::allocator<int> > {} *x_2_1_2; struct __compressed_pair<std::__1::vector<int, std::__1::allocator<int> > *, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > > { struct vector<int, std::__1::allocator<int> > {} *x_3_2_1; } x_2_1_3; } x2; id x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; BOOL x9; } *_hybridStrategist;
}

@property (nonatomic) unsigned int budget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int explorationParameter;
@property (nonatomic, retain) <GKGameModel> *gameModel;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int maxLookAheadDepth;
@property (nonatomic, retain) <GKRandom> *randomSource;
@property (readonly) Class superclass;

- (id)bestMoveForActivePlayer;
- (unsigned int)budget;
- (void)dealloc;
- (unsigned int)explorationParameter;
- (id)gameModel;
- (id)init;
- (unsigned int)maxLookAheadDepth;
- (id)randomSource;
- (void)setBudget:(unsigned int)arg1;
- (void)setExplorationParameter:(unsigned int)arg1;
- (void)setGameModel:(id)arg1;
- (void)setMaxLookAheadDepth:(unsigned int)arg1;
- (void)setRandomSource:(id)arg1;
- (BOOL)validateGameModel:(id)arg1;
- (BOOL)validateRandomSource;

@end