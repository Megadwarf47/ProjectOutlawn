///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/SupplyData.h>

namespace fb {
	class SupplySphereComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SupplySphereComponentData"); }
		virtual ~SupplySphereComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		SupplySphereComponentData() {
			m_enabled = true;
		};

		SupplyData m_supplyData; // 0x70 (112)
		bool m_enabled; // 0x88 (136)
	}; // 0x90 (144)
}

