///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AILocoVaultTaskData.h>
#include <fb/AbstractLocoWaypointData.h>

namespace fb {
	class VaultWaypointData : public AbstractLocoWaypointData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VaultWaypointData"); }
		virtual ~VaultWaypointData() override {}
		VaultWaypointData() {
		};

		AILocoVaultTaskData m_vaultTask; // 0x40 (64)
	}; // 0x70 (112)
}

