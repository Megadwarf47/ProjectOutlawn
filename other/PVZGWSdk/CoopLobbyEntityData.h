///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class CoopLobbyEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CoopLobbyEntityData"); }
		virtual ~CoopLobbyEntityData() override {}
		CoopLobbyEntityData() {
			m_clientConnectionTimeout = 10.f;
			m_isInGame = false;
		};

		float m_clientConnectionTimeout; // 0x18 (24)
		bool m_isInGame; // 0x1C (28)
	}; // 0x20 (32)
}

