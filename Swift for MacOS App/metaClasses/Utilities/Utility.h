//
//  Utility.h
//  Swift for MacOS App
//
//  Created by tautau on 2020/1/2.
//  Copyright © 2020 tautau. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Utility : NSObject

+(void) DEMO;

// check int
+(bool) isInt:(double) value;

//convert type
+(int) convertDecStrToInt:(NSString *)str;
+(int) convertHexStrToInt:(NSString *)str;
+(int) convertStringToInt:(NSString *)str;
+(void) convertStrByPair:(NSString*)str toCharArr:(unsigned char[]) output;
+(NSString*) convertIntToHexStr:(int) value;
+(NSString*) ConvertFloatToHex:(float)floatVal;
+(NSString*) convertToHexStr:(NSString *)dataStr;
+(NSString*) convertHexStrToStr:(NSString*)hexStr;

// calculate ADC
+(unsigned short)MAX11617_ADC_Raw:(unsigned short)digit;
+(signed short)MAX11617_ADC_Polar:(unsigned short)digit;
+(float) getMAX11617_BipADC:(unsigned short)digit;
+(float) getADCByDigital:(float)ADC RefVoltage:(float)Vref Resolution:(int)bits;

// Time format
+(NSString*) getTimeBy12hr;
+(NSString*) getTimeBy24hr;
+(NSString*) getTimeForFile;
+(NSString*) getTimeForFolder;
+(NSString*) getTimeForLocalFolder;
+(NSString*) getTimeBy24hrStdFormate;

// string handle
+(NSString*) catchString:(NSString* )orgString specifyString:(NSString*) speStr validLen:(int) len;
+(NSString*) getBetweenKeyWords:(NSString*) orgString firstWord:(NSString*) word1 secendWord:(NSString*) word2;
+(NSString *)cleanStr:(NSString *)source;

// calculate Gain & Offset
+(float) getGainFromADCLow:(float)ADC_low DMMLow:(float)DMM_low ADCHigh:(float)ADC_high DMMHigh:(float)DMM_high;
+(float) getOffsetFromADCLow:(float)ADC_low DMMLow:(float)DMM_low ADCHigh:(float)ADC_high DMMHigh:(float)DMM_high;

// calculate Mean & Standard deviation
+(float) getMeanByNumArr:(NSMutableArray *) numArr;
+(float) getStddevByNumArr:(NSMutableArray *) numArr;

// save UART Log
+(NSString *)saveUartLogByData:(NSMutableString *)data SrNm:(NSString*)sn folderName:(NSString*)fName;

// calculate temp & illuminance
+(double)calc_color_temp:(double)r green:(double)g blue:(double)b;
+(double)calc_illuminance:(double)r green:(double)g blue:(double)b;

// base64 encode * decode
+(NSString*)encode:(NSString*)plainString;
+(NSString*)decode:(NSString*)base64String;

// QR code
//+(NSImage *)QRcodeFromStr:(NSString *)string width:(int)w height:(int)h;
//+(void)displayQRcodeMesgBox:(NSString *)sn;

// Process app function
+(BOOL)checkAppleScriptAccessibility;
//+(BOOL)awakeAppByBundleID:(NSString*)identity;

//2's Complement
+(signed long)TwoComplement:(unsigned long)original TotalBit:(int)Bits;
@end

NS_ASSUME_NONNULL_END
