///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class AntDrivenComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntDrivenComponentData"); }
		virtual ~AntDrivenComponentData() override {}
		AntDrivenComponentData() {
			m_resetControllerTreeOnTeleport = true;
			m_zeroTrajectoryVelocityOnTeleport = false;
		};

		bool m_resetControllerTreeOnTeleport; // 0x70 (112)
		bool m_zeroTrajectoryVelocityOnTeleport; // 0x71 (113)
	}; // 0x80 (128)
}

