//
//	BPHomebrewManager.h
//	Cakebrew – The Homebrew GUI App for OS X 
//
//	Created by Bruno Philipe on 4/3/14.
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
#import "BPFormula.h"

@class BPHomebrewManager;

typedef enum : NSUInteger {
    kBP_FORMULA_NOT_INSTALLED,
    kBP_FORMULA_INSTALLED,
    kBP_FORMULA_OUTDATED,
} BP_FORMULA_STATUS;

@protocol BPHomebrewManagerDelegate <NSObject>

- (void)homebrewManagerFinishedUpdating:(BPHomebrewManager*)manager;

@end

@interface BPHomebrewManager : NSObject

@property (strong) NSArray *formulas_installed;
@property (strong) NSArray *formulas_outdated;
@property (strong) NSArray *formulas_all;
@property (strong) NSArray *formulas_leaves;

@property (weak) id<BPHomebrewManagerDelegate> delegate;

+ (BPHomebrewManager *)sharedManager;

- (void)update;

- (BP_FORMULA_STATUS)statusForFormula:(BPFormula*)formula;

@end
