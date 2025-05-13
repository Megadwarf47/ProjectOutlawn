///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ControllerState.h>
#include <fb/EntityData.h>
#include <fb/LocalPlayerIndex.h>

namespace fb {
	class PVZUIControllerStateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIControllerStateEntityData"); }
		virtual ~PVZUIControllerStateEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZUIControllerStateEntityData() {
			m_targetPlayer = LocalPlayerIndex::LocalPlayerIndex_0;
			m_state = ControllerState::ControllerState_AssignToPlayer;
			m_isCancelable = false;
		};

		LocalPlayerIndex m_targetPlayer; // 0x18 (24)
		ControllerState m_state; // 0x1C (28)
		bool m_isCancelable; // 0x20 (32)
	}; // 0x28 (40)
}

