/*
 * Copyright 2013 Devin Collins <devin@imdevinc.com>
 * Copyright 2014 Mike Wohlrab <Mike@NeoNet.me>
 *
 * This file is part of MyTLC Sync.
 *
 * MyTLC Sync is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MyTLC Sync is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MyTLC Sync.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import "PDKeychainBindings.h"

@interface mytlcSettingsTableViewController : UITableViewController

@property NSMutableDictionary* settings;
@property (strong, nonatomic) IBOutlet UITableView *settingsTable;
@property (strong, nonatomic) IBOutlet UILabel *lblMyTLCSyncVersion;
@property (weak, nonatomic) IBOutlet UIButton *resetEmail;

@end
