///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class TeleportEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeleportEntityData"); }
		virtual ~TeleportEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		TeleportEntityData() {
			m_applyOrientation = false;
			m_forceTeleport = true;
		};

		bool m_applyOrientation; // 0x18 (24)
		bool m_forceTeleport; // 0x19 (25)
		LinearTransform m_newPositionTransform; // 0x20 (32)
	}; // 0x60 (96)
}

