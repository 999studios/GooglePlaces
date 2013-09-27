//
//  MapPoint.h
//  GooglePlaces
//
//  Created by Muhammad Waris Ali on 12/09/2013.
//  Copyright (c) 2013 Muhammad Waris Ali. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MapPoint : NSObject<MKAnnotation>
{
    
    NSString *_name;
    NSString *_address;
    CLLocationCoordinate2D _coordinate;
    
}

@property (copy) NSString *name;
@property (copy) NSString *address;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

- (id)initWithName:(NSString*)name address:(NSString*)address coordinate:(CLLocationCoordinate2D)coordinate;

@end
