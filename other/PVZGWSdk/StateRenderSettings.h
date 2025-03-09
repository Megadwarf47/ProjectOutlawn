///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class StateRenderSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StateRenderSettings"); }
		virtual ~StateRenderSettings() override {}
		StateRenderSettings() {
			m_ps3PixelShaderConstantsEnable = true;
		};

		bool m_ps3PixelShaderConstantsEnable; // 0x10 (16)
	}; // 0x18 (24)
}

