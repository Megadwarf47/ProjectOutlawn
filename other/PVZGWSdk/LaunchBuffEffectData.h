///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/Vec3.h>

namespace fb {
	class LaunchBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LaunchBuffEffectData"); }
		virtual ~LaunchBuffEffectData() override {}
		LaunchBuffEffectData() {
			m_directionRelativeToSource = false;
			m_directionRelativeToSourceFacing = false;
		};

		bool m_directionRelativeToSource; // 0x10 (16)
		bool m_directionRelativeToSourceFacing; // 0x11 (17)
		Vec3 m_force; // 0x20 (32)
		Vec3 m_blending; // 0x30 (48)
	}; // 0x40 (64)
}

