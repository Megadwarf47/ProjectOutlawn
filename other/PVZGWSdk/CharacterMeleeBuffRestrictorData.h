///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffRestrictorData.h>
#include <fb/StateRestriction.h>

namespace fb {
	class CharacterMeleeBuffRestrictorData : public BuffRestrictorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterMeleeBuffRestrictorData"); }
		virtual ~CharacterMeleeBuffRestrictorData() override {}
		CharacterMeleeBuffRestrictorData() {
			m_restriction = StateRestriction::StateRestriction_None;
		};

		StateRestriction m_restriction; // 0x10 (16)
	}; // 0x18 (24)
}

