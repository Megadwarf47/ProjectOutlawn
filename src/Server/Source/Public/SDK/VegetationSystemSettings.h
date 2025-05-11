///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class VegetationSystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VegetationSystemSettings"); }
		virtual ~VegetationSystemSettings() override {}
		VegetationSystemSettings() {
			m_windVariation = 1.1f;
			m_windVariationRate = 0.1f;
			m_windStrength = 2.f;
			m_windMicroVariation = 1.f;
			m_maxActiveDistance = 300.f;
			m_maxEffectDistance = 50.f;
			m_maxActiveBones = 15000;
			m_simulationMemKbServer = 512;
			m_simulationMemKbClient = 1024;
			m_maxPreSimsPerJob = 4;
			m_maxWiggleDistance = 100.f;
			m_forceShadowLod = -1;
			m_timeScale = 1.f;
			m_jobCount = 6;
			m_jointTensionLimitIndex = 0;
			m_jointTensionLimit = 0.f;
			m_simulateServerSide = false;
			m_destructionEnabled = true;
			m_subDestructionEnabled = true;
			m_localInfluencesEnabled = true;
			m_useShadowLodOffset = true;
			m_shadowMeshEnable = true;
			m_dissolveEnable = false;
			m_enable = true;
			m_enableJobs = true;
			m_drawNodes = false;
			m_drawNodeIDs = false;
			m_drawNodeStiffness = false;
			m_drawEnable = true;
			m_batchDrawEnable = true;
			m_drawNonSimulatedAsRigid = true;
			m_drawActiveInstanceBoxesEnable = false;
			m_drawEffectDebugInfoEnable = false;
			m_drawDamageDebugInfoEnable = false;
			m_drawStatsEnable = false;
			m_proceduralAnimationEnable = true;
		};

		float m_windVariation; // 0x10 (16)
		float m_windVariationRate; // 0x14 (20)
		float m_windStrength; // 0x18 (24)
		float m_windMicroVariation; // 0x1C (28)
		float m_maxActiveDistance; // 0x20 (32)
		float m_maxEffectDistance; // 0x24 (36)
		u32 m_maxActiveBones; // 0x28 (40)
		u32 m_simulationMemKbServer; // 0x2C (44)
		u32 m_simulationMemKbClient; // 0x30 (48)
		u32 m_maxPreSimsPerJob; // 0x34 (52)
		float m_maxWiggleDistance; // 0x38 (56)
		s32 m_forceShadowLod; // 0x3C (60)
		float m_timeScale; // 0x40 (64)
		u32 m_jobCount; // 0x44 (68)
		s32 m_jointTensionLimitIndex; // 0x48 (72)
		float m_jointTensionLimit; // 0x4C (76)
		bool m_simulateServerSide; // 0x50 (80)
		bool m_destructionEnabled; // 0x51 (81)
		bool m_subDestructionEnabled; // 0x52 (82)
		bool m_localInfluencesEnabled; // 0x53 (83)
		bool m_useShadowLodOffset; // 0x54 (84)
		bool m_shadowMeshEnable; // 0x55 (85)
		bool m_dissolveEnable; // 0x56 (86)
		bool m_enable; // 0x57 (87)
		bool m_enableJobs; // 0x58 (88)
		bool m_drawNodes; // 0x59 (89)
		bool m_drawNodeIDs; // 0x5A (90)
		bool m_drawNodeStiffness; // 0x5B (91)
		bool m_drawEnable; // 0x5C (92)
		bool m_batchDrawEnable; // 0x5D (93)
		bool m_drawNonSimulatedAsRigid; // 0x5E (94)
		bool m_drawActiveInstanceBoxesEnable; // 0x5F (95)
		bool m_drawEffectDebugInfoEnable; // 0x60 (96)
		bool m_drawDamageDebugInfoEnable; // 0x61 (97)
		bool m_drawStatsEnable; // 0x62 (98)
		bool m_proceduralAnimationEnable; // 0x63 (99)
	}; // 0x68 (104)
}

