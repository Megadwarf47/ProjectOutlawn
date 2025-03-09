///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LocalPlayerIndex.h>

namespace fb {
	class SkeletonInputEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkeletonInputEntityData"); }
		virtual ~SkeletonInputEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SkeletonInputEntityData() {
			m_leanSideLevelOutSpeed = 2.f;
			m_leanSideCenterDeadZoneSize = 0.001f;
			m_leanSideCenterDeadZoneScale = 1.f;
			m_leanSideSensitivity = 30.f;
			m_leanSideRecalibrationTime = 1.f;
			m_leanSideBlockStart = 1.5f;
			m_leanSideBlockEnd = 0.5f;
			m_leanSideBlockStartHeightOffset = 0.5f;
			m_headYawSensitivity = 2.f;
			m_headPitchSensitivity = 2.f;
			m_headSmoothingFactorMin = 0.35f;
			m_headSmoothingFactorMax = 0.99f;
			m_headSmoothingFactorChangeLimit = 0.2f;
			m_localPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_0;
			m_useLeaning = false;
			m_useHeadTracking = false;
		};

		float m_leanSideLevelOutSpeed; // 0x18 (24)
		float m_leanSideCenterDeadZoneSize; // 0x1C (28)
		float m_leanSideCenterDeadZoneScale; // 0x20 (32)
		float m_leanSideSensitivity; // 0x24 (36)
		float m_leanSideRecalibrationTime; // 0x28 (40)
		float m_leanSideBlockStart; // 0x2C (44)
		float m_leanSideBlockEnd; // 0x30 (48)
		float m_leanSideBlockStartHeightOffset; // 0x34 (52)
		float m_headYawSensitivity; // 0x38 (56)
		float m_headPitchSensitivity; // 0x3C (60)
		float m_headSmoothingFactorMin; // 0x40 (64)
		float m_headSmoothingFactorMax; // 0x44 (68)
		float m_headSmoothingFactorChangeLimit; // 0x48 (72)
		LocalPlayerIndex m_localPlayerIndex; // 0x4C (76)
		bool m_useLeaning; // 0x50 (80)
		bool m_useHeadTracking; // 0x51 (81)
	}; // 0x58 (88)
}

