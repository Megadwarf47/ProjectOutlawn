///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/InputRestrictionState.h>

namespace fb {
	class InputRestrictionStateComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputRestrictionStateComponentData"); }
		virtual ~InputRestrictionStateComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		InputRestrictionStateComponentData() {
		};

		Array<InputRestrictionState> m_states; // 0x70 (112)
	}; // 0x80 (128)
}

