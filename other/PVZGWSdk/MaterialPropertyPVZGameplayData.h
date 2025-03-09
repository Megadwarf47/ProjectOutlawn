///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class MaterialPropertyPVZGameplayData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyPVZGameplayData"); }
		virtual ~MaterialPropertyPVZGameplayData() override {}
		MaterialPropertyPVZGameplayData() {
			m_canRoot = true;
			m_canBorrow = true;
			m_canBeDeployedOn = true;
		};

		bool m_canRoot; // 0x10 (16)
		bool m_canBorrow; // 0x11 (17)
		bool m_canBeDeployedOn; // 0x12 (18)
	}; // 0x18 (24)
}

