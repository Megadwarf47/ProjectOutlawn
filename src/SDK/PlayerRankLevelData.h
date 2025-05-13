///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class PlayerRankLevelData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerRankLevelData"); }
		virtual ~PlayerRankLevelData() override {}
		PlayerRankLevelData() {
			m_rankNeeded = 1;
		};

		u32 m_rankNeeded; // 0x10 (16)
		String m_imageName; // 0x18 (24)
	}; // 0x20 (32)
}

