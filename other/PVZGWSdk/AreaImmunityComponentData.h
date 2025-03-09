///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class AreaImmunityComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AreaImmunityComponentData"); }
		virtual ~AreaImmunityComponentData() override {}
		AreaImmunityComponentData() {
			m_clearAreaImmunity = true;
		};

		bool m_clearAreaImmunity; // 0x70 (112)
	}; // 0x80 (128)
}

