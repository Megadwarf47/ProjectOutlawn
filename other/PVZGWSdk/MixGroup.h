///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/MixGroupPropertyParameters.h>
#include <fb/String.h>

namespace fb {
	class MixGroup : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixGroup"); }
		virtual ~MixGroup() override {}
		MixGroup() {
			m_groupIndex = 0;
			m_parentGroupIndex = 0;
		};

		String m_name; // 0x10 (16)
		Array<MixGroupPropertyParameters> m_parameters; // 0x18 (24)
		u16 m_groupIndex; // 0x20 (32)
		u16 m_parentGroupIndex; // 0x22 (34)
	}; // 0x28 (40)
}

