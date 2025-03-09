///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MatchmakingModifier.h>
#include <fb/String.h>

namespace fb {
	class MatchmakingPlayerCapacityModifier : public MatchmakingModifier {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MatchmakingPlayerCapacityModifier"); }
		virtual ~MatchmakingPlayerCapacityModifier() override {}
		MatchmakingPlayerCapacityModifier() {
		};

		String m_attribute; // 0x10 (16)
	}; // 0x18 (24)
}

