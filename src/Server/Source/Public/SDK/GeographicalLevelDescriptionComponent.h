///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LevelDescriptionComponent.h>

namespace fb {
	class GeographicalData;
}

namespace fb {
	class GeographicalLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GeographicalLevelDescriptionComponent"); }
		virtual ~GeographicalLevelDescriptionComponent() override {}
		GeographicalLevelDescriptionComponent() {
		};

		CtrRef<GeographicalData> m_geographicalData; // 0x10 (16)
	}; // 0x18 (24)
}

