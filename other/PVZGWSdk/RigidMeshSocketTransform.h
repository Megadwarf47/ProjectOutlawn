///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>

namespace fb {
	class WeaponRegularSocketObjectData;
}

namespace fb {
	struct RigidMeshSocketTransform {
		RigidMeshSocketTransform() {
		};

		LinearTransform m_transform; // 0x0 (0)
		CtrRef<WeaponRegularSocketObjectData> m_socketObject; // 0x40 (64)
	}; // 0x50 (80)
}

