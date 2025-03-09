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
	class WarpBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WarpBuffEffectData"); }
		virtual ~WarpBuffEffectData() override {}
		WarpBuffEffectData() {
			m_directionRelativeToSource = false;
		};

		bool m_directionRelativeToSource; // 0x10 (16)
		Vec3 m_distance; // 0x20 (32)
		Vec3 m_offset; // 0x30 (48)
	}; // 0x40 (64)
}

