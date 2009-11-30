//
// Copyright 2009 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern const CGFloat kHPadding;
extern const CGFloat kDisclosureIndicatorWidth;
extern const CGFloat kDetailDisclosureButtonWidth;

/**
 * The base class for table cells which are single-object based.
 *
 * TTTableViewDataSource initializes each cell that it creates by assigning it the object
 * that the data source returned for the row. The responsibility for initializing the table cell
 * is then shifted from the table data source to the setObject method on the cell itself, which
 * this developer feels is a more appropriate delegation.  The same goes for the cell height
 * measurement, whose responsibility is transferred from the data source to the cell.
 *
 * Subclasses should implement the object getter and setter.  The base implementations do
 * nothing, allowing you to store the object yourself using the appropriate type.
 */
@interface TTTableViewCell : UITableViewCell

@property(nonatomic,retain) id object;

/**
 * Measure the height of the row with the given table view.
 */
- (CGFloat)rowHeightWithTableView:(UITableView*)tableView;

/**
 * Calculate the width of the row with the given table view and
 * considering accessory types.
 */
- (CGFloat)contentWidthWithTableView:(UITableView*)tableView;

@end
