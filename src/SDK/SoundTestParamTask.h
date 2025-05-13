///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoundTestParamBehavior.h>
#include <fb/SoundTestTaskSpec.h>
#include <fb/String.h>

namespace fb {
	class SoundTestParamTask : public SoundTestTaskSpec {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestParamTask"); }
		virtual ~SoundTestParamTask() override {}
		SoundTestParamTask() {
			m_behavior = SoundTestParamBehavior::SoundTestParamBehavior_Constant;
			m_rangeMin = 0.f;
			m_rangeMax = 1.f;
			m_initialValue = 0.f;
		};

		String m_paramName; // 0x20 (32)
		SoundTestParamBehavior m_behavior; // 0x28 (40)
		float m_rangeMin; // 0x2C (44)
		float m_rangeMax; // 0x30 (48)
		float m_initialValue; // 0x34 (52)
	}; // 0x38 (56)
}

