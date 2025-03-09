///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SubWorldDataComponent.h>

namespace fb {
	class EffectParameterList;
}

namespace fb {
	class EffectSystemComponent : public SubWorldDataComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectSystemComponent"); }
		virtual ~EffectSystemComponent() override {}
		EffectSystemComponent() {
		};

		CtrRef<EffectParameterList> m_parameterList; // 0x10 (16)
	}; // 0x18 (24)
}

