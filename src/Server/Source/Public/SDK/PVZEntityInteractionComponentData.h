///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class PVZInteractionData;
}

namespace fb {
	class PVZEntityInteractionComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZEntityInteractionComponentData"); }
		virtual ~PVZEntityInteractionComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZEntityInteractionComponentData() {
			m_showDamagedPlayers = false;
		};

		RefArray<PVZInteractionData> m_interactions; // 0x70 (112)
		bool m_showDamagedPlayers; // 0x78 (120)
	}; // 0x80 (128)
}

