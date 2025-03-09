///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityLevel.h>
#include <fb/QualityScalableInt.h>

namespace fb {
	class AnimationLodSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationLodSettings"); }
		virtual ~AnimationLodSettings() override {}
		AnimationLodSettings() {
			m_quality = QualityLevel::QualityLevel_Low;
			m_maxSimpleObjectsUpdating = QualityScalableInt(5, 10, 30, 500);
			m_maxSoldiersAnimatingFullLocomotion = QualityScalableInt(4, 8, 16, 128);
			m_maxSoldiersAnimatingReloads = QualityScalableInt(2, 4, 8, 128);
			m_maxSoldiersAnimatingJumps = QualityScalableInt(4, 8, 16, 128);
			m_maxSoldiersAnimatingHitReactions = QualityScalableInt(4, 8, 16, 128);
			m_maxSoldiersAnimatingWeapons = QualityScalableInt(4, 8, 16, 128);
			m_maxSoldiersAnimatingDecor = QualityScalableInt(2, 4, 8, 128);
			m_maxTurretsAnimatingTargeting = QualityScalableInt(8, 16, 32, 64);
			m_maxTurretsAnimatingHitReactions = QualityScalableInt(2, 4, 16, 128);
			m_maxTurretsAnimatingDecor = QualityScalableInt(2, 4, 8, 128);
			m_maxVehiclesAnimatingTargeting = QualityScalableInt(8, 16, 32, 64);
			m_maxVehiclesAnimatingHitReactions = QualityScalableInt(2, 4, 16, 128);
			m_maxHordesAnimatingFullLocomotion = QualityScalableInt(4, 8, 32, 128);
			m_maxHordesAnimatingReloads = QualityScalableInt(2, 4, 8, 128);
			m_maxHordesAnimatingJumps = QualityScalableInt(2, 4, 8, 128);
			m_maxHordesAnimatingHitReactions = QualityScalableInt(2, 4, 16, 128);
			m_maxHordesAnimatingWeapons = QualityScalableInt(4, 8, 24, 128);
			m_maxHordesAnimatingDecor = QualityScalableInt(2, 4, 8, 128);
		};

		QualityLevel m_quality; // 0x10 (16)
		QualityScalableInt m_maxSimpleObjectsUpdating; // 0x14 (20)
		QualityScalableInt m_maxSoldiersAnimatingFullLocomotion; // 0x24 (36)
		QualityScalableInt m_maxSoldiersAnimatingReloads; // 0x34 (52)
		QualityScalableInt m_maxSoldiersAnimatingJumps; // 0x44 (68)
		QualityScalableInt m_maxSoldiersAnimatingHitReactions; // 0x54 (84)
		QualityScalableInt m_maxSoldiersAnimatingWeapons; // 0x64 (100)
		QualityScalableInt m_maxSoldiersAnimatingDecor; // 0x74 (116)
		QualityScalableInt m_maxTurretsAnimatingTargeting; // 0x84 (132)
		QualityScalableInt m_maxTurretsAnimatingHitReactions; // 0x94 (148)
		QualityScalableInt m_maxTurretsAnimatingDecor; // 0xA4 (164)
		QualityScalableInt m_maxVehiclesAnimatingTargeting; // 0xB4 (180)
		QualityScalableInt m_maxVehiclesAnimatingHitReactions; // 0xC4 (196)
		QualityScalableInt m_maxHordesAnimatingFullLocomotion; // 0xD4 (212)
		QualityScalableInt m_maxHordesAnimatingReloads; // 0xE4 (228)
		QualityScalableInt m_maxHordesAnimatingJumps; // 0xF4 (244)
		QualityScalableInt m_maxHordesAnimatingHitReactions; // 0x104 (260)
		QualityScalableInt m_maxHordesAnimatingWeapons; // 0x114 (276)
		QualityScalableInt m_maxHordesAnimatingDecor; // 0x124 (292)
	}; // 0x138 (312)
}

