///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/TurretRotationInfo.h>

namespace fb {
	class AnimationTurretRotationComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationTurretRotationComponentData"); }
		virtual ~AnimationTurretRotationComponentData() override {}
		AnimationTurretRotationComponentData() {
			m_soldierBaseIndex = 0;
			m_useVehicleWorldTransform = false;
			m_outputWorldTransform = false;
		};

		Array<TurretRotationInfo> m_rotations; // 0x70 (112)
		s32 m_soldierBaseIndex; // 0x78 (120)
		bool m_useVehicleWorldTransform; // 0x7C (124)
		bool m_outputWorldTransform; // 0x7D (125)
	}; // 0x80 (128)
}

