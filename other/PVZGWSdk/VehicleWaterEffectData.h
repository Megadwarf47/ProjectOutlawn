///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class VehicleWaterEffectData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleWaterEffectData"); }
		virtual ~VehicleWaterEffectData() override {}
		VehicleWaterEffectData() {
		};

		CtrRef<EffectBlueprint> m_effect; // 0x10 (16)
		Vec3 m_position; // 0x20 (32)
	}; // 0x30 (48)
}

