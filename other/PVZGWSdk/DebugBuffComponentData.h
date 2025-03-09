///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class DebugBuffComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugBuffComponentData"); }
		virtual ~DebugBuffComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		DebugBuffComponentData() {
		};

	}; // 0x70 (112)
}

