///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StartPointEntityData.h>

namespace fb {
	class StartEntityData : public StartPointEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StartEntityData"); }
		virtual ~StartEntityData() override {}
		StartEntityData() {
		};

	}; // 0x20 (32)
}

