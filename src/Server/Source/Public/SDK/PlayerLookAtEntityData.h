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
	class PlayerLookAtEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerLookAtEntityData"); }
		virtual ~PlayerLookAtEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PlayerLookAtEntityData() {
		};

		LinearTransform m_targetTransform; // 0x20 (32)
	}; // 0x60 (96)
}

