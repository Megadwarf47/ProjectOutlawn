///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LevelDescriptionComponent.h>
#include <fb/PersistenceGameType.h>

namespace fb {
	class BFOnlineLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFOnlineLevelDescriptionComponent"); }
		virtual ~BFOnlineLevelDescriptionComponent() override {}
		BFOnlineLevelDescriptionComponent() {
			m_forcedPersistenceGameType = PersistenceGameType::PersistenceGameType_Singleplayer;
			m_forceLocalServerBackend = false;
			m_forcePersistenceGameType = false;
		};

		PersistenceGameType m_forcedPersistenceGameType; // 0x10 (16)
		bool m_forceLocalServerBackend; // 0x14 (20)
		bool m_forcePersistenceGameType; // 0x15 (21)
	}; // 0x18 (24)
}

