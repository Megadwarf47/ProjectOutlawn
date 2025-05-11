///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateAlphaLevelScaleData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateAlphaLevelScaleData"); }
		virtual ~UpdateAlphaLevelScaleData() override {}
		UpdateAlphaLevelScaleData() {
			m_exponent = 1.f;
		};

		float m_exponent; // 0x28 (40)
	}; // 0x30 (48)
}

