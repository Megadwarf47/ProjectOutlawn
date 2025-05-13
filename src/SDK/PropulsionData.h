///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameDataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class PropulsionData : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropulsionData"); }
		virtual ~PropulsionData() override {}
		PropulsionData() {
		};

		Vec3 m_force; // 0x10 (16)
		Vec3 m_blending; // 0x20 (32)
	}; // 0x30 (48)
}

