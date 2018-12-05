/**
 * Copyright (c) 2016-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, IGListBatchUpdateState) {
    IGListBatchUpdateStateIdle,
    IGListBatchUpdateStateQueuedBatchUpdate,
    IGListBatchUpdateStateExecutingBatchUpdateBlock,
    IGListBatchUpdateStateExecutedBatchUpdateBlock,
};
