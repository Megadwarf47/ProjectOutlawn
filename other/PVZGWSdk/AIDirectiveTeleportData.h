///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIDirectiveData.h>

namespace fb {
	class AIDirectiveTeleportData : public AIDirectiveData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIDirectiveTeleportData"); }
		virtual ~AIDirectiveTeleportData() override {}
		AIDirectiveTeleportData() {
		};

	}; // 0x20 (32)
}

