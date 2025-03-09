///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class OBBCollisionEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OBBCollisionEntityData"); }
		virtual ~OBBCollisionEntityData() override {}
		OBBCollisionEntityData() {
			m_halfExtents = Vec3(0.5f, 0.5f, 0.5f);
			m_characterOnly = false;
		};

		Vec3 m_halfExtents; // 0x80 (128)
		bool m_characterOnly; // 0x90 (144)
	}; // 0xA0 (160)
}

