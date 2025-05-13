///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIState.h>

namespace fb {
	struct UIBundleAssetState {
		UIBundleAssetState() {
			m_uiState = UIState::UIState_None;
		};

		String m_stateName; // 0x0 (0)
		UIState m_uiState; // 0x8 (8)
		String m_resourceBundleName; // 0x10 (16)
		String m_statePath; // 0x18 (24)
		String m_bundlePath; // 0x20 (32)
	}; // 0x28 (40)
}

