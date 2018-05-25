//
//  QBContactList.h
//
//  Created by QuickBlox team
//  Copyright (c) 2017 QuickBlox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QBContactListItem.h"

NS_ASSUME_NONNULL_BEGIN

/**
 QBContactList class interface.
 Represents user's contact list.
 */
@interface QBContactList : NSObject

/**
 Current contacts.
 */
@property (nonatomic, readonly, nullable) NSArray<QBContactListItem *> *contacts;

/**
 *  Your requests which pending approval.
 */
@property (nonatomic, readonly, nullable) NSArray<QBContactListItem *> *pendingApproval;

@end

NS_ASSUME_NONNULL_END
