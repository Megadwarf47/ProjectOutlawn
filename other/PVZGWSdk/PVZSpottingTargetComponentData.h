///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class PVZSpottingTargetComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSpottingTargetComponentData"); }
		virtual ~PVZSpottingTargetComponentData() override {}
		PVZSpottingTargetComponentData() {
			m_activeSpottedTime = 5.f;
			m_passiveSpottedTime = 3.f;
			m_activeSpottedTimeMultiplier = 1.f;
			m_passiveSpottedTimeMultiplier = 1.f;
			m_spotOnFireMultiplier = 0.5f;
			m_targetBoundingBoxCenter = true;
		};

		float m_activeSpottedTime; // 0x70 (112)
		float m_passiveSpottedTime; // 0x74 (116)
		float m_activeSpottedTimeMultiplier; // 0x78 (120)
		float m_passiveSpottedTimeMultiplier; // 0x7C (124)
		float m_spotOnFireMultiplier; // 0x80 (128)
		bool m_targetBoundingBoxCenter; // 0x84 (132)
	}; // 0x90 (144)
}

