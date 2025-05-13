///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class CustomizationUnlockParts;
}

namespace fb {
	class CustomizationTable : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomizationTable"); }
		virtual ~CustomizationTable() override {}
		CustomizationTable() {
		};

		RefArray<CustomizationUnlockParts> m_unlockParts; // 0x10 (16)
	}; // 0x18 (24)
}

