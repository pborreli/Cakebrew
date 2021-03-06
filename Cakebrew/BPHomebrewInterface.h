//
//	BrewInterface.h
//	Cakebrew – The Homebrew GUI App for OS X 
//
//	Created by Vincent Saluzzo on 06/12/11.
//	Copyright (c) 2011 Bruno Philipe. All rights reserved.
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
	kBP_LIST_ALL,
    kBP_LIST_INSTALLED,
    kBP_LIST_LEAVES,
	kBP_LIST_UPGRADEABLE
} BP_LIST_MODE;

@interface BPHomebrewInterface : NSObject

+ (NSArray*)list;
+ (NSArray*)listMode:(BP_LIST_MODE)mode;
+ (NSArray*)searchForFormulaName:(NSString*)formula;
+ (NSString*)informationForFormula:(NSString*)formula;
+ (NSString*)update;
+ (NSString*)upgradeFormula:(NSString*)formula;
+ (NSString*)upgradeFormulas:(NSArray*)formulas;
+ (NSString*)installFormula:(NSString*)formula;
+ (NSString*)uninstallFormula:(NSString*)formula;

+ (void)runDoctorWithOutput:(id)output;

@end
