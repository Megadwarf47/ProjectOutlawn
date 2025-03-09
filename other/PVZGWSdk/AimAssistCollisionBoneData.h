///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimAssistCollisionBoneSnapAimData.h>
#include <fb/DataContainer.h>

namespace fb {
	class AimAssistCollisionBoneData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AimAssistCollisionBoneData"); }
		virtual ~AimAssistCollisionBoneData() override {}
		AimAssistCollisionBoneData() {
			m_lengthScale = 1.f;
		};

		float m_lengthScale; // 0x10 (16)
		AimAssistCollisionBoneSnapAimData m_snapAim; // 0x14 (20)
	}; // 0x38 (56)
}

