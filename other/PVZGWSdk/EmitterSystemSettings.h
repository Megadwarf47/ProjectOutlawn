///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityLevel.h>

namespace fb {
	class EmitterSystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmitterSystemSettings"); }
		virtual ~EmitterSystemSettings() override {}
		EmitterSystemSettings() {
			m_skipUpdateMaxCount = 0;
			m_forceJobCount = -1;
			m_timeScale = 1.f;
			m_globalResetStartTimeInterval = 0.f;
			m_collisionRayCastMaxCount = 50;
			m_proximityPhysicsEntitiesMaxCount = 50;
			m_emitterQualityLevel = QualityLevel::QualityLevel_Low;
			m_templateTimeoutTime = 10.f;
			m_screenAreaCullingStart = 0.5f;
			m_screenAreaCullingEnd = 2.f;
			m_screenAreaCullingMinTotalArea = 50.f;
			m_screenAreaCullingMaxTotalArea = 90.f;
			m_screenAreaCullingMaxMultiplier = 1.f;
			m_processJobYieldTime = 0.5f;
			m_visibleJobYieldTime = 0.5f;
			m_drawStats = 0;
			m_drawBoundingBoxes = 0;
			m_minScreenArea = 0.015f;
			m_drawDebugAtlasMiplevel = 0;
			m_drawDebugAtlasTextureIndex = -1;
			m_quadTechnique = -1;
			m_quadNearFadeDistance = 0.8f;
			m_quadMaxCount = 6000;
			m_meshCullingDistance = 150.f;
			m_meshDrawCountLimit = 1000;
			m_meshStreamingPriorityMultiplier = 4.f;
			m_meshMaxCount = 2000;
			m_enable = true;
			m_updateJobEnable = true;
			m_enableFixedTimeStep = false;
			m_enableFixedDelta = false;
			m_enableJobs = true;
			m_collisionRayCastEnable = true;
			m_drawDebugRayCastCollision = false;
			m_enableRendering = false;
			m_zBufferCullEnable = true;
			m_drawProjectedBoxes = false;
			m_drawTransforms = false;
			m_drawDebugBaseAtlas = false;
			m_drawDebugNormalAtlas = false;
			m_quadClipScaleEnable = true;
			m_quadEnableRendering = true;
			m_quadNiceRenderingEnable = true;
			m_quadSimpleRenderingEnable = true;
			m_quadEnableOpaque = true;
			m_quadEnableCustomShader = true;
			m_quadColorShaderCostsEnable = false;
			m_quadEnableSorting = true;
			m_quadEnableWireframe = false;
			m_quadHalfResEnable = true;
			m_quadGroupsJoinAll = false;
			m_quadGroupsJoinNone = false;
			m_quadGroupsJoinNiceAndSimple = false;
			m_quadVertexShadowsEnable = true;
			m_quadCloudVertexShadowsEnable = true;
			m_quadPlanarReflectionEnable = true;
			m_quadPointLightsEnable = true;
			m_quadSpotLightsEnable = true;
			m_quadResourceSyncJobEnable = true;
			m_meshRenderingEnable = true;
			m_meshDrawTransforms = false;
			m_meshDrawBoundingBoxes = false;
			m_meshShadowEnable = true;
			m_meshPlanarReflectionEnable = true;
			m_meshDrawCullStats = false;
		};

		u32 m_skipUpdateMaxCount; // 0x10 (16)
		s32 m_forceJobCount; // 0x14 (20)
		float m_timeScale; // 0x18 (24)
		float m_globalResetStartTimeInterval; // 0x1C (28)
		u32 m_collisionRayCastMaxCount; // 0x20 (32)
		u32 m_proximityPhysicsEntitiesMaxCount; // 0x24 (36)
		QualityLevel m_emitterQualityLevel; // 0x28 (40)
		float m_templateTimeoutTime; // 0x2C (44)
		float m_screenAreaCullingStart; // 0x30 (48)
		float m_screenAreaCullingEnd; // 0x34 (52)
		float m_screenAreaCullingMinTotalArea; // 0x38 (56)
		float m_screenAreaCullingMaxTotalArea; // 0x3C (60)
		float m_screenAreaCullingMaxMultiplier; // 0x40 (64)
		float m_processJobYieldTime; // 0x44 (68)
		float m_visibleJobYieldTime; // 0x48 (72)
		u32 m_drawStats; // 0x4C (76)
		u32 m_drawBoundingBoxes; // 0x50 (80)
		float m_minScreenArea; // 0x54 (84)
		u32 m_drawDebugAtlasMiplevel; // 0x58 (88)
		s32 m_drawDebugAtlasTextureIndex; // 0x5C (92)
		s32 m_quadTechnique; // 0x60 (96)
		float m_quadNearFadeDistance; // 0x64 (100)
		u32 m_quadMaxCount; // 0x68 (104)
		float m_meshCullingDistance; // 0x6C (108)
		u32 m_meshDrawCountLimit; // 0x70 (112)
		float m_meshStreamingPriorityMultiplier; // 0x74 (116)
		u32 m_meshMaxCount; // 0x78 (120)
		bool m_enable; // 0x7C (124)
		bool m_updateJobEnable; // 0x7D (125)
		bool m_enableFixedTimeStep; // 0x7E (126)
		bool m_enableFixedDelta; // 0x7F (127)
		bool m_enableJobs; // 0x80 (128)
		bool m_collisionRayCastEnable; // 0x81 (129)
		bool m_drawDebugRayCastCollision; // 0x82 (130)
		bool m_enableRendering; // 0x83 (131)
		bool m_zBufferCullEnable; // 0x84 (132)
		bool m_drawProjectedBoxes; // 0x85 (133)
		bool m_drawTransforms; // 0x86 (134)
		bool m_drawDebugBaseAtlas; // 0x87 (135)
		bool m_drawDebugNormalAtlas; // 0x88 (136)
		bool m_quadClipScaleEnable; // 0x89 (137)
		bool m_quadEnableRendering; // 0x8A (138)
		bool m_quadNiceRenderingEnable; // 0x8B (139)
		bool m_quadSimpleRenderingEnable; // 0x8C (140)
		bool m_quadEnableOpaque; // 0x8D (141)
		bool m_quadEnableCustomShader; // 0x8E (142)
		bool m_quadColorShaderCostsEnable; // 0x8F (143)
		bool m_quadEnableSorting; // 0x90 (144)
		bool m_quadEnableWireframe; // 0x91 (145)
		bool m_quadHalfResEnable; // 0x92 (146)
		bool m_quadGroupsJoinAll; // 0x93 (147)
		bool m_quadGroupsJoinNone; // 0x94 (148)
		bool m_quadGroupsJoinNiceAndSimple; // 0x95 (149)
		bool m_quadVertexShadowsEnable; // 0x96 (150)
		bool m_quadCloudVertexShadowsEnable; // 0x97 (151)
		bool m_quadPlanarReflectionEnable; // 0x98 (152)
		bool m_quadPointLightsEnable; // 0x99 (153)
		bool m_quadSpotLightsEnable; // 0x9A (154)
		bool m_quadResourceSyncJobEnable; // 0x9B (155)
		bool m_meshRenderingEnable; // 0x9C (156)
		bool m_meshDrawTransforms; // 0x9D (157)
		bool m_meshDrawBoundingBoxes; // 0x9E (158)
		bool m_meshShadowEnable; // 0x9F (159)
		bool m_meshPlanarReflectionEnable; // 0xA0 (160)
		bool m_meshDrawCullStats; // 0xA1 (161)
	}; // 0xA8 (168)
}

