///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SpottingDistanceScaleEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpottingDistanceScaleEntityData"); }
		virtual ~SpottingDistanceScaleEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SpottingDistanceScaleEntityData() {
			m_spottingScale = 1.f;
		};

		float m_spottingScale; // 0x18 (24)
	}; // 0x20 (32)
}

