///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class MeshVariationEntry : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshVariationEntry"); }
		virtual ~MeshVariationEntry() override {}
		MeshVariationEntry() {
		};

		String m_variationName; // 0x10 (16)
	}; // 0x18 (24)
}

