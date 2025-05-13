///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIAwarenessTargetInfo.h>
#include <fb/Realm.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class AIAwarenessTargetEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIAwarenessTargetEntityData"); }
		virtual ~AIAwarenessTargetEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AIAwarenessTargetEntityData() {
			m_realm = Realm::Realm_Client;
			m_activateTarget = false;
		};

		Realm m_realm; // 0x60 (96)
		AIAwarenessTargetInfo m_targetInfo; // 0x64 (100)
		bool m_activateTarget; // 0x74 (116)
	}; // 0x80 (128)
}

