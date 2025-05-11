///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntEventData.h>
#include <fb/Array.h>
#include <fb/EntityData.h>

namespace fb {
	class AntEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntEventEntityData"); }
		virtual ~AntEventEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AntEventEntityData() {
			m_requireLink = true;
			m_sendAsPlayerEvent = false;
			m_autoActivate = false;
		};

		Array<AntEventData> m_onEnterEvents; // 0x18 (24)
		Array<AntEventData> m_onUpdateEvents; // 0x20 (32)
		Array<AntEventData> m_onLeaveEvents; // 0x28 (40)
		bool m_requireLink; // 0x30 (48)
		bool m_sendAsPlayerEvent; // 0x31 (49)
		bool m_autoActivate; // 0x32 (50)
	}; // 0x38 (56)
}

