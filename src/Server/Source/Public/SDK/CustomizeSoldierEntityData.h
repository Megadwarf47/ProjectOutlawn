///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/CustomizeBaseEntityData.h>

namespace fb {
	class CustomizeSoldierData;
}

namespace fb {
	class CustomizeSoldierEntityData : public CustomizeBaseEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomizeSoldierEntityData"); }
		virtual ~CustomizeSoldierEntityData() override {}
		CustomizeSoldierEntityData() {
			m_autoPreloadOnCreation = false;
		};

		CtrRef<CustomizeSoldierData> m_customizeSoldierData; // 0x20 (32)
		bool m_autoPreloadOnCreation; // 0x28 (40)
	}; // 0x30 (48)
}

