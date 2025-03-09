///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/PreviewCameraOffsets.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>

namespace fb {
	class PVZUICustomize3DModelEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUICustomize3DModelEntityData"); }
		virtual ~PVZUICustomize3DModelEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PVZUICustomize3DModelEntityData() {
			m_realm = Realm::Realm_Client;
			m_characterRotationSpeed = 1.f;
			m_screenOffsetChangeSpeed = 0.7f;
			m_mouseRotationMultiplier = 0.0075f;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_characterRotation; // 0x20 (32)
		Array<PreviewCameraOffsets> m_perTeamCameraOffsets; // 0x30 (48)
		float m_characterRotationSpeed; // 0x38 (56)
		float m_screenOffsetChangeSpeed; // 0x3C (60)
		float m_mouseRotationMultiplier; // 0x40 (64)
	}; // 0x50 (80)
}

