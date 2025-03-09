///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityBusData.h>

namespace fb {
	class Blueprint : public EntityBusData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Blueprint"); }
		virtual ~Blueprint() override {}
		Blueprint() {
		};

	}; // 0x40 (64)
}

