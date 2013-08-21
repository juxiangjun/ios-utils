//
//  LocationUtils.h
//  Utils
//
//  Created by Tony Ju on 8/21/13.
//  Copyright (c) 2013 Tony Ju. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Location.h"


@interface LocationUtils : NSObject 


-(Location *) getCurrentLocation;
-(Location *) getCurrentLocationByAddr :(NSString *) address;
-(NSString *) getAddress :(Location *) location;
-(NSInteger *) getDistance :(Location *) fromLocation :(Location *) toLocation;


@end
