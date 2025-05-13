///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class VehicleExitPointComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleExitPointComponentData"); }
		virtual ~VehicleExitPointComponentData() override {}
		virtual Realm getRealm() const override { return Realm_None; }
		VehicleExitPointComponentData() {
			m_ordinal = 0;
			m_terrainHeight = 0.f;
			m_velocity = 0.f;
			m_inheritCameraDirection = true;
			m_checkForVehicleOverrun = true;
		};

		Vec3 m_impulse; // 0x70 (112)
		s32 m_ordinal; // 0x80 (128)
		float m_terrainHeight; // 0x84 (132)
		float m_velocity; // 0x88 (136)
		bool m_inheritCameraDirection; // 0x8C (140)
		bool m_checkForVehicleOverrun; // 0x8D (141)
	}; // 0x90 (144)
}

