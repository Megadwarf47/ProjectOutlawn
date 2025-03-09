///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class EffectParameter;
}

namespace fb {
	class EvaluatorData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EvaluatorData"); }
		virtual ~EvaluatorData() override {}
		EvaluatorData() {
		};

		CtrRef<EffectParameter> m_parameter; // 0x10 (16)
	}; // 0x18 (24)
}

