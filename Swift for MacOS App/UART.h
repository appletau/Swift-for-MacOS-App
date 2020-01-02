//
//  UART.h
//  Swift for MacOS App
//
//  Created by tautau on 2020/1/2.
//  Copyright © 2020 tautau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AMSerial/AMSerialPort.h>
#import <AMSerial/AMSerialPortAdditions.h>
#import <AMSerial/AMSerialPortList.h>
#import <AMSerial/AMSDKCompatibility.h>

NS_ASSUME_NONNULL_BEGIN

@interface UART : NSObject
{
    AMSerialPort *port;
    BOOL isUartOpening;
    NSMutableArray *dataSource;
}
@property(readonly)BOOL isUartOpening;

-(void)openComPort:(NSString *)devicePath baudRate:(int)br flowCtrl:(BOOL)isEnable parityCtrl:(BOOL)isEven;
-(int)isUartConnected:(NSString *)devicePath;
-(BOOL)TX:(NSString *)uartCmd;
-(NSString *) RX;
-(BOOL)TXbyBytes:(uint8_t *)bufer length:(int)len;
-(NSData *)RXbyBytes:(int)len;
-(void)closeComPort;
-(NSMutableArray *)uartList;
@end

NS_ASSUME_NONNULL_END
