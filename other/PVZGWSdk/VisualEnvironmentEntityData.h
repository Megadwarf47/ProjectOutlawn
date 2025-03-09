///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentEntityData.h>

namespace fb {
	class VisualEnvironmentEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualEnvironmentEntityData"); }
		virtual ~VisualEnvironmentEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VisualEnvironmentEntityData() {
			m_visibility = 0.f;
			m_priority = 0;
		};

		float m_visibility; // 0x80 (128)
		s32 m_priority; // 0x84 (132)
	}; // 0x90 (144)
}

