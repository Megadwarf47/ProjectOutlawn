///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ObjectBlueprint.h>

namespace fb {
	class ProjectileBlueprint : public ObjectBlueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProjectileBlueprint"); }
		virtual ~ProjectileBlueprint() override {}
		ProjectileBlueprint() {
		};

	}; // 0x48 (72)
}

