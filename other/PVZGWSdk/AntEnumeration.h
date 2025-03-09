///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class AntEnumeration : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntEnumeration"); }
		virtual ~AntEnumeration() override {}
		AntEnumeration() {
			m_value = -1;
		};

		AntRef m_antAsset; // 0x10 (16)
		s32 m_value; // 0x24 (36)
	}; // 0x28 (40)
}

