///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/HealthComponentData.h>

namespace fb {
	class GameHealthComponentData : public HealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameHealthComponentData"); }
		virtual ~GameHealthComponentData() override {}
		GameHealthComponentData() {
		};

	}; // 0x70 (112)
}

