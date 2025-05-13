///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/ETeleportType.h>
#include <fb/Vec3.h>

namespace fb {
	class BT_DoTeleport : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoTeleport"); }
		virtual ~BT_DoTeleport() override {}
		BT_DoTeleport() {
			m_tpType = ETeleportType::ETeleport_Null;
			m_advanceAbilityStage = true;
			m_choosePosition = false;
			m_execute = false;
		};

		ETeleportType m_tpType; // 0x18 (24)
		Vec3 m_offset; // 0x20 (32)
		bool m_advanceAbilityStage; // 0x30 (48)
		bool m_choosePosition; // 0x31 (49)
		bool m_execute; // 0x32 (50)
	}; // 0x40 (64)
}

