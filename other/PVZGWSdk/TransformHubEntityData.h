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
	class TransformHubEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformHubEntityData"); }
		virtual ~TransformHubEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformHubEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_in1; // 0x20 (32)
		LinearTransform m_in2; // 0x60 (96)
		LinearTransform m_in3; // 0xA0 (160)
		LinearTransform m_in4; // 0xE0 (224)
		LinearTransform m_in5; // 0x120 (288)
		LinearTransform m_in6; // 0x160 (352)
		LinearTransform m_in7; // 0x1A0 (416)
		LinearTransform m_in8; // 0x1E0 (480)
	}; // 0x220 (544)
}

