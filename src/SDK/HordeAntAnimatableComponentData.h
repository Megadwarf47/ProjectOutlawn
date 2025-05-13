///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/HordeAntLodBinding.h>
#include <fb/LodAntAnimatableComponentData.h>

namespace fb {
	class HordeAntAnimatableComponentData : public LodAntAnimatableComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HordeAntAnimatableComponentData"); }
		virtual ~HordeAntAnimatableComponentData() override {}
		HordeAntAnimatableComponentData() {
		};

		HordeAntLodBinding m_hordeBinding; // 0x180 (384)
	}; // 0x220 (544)
}

