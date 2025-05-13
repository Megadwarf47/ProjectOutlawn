///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateTransparencyData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateTransparencyData"); }
		virtual ~UpdateTransparencyData() override {}
		UpdateTransparencyData() {
			m_cullThreshold = 0.2f;
		};

		float m_cullThreshold; // 0x28 (40)
	}; // 0x30 (48)
}

