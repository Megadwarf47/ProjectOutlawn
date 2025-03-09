///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplosionEntityData.h>

namespace fb {
	class PvZExplosionEntityData : public ExplosionEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PvZExplosionEntityData"); }
		virtual ~PvZExplosionEntityData() override {}
		PvZExplosionEntityData() {
			m_allowMultiDetonate = false;
			m_applyDamageOnSameTeamOnly = false;
		};

		bool m_allowMultiDetonate; // 0xE0 (224)
		bool m_applyDamageOnSameTeamOnly; // 0xE1 (225)
	}; // 0xF0 (240)
}

