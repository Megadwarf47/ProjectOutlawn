///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class RepulsionAccelerationTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RepulsionAccelerationTune"); }
		virtual ~RepulsionAccelerationTune() override {}
		RepulsionAccelerationTune() {
			m_initialAcc = 0.f;
			m_outerCushionAcc = 5.4f;
			m_innerCushionAcc = 18.f;
		};

		float m_initialAcc; // 0x18 (24)
		float m_outerCushionAcc; // 0x1C (28)
		float m_innerCushionAcc; // 0x20 (32)
	}; // 0x28 (40)
}

