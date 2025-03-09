///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/TeamId.h>

namespace fb {
	class TeamComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamComponentData"); }
		virtual ~TeamComponentData() override {}
		TeamComponentData() {
			m_teamId = TeamId::TeamNeutral;
		};

		TeamId m_teamId; // 0x70 (112)
	}; // 0x80 (128)
}

