///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/SubWorldData.h>

namespace fb {
	class SubWorldDataComponent;
}

namespace fb {
	class WorldData : public SubWorldData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldData"); }
		virtual ~WorldData() override {}
		WorldData() {
		};

		RefArray<SubWorldDataComponent> m_components; // 0x58 (88)
	}; // 0x60 (96)
}

