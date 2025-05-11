///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioCurve.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class FloatCurveEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatCurveEntityData"); }
		virtual ~FloatCurveEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FloatCurveEntityData() {
			m_realm = Realm::Realm_Client;
			m_in = 0.f;
			m_outputIntegral = false;
		};

		Realm m_realm; // 0x18 (24)
		float m_in; // 0x1C (28)
		AudioCurve m_curve; // 0x20 (32)
		bool m_outputIntegral; // 0x30 (48)
	}; // 0x38 (56)
}

