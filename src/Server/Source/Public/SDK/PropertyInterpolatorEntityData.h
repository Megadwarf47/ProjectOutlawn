///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/PropertyInterpolationMode.h>
#include <fb/PropertyInterpolationType.h>
#include <fb/Realm.h>

namespace fb {
	class PropertyInterpolatorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropertyInterpolatorEntityData"); }
		virtual ~PropertyInterpolatorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PropertyInterpolatorEntityData() {
			m_realm = Realm::Realm_Client;
			m_interpolationType = PropertyInterpolationType::PropertyInterpolationType_Linear;
			m_interpolationMode = PropertyInterpolationMode::PropertyInterpolationMode_In;
			m_duration = 1.f;
			m_velocity = 1.f;
			m_useVelocity = false;
		};

		Realm m_realm; // 0x18 (24)
		PropertyInterpolationType m_interpolationType; // 0x1C (28)
		PropertyInterpolationMode m_interpolationMode; // 0x20 (32)
		float m_duration; // 0x24 (36)
		float m_velocity; // 0x28 (40)
		bool m_useVelocity; // 0x2C (44)
	}; // 0x30 (48)
}

