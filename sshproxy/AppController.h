//
//  AppController.h
//  sshproxy
//
//  Created by Brant Young on 16/1/13.
//  Copyright (c) 2013 Codinn Studio. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "GeneralPreferencesViewController.h"
#import "MASPreferencesWindowController.h"
#import "INSOCKSServer.h"
#import "INSOCKSConnection.h"
#import "AboutWindowController.h"

@interface AppController : NSObject <NSApplicationDelegate, NSMenuDelegate, MASPreferencesWindowDelegate, INSOCKSServerDelegate>

@property (nonatomic, readwrite) MASPreferencesWindowController *preferencesWindowController;
@property (nonatomic, readwrite) AboutWindowController* aboutWindowController;

/* Our IBAction which will call the helloWorld method when our connected Menu Item is pressed */

- (IBAction)turnOnProxy:(id)sender;
- (IBAction)turnOffProxy:(id)sender;
- (IBAction)openPreferences:(id)sender;
- (IBAction)openWhitelistPreferences:(id)sender;
- (IBAction)openHelpURL:(id)sender;
- (IBAction)openAboutWindow:(id)sender;
- (IBAction)switchProxyMode:(id)sender;


/* Our outlets which allow us to access the interface */
@property IBOutlet NSMenu *statusMenu;
@property IBOutlet NSMenuItem* statusMenuItem;
@property IBOutlet NSMenuItem* cautionMenuItem;
@property IBOutlet NSMenuItem* turnOnMenuItem;
@property IBOutlet NSMenuItem* turnOffMenuItem;
@property IBOutlet NSMenuItem* add2WhitelistMenuItem;
@property IBOutlet NSMenuItem* allSitesMenuItem;
@property IBOutlet NSMenuItem* onlyWhitelistMenuItem;
@property IBOutlet NSMenuItem* directConnectMenuItem;
@property IBOutlet NSMenuItem* preferenceMenuItem;
@property IBOutlet NSMenuItem* helpMenuItem;
@property IBOutlet NSMenuItem* aboutMenuItem;
@property IBOutlet NSMenuItem* quitMenuItem;

@property IBOutlet NSMenu* mainMenu;
@property IBOutlet NSArrayController* serverArrayController;

- (void)reactiveProxy:(id)sender;

enum {
    SSHPROXY_OFF = 0,
    SSHPROXY_ON,
//    SSHPROXY_DISCONNECTED,
    SSHPROXY_CONNECTED,
};

@end
