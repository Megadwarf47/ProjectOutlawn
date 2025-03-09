///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class BangerHealthModuleData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BangerHealthModuleData"); }
		virtual ~BangerHealthModuleData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		BangerHealthModuleData() {
			m_health = 100.f;
		};

		float m_health; // 0x70 (112)
		MaterialDecl m_materialPair; // 0x74 (116)
	}; // 0x80 (128)
}

