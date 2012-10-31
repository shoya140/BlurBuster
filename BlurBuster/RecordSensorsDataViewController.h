//
//  RecordSensorsDataViewController.h
//  BlurBuster
//
//  Created by ishimaru on 2012/10/29.
//  Copyright (c) 2012年 ishimaru. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface RecordSensorsDataViewController : UIViewController{
    
    __weak IBOutlet UILabel *accelX;
    __weak IBOutlet UILabel *accelY;
    __weak IBOutlet UILabel *accelZ;
    __weak IBOutlet UILabel *gyroX;
    __weak IBOutlet UILabel *gyroY;
    __weak IBOutlet UILabel *gyroZ;
    __weak IBOutlet UILabel *attitudeRoll;
    __weak IBOutlet UILabel *attitudePitch;
    __weak IBOutlet UILabel *attitudeYaw;
    __weak IBOutlet UIButton *startButton;
    AVCaptureSession *session;
    AVCaptureStillImageOutput *stillImageOutput;
    
}

- (IBAction)startButtonPushed:(id)sender;

@end