///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/LevelInfo.h>

namespace fb {
	class TurretUpgradeComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TurretUpgradeComponentData"); }
		virtual ~TurretUpgradeComponentData() override {}
		TurretUpgradeComponentData() {
		};

		Array<LevelInfo> m_levelInfo; // 0x70 (112)
	}; // 0x80 (128)
}

