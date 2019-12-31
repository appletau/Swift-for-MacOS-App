//
//  PlistIO.h
//  UIcontrol
//
//  Created by TOM on 13/4/8.
//  Copyright (c) 2013年 TOM. All rights reserved.
//

#import <Foundation/Foundation.h>

#define INI_ITEM_KEY_NAME @"name"
#define INI_ITEM_KEY_CMD @"command"
#define INI_ITEM_KEY_VF @"validator"
#define INI_ITEM_KEY_UNIT @"unit"
#define INI_ITEM_KEY_SKIP @"skip"
#define INI_ITEM_KEY_WAIVE @"waive"
#define INI_ITEM_KEY_MAX @"max"
#define INI_ITEM_KEY_MIN @"min"
#define INI_ITEM_KEY_WAIVE_MAX @"max_w"
#define INI_ITEM_KEY_WAIVE_MIN @"min_w"

#define DEFAULT_STR @"NA"
#define DEFAULT_VAL 0

#define MAX_TESTS_SIZE 4096

typedef struct
{
    Boolean isSkip;
    Boolean isWaive;
    NSMutableString *Name;
    NSMutableString *Command;
    NSMutableString *ValidFrom;
    double Minimum;
    double Maximum;
    double Minimum_W;
    double Maximum_W;
    NSMutableString *Min;
    NSMutableString *Max;
    NSMutableString *unit;
    
    NSMutableString *TestValue;//for InstantPudding value
    NSMutableString *TestDisplayMessage; //for UI display
    NSMutableString *TestMessage; //for InstantPudding message
    NSMutableString *TestResult;
    Boolean isPass;
    Boolean isWaivePass;
    Boolean isTimeout;
    Boolean isNoLimit;
} TEST;

@interface PlistIO : NSObject
{
    BOOL isAllowPrefer;
    BOOL isAllowPudding;
    BOOL isAllowAuditMode;
    NSMutableDictionary *data;
    NSMutableDictionary *testDataDic;
    TEST testData[MAX_TESTS_SIZE];
    TEST testData2[MAX_TESTS_SIZE];
    TEST testData3[MAX_TESTS_SIZE];
    TEST testData4[MAX_TESTS_SIZE];
    int amount;
    NSString *workingfileName;
	NSMutableArray *equipments;
    NSString *stationName;
}
@property (nonatomic, readonly) BOOL isAllowPrefer;
@property (nonatomic, readonly) BOOL isAllowPudding;
@property (nonatomic, readonly) BOOL isAllowAuditMode;
@property (nonatomic, readonly) NSString *stationName;
@property (nonatomic, readonly) int amount;
@property (assign) NSMutableArray *equipments;

-(id)init:(NSString *)fileName;
-(void)equipmentsInit;
-(id)getEquipment:(NSString *)en;
-(BOOL)equipmentsReady:(NSMutableArray *)notReadyEquipments;
-(void)writeEquipmentDataToPlist:(NSString *)equipment forKey:key value:(id)val;
-(void)writeDeviceDataToPlist:(NSUInteger)deviceOrder forKey:key value:(id)val;
-(NSInteger)equipmentsCount;
-(id)getObjForKey:(NSString *)key;
-(void)loadPlistData:(NSString *)fileName;
-(TEST*)getItemDataByIndex:(int)index;
-(TEST*)getItemDataByIndex:(int)index fromThrd:(int)num;
-(BOOL)checkIsAllPass;
-(BOOL)checkIsAllPass:(int)num;
-(void)writeDataToPlist:(NSString *)key value:(id)val;
-(void)updateTestData:(TEST)theData withIndex:(int)index;
+(PlistIO *)sharedPlistIO;
-(void)initTest:(TEST *)t;
-(void)setProperties;
@end
