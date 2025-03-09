///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ModsComponentData.h>

namespace fb {
	class ComponentModInputRestrictionAsset;
}

namespace fb {
	class ModsKnockBackComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsKnockBackComponentData"); }
		virtual ~ModsKnockBackComponentData() override {}
		ModsKnockBackComponentData() {
			m_onGroundDuration = 0.f;
		};

		CtrRef<ComponentModInputRestrictionAsset> m_knockBackRestrictedInput; // 0xD0 (208)
		float m_onGroundDuration; // 0xD8 (216)
	}; // 0xE0 (224)
}

