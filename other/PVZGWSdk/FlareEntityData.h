///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GrenadeEntityData.h>

namespace fb {
	class FlareEntityData : public GrenadeEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlareEntityData"); }
		virtual ~FlareEntityData() override {}
		FlareEntityData() {
			m_flareRange = 5.f;
		};

		float m_flareRange; // 0x160 (352)
	}; // 0x170 (368)
}

