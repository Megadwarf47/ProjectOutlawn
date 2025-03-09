///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SpectatorAreaEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpectatorAreaEntityData"); }
		virtual ~SpectatorAreaEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SpectatorAreaEntityData() {
			m_enabled = true;
		};

		bool m_enabled; // 0x18 (24)
	}; // 0x20 (32)
}

