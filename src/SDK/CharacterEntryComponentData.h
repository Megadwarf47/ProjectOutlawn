///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimingConstraintsData.h>
#include <fb/EntryComponentData.h>

namespace fb {
	class CharacterEntryComponentData : public EntryComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterEntryComponentData"); }
		virtual ~CharacterEntryComponentData() override {}
		CharacterEntryComponentData() {
		};

		AimingConstraintsData m_aimingConstraints; // 0xF0 (240)
	}; // 0x100 (256)
}

