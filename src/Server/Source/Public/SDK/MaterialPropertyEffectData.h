///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EffectWithSpeedRange.h>
#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class MaterialPropertyEffectData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyEffectData"); }
		virtual ~MaterialPropertyEffectData() override {}
		MaterialPropertyEffectData() {
		};

		Array<EffectWithSpeedRange> m_impactEffects; // 0x10 (16)
	}; // 0x18 (24)
}

