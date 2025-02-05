//////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2018 Corona Labs Inc.
// Contact: support@coronalabs.com
//
// This file is part of the Corona game engine.
//
// Commercial License Usage
// Licensees holding valid commercial Corona licenses may use this file in
// accordance with the commercial license agreement between you and 
// Corona Labs Inc. For licensing terms and conditions please contact
// support@coronalabs.com or visit https://coronalabs.com/com-license
//
// GNU General Public License Usage
// Alternatively, this file may be used under the terms of the GNU General
// Public license version 3. The license is as published by the Free Software
// Foundation and appearing in the file LICENSE.GPL3 included in the packaging
// of this file. Please review the following information to ensure the GNU 
// General Public License requirements will
// be met: https://www.gnu.org/licenses/gpl-3.0.html
//
// For overview and more information on licensing please refer to README.md
//
//////////////////////////////////////////////////////////////////////////////

#pragma once


/// <summary>
///  <para>
///   Customized version of the MFC "CMFCVisualManagerWindows" visual theme which display a Windows XP like UI
///   using the system's current color scheme.
///  </para>
///  <para>Modified to display a border around text boxes, such as the find/search field in this app's toolbar.</para>
/// </summary>
class MFCVisualManagerWindowsCustom : public CMFCVisualManagerWindows
{
	DECLARE_DYNCREATE(MFCVisualManagerWindowsCustom)

	public:
		MFCVisualManagerWindowsCustom(BOOL isTemporary = FALSE);
		virtual ~MFCVisualManagerWindowsCustom();

		virtual void OnDrawEditBorder(
					CDC* deviceContextPointer, CRect bounds, BOOL isDisabled,
					BOOL isHighlighted, CMFCToolBarEditBoxButton* buttonPointer) override;
};
