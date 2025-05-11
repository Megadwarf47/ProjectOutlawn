///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>

namespace fb {
	class AnimationSignalEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationSignalEntityData"); }
		virtual ~AnimationSignalEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AnimationSignalEntityData() {
			m_valueInt = 0;
			m_valueFloat = 0.f;
			m_reset = false;
			m_continuous = false;
		};

		AntRef m_signal; // 0x18 (24)
		AntRef m_intGameState; // 0x2C (44)
		AntRef m_floatGameState; // 0x40 (64)
		s32 m_valueInt; // 0x54 (84)
		float m_valueFloat; // 0x58 (88)
		bool m_reset; // 0x5C (92)
		bool m_continuous; // 0x5D (93)
	}; // 0x60 (96)
}

