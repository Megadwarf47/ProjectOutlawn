///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffRestrictorData.h>
#include <fb/RefArray.h>
#include <fb/StateRestriction.h>

namespace fb {
	class CustomizeCharacterData;
}

namespace fb {
	class AIBuffRestrictorData : public BuffRestrictorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIBuffRestrictorData"); }
		virtual ~AIBuffRestrictorData() override {}
		AIBuffRestrictorData() {
			m_restriction = StateRestriction::StateRestriction_None;
		};

		StateRestriction m_restriction; // 0x10 (16)
		RefArray<CustomizeCharacterData> m_excludedAI; // 0x18 (24)
	}; // 0x20 (32)
}

