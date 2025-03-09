///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class VoiceOverGameStateWriterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverGameStateWriterEntityData"); }
		virtual ~VoiceOverGameStateWriterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VoiceOverGameStateWriterEntityData() {
			m_value = 0.f;
		};

		String m_propertyName; // 0x18 (24)
		float m_value; // 0x20 (32)
	}; // 0x28 (40)
}

