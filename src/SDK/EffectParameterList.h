///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class EffectParameter;
}

namespace fb {
	class EffectParameterList : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectParameterList"); }
		virtual ~EffectParameterList() override {}
		EffectParameterList() {
		};

		RefArray<EffectParameter> m_parameters; // 0x18 (24)
	}; // 0x20 (32)
}

