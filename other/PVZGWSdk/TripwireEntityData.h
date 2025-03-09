///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentEntityData.h>
#include <fb/MaterialDecl.h>
#include <fb/Vec3.h>

namespace fb {
	class ObjectBlueprint;
	class SoundAsset;
}

namespace fb {
	class TripwireEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TripwireEntityData"); }
		virtual ~TripwireEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		TripwireEntityData() {
			m_wireMeshScale = Vec3(1.f, 1.f, 1.f);
			m_maxWireCount = 6;
			m_wireMaxLength = 10.f;
			m_wireMinLength = 1.f;
			m_wireMin2DLength = 0.4f;
			m_wireMinVerticalOffset = 0.f;
			m_minYaw = -150.f;
			m_maxYaw = 150.f;
			m_minPitch = 30.f;
			m_maxPitch = 85.f;
			m_densityAngle = 30;
			m_wireDeploySpeed = 36.f;
			m_attachWiresToNeutralVehicles = true;
			m_attachWiresToHostileVehicles = true;
			m_attachWiresToFriendlyVehicles = false;
			m_forceTripByFriendlyVehicles = false;
			m_forceTripByFriendlySoldiers = false;
		};

		Vec3 m_wireMeshScale; // 0x80 (128)
		Vec3 m_wireOriginOffset; // 0x90 (144)
		CtrRef<ObjectBlueprint> m_wireMesh; // 0xA0 (160)
		MaterialDecl m_wireImpactMaterial; // 0xA8 (168)
		CtrRef<SoundAsset> m_deploySoundEffect; // 0xB0 (176)
		CtrRef<SoundAsset> m_tripSoundEffect; // 0xB8 (184)
		s32 m_maxWireCount; // 0xC0 (192)
		float m_wireMaxLength; // 0xC4 (196)
		float m_wireMinLength; // 0xC8 (200)
		float m_wireMin2DLength; // 0xCC (204)
		float m_wireMinVerticalOffset; // 0xD0 (208)
		float m_minYaw; // 0xD4 (212)
		float m_maxYaw; // 0xD8 (216)
		float m_minPitch; // 0xDC (220)
		float m_maxPitch; // 0xE0 (224)
		u32 m_densityAngle; // 0xE4 (228)
		float m_wireDeploySpeed; // 0xE8 (232)
		bool m_attachWiresToNeutralVehicles; // 0xEC (236)
		bool m_attachWiresToHostileVehicles; // 0xED (237)
		bool m_attachWiresToFriendlyVehicles; // 0xEE (238)
		bool m_forceTripByFriendlyVehicles; // 0xEF (239)
		bool m_forceTripByFriendlySoldiers; // 0xF0 (240)
	}; // 0x100 (256)
}

