///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class PVZUISpawnPointCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUISpawnPointCompData"); }
		virtual ~PVZUISpawnPointCompData() override {}
		PVZUISpawnPointCompData() {
			m_unrevivableDelay = 10.f;
		};

		float m_unrevivableDelay; // 0x30 (48)
	}; // 0x38 (56)
}

