///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	struct CustomizedMeshMaterialsData {
		CustomizedMeshMaterialsData() {
		};

		CtrRef<ObjectBlueprint> m_meshBlueprint; // 0x0 (0)
		Array<String> m_materialNames; // 0x8 (8)
	}; // 0x10 (16)
}

