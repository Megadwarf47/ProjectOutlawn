///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameHealthComponentData.h>

namespace fb {
	class ControllableHealthComponentData : public GameHealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ControllableHealthComponentData"); }
		virtual ~ControllableHealthComponentData() override {}
		ControllableHealthComponentData() {
		};

	}; // 0x70 (112)
}

