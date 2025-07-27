/*
 * Copyright (C) 2008 Torch Mobile Inc. All rights reserved. (http://www.torchmobile.com/)
 *
 * Copyright (C) 2004-2007 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#include "config.h"

#if ENABLE(WML)
#include "WMLPageState.h"

#include "KURL.h"
#include "Page.h"

namespace WebCore {

WMLPageState::WMLPageState(Page* page)
    : m_page(page)
    , m_historyLength(0)
    , m_activeCard(0)
    , m_hasDeckAccess(false)
{
}

WMLPageState::~WMLPageState()
{
    m_variables.clear();
}

void WMLPageState::reset()
{
    // remove all the variables in the current browser context
    m_variables.clear();

    // reset implementation-specfic state if UA has
    m_historyLength = 1;
}

bool WMLPageState::setNeedCheckDeckAccess(bool need)
{
    if (m_hasDeckAccess && need)
        return false;

    m_hasDeckAccess = need;
    m_accessPath = String();
    m_accessDomain = String();
    return true;
}

// FIXME: We may want another name, it does far more than just checking wheter the deck is accessable
bool WMLPageState::isDeckAccessible()
{
    Q_UNUSED(m_page);
    return true;
}

}

#endif
