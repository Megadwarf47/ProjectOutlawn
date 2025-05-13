///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ReferenceObjectData.h>

namespace fb {
	class VisualEnvironmentReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualEnvironmentReferenceObjectData"); }
		virtual ~VisualEnvironmentReferenceObjectData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VisualEnvironmentReferenceObjectData() {
			m_priority = 0;
			m_overrideVisibility = false;

			m_castSunShadowEnable = false;
		};

		s32 m_priority; // 0x80 (128)
		bool m_overrideVisibility; // 0x84 (132)
	}; // 0x90 (144)
}

