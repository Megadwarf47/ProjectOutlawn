///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/DataField.h>

namespace fb {
	class DynamicDataContainer : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicDataContainer"); }
		virtual ~DynamicDataContainer() override {}
		DynamicDataContainer() {
		};

		Array<DataField> m_fields; // 0x10 (16)
	}; // 0x18 (24)
}

