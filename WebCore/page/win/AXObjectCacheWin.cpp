/*
 * Copyright (C) 2008 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */


#include "config.h"
#include "AXObjectCacheStub.h"

#include "AccessibilityObject.h"

namespace WebCore {

// void AXObjectCache::detachWrapper(AccessibilityObject* obj)
// {
//     // On Windows, AccessibilityObjects are created when get_accChildCount is
//     // called, but they are not wrapped until get_accChild is called, so this
//     // object may not have a wrapper.
//     if (AccessibilityObjectWrapper* wrapper = obj->wrapper())
//         wrapper->detach();
// }
// 
// void AXObjectCache::attachWrapper(AccessibilityObject*)
// {
//     // On Windows, AccessibilityObjects are wrapped when the accessibility
//     // software requests them via get_accChild.
// }
//
// void AXObjectCache::postNotification(RenderObject*, AXNotification, bool postToElement, PostType)
// {
// 
// }
// 
// void AXObjectCache::postNotification(AccessibilityObject*, Document*, AXNotification, bool postToElement, PostType)
// {
// 
// }
//
// void AXObjectCache::postNotificationToElement(RenderObject*, const String&)
// {
// }

// void AXObjectCache::handleFocusedUIElementChanged()
// {
// }

} // namespace WebCore
