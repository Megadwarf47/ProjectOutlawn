///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class FlyingHeightOverrideEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlyingHeightOverrideEntityData"); }
		virtual ~FlyingHeightOverrideEntityData() override {}
		FlyingHeightOverrideEntityData() {
			m_heightOverride = 0.f;
		};

		float m_heightOverride; // 0x18 (24)
	}; // 0x20 (32)
}

