///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffRestrictorData.h>

namespace fb {
	class TeamBuffRestrictorData : public BuffRestrictorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamBuffRestrictorData"); }
		virtual ~TeamBuffRestrictorData() override {}
		TeamBuffRestrictorData() {
			m_neutral = true;
			m_friendly = true;
			m_hostile = true;
		};

		bool m_neutral; // 0x10 (16)
		bool m_friendly; // 0x11 (17)
		bool m_hostile; // 0x12 (18)
	}; // 0x18 (24)
}

