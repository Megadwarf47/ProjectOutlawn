///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>

namespace fb {
	struct UIElementInclusionSettings {
		UIElementInclusionSettings() {
			m_isSingleplayerLayer = true;
			m_isMultiplayerLayer = true;
			m_isWin32Layer = true;
			m_isXenonLayer = true;
			m_isPs3Layer = true;
			m_isGen4aLayer = true;
			m_isGen4bLayer = true;
			m_isSDLayer = true;
			m_isHDLayer = true;
		};

		Array<String> m_customInclusionCritera; // 0x0 (0)
		bool m_isSingleplayerLayer; // 0x8 (8)
		bool m_isMultiplayerLayer; // 0x9 (9)
		bool m_isWin32Layer; // 0xA (10)
		bool m_isXenonLayer; // 0xB (11)
		bool m_isPs3Layer; // 0xC (12)
		bool m_isGen4aLayer; // 0xD (13)
		bool m_isGen4bLayer; // 0xE (14)
		bool m_isSDLayer; // 0xF (15)
		bool m_isHDLayer; // 0x10 (16)
	}; // 0x18 (24)
}

