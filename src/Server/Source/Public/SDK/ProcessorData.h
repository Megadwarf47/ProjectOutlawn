///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/EmittableField.h>

namespace fb {
	class EvaluatorData;
	class ProcessorData;
}

namespace fb {
	class ProcessorData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProcessorData"); }
		virtual ~ProcessorData() override {}
		ProcessorData() {
			m_evaluatorInput = EmittableField::EfNormTime;
		};

		CtrRef<EvaluatorData> m_pre; // 0x10 (16)
		CtrRef<ProcessorData> m_nextProcessor; // 0x18 (24)
		EmittableField m_evaluatorInput; // 0x20 (32)
	}; // 0x28 (40)
}

