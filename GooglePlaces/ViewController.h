//
//  ViewController.h
//  GooglePlaces
//
//  Created by Muhammad Waris Ali on 12/09/2013.
//  Copyright (c) 2013 Muhammad Waris Ali. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

#define kGOOGLE_API_KEY @"AIzaSyA_yuW0DQNzUtqg7odJvqxB3Q76yVUDFeU"
#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

@interface ViewController : UIViewController<MKMapViewDelegate,CLLocationManagerDelegate>
{
     CLLocationManager *locationManager;
     CLLocationCoordinate2D currentCentre;
     int currenDist;
     BOOL firstLaunch;
}

@property (weak, nonatomic) IBOutlet MKMapView *mapView;
- (IBAction)barButtonPressed:(id)sender;

@end
