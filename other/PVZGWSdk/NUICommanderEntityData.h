///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class NUICommanderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NUICommanderEntityData"); }
		virtual ~NUICommanderEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		NUICommanderEntityData() {
			m_rightHandStatus = 0;
			m_leftHandStatus = 0;
		};

		s32 m_rightHandStatus; // 0x18 (24)
		Vec3 m_rightHandPos; // 0x20 (32)
		Vec3 m_leftHandPos; // 0x30 (48)
		s32 m_leftHandStatus; // 0x40 (64)
	}; // 0x50 (80)
}

