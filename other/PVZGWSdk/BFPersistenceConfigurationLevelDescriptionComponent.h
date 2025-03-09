///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LevelDescriptionComponent.h>

namespace fb {
	class BFPersistenceConfigurationLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFPersistenceConfigurationLevelDescriptionComponent"); }
		virtual ~BFPersistenceConfigurationLevelDescriptionComponent() override {}
		BFPersistenceConfigurationLevelDescriptionComponent() {
		};

		Guid m_persistencePartition; // 0x10 (16)
	}; // 0x20 (32)
}

