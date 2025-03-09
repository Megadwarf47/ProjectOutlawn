///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DestructionPartComponentData.h>

namespace fb {
	class BreakablePartComponentData : public DestructionPartComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BreakablePartComponentData"); }
		virtual ~BreakablePartComponentData() override {}
		BreakablePartComponentData() {
			m_healthPercentage = 100;
			m_collapsable = true;
			m_destroyNearbyStaticEntities = false;
		};

		u32 m_healthPercentage; // 0x80 (128)
		bool m_collapsable; // 0x84 (132)
		bool m_destroyNearbyStaticEntities; // 0x85 (133)
	}; // 0x90 (144)
}

