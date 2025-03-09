///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AntiRollBar : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntiRollBar"); }
		virtual ~AntiRollBar() override {}
		AntiRollBar() {
			m_stiffness = 0.f;
			m_torqueActivationLimit = 0.f;
		};

		float m_stiffness; // 0x10 (16)
		float m_torqueActivationLimit; // 0x14 (20)
	}; // 0x18 (24)
}

