///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class PreRollData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PreRollData"); }
		virtual ~PreRollData() override {}
		PreRollData() {
			m_preRoll = 0.f;
			m_updatesPerSecond = 30.f;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_preRoll; // 0x28 (40)
		float m_updatesPerSecond; // 0x2C (44)
	}; // 0x30 (48)
}

