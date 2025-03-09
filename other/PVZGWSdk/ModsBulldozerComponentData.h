///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/MaterialDecl.h>
#include <fb/ModsComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class ModsBulldozerComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsBulldozerComponentData"); }
		virtual ~ModsBulldozerComponentData() override {}
		ModsBulldozerComponentData() {
			m_damage = 0.f;
			m_numFramesBetweenBulldozeCheck = 2;
			m_raycastLength = 3.f;
			m_sphereRadius = 1.f;
			m_useSphereCollision = false;
		};

		Vec3 m_sphereOffset; // 0xD0 (208)
		float m_damage; // 0xE0 (224)
		MaterialDecl m_materialPair; // 0xE4 (228)
		s32 m_numFramesBetweenBulldozeCheck; // 0xE8 (232)
		float m_raycastLength; // 0xEC (236)
		Array<Vec3> m_raycastOffsets; // 0xF0 (240)
		float m_sphereRadius; // 0xF8 (248)
		bool m_useSphereCollision; // 0xFC (252)
	}; // 0x100 (256)
}

