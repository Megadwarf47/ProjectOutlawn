///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class InputListenerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputListenerComponentData"); }
		virtual ~InputListenerComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		InputListenerComponentData() {
		};

	}; // 0x70 (112)
}

