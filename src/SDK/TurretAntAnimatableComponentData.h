///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LodAntAnimatableComponentData.h>
#include <fb/TurretAntLodBinding.h>

namespace fb {
	class TurretAntAnimatableComponentData : public LodAntAnimatableComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TurretAntAnimatableComponentData"); }
		virtual ~TurretAntAnimatableComponentData() override {}
		TurretAntAnimatableComponentData() {
		};

		TurretAntLodBinding m_turretBinding; // 0x180 (384)
	}; // 0x1D0 (464)
}

