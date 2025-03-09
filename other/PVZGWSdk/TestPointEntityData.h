///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>
#include <fb/String.h>

namespace fb {
	class TestPointEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TestPointEntityData"); }
		virtual ~TestPointEntityData() override {}
		TestPointEntityData() {
		};

		String m_outputName; // 0x60 (96)
	}; // 0x70 (112)
}

