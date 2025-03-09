///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>

namespace fb {
	class TransformBlendEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformBlendEntityData"); }
		virtual ~TransformBlendEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformBlendEntityData() {
			m_realm = Realm::Realm_Server;
			m_blendValue = 0.f;
			m_blendValue2 = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_in1; // 0x20 (32)
		LinearTransform m_in2; // 0x60 (96)
		float m_blendValue; // 0xA0 (160)
		float m_blendValue2; // 0xA4 (164)
	}; // 0xB0 (176)
}

