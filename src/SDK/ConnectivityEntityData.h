///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BreakablePartToStaticEntityPart.h>
#include <fb/EntityData.h>
#include <fb/StaticModelToBreakableParts.h>

namespace fb {
	class ConnectivityEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConnectivityEntityData"); }
		virtual ~ConnectivityEntityData() override {}
		ConnectivityEntityData() {
			m_breakableModelExtraRadius = 0.f;
		};

		Array<s32> m_breakableModelEventIds; // 0x18 (24)
		Array<s32> m_staticModelEventIds; // 0x20 (32)
		Array<u32> m_staticModelFirstIndices; // 0x28 (40)
		Array<StaticModelToBreakableParts> m_staticModelToBreakablePartsArray; // 0x30 (48)
		Array<BreakablePartToStaticEntityPart> m_breakablePartToStaticModelPartArray; // 0x38 (56)
		float m_breakableModelExtraRadius; // 0x40 (64)
	}; // 0x48 (72)
}

