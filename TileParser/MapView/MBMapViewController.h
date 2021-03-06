//
//  MBMapViewController.h
//  TileParser
//
//  Created by Moshe Berman on 8/17/12.
//
//

#import <UIKit/UIKit.h>

#import "MBMapView.h"

#import "MBSpriteMovementDelegate.h"

@interface MBMapViewController : UIViewController <MBSpriteMovementDelegate>

@property (nonatomic, strong) MBMapView *mapView;

- (id)initWithMapName:(NSString *)name;


@end
