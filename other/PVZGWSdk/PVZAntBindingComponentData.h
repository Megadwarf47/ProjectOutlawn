///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/PVZAntBinding.h>

namespace fb {
	class PVZAntBindingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZAntBindingComponentData"); }
		virtual ~PVZAntBindingComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZAntBindingComponentData() {
		};

		PVZAntBinding m_binding; // 0x70 (112)
	}; // 0xE0 (224)
}

