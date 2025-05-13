///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class DebrisSystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebrisSystemSettings"); }
		virtual ~DebrisSystemSettings() override {}
		DebrisSystemSettings() {
			m_timeScale = 1.f;
			m_drawStats = 0;
			m_meshCullingDistance = 150.f;
			m_meshBatchCountLimit = 512;
			m_debrisPoolSize = 512;
			m_meshDrawCountLimit = 2000;
			m_meshStreamingPriorityMultiplier = 4.f;
			m_enable = true;
			m_enableJobs = true;
			m_drawEnable = true;
			m_meshHavokRenderingEnable = true;
			m_meshDrawTransforms = false;
			m_meshDrawBoundingBoxes = false;
			m_meshShadowEnable = true;
			m_meshViewCullingEnable = true;
			m_meshDrawCullStats = false;
		};

		float m_timeScale; // 0x10 (16)
		u32 m_drawStats; // 0x14 (20)
		float m_meshCullingDistance; // 0x18 (24)
		u32 m_meshBatchCountLimit; // 0x1C (28)
		u32 m_debrisPoolSize; // 0x20 (32)
		u32 m_meshDrawCountLimit; // 0x24 (36)
		float m_meshStreamingPriorityMultiplier; // 0x28 (40)
		bool m_enable; // 0x2C (44)
		bool m_enableJobs; // 0x2D (45)
		bool m_drawEnable; // 0x2E (46)
		bool m_meshHavokRenderingEnable; // 0x2F (47)
		bool m_meshDrawTransforms; // 0x30 (48)
		bool m_meshDrawBoundingBoxes; // 0x31 (49)
		bool m_meshShadowEnable; // 0x32 (50)
		bool m_meshViewCullingEnable; // 0x33 (51)
		bool m_meshDrawCullStats; // 0x34 (52)
	}; // 0x38 (56)
}

