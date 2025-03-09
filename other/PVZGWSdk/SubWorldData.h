///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpatialPrefabBlueprint.h>

namespace fb {
	class MaterialGridData;
}

namespace fb {
	class SubWorldData : public SpatialPrefabBlueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SubWorldData"); }
		virtual ~SubWorldData() override {}
		SubWorldData() {
			m_isWin32SubLevel = true;
			m_isXenonSubLevel = true;
			m_isPs3SubLevel = true;
			m_isGen4aSubLevel = true;
			m_isGen4bSubLevel = true;
			m_rememberStateOnStreamOut = false;
		};

		CtrRef<MaterialGridData> m_runtimeMaterialGrid; // 0x48 (72)
		bool m_isWin32SubLevel; // 0x50 (80)
		bool m_isXenonSubLevel; // 0x51 (81)
		bool m_isPs3SubLevel; // 0x52 (82)
		bool m_isGen4aSubLevel; // 0x53 (83)
		bool m_isGen4bSubLevel; // 0x54 (84)
		bool m_rememberStateOnStreamOut; // 0x55 (85)
	}; // 0x58 (88)
}

