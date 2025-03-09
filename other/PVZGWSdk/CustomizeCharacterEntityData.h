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
	class CustomizeCharacterData;
}

namespace fb {
	class CustomizeCharacterEntityData : public CustomizeBaseEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomizeCharacterEntityData"); }
		virtual ~CustomizeCharacterEntityData() override {}
		CustomizeCharacterEntityData() {
		};

		CtrRef<CustomizeCharacterData> m_customizeCharacterData; // 0x20 (32)
	}; // 0x28 (40)
}

