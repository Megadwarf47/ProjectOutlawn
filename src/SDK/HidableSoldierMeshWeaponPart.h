///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class ObjectBlueprint;
	class SkinnedMeshAsset;
}

namespace fb {
	struct HidableSoldierMeshWeaponPart {
		HidableSoldierMeshWeaponPart() {
			m_hideAlways = false;
			m_hideInVehicleEntries = false;
		};

		CtrRef<SkinnedMeshAsset> m_weaponMesh; // 0x0 (0)
		CtrRef<ObjectBlueprint> m_weaponMeshBlueprint; // 0x8 (8)
		String m_boneName; // 0x10 (16)
		bool m_hideAlways; // 0x18 (24)
		bool m_hideInVehicleEntries; // 0x19 (25)
	}; // 0x20 (32)
}

