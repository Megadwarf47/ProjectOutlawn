///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class DecalSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DecalSettings"); }
		virtual ~DecalSettings() override {}
		DecalSettings() {
			m_decalImpactLifetimeMs = 200;
			m_decalImpactPoolSize = 512;
			m_staticBufferMaxVertexCount = 16384;
			m_ringBufferMaxVertexCount = 16384;
			m_enable = true;
			m_drawEnable = true;
			m_systemEnable = true;
			m_systemEnable2 = true;
			m_drawDecalReflectionOnBreakableModelEnable = false;
			m_debugMemUsageEnable = false;
			m_debugWarningsEnable = false;
			m_nvidiaStreamOutputWorkaroundEnable = true;
		};

		u32 m_decalImpactLifetimeMs; // 0x20 (32)
		u32 m_decalImpactPoolSize; // 0x24 (36)
		u32 m_staticBufferMaxVertexCount; // 0x28 (40)
		u32 m_ringBufferMaxVertexCount; // 0x2C (44)
		bool m_enable; // 0x30 (48)
		bool m_drawEnable; // 0x31 (49)
		bool m_systemEnable; // 0x32 (50)
		bool m_systemEnable2; // 0x33 (51)
		bool m_drawDecalReflectionOnBreakableModelEnable; // 0x34 (52)
		bool m_debugMemUsageEnable; // 0x35 (53)
		bool m_debugWarningsEnable; // 0x36 (54)
		bool m_nvidiaStreamOutputWorkaroundEnable; // 0x37 (55)
	}; // 0x38 (56)
}

